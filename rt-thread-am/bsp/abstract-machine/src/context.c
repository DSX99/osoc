#include <am.h>
#include <klib.h>
#include <rtthread.h>

static rt_ubase_t *switch_from = NULL;
static rt_ubase_t *switch_to   = NULL;

static Context* ev_handler(Event e, Context *c) {
  switch (e.event) {
    case EVENT_YIELD:
      if(switch_from != NULL){
        *switch_from = (rt_ubase_t)c;
      }
      c = (Context *)(*switch_to);
      break;
    default: printf("Unhandled event ID = %d\n", e.event); assert(0);
  }
  return c;
}

void __am_cte_init() {
  cte_init(ev_handler);
}

void rt_hw_context_switch_to(rt_ubase_t to) {
  switch_from = NULL;
  switch_to = (rt_ubase_t *)to;
  yield();
}

void rt_hw_context_switch(rt_ubase_t from, rt_ubase_t to) {
  switch_from = (rt_ubase_t *)from;
  switch_to = (rt_ubase_t *)to;
  yield();
}

void rt_hw_context_switch_interrupt(void *context, rt_ubase_t from, rt_ubase_t to, struct rt_thread *to_thread) {
  assert(0);
}

typedef struct {
    void (*tentry)(void *parameter);
    void *parameter;
    void (*texit)(void);
} thread_entry_arg_t;

static void thread_wrapper(void *arg) {
    thread_entry_arg_t *info = (thread_entry_arg_t *)arg;
    void (*tentry)(void *) = info->tentry;
    void *parameter = info->parameter;
    void (*texit)(void) = info->texit;
    tentry(parameter);
    texit();
}

rt_uint8_t *rt_hw_stack_init(void *tentry, void *parameter, rt_uint8_t *stack_addr, void *texit) {
  uintptr_t top = ((uintptr_t)stack_addr) & ~(sizeof(uintptr_t) - 1);  
  uintptr_t arg_addr = (top - sizeof(thread_entry_arg_t)) & ~(sizeof(uintptr_t) - 1);
  thread_entry_arg_t *info = (thread_entry_arg_t *)arg_addr;

  info->tentry = (void (*)(void *))tentry;
  info->parameter = parameter;
  info->texit = (void (*)(void))texit;
  
  Area kstack = {.start = NULL, .end = (void *)arg_addr};

  rt_uint8_t *ret = (rt_uint8_t *)kcontext(kstack, thread_wrapper, info);

  return ret;
}
