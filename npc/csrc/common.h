
#include "VysyxSoCFull.h"
#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull_osoc_26000003.h"
#include "VysyxSoCFull_ysyxSoCFull.h"
#include "VysyxSoCFull_ysyxSoCASIC.h"
#include "VysyxSoCFull_CPU.h"
#include "VysyxSoCFull_regs.h"


bool do_diff = 0;

#define CONFIG_FST
// #define MTRACE
#define ITRACE

#define MAX_SIM_TIME 10*1024*1024*1024LL
#define ROM_OFFSET 0x80000000
#define MEM_SIZE 128*1024*1024
#define ITRACE_VAL 16