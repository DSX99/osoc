#include <am.h>
#include "riscv.h"

uint64_t __start_time;


#include <stdint.h>
#include <stdbool.h>

// Assuming this matches your AM_TIMER_RTC_T struct
// --- 1. LEAP SECONDS SYSTEM ---
// Official list of Unix Epoch timestamps where a leap second was inserted.
// Since the Unix epoch (1970), 27 leap seconds have been added up to recent history.
static const uint64_t leap_seconds_epochs[] = {
    78796800ULL,   // 30 Jun 1972
    94694400ULL,   // 31 Dec 1972
    126230400ULL,  // 31 Dec 1973
    157766400ULL,  // 31 Dec 1974
    189302400ULL,  // 31 Dec 1975
    220924800ULL,  // 31 Dec 1976
    252460800ULL,  // 31 Dec 1977
    283996800ULL,  // 31 Dec 1978
    315532800ULL,  // 31 Dec 1979
    362793600ULL,  // 30 Jun 1981
    394329600ULL,  // 30 Jun 1982
    425865600ULL,  // 30 Jun 1983
    489024000ULL,  // 30 Jun 1985
    567993600ULL,  // 31 Dec 1987
    631152000ULL,  // 31 Dec 1989
    662688000ULL,  // 31 Dec 1990
    709948800ULL,  // 30 Jun 1992
    741484800ULL,  // 30 Jun 1993
    773020800ULL,  // 30 Jun 1994
    820454400ULL,  // 31 Dec 1995
    867715200ULL,  // 30 Jun 1997
    915148800ULL,  // 31 Dec 1998
    1136073600ULL, // 31 Dec 2005
    1230739200ULL, // 31 Dec 2008
    1341100800ULL, // 30 Jun 2012
    1435622400ULL, // 30 Jun 2015
    1483228800ULL  // 31 Dec 2016
};
#define NUM_LEAP_SECONDS (sizeof(leap_seconds_epochs) / sizeof(leap_seconds_epochs[0]))

// --- 2. CALENDAR HELPER FUNCTIONS ---
static inline bool is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

static inline int days_in_month(int month, int year) {
    static const int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (month == 2 && is_leap_year(year)) {
        return 29;
    }
    return days[month - 1];
}

// --- 3. THE CONVERTER ---
void us_to_rtc_complete(uint64_t total_us, AM_TIMER_RTC_T *rtc) {
    // Drop sub-second precision to get raw Unix seconds
    uint64_t raw_seconds = total_us / 1000000ULL;
    
    // Account for Leap Seconds
    // If the raw unix timestamp has passed a leap second event, we must adjust 
    // the clock count to translate correctly to civil calendar time.
    uint32_t leap_adjust = 0;
    for (int i = 0; i < NUM_LEAP_SECONDS; i++) {
        if (raw_seconds >= leap_seconds_epochs[i]) {
            leap_adjust++;
        } else {
            break;
        }
    }
    
    // Correct the time frame for calendar calculations
    uint64_t civil_seconds = raw_seconds - leap_adjust;

    // Time of Day Calculations
    uint32_t seconds_in_day = civil_seconds % 86400ULL;
    rtc->second = seconds_in_day % 60;
    rtc->minute = (seconds_in_day / 60) % 60;
    rtc->hour   = seconds_in_day / 3600;

    // Date/Calendar Calculations (Starting at Unix Epoch: Jan 1, 1970)
    uint64_t total_days = civil_seconds / 86400ULL;
    
    int current_year = 1970;
    while (true) {
        int days_this_year = is_leap_year(current_year) ? 366 : 365;
        if (total_days >= (uint64_t)days_this_year) {
            total_days -= days_this_year;
            current_year++;
        } else {
            break;
        }
    }
    rtc->year = current_year;

    int current_month = 1;
    while (true) {
        int days_this_month = days_in_month(current_month, current_year);
        if (total_days >= (uint64_t)days_this_month) {
            total_days -= days_this_month;
            current_month++;
        } else {
            break;
        }
    }
    rtc->month = current_month;
    rtc->day   = total_days + 1; // Days are 1-indexed (1st of the month)
}

void __am_timer_init() {
  uint32_t high = *((uint32_t *)(RTC_ADDR+4));
  uint32_t low = *((uint32_t *)RTC_ADDR);
  __start_time = ((uint64_t)high<<32) + (uint64_t)low;
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t high = *((uint32_t *)(RTC_ADDR+4));
  uint32_t low = *((uint32_t *)RTC_ADDR);
  uptime->us = ((uint64_t)high<<32) + (uint64_t)low - __start_time;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  uint32_t high = *((uint32_t *)(RTC_ADDR+4));
  uint32_t low = *((uint32_t *)RTC_ADDR);
  us_to_rtc_complete( ((uint64_t)high<<32) + (uint64_t)low, rtc);
}
