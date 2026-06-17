// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU_REGS_H_
#define VERILATED_VALU_REGS_H_  // guard

#include "verilated.h"


class Valu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valu_regs final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__rst;
    CData/*4:0*/ __PVT__rs1;
    CData/*4:0*/ __PVT__rs2;
    CData/*4:0*/ __PVT__rd;
    IData/*31:0*/ __PVT__data_in;
    IData/*31:0*/ __PVT__data_rs1;
    IData/*31:0*/ __PVT__data_rs2;
    VlUnpacked<IData/*31:0*/, 32> regs;

    // INTERNAL VARIABLES
    Valu__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Valu_regs();
    ~Valu_regs();
    void ctor(Valu__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Valu_regs);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
