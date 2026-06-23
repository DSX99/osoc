#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 11: 
        ev.event = EVENT_YIELD; break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  uintptr_t ctxp = ((uintptr_t)kstack.end - sizeof(Context) - 16) & (~15);
  Context *ctx = (Context *)ctxp;

  // Clear saved registers to avoid garbage
  for (int i = 0; i < NR_REGS; i++) ctx->gpr[i] = 0;

  // Set up initial machine state for the new context
  ctx->mstatus = 0x1800;
  ctx->mepc = (uintptr_t)entry;     // start executing `entry` on first resume
  ctx->gpr[10] = (uintptr_t)arg;    // a0 = arg

  // Ensure return address is zero (so returning from `entry` won't resume elsewhere)
  ctx->gpr[1] = 0;

  // Store the pointer to this context at kstack.start for convenience
  *((Context **)kstack.start) = ctx;
  return ctx;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
