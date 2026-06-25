// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_REGS_H_
#define VERILATED_VTOP_REGS_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_regs final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__rst;
    CData/*4:0*/ __PVT__rs1;
    CData/*4:0*/ __PVT__rs2;
    CData/*4:0*/ __PVT__rd;
    CData/*0:0*/ __PVT__valid;
    CData/*0:0*/ __PVT__ready;
    IData/*31:0*/ __PVT__data_in;
    IData/*31:0*/ __PVT__data_rs1;
    IData/*31:0*/ __PVT__data_rs2;
    VlUnpacked<IData/*31:0*/, 32> regs;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop_regs();
    ~Vtop_regs();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_regs);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
