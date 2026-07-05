#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Performance_t {
    uint64_t ifu_stall_cycle;
    uint64_t ifu_fetch_instr;
    uint64_t possible_branch_count;
    uint64_t branch_taken;
    uint64_t lsu_stall_cycle;
    uint64_t lsu_read_data;
    uint64_t lsu_write_data;
    uint64_t writeback; 
} Performance_t;

void loadmemory(char *img_file, bool batch);
void init_disasm();
int memread(uint32_t addr);
void memwrite(uint32_t addr, uint32_t data, uint32_t type);
void print_stage_performance_table(const uint64_t cycles[3], const Performance_t perf[3]);

#ifdef __cplusplus
}
#endif