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
    CData/*0:0*/ __PVT__if_id_valid;
    CData/*3:0*/ decode_mod__DOT____VdfgRegularize_h901acc23_0_2;
    CData/*4:0*/ __PVT__csr_mod__DOT__working_reg;
    SData/*9:0*/ decode_mod__DOT____VdfgExtracted_h3b2fb429__0;
    IData/*31:0*/ pc;
    IData/*31:0*/ __PVT__csr_data;
    IData/*31:0*/ ifu_mod__DOT____VlemCall_0__memread;
    IData/*31:0*/ __PVT__ifu_mod__DOT__next_pc;
    IData/*31:0*/ __PVT__decode_mod__DOT__imm_i;
    IData/*31:0*/ __PVT__alu_mod__DOT__val1;
    IData/*31:0*/ __PVT__alu_mod__DOT__val2;
    IData/*31:0*/ __PVT__csr_mod__DOT__data_in;
    IData/*31:0*/ __PVT__lsu_mod__DOT__A;
    IData/*31:0*/ __PVT__lsu_mod__DOT__lsu_out;
    IData/*31:0*/ __Vfunc_lsu_mod__DOT__memread__1__Vfuncout;
    IData/*31:0*/ __Vfunc_lsu_mod__DOT__memread__2__Vfuncout;
    IData/*31:0*/ __Vfunc_lsu_mod__DOT__memread__3__Vfuncout;
    IData/*31:0*/ __Vfunc_lsu_mod__DOT__memread__4__Vfuncout;
    IData/*31:0*/ __Vfunc_lsu_mod__DOT__memread__5__Vfuncout;
    VlWide<3>/*95:0*/ __PVT__if_id_bus;
    VlWide<7>/*198:0*/ __PVT__id_ex_bus_decoded;
    VlWide<5>/*140:0*/ __PVT__ex_ls_bus_alu;
    VlWide<5>/*134:0*/ __PVT__ls_wb_bus;
    VlWide<7>/*198:0*/ __PVT__alu_mod__DOT__bus_in;
    VlWide<5>/*140:0*/ __PVT__lsu_mod__DOT__bus_in;
    VlUnpacked<IData/*31:0*/, 32> __PVT__csr_mod__DOT__regs;

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
