#include "VysyxSoCFull.h"
#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull_osoc_26000003.h"
#include "VysyxSoCFull_ysyxSoCFull.h"
#include "VysyxSoCFull_ysyxSoCASIC.h"
#include "VysyxSoCFull_CPU.h"
#include "VysyxSoCFull_regs.h"

// #define CONFIG_FST
// #define MTRACE
// #define ITRACE

#define MAX_SIM_TIME 1000LL*1024LL*1024LL*1024LL
#define FLASH_SIZE 16*1024*1024
#define PSRAM_SIZE 4*1024*1024
#define SDRAM_SIZE 128*1024*1024
#define ITRACE_VAL 16