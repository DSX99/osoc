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

#include <readline/readline.h>
#include <readline/history.h>
#include <cstdlib>
#include <cstdint>
#include "dpi.h"
#include "common.h"

static int is_batch_mode = false;
static char prev_cmd[128];

#ifdef SOC
extern VysyxSoCFull_osoc_26000003_core *top;
#endif

#ifdef NPC
extern Vosoc_26000003_func_osoc_26000003_core *top;
#endif

void init_regex();
void init_wp_pool();
void info_wp();
void create_wp(char *s);
bool delete_wp(int n);
void print_itrace();
void print_ftrace();
void reg_display();
uint32_t expr(char *e, bool *success);
void execute(uint64_t n);

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  execute(-1);
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_si(char *args) {
  char *endptr;

  if(args == NULL){ 
    execute(1);  
    return 0;
  }else{
    long val = strtol(args, &endptr, 0);
    if(*endptr != '\0'){
      printf("Correct use si N , where N is an integer.\n");
      return 0;
    }
    execute(val);
    return 0;
  }
}

static int cmd_info(char *args) {
  if(args == NULL){
    printf("Correct use info SUBCMD , where SUBCMD is r for register info or w for watchpoint info.\n");
  }
  if((*args) == 'r'){
    reg_display();
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
    if((val >= 0x30000000 && val<0x3fffffff)||(val >= 0x80000000 && val < 0x9fffffff)||(val >= 0xa0000000 && val < 0xafffffff)){
      if( !(success) || *endptr_size != '\0'){
        printf("Correct use x N ECPR , where N is an integer and EXPR is a expression.\n");
        return 0;
      }
      for(int i=0; i<size; i++){
        printf("mem[%x]=%x\n",(uint32_t)(val+i*4),memread(val+i*4));
      }
      return 0;
    }else{
      printf("Calling not a memory space\n");
      return 0;
    }
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

  execute(1);  
  reg_display();
  
  return 0;
}

const static char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
extern "C" void difftest_regcpy(void *regs, bool direction);
uint32_t ref_regs[32];

static int cmd_check(char *args) {

  difftest_regcpy(ref_regs, 0);
  for(int i=0;i<32;i++){
    if(ref_regs[i]-top->reg_mod->regs[i]!=0){
      printf("Difference with REF %s, should:0x%08x, actually:0x%08x, pc: 0x%08x\n", regs[i], ref_regs[i], top->reg_mod->regs[i], top->pc);
      return 0;
    }
  }
  return 0;
}

static int cmd_itrace(char *args) {

  print_itrace();

  return 0;
}

static int cmd_ftrace(char *args) {

  print_ftrace();

  return 0;
}


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
  { "check", " check regs", cmd_check },
  { "itrace", " print trace of 16 last instructions ", cmd_itrace },
  { "ftrace", " print trace of 16 last function calls ", cmd_ftrace }
};


#define ARRLEN(x) sizeof(x)/sizeof(x[0])
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

void sdb_mainloop(uint32_t *exit) {

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

    if (str != prev_cmd && *str!='\0') {
      strncpy(prev_cmd, str, strlen(str));
      prev_cmd[strlen(str)] = '\0';
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
          *exit = 1;
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
