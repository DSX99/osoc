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
    CData/*0:0*/ __PVT__arvalid_ifu;
    CData/*0:0*/ __PVT__arvalid_lsu;
    CData/*0:0*/ __PVT__awvalid_lsu;
    CData/*0:0*/ __PVT__wvalid_lsu;
    CData/*3:0*/ __PVT__wstrb_lsu;
    CData/*7:0*/ __PVT__alu_op;
    CData/*4:0*/ __PVT__rs1;
    CData/*4:0*/ __PVT__rs2;
    CData/*4:0*/ __PVT__rd;
    CData/*4:0*/ __PVT__cause;
    CData/*2:0*/ __PVT__lsu_oper;
    CData/*2:0*/ __PVT__csr_oper;
    CData/*1:0*/ __PVT__mux_select;
    CData/*1:0*/ __PVT__mux_select_pc;
    CData/*0:0*/ __PVT__branch;
    CData/*0:0*/ __PVT__lsu_we;
    CData/*0:0*/ __PVT__lsu_le;
    CData/*0:0*/ __PVT__external_stall;
    CData/*0:0*/ __PVT__ifu_stall;
    CData/*0:0*/ __PVT__arb_wready;
    CData/*0:0*/ __PVT__arb_arready;
    CData/*0:0*/ __PVT__arb_awready;
    CData/*1:0*/ __PVT__arb_rresp;
    CData/*1:0*/ __PVT__arb_bresp;
    CData/*0:0*/ __PVT__arb_rvalid;
    CData/*0:0*/ __PVT__arb_bvalid;
    CData/*0:0*/ __PVT__lsu_mod__DOT__prev_le;
    CData/*0:0*/ __PVT__lsu_mod__DOT__we_stall;
    CData/*0:0*/ __PVT__lsu_mod__DOT__ff_stall;
    CData/*0:0*/ __PVT__lsu_mod__DOT__idk;
    CData/*0:0*/ __PVT__ifu_mod__DOT__idk_2;
    CData/*4:0*/ __PVT__csr_mod__DOT__working_reg;
    CData/*0:0*/ __PVT__slave_mod__DOT__arvalid;
    CData/*0:0*/ __PVT__slave_mod__DOT__aw_done;
    CData/*0:0*/ __PVT__slave_mod__DOT__ar_done;
    CData/*3:0*/ __PVT__slave_mod__DOT__aw_mask;
    IData/*31:0*/ opcode;
    IData/*31:0*/ pc;
    IData/*31:0*/ __PVT__araddr_ifu;
    IData/*31:0*/ __PVT__araddr_lsu;
    IData/*31:0*/ __PVT__awaddr_lsu;
    IData/*31:0*/ __PVT__wdata_lsu;
    IData/*31:0*/ __PVT__to_regs;
    IData/*31:0*/ __PVT__alu_out;
    IData/*31:0*/ __PVT__lsu_out;
    IData/*31:0*/ __PVT__imm;
    IData/*31:0*/ __PVT__csr_out;
    IData/*31:0*/ __PVT__arb_rdata;
    IData/*31:0*/ __PVT__pc_mod__DOT__next_pc;
    IData/*31:0*/ __PVT__decode_mod__DOT__imm_i;
    IData/*31:0*/ __PVT__alu_mod__DOT__val1;
    IData/*31:0*/ __PVT__alu_mod__DOT__val2;
    IData/*31:0*/ __PVT__csr_mod__DOT__data_in;
    IData/*31:0*/ __PVT__slave_mod__DOT__aw;
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
