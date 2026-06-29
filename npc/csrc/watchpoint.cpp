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


#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstring>
#define NR_WP 6

extern bool valid_cycle;

uint32_t expr(char *e, bool *success);


typedef struct token
{
  int type;
  char str[32];
} Token;

typedef struct watchpoint
{
  int NO;
  struct watchpoint *next;
  char expr[256];
  uint32_t value;
  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool()
{
  int i;
  for (i = 0; i < NR_WP; i++)
  {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

WP *new_wp()
{

  if (free_->next == NULL)
  {
    printf("No more free WP\n");
  }

  WP *first_free = free_;

  if (head == NULL)
  {
    head = first_free;
    free_ = first_free->next;
    first_free->next = NULL;
    return first_free;
  }
  else
  {
    WP *head_wp = head;
    while (head_wp->next != NULL)
    {
      head_wp = head_wp->next;
    }
    head_wp->next = first_free;
    free_ = first_free->next;
    first_free->next = NULL;
    return first_free;
  }
}

void free_wp(WP *wp)
{
  WP *head_wp = head;
  if (wp == head_wp)
  {
    head = head->next;
  }
  else
  {
    while (head_wp->next != wp)
    {
      head_wp = head_wp->next;
    }
    head_wp->next = wp->next;
  }

  if (free_ == NULL)
  {
    free_ = wp;
    return;
  }

  WP *first_free = free_;
  WP *second_free = NULL;

  while ((wp->NO > first_free->NO))
  {
    second_free = first_free;
    first_free = first_free->next;
  }

  if (second_free == NULL)
  {
    free_ = wp;
    wp->next = first_free;
  }
  else
  {
    second_free->next = wp;
    wp->next = first_free;
  }
  return;
}

void create_wp(char *s)
{
  bool success = 1;
  char input;
  WP *wp = new_wp();
  strcpy(wp->expr, s);
  wp->value = expr(s, &success);
  if (!success)
  {
    printf("Error in evaluating starting value for wp\n");
    printf("Keep the wp? y or n\n");
    while (true)
    {
      input = getchar();
      if (input == 'y' || input == 'n')
      {
        break;
      }
      printf("please enter y or n.\n");
    }
    if (input == 'n')
    {
      free_wp(wp);
    }
    return;
  }
  printf("Added wp with id:%d, and EXPR:%s\n", wp->NO, s);
  return;
}

bool check_wp(WP *wp, bool *success)
{
  uint32_t val = expr(wp->expr, success);
  if (!*success)
  {
    printf("Error in evaluating val for wp with id:%d and EXPR:%s\n", wp->NO, wp->expr);
    return 0;
  }
  if (val != wp->value)
  {
    return val;
  }
  return 0;
}

bool check_watchpoints()
{
  if(!valid_cycle) return 0;

  bool success = 1;
  uint32_t val;
  WP *head_wp = head;
  while (head_wp != NULL)
  {
    if ((val = check_wp(head_wp, &success)))
    {
      printf("Triggered watchpoint %d with expr %s with value %u\n", head_wp->NO, head_wp->expr, val);
      return 1;
    }
    if (success == false)
    {
      printf("Error evaluating watchpoint %d with expr %s\n", head_wp->NO, head_wp->expr);
    }
    if (head_wp->next != NULL)
    {
      head_wp = head_wp->next;
    }
    else
    {
      break;
    }
  }
  return 0;
}

bool delete_wp(int n)
{
  WP *head_wp = head;
  if (head_wp == NULL)
  {
    printf("No watchpoints were initialized\n");
  }
  while (head_wp->NO != n)
  {
    if (head_wp->next == NULL)
    {
      printf("No active watchpoint with this ID\n");
      return 0;
    }
    head_wp = head->next;
  }
  free_wp(head_wp);
  return 0;
}

void info_wp()
{
  printf("Current active watchpoints:\n");
  WP *head_wp = head;
  while (head_wp != NULL)
  {
    printf("Watchpoint %d with expr %s with value %u\n", head_wp->NO, head_wp->expr, head_wp->value);
    head_wp = head_wp->next;
  }
}