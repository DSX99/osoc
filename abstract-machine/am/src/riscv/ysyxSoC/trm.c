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

void putch(char ch) {
  *(volatile char *)(UART_BASE + UART_TX) = ch;
}

void halt(int code) {
  asm volatile("ebreak");
  while (1);
}

extern char _data_start;
extern char _data_VMA;
extern char _data_size;

void _trm_init() {
  memcpy(&_data_VMA, &_data_start, (uint32_t)&_data_size);
  int ret = main(mainargs);
  halt(ret);
}
