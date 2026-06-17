#include <stdint.h>

#pragma once

extern "C" {
    void loadmemory(char *img_file);
    int memread(uint32_t addr);
}