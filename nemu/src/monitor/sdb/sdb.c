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
#include "../../../include/memory/paddr.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

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
    ;
  }else{
    printf("Correct use info SUBCMD , where SUBCMD is r for register info or w for watchpoint info.\n");
  }
  return 0;
}

static int cmd_x(char *args) {
  char *endptr_val ,*endptr_size;
  if(args == NULL){ 
    printf("Correct use x N ECPR , where N is an integer and EXPR is a expression.\n");
    return 0;
  }
  char *size_str = strtok(args, " ");
  args = args + strlen(size_str) + 1;
  if(size_str == NULL || args == NULL){ 
    printf("Correct use x N ECPR , where N is an integer and EXPR is a expression.\n");
    return 0;
  }else{
    long size = strtol(size_str, &endptr_size, 0);
    if(size < 0x80000000){
      printf("Calling not a memory space");
      return 0;
    }
    long val = strtol(args, &endptr_val, 0);
    if(*endptr_val != '\0' || *endptr_size != '\0'){
      printf("Correct use x N ECPR , where N is an integer and EXPR is a expression.\n");
      return 0;
    }
    for(int i=0; i<size; i++){
      printf("mem[%x]=%x\n",(uint32_t)(val+i*4),paddr_read(val+i*4,4));
    }
    return 0;
  }
}

static int cmd_e(char *args) {
  bool *ret;
  ret=0;
  expr(args,ret);
  return *ret;
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
  { "e", " e EXPR evaluate expression EXPR", cmd_e },
  // { "p", " p EXPR Find the value of the expression EXPR, for EXPR supported operations", cmd_p },
  // { "w", " w EXPR Suspend program execution when the value of expression EXPR changes.", cmd_w },
  // { "d", " d N Deletes the watchpoint with ID N.", cmd_d }
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

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
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
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
