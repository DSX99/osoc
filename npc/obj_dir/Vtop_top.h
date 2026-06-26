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
    CData/*0:0*/ reg_valid;
    CData/*0:0*/ __PVT__if_id_valid;
    CData/*0:0*/ __PVT__arvalid_lsu;
    CData/*0:0*/ __PVT__arready_lsu;
    CData/*0:0*/ __PVT__rready_lsu;
    CData/*0:0*/ __PVT__awvalid_lsu;
    CData/*0:0*/ __PVT__wvalid_lsu;
    CData/*0:0*/ __PVT__bready_lsu;
    CData/*0:0*/ __PVT__arvalid_ifu;
    CData/*0:0*/ __PVT__rready_ifu;
    CData/*1:0*/ __PVT__rresp_arbiter;
    CData/*0:0*/ __PVT__arready_arbiter;
    CData/*0:0*/ __PVT__rvalid_arbiter;
    CData/*3:0*/ __PVT__wstrb_arbiter;
    CData/*1:0*/ __PVT__bresp_arbiter;
    CData/*0:0*/ __PVT__awready_arbiter;
    CData/*0:0*/ __PVT__wready_arbiter;
    CData/*0:0*/ __PVT__bvalid_arbiter;
    CData/*3:0*/ decode_mod__DOT____VdfgRegularize_h901acc23_0_2;
    CData/*0:0*/ __PVT__alu_mod__DOT__ready_right;
    CData/*4:0*/ __PVT__csr_mod__DOT__working_reg;
    CData/*0:0*/ __PVT__lsu_mod__DOT__valid_right;
    CData/*0:0*/ __PVT__lsu_mod__DOT__done_r;
    CData/*0:0*/ __PVT__lsu_mod__DOT__done_w;
    CData/*0:0*/ __PVT__lsu_mod__DOT__done_aw;
    CData/*0:0*/ __PVT__lsu_mod__DOT__done_wdata;
    CData/*0:0*/ __PVT__axi_slave_lsu_mod__DOT__done_aw;
    CData/*0:0*/ __PVT__axi_slave_lsu_mod__DOT__done_w;
    CData/*3:0*/ __PVT__axi_slave_lsu_mod__DOT__mask;
    CData/*0:0*/ __PVT__arbiter_mod__DOT__lsu_transfer;
    CData/*0:0*/ __PVT__arbiter_mod__DOT__ifu_transfer;
    SData/*9:0*/ decode_mod__DOT____VdfgExtracted_h3b2fb429__0;
    IData/*31:0*/ pc;
    IData/*31:0*/ opcode;
    IData/*31:0*/ __PVT__csr_data;
    IData/*31:0*/ __PVT__araddr_lsu;
    IData/*31:0*/ __PVT__awaddr_lsu;
    IData/*31:0*/ __PVT__wdata_lsu;
    IData/*31:0*/ __PVT__araddr_ifu;
    IData/*31:0*/ __PVT__rdata_arbiter;
    IData/*31:0*/ __PVT__ifu_mod__DOT__next_pc;
    IData/*31:0*/ __PVT__ifu_mod__DOT__ifu;
    IData/*31:0*/ __PVT__decode_mod__DOT__imm_i;
    IData/*31:0*/ __PVT__alu_mod__DOT__val1;
    IData/*31:0*/ __PVT__alu_mod__DOT__val2;
    IData/*31:0*/ __PVT__csr_mod__DOT__data_in;
    IData/*31:0*/ __PVT__lsu_mod__DOT__lsu_r;
    IData/*31:0*/ __PVT__lsu_mod__DOT__lsu_w;
    IData/*31:0*/ __PVT__axi_slave_lsu_mod__DOT__slave;
    IData/*31:0*/ __PVT__axi_slave_lsu_mod__DOT__slave_w;
    IData/*31:0*/ __PVT__axi_slave_lsu_mod__DOT__w;
    IData/*31:0*/ __PVT__axi_slave_lsu_mod__DOT__aw;
    VlWide<3>/*95:0*/ __PVT__if_id_bus;
    VlWide<7>/*199:0*/ __PVT__id_ex_bus_decoded;
    VlWide<5>/*141:0*/ __PVT__ex_ls_bus_alu;
    VlWide<5>/*135:0*/ __PVT__ls_wb_bus;
    VlWide<7>/*199:0*/ __PVT__alu_mod__DOT__bus_in;
    VlWide<5>/*141:0*/ __PVT__lsu_mod__DOT__bus_in;
    VlWide<5>/*135:0*/ __Vdly__ls_wb_bus;
    VlWide<5>/*135:0*/ __VdlyMask__ls_wb_bus;
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
