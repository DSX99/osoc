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

#include <common.h>
#include <stdio.h>
#include <stdlib.h>
void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

word_t expr(char *e, bool *success);

int main(int argc, char *argv[]) {
  init_monitor(argc, argv);
  char s[1024*16];
  char *ptr = s;
  FILE *fp = fopen("/home/dsx99/osoc/ysyx-workbench/nemu/tools/gen-expr/input_2", "r");
  if (fp == NULL){
    printf("No file");
    exit(EXIT_FAILURE);
  }
  while (fgets(s, sizeof(s), fp) != NULL) {
    ptr = s;
    char *cmd = strtok(ptr, " ");
    if (cmd == NULL) { return 1; }
    ptr = ptr + strlen(cmd) + 1;
    bool check=0;
    int val = expr(ptr,&check);
    // printf("%u %u: %u \n", atoi(cmd), val, atoi(cmd)-val);
    if(atoi(cmd)-val != 0){
      printf("%s %u\n",s, atoi(cmd)-val);
    }
  }
  return 0;
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  /* Start engine. */
  engine_start();

  return is_exit_status_bad();
}
