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

#define UART_BASE 0x10000000L
#define UART_TX   0
#define UART_LC   3
#define UART_LS   4

void putch(char ch) {
  while(!((*(volatile char *)(UART_BASE + UART_LS)) & (0b100000))) asm volatile("nop");
  *(volatile char *)(UART_BASE + UART_TX) = ch;
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

  *(volatile char *)(UART_BASE + UART_LC) = 0b10000011;
  *(volatile char *)(UART_BASE + UART_TX+1) = 0b0;
  *(volatile char *)(UART_BASE + UART_TX) = 0b1;
  *(volatile char *)(UART_BASE + UART_LC) = 0b00000011;

  int ret = main(mainargs);
  halt(ret);
}
