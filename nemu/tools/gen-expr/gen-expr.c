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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

static char gen_rand_op(){
  switch (rand()%4)
  {
  case 0:
    return '+'; break;
  case 1:
    return '-'; break;
  case 2:
    return '*'; break;
  case 3:
    return '/'; break;
  }
  return '+';
}

char *get_random_spaces(char c){
  int val1 = rand()%3;
  int val2 = rand()%3;
  static char str[7];
  int point=0;
  for(int i=0;i<val1;i++){
    str[point]=' ';
    point++;
  }
  str[point]=c;
  point++;
  for(int i=0;i<val2;i++){
    str[point]=' ';
    point++;
  }
  str[point]='\0';
  return str;
}

static void gen_rand_expr(char **point) {
  int i = rand()%3;
  if(*point - buf > 40000) i=0;
  switch (i) {
    case 0: 
      *point+=sprintf(*point,"%uu",(unsigned)(rand())); 
        break;
    case 1: 
      *point+=sprintf(*point,"%s",get_random_spaces('('));
      gen_rand_expr(point);
      *point+=sprintf(*point,"%s",get_random_spaces(')'));
      break;
    default: 
      gen_rand_expr(point); 
      *point+=sprintf(*point,"%s",get_random_spaces(gen_rand_op())); 
      gen_rand_expr(point); 
      break;
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    char *point = buf;
    gen_rand_expr(&point);

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr -Werror -Wno-overflow");
    if (ret != 0) continue;

    

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
