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

#include <string.h>
#include <stdlib.h>
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <cstdint>
#include <cstdio>
#include <assert.h>
#include "dpi.h"

uint32_t reg_str2val(const char *s, bool *success);

enum
{
  TK_NOTYPE = 256,
  TK_EQ,
  TK_NEQ,
  DEREF,

  /* TODO: Add more token types */

};

static struct rule
{
  const char *regex;
  int token_type;
} rules[] = {

    /* TODO: Add more rules.
     * Pay attention to the precedence level of different rules.
     */

    {"^ +", TK_NOTYPE},  // spaces
    {"^\\n", TK_NOTYPE}, // EOL
    {"^&&", '&'},
    {"^\\(", '('},
    {"^\\)", ')'},
    {"^\\$[0-9asrptc]+", 'r'},
    {"^0x[\\$0-9abcdef]+", 'h'},
    {"^[0-9u]+", 'v'},
    {"^\\+", '+'},   // plus
    {"^==", TK_EQ},  // equal
    {"^!=", TK_NEQ}, // notequal
    {"^-", '-'},
    {"^\\*", '*'},
    {"^/", '/'},
};

#define ARRLEN(x) sizeof(x)/sizeof(x[0])
#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex()
{
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i++)
  {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0)
    {
      regerror(ret, &re[i], error_msg, 128);
      printf("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token
{
  int type;
  char str[32];
} Token;

static Token tokens[16*1024] __attribute__((used)) = {};
static int nr_token __attribute__((used)) = 0;

static bool make_token(char *e)
{
  int position = 0;
  int i;
  regmatch_t pmatch;
  memset(&tokens, 0, sizeof(tokens));
  nr_token = 0;

  while (e[position] != '\0' && e[position] != '\n')
  {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i++)
    {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0)
      {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        if (i == 0 || i == 1)
        {
          position += substr_len;
          break;
        }

        // Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //     i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;
        if (substr_len > 31)
        {
          printf("too big expression: %.*s\nuse smaller, anyway it is bigger than uin32_t\n", substr_len, substr_start);
          return 0;
        }
        tokens[nr_token].type = rules[i].token_type;
        
        strncpy(tokens[nr_token].str, substr_start, substr_len);
        tokens[nr_token].str[substr_len + 1] = '\0';
        nr_token++;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        // switch (rules[i].token_type) {
        //   default: TODO();
        // }

        break;
      }
    }

    if (i == NR_REGEX && position != strlen(e))
    {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

int check_parentheses(int p, int q)
{
  if (tokens[p].type == '(')
  {
    if (tokens[q].type == ')')
    {
      int count = 0;
      for (int i = p + 1; i < q; i++)
      {
        if (tokens[i].type == '(')
          count++;
        if (tokens[i].type == ')')
          count--;
        if (count < 0)
          return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return 0;
  }
  return 1;
}

unsigned eval(int p, int q, bool *success)
{
  if (*success == false)
  {
    return 0;
  }
  if (p > q)
  {
    assert(0);
  }
  else if (p == q)
  {
    char *endptr_val;
    switch (tokens[p].type)
    {
    case 'v':
      return atoi(tokens[p].str);
      break;
    case 'h':{
      int val = strtol(tokens[p].str, &endptr_val, 0);
      if (*endptr_val != '\0')
      {
        printf("please use correct hex form\n");
        *success = false;
      }
      else
      {
        return val;
      }
    }
    case 'r':
      return reg_str2val(tokens[p].str + 1, success);
    }
  }
  else if (check_parentheses(p, q) == true)
  {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    if (p + 1 == q)
    {
      printf("do not write empty parentheses\n");
      *success = false;
      return 0;
    }
    return eval(p + 1, q - 1, success);
  }
  else
  {
    int op = -1;
    int op_prec = 99;
    int count = 0;

    for (int i = p; i < q; i++)
    {
      if (tokens[i].type == '(')
      {
        count++;
      }
      else if (tokens[i].type == ')')
      {
        count--;
      }
      else if (count == 0)
      {
        int prec = -1;
        switch (tokens[i].type)
        {
        case '&':
          prec = 0;
          break;
        case TK_EQ:
        case TK_NEQ:
          prec = 1;
          break;
        case '+':
        case '-':
          prec = 2;
          break;
        case '*':
        case '/':
          prec = 3;
          break;
        default:
          break;
        }
        if (prec != -1)
        {
          if (prec <= op_prec)
          {
            op = i;
            op_prec = prec;
          }
        }
      }
    }

    if (op_prec == 99)
    {
      if (tokens[p].type == DEREF && (tokens[p + 1].type == 'v' || tokens[p + 1].type == 'h' || tokens[p + 1].type == 'r' || (tokens[p + 1].type == '(' && tokens[q].type == ')')))
      {
        uint32_t addr = eval(p + 1, q, success);
        if(addr < 0x30000000 || addr > 0x3fffffff ){
          printf("Calling not accessible memory\n");
          *success = false;
          return 0;
        }
        return memread(addr);
      }
      else
      {
        *success = false;
        return 0;
      }
    }

    unsigned val1 = eval(p, op - 1, success);
    unsigned val2 = eval(op + 1, q, success);

    switch (tokens[op].type)
    {
    case '+':
      return val1 + val2;
      break;
    case '-':
      return val1 - val2;
      break;
    case '*':
      return val1 * val2;
      break;
    case '/':
      if (val2 == 0)
      {
        return 0;
      }
      return val1 / val2;
      break;
    case TK_EQ:
      return val1 == val2;
      break;
    case TK_NEQ:
      return val1 != val2;
      break;
    case '&':
      return val1 && val2;
      break;
    default:
      *success = false;
    }
  }
  return 0;
}

uint32_t expr(char *e, bool *success)
{
  if (!make_token(e))
  {
    *success = false;
    return 0;
  }

  for (int i = 0; i < nr_token; i++)
  {
    if (tokens[i].type == '*')
    {
      if (i == 0)
      {
        tokens[i].type = DEREF;
      }else if (tokens[i - 1].type != 'v' && tokens[i - 1].type != 'h' && tokens[i - 1].type != 'r' && tokens[i - 1].type != ')')
      {
        tokens[i].type = DEREF;
      }
    }
  }
  if(!*success){
    return 0;
  }
  unsigned val = eval(0, nr_token - 1, success);

  return val;
}
