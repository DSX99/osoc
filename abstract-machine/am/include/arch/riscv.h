#ifndef ARCH_H__
#define ARCH_H__

#ifdef __riscv_e
#define NR_REGS 16
#else
#define NR_REGS 32
#endif

struct Context {
  // Layout must match the saved trap frame in trap.S
  uintptr_t gpr[NR_REGS];
  uintptr_t mcause;
  uintptr_t mstatus;
  uintptr_t mepc;
  void *pdir;
};

/* Number of machine words saved by trap.S: gpr[NR_REGS] + mcause + mstatus + mepc + pdir */
#define CONTEXT_WORDS (NR_REGS + 4)

_Static_assert(sizeof(uintptr_t) == sizeof(void *), "uintptr_t must be pointer-sized");
_Static_assert(sizeof(struct Context) == (CONTEXT_WORDS * sizeof(uintptr_t)), "Context size mismatch with trap.S: update trap.S or arch/riscv.h");

#ifdef __riscv_e
#define GPR1 gpr[15] // a5
#else
#define GPR1 gpr[17] // a7
#endif

#define GPR2 gpr[0]
#define GPR3 gpr[0]
#define GPR4 gpr[0]
#define GPRx gpr[0]

#endif
