#include <am.h>
#include <klib-macros.h>
#include "riscv.h"
#include "klib.h"

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (8 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

// #define UART_BASE 0x10000000L
// #define UART_TX   0   // THR (W) / RBR (R) / DLL (RW when DLAB=1)
// #define UART_IER  1   // Interrupt Enable Register / DLM (RW when DLAB=1)
// #define UART_FCR  2   // FIFO Control Register (W)
// #define UART_LC   3   // Line Control Register (RW)
// #define UART_LS   4

#define UART_BASE ((volatile unsigned char *)0x10000000ul)

void putch(char ch) {
  while ((UART_BASE[5] & 0x20) == 0); // wait until TX is empty
  UART_BASE[0] = ch;
}

void halt(int code) {
  asm volatile("ebreak");
  while (1);
}

extern char _data_start;
extern char _data_VMA;
extern char _data_size;
extern char _bss_start;
extern char _bss_end;

void _trm_init() {
  for (char *p = &_bss_start; p < &_bss_end; p++) {
    *p = 0;
  }
  memcpy(&_data_VMA, &_data_start, (uint32_t)&_data_size);

  unsigned char lcr = UART_BASE[3];
  UART_BASE[3] = lcr | 0x80;
  UART_BASE[1] = 0;
  UART_BASE[0] = 13;
  UART_BASE[3] = lcr;


  int ret = main(mainargs);
  halt(ret);
}
