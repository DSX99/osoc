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
#define UART_TX   0   // THR (W) / RBR (R) / DLL (RW when DLAB=1)
#define UART_IER  1   // Interrupt Enable Register / DLM (RW when DLAB=1)
#define UART_FCR  2   // FIFO Control Register (W)
#define UART_LC   3   // Line Control Register (RW)
#define UART_LS   5

void putch(char ch) {
  while(!((*(volatile char *)(UART_BASE + UART_LS)) & (1 << 5))) asm volatile("nop");
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

  // 2. Set the Divisor Latches: MSB (DLM) first, then LSB (DLL) last
  *(volatile char *)(UART_BASE + UART_IER) = 0x00; // DLM (MSB) = 0
  *(volatile char *)(UART_BASE + UART_TX)  = 0x01; // DLL (LSB) = 1 (Counter starts now)

  // 3. Clear DLAB to restore normal register access
  *(volatile char *)(UART_BASE + UART_LC) = 0b00000011;

  // 4. Set the FIFO trigger level and clear FIFOs (FCR)
  // 0b11000110 -> Trigger level 14 bytes, clear TX & RX FIFOs
  *(volatile char *)(UART_BASE + UART_FCR) = 0b11000110;

  // 5. Explicitly disable interrupts if you plan to poll (optional but safe)
  *(volatile char *)(UART_BASE + UART_IER) = 0b00000000;

  int ret = main(mainargs);
  halt(ret);
}
