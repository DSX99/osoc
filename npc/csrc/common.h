#include "VysyxSoCFull.h"
#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull_osoc_26000003.h"
#include "VysyxSoCFull_osoc_26000003_core.h"
#include "VysyxSoCFull_ysyxSoCFull.h"
#include "VysyxSoCFull_ysyxSoCASIC.h"
#include "VysyxSoCFull_CPU.h"
#include "VysyxSoCFull_regs.h"
#define SOC



// #include "Vosoc_26000003_func.h"
// #include "Vosoc_26000003_func___024root.h"
// #include "Vosoc_26000003_func_osoc_26000003_func.h"
// #include "Vosoc_26000003_func_regs.h"
// #define NPC



typedef struct Performance_t {
    uint64_t ifu_stall_cycle;
    uint64_t ifu_fetch_instr;
    uint64_t possible_branch_count;
    uint64_t branch_taken;
    uint64_t lsu_stall_cycle;
    uint64_t lsu_read_data;
    uint64_t lsu_write_data;
    uint64_t writeback;
    uint64_t cache_hit;
    uint64_t cache_miss;
    uint64_t cache_miss_cycles; 
} Performance_t;
void print_stage_performance_table(const uint64_t cycles[3], const Performance_t perf[3]); 



#define CONFIG_FST
// #define MTRACE
// #define ITRACE
#define OP_TRACE

#define MAX_SIM_TIME 1000LL*1024LL*1024LL*1024LL
#define FLASH_SIZE 16*1024*1024
#define PSRAM_SIZE 4*1024*1024
#define SDRAM_SIZE 128*1024*1024
#define ITRACE_VAL 16