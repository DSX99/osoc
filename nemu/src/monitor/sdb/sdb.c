/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

word_t paddr_read(paddr_t addr, int len);

static int is_batch_mode = false;
static char prev_cmd[128];

void init_regex();
void init_wp_pool();
void info_wp();
void create_wp(char *s);
bool delete_wp(int n);
void print_itrace();
void print_ftrace();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_si(char *args) {
  char *endptr;

  if(args == NULL){ 
    cpu_exec(1);  
    return 0;
  }else{
    long val = strtol(args, &endptr, 0);
    if(*endptr != '\0'){
      printf("Correct use si N , where N is an integer.\n");
      return 0;
    }
    cpu_exec(val);
    return 0;
  }
}

static int cmd_info(char *args) {
  if(args == NULL){
    printf("Correct use info SUBCMD , where SUBCMD is r for register info or w for watchpoint info.\n");
  }
  if((*args) == 'r'){
    isa_reg_display();
  }else if ((*args) == 'w'){
    info_wp();
  }else{
    printf("Correct use info SUBCMD , where SUBCMD is r for register info or w for watchpoint info.\n");
  }
  return 0;
}

static int cmd_x(char *args) {
  char *endptr_size;
  bool success = 1;
  if(args == NULL){ 
    printf("Correct use x N EXPR , where N is an integer and EXPR is a expression.\n");
    return 0;
  }
  char *size_str = strtok(args, " ");
  args = args + strlen(size_str) + 1;
  if(size_str == NULL || args == NULL){ 
    printf("Correct use x N EXPR , where N is an integer and EXPR is a expression.\n");
    return 0;
  }else{
    long size = strtol(size_str, &endptr_size, 0);
    long val = expr(args,&success);
    if(val < 0x80000000){
      printf("Calling not a memory space\n");
      return 0;
    }
    if( !(success) || *endptr_size != '\0'){
      printf("Correct use x N ECPR , where N is an integer and EXPR is a expression.\n");
      return 0;
    }
    for(int i=0; i<size; i++){
      printf("mem[%x]=%x\n",(uint32_t)(val+i*4),paddr_read(val+i*4,4));
    }
    return 0;
  }
}

static int cmd_p(char *args) {
  if(args==NULL){
    printf("Correct use p EXPR Find the value of the expression EXPR.\n");
    return 0;
  }
  bool success=1;
  char save_str[256];
  strcpy(save_str, args);
  char *flag_str = strtok(args, " ");
  if(flag_str == NULL){
    printf("Correct use p EXPR Find the value of the expression EXPR.\n");
    return 0;
  }
  if(strcmp(flag_str,"h")==0 || strcmp(flag_str,"H")==0){
    args = args + strlen(flag_str) + 1;
    printf("0x%08x\n",expr(args,&success));
  }else{
    printf("%u\n",expr(save_str,&success));
  }
  return success;
}

static int cmd_w(char *args) {
  create_wp(args);
  return 0;
}

static int cmd_d(char *args) {
  bool ret=1;
  char *endptr;

  if(args == NULL){ 
    printf("insert ID of watchpoint to delete\n");
    return 0;
  }else{
    long val = strtol(args, &endptr, 0);
    if(*endptr != '\0'){
      printf("Correct use d N , where N is an integer.\n");
      return 0;
    }
    delete_wp(val);
    return ret;
  }
}

static int cmd_sir(char *args) {

  cpu_exec(1);  
  isa_reg_display();
  
  return 0;
}

#ifdef CONFIG_ITRACE
static int cmd_itrace(char *args) {

  print_itrace();

  return 0;
}
#endif

#ifdef CONFIG_FTRACE
static int cmd_ftrace(char *args) {

  print_ftrace();

  return 0;
}
#endif


static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", " si N Lets the program pause after executing N instructions using single step execution, when N is not given, the default is 1", cmd_si },
  { "info", " info SUBCMD info r:Print register status info w:Print watchpoint information", cmd_info },
  { "x", " x N EXPR Finds the value of the expression EXPR, uses the result as the starting memory address, and outputs consecutive N 4 bytes in hexadecimal.", cmd_x },
  { "p", " p EXPR Find the value of the expression EXPR, for EXPR supported operations also  p h EXPR valid for hex out", cmd_p },
  { "w", " w EXPR Suspend program execution when the value of expression EXPR changes.", cmd_w },
  { "d", " d N Deletes the watchpoint with ID N.", cmd_d },
  { "sir", " si 1 + info r.", cmd_sir },
  #ifdef CONFIG_ITRACE
  { "itrace", " print trace of 16 last instructions ", cmd_itrace },
  #endif
  #ifdef CONFIG_FTRACE
  { "ftrace", " print trace of 16 last function calls ", cmd_ftrace }
  #endif
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) || true; ) {

    char curr_cmd[128];

    if(*str == '\0'){
      if(*prev_cmd!='\0'){
        strcpy(curr_cmd, prev_cmd);
      }else{
        continue;
      }
    } else {
      strcpy(curr_cmd, str);
    }

    if (str != prev_cmd && *str != '\0') {
    snprintf(prev_cmd, sizeof(prev_cmd), "%s", str);
}

    char *str_end = curr_cmd + strlen(curr_cmd);

    /* extract the first token as the command */
    char *cmd = strtok(curr_cmd, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    int hand;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if ((hand = cmd_table[i].handler(args)) < 0) { 
          if(hand == -1){
            nemu_state.state = NEMU_QUIT;
          }
          return; 
        }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd);}
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
