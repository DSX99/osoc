// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*7:0*/ top__DOT__alu_op;
    CData/*4:0*/ top__DOT__rs1;
    CData/*4:0*/ top__DOT__rs2;
    CData/*4:0*/ top__DOT__rd;
    CData/*2:0*/ top__DOT__lsu_oper;
    CData/*1:0*/ top__DOT__mux_select;
    CData/*0:0*/ top__DOT__branch;
    CData/*0:0*/ top__DOT__lsu_we;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ top__DOT__to_regs;
    IData/*31:0*/ top__DOT__data_rs1;
    IData/*31:0*/ top__DOT__data_rs2;
    IData/*31:0*/ top__DOT__pc;
    IData/*31:0*/ top__DOT__next_pc;
    IData/*31:0*/ top__DOT__alu_out;
    IData/*31:0*/ top__DOT__lsu_out;
    IData/*31:0*/ top__DOT__opcode;
    IData/*31:0*/ top__DOT__imm;
    IData/*31:0*/ top__DOT__lsu_mod__DOT__A;
    IData/*31:0*/ top__DOT__decode_mod__DOT__imm_i;
    IData/*31:0*/ top__DOT__alu_mod__DOT__val1;
    IData/*31:0*/ top__DOT__alu_mod__DOT__val2;
    IData/*31:0*/ __Vfunc_top__DOT__lsu_mod__DOT__read__0__Vfuncout;
    IData/*31:0*/ __Vfunc_top__DOT__lsu_mod__DOT__read__1__Vfuncout;
    IData/*31:0*/ __Vfunc_top__DOT__lsu_mod__DOT__read__2__Vfuncout;
    IData/*31:0*/ __Vfunc_top__DOT__lsu_mod__DOT__read__3__Vfuncout;
    IData/*31:0*/ __Vfunc_top__DOT__lsu_mod__DOT__read__4__Vfuncout;
    IData/*31:0*/ __Vfunc_top__DOT__ifu_mod__DOT__read__8__Vfuncout;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__reg_mod__DOT__regs;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
