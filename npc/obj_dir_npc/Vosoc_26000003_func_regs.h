// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vosoc_26000003_func.h for the primary calling header

#ifndef VERILATED_VOSOC_26000003_FUNC_REGS_H_
#define VERILATED_VOSOC_26000003_FUNC_REGS_H_  // guard

#include "verilated.h"


class Vosoc_26000003_func__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vosoc_26000003_func_regs final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__rst;
    CData/*4:0*/ __PVT__rs1;
    CData/*4:0*/ __PVT__rs2;
    CData/*4:0*/ __PVT__rd;
    CData/*0:0*/ __PVT__valid;
    CData/*0:0*/ __PVT__ready;
    CData/*0:0*/ __PVT__finish;
    IData/*31:0*/ __PVT__data_in;
    IData/*31:0*/ __PVT__data_rs1;
    IData/*31:0*/ __PVT__data_rs2;
    VlUnpacked<IData/*31:0*/, 16> regs;

    // INTERNAL VARIABLES
    Vosoc_26000003_func__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vosoc_26000003_func_regs();
    ~Vosoc_26000003_func_regs();
    void ctor(Vosoc_26000003_func__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vosoc_26000003_func_regs);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
