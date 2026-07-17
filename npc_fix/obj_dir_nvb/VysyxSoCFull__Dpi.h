// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:6723:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/psram/psram.v:8:32
    extern void psram_read(int addr, int* data);
    // DPI import at /home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/psram/psram.v:7:32
    extern void psram_write(int addr, int data, int half);
    // DPI import at /home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v:15:30
    extern void sdram_read(int addr, int* data);
    // DPI import at /home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v:14:30
    extern void sdram_write(int addr, int data, int mask);

#ifdef __cplusplus
}
#endif

#endif  // guard
