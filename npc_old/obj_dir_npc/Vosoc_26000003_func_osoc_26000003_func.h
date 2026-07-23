// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vosoc_26000003_func.h for the primary calling header

#ifndef VERILATED_VOSOC_26000003_FUNC_OSOC_26000003_FUNC_H_
#define VERILATED_VOSOC_26000003_FUNC_OSOC_26000003_FUNC_H_  // guard

#include "verilated.h"
class Vosoc_26000003_func_osoc_26000003_core;


class Vosoc_26000003_func__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vosoc_26000003_func_osoc_26000003_func final {
  public:
    // CELLS
    Vosoc_26000003_func_osoc_26000003_core* core;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clock;
    CData/*0:0*/ reset;
    CData/*0:0*/ __PVT__core_awready;
    CData/*0:0*/ __PVT__core_wready;
    CData/*0:0*/ __PVT__core_bvalid;
    CData/*0:0*/ __PVT__core_arready;
    CData/*0:0*/ __PVT__core_rvalid;
    CData/*1:0*/ __PVT__core_rresp;
    CData/*0:0*/ __PVT__io_master_awvalid;
    CData/*0:0*/ __PVT__io_master_awready;
    CData/*0:0*/ __PVT__io_master_wvalid;
    CData/*0:0*/ __PVT__io_master_wready;
    CData/*0:0*/ __PVT__io_master_bvalid;
    CData/*1:0*/ __PVT__io_master_bresp;
    CData/*3:0*/ __PVT__io_master_bid;
    CData/*7:0*/ __PVT__io_master_arlen;
    CData/*0:0*/ __PVT__io_master_arready;
    CData/*0:0*/ __PVT__io_master_rvalid;
    CData/*1:0*/ __PVT__io_master_rresp;
    CData/*0:0*/ __PVT__io_master_rlast;
    CData/*3:0*/ __PVT__io_master_rid;
    CData/*0:0*/ __PVT__crvalid;
    CData/*0:0*/ __PVT__cawvalid;
    CData/*0:0*/ __PVT__carvalid;
    CData/*0:0*/ __PVT__match_aw;
    CData/*0:0*/ __PVT__match_ar;
    CData/*1:0*/ __PVT__trans;
    CData/*7:0*/ __PVT__axi_slave_lsu_mod__DOT__r_len_reg;
    CData/*2:0*/ __PVT__axi_slave_lsu_mod__DOT__r_size_reg;
    CData/*0:0*/ __PVT__axi_slave_lsu_mod__DOT__done_aw;
    CData/*0:0*/ __PVT__axi_slave_lsu_mod__DOT__done_w;
    CData/*3:0*/ __PVT__axi_slave_lsu_mod__DOT__mask;
    SData/*11:0*/ __PVT__CLINT_mod__DOT__divisor;
    IData/*31:0*/ __PVT__core_rdata;
    IData/*31:0*/ __PVT__io_master_araddr;
    IData/*31:0*/ __PVT__io_master_rdata;
    IData/*31:0*/ __PVT__crdata;
    IData/*31:0*/ __PVT__caddr;
    IData/*31:0*/ __PVT__CLINT_mod__DOT__buff;
    IData/*31:0*/ __PVT__CLINT_mod__DOT__clint_r;
    IData/*31:0*/ __PVT__axi_slave_lsu_mod__DOT__slave;
    IData/*31:0*/ __PVT__axi_slave_lsu_mod__DOT__r_addr_reg;
    IData/*31:0*/ __PVT__axi_slave_lsu_mod__DOT__addr_increment;
    IData/*31:0*/ __PVT__axi_slave_lsu_mod__DOT__slave_w;
    IData/*31:0*/ __PVT__axi_slave_lsu_mod__DOT__w;
    IData/*31:0*/ __PVT__axi_slave_lsu_mod__DOT__aw;
    QData/*63:0*/ __PVT__CLINT_mod__DOT__mtime;

    // INTERNAL VARIABLES
    Vosoc_26000003_func__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vosoc_26000003_func_osoc_26000003_func();
    ~Vosoc_26000003_func_osoc_26000003_func();
    void ctor(Vosoc_26000003_func__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vosoc_26000003_func_osoc_26000003_func);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
