#include <am.h>
#include "riscv.h"

uint64_t __start_time;
//SYSCLOCK
// void __am_timer_init() {
//   uint32_t high = *((volatile uint32_t *)(RTC_ADDR+4));
//   uint32_t low = *((volatile uint32_t *)RTC_ADDR);
//   __start_time = ((uint64_t)high<<32) + (uint64_t)low;
// }

// void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
//   uint32_t high = *((volatile uint32_t *)(RTC_ADDR+4));
//   uint32_t low = *((volatile uint32_t *)RTC_ADDR);
//   uptime->us = ((uint64_t)high<<32) + (uint64_t)low - __start_time;
// }


//CLINT
void __am_timer_init() {
  uint32_t high = *((volatile uint32_t *)(CLINT_ADDR+4));
  uint32_t low = *((volatile uint32_t *)CLINT_ADDR);
  __start_time = ((uint64_t)high<<32) + (uint64_t)low;
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t high = *((volatile uint32_t *)(CLINT_ADDR+4));
  uint32_t low = *((volatile uint32_t *)CLINT_ADDR);
  uptime->us = ((uint64_t)high<<32) + (uint64_t)low - __start_time;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
