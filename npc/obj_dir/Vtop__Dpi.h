// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/axi_slave_lsu.sv:32:29
    extern int memread(int addr);
    // DPI import at vsrc/axi_slave_lsu.sv:33:30
    extern void memwrite(int addr, int data, int idk);

#ifdef __cplusplus
}
#endif

#endif  // guard
