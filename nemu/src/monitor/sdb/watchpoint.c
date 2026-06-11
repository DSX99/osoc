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

#include "sdb.h"

#define NR_WP 64

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
    printf("No more free WP");
  }

  WP *first_free = free_;

  if (head == NULL)
  {
    head = first_free;
    free_ = first_free->next;
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
    return first_free;
  }
}

void free_wp(WP *wp)
{
  WP *head_wp = head;
  while (head_wp->next != wp)
  {
    head_wp = head_wp->next;
  }
  if (wp->next == NULL)
  {
    head_wp->next = NULL;
  }
  else
  {
    head_wp->next = wp->next;
  }

  WP *first_free = free_->next;

  while ((wp->NO < first_free->NO))
  {
    first_free = first_free->next;
  }
  free_ = wp;
  wp->next = first_free;
  return;
}

void create_wp(char *s){
  bool success=1;
  WP *wp = new_wp();
  strcpy(wp->expr,s);
  wp->value = expr(s,&success);
  if(!success){
    printf("Error in evaluating starting val for wp");
    free_wp(wp);
    return;
  }
  printf("Added wp with id:%d, and EXPR:%s",wp->NO, s);
  return;
}

bool check_wp(WP *wp){
  bool success=1;
  uint32_t val = expr(wp->expr,&success);
  if(!success){
    printf("Error in evaluating starting val for wp");
    free_wp(wp);
    return 1;
  }
  if(val == wp->value){
    return 1;
  }
  return 0;
}

bool check_watchpoints(){
  while(head->next!=NULL){
    
  }
  return 0;
}

/* TODO: Implement the functionality of watchpoint */
