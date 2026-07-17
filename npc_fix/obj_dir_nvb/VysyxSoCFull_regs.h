// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_REGS_H_
#define VERILATED_VYSYXSOCFULL_REGS_H_  // guard

#include "verilated.h"


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_regs final {
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
    VysyxSoCFull__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VysyxSoCFull_regs();
    ~VysyxSoCFull_regs();
    void ctor(VysyxSoCFull__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VysyxSoCFull_regs);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
