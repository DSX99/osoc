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
  volatile char *data = (char *)(UART_BASE);
  volatile char *status = (char *)(UART_BASE + UART_LS);
  while(((*status)&(1<<5)) == 0);
  *data = ch;
}

void halt(int code) {
  asm volatile("ebreak");
  while (1);
}

extern char _text_flash_start; 
extern char _text_start;       
extern char _text_end;
extern char _data_start;
extern char _data_end;

void _trm_init(void) __attribute__((section(".boot")));
void *memcpy(void *dest, const void *src, unsigned int count) __attribute__((section(".boot")));

void _trm_init() {
  memcpy(&_text_start, &_text_flash_start, (uint32_t)((&_data_end - & _data_start) + (&_text_end - &_text_start)));

  *(volatile uint8_t *)(UART_BASE + UART_IER) = 0;      // disable interrupts
  uint16_t divisor = 1;
  *(volatile uint8_t *)(UART_BASE + UART_LC)  = 0x80;   // LCR: set DLAB=1
  *(volatile uint8_t *)(UART_BASE + 1)         = (uint8_t)((divisor >> 8) & 0xFF); // DLM (use >>8)
  *(volatile uint8_t *)(UART_BASE + 0)         = (uint8_t)(divisor & 0xFF);      // DLL
  *(volatile uint8_t *)(UART_BASE + UART_LC)  = 0x03;   // LCR: 8N1, clear DLAB
  *(volatile uint8_t *)(UART_BASE + UART_FCR) = 0x07;   // FCR: enable + clear FIFOs (optional)
  *(volatile uint8_t *)(UART_BASE + 4)         = 0x00;  // MCR (optional)
  *(volatile uint8_t *)(UART_BASE + UART_IER) = 0x00;   // IER: leave 0 unless using IRQs

  *(uint32_t *)(0x80000000) = 0;

  int ret = main(mainargs);
  halt(ret);
}
