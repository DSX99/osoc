#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void loadmemory(char *img_file, bool batch);
void init_disasm();
int memread(uint32_t addr);
void memwrite(uint32_t addr, uint32_t data, uint32_t type);
void print_stage_performance_table(const uint64_t cycles[3], const Performance_t perf[3]);

#ifdef __cplusplus
}
#endif