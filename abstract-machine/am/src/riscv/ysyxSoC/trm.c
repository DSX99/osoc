#include <am.h>
#include <klib-macros.h>
#include "riscv.h"
#include "klib.h"

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (4 * 1024)
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
extern char _data_flash_start; 
extern char _data_start;
extern char _data_end;
extern char _boot_flash_start; 
extern char _boot_start;
extern char _boot_end;

void _trm_init(void) __attribute__((section(".boot")));

void _preboot(void) __attribute__((section(".preboot")));
void *memcpy_preboot(void *out, const void *in, size_t n) __attribute__((section(".preboot")));

void _preboot(){
  memcpy_preboot(&_boot_start, &_boot_flash_start, (uint32_t)(&_boot_end - &_boot_start));
  _trm_init();
}

void *memcpy_preboot(void *out, const void *in, size_t n) { 
  unsigned char *p = (unsigned char *)out;
  unsigned char *q = (unsigned char *)in;
  for(size_t i=0;i<n;i++){
    p[i]=q[i];
  }
  return out;
}

void *memcpy_boot(void *out, const void *in, size_t n) __attribute__((section(".boot")));

void *memcpy_boot(void *out, const void *in, size_t n) {
  unsigned char *p = (unsigned char *)out;
  unsigned char *q = (unsigned char *)in;
  if(n<8 || ((uint32_t)p & 3)!=((uint32_t)q & 3)){
    while(n--){
      *p++ = *q++;
    }
    return out;
  }

  while(((uint32_t)p & 3) != 0 && n>0){
    *p++ = *q++;
    n--;
  }

  uint32_t *p32 = (uint32_t *)p;
  uint32_t *q32 = (uint32_t *)q;

  while(n>=16){
    uint32_t w0 = *q32;
    uint32_t w1 = *(q32+1);
    uint32_t w2 = *(q32+2);
    uint32_t w3 = *(q32+3);

    *p32 = w0;
    *(p32+1) = w1;
    *(p32+2) = w2;
    *(p32+3) = w3;

    q32 += 4;
    p32 += 4;
    n -= 16;
  }

  while(n>=4){
    *p32++ = *q32++;
    n -= 4;
  }

  p = (unsigned char *)p32;
  q = (unsigned char *)q32;

  while(n--){
    *p++ = *q++;
  }
  
  return out;
}

void _trm_init() {
  memcpy_boot(&_text_start, &_text_flash_start, (uint32_t)(&_text_end - &_text_start));
  memcpy_boot(&_data_start, &_data_flash_start, (uint32_t)(&_data_end - &_data_start));

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
