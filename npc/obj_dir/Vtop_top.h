// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_TOP_H_
#define VERILATED_VTOP_TOP_H_  // guard

#include "verilated.h"
class Vtop_regs;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_top final {
  public:
    // CELLS
    Vtop_regs* reg_mod;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clk;
    CData/*0:0*/ rst;
    CData/*7:0*/ __PVT__alu_op;
    CData/*4:0*/ __PVT__rs1;
    CData/*4:0*/ __PVT__rs2;
    CData/*4:0*/ __PVT__rd;
    CData/*2:0*/ __PVT__lsu_oper;
    CData/*1:0*/ __PVT__mux_select;
    CData/*0:0*/ __PVT__branch;
    CData/*0:0*/ __PVT__lsu_we;
    IData/*31:0*/ __PVT__to_regs;
    IData/*31:0*/ __PVT__pc;
    IData/*31:0*/ __PVT__alu_out;
    IData/*31:0*/ __PVT__lsu_out;
    IData/*31:0*/ __PVT__opcode;
    IData/*31:0*/ __PVT__imm;
    IData/*31:0*/ __PVT__pc_mod__DOT__next_pc;
    IData/*31:0*/ __PVT__lsu_mod__DOT__A;
    IData/*31:0*/ __PVT__decode_mod__DOT__imm_i;
    IData/*31:0*/ __PVT__alu_mod__DOT__val1;
    IData/*31:0*/ __PVT__alu_mod__DOT__val2;
    IData/*31:0*/ __Vfunc_lsu_mod__DOT__memread__0__Vfuncout;
    IData/*31:0*/ __Vfunc_lsu_mod__DOT__memread__1__Vfuncout;
    IData/*31:0*/ __Vfunc_lsu_mod__DOT__memread__2__Vfuncout;
    IData/*31:0*/ __Vfunc_lsu_mod__DOT__memread__3__Vfuncout;
    IData/*31:0*/ __Vfunc_lsu_mod__DOT__memread__4__Vfuncout;
    IData/*31:0*/ __Vfunc_ifu_mod__DOT__memread__8__Vfuncout;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop_top();
    ~Vtop_top();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
