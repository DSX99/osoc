#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void loadmemory(char *img_file, bool batch);
void init_disasm();
uint32_t memread(uint32_t addr);
void memwrite(uint32_t addr, uint32_t data, uint32_t type);

#ifdef __cplusplus
}
#endif