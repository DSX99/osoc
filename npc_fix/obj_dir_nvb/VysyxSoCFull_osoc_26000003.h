// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_OSOC_26000003_H_
#define VERILATED_VYSYXSOCFULL_OSOC_26000003_H_  // guard

#include "verilated.h"
class VysyxSoCFull_osoc_26000003_core;


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_osoc_26000003 final {
  public:
    // CELLS
    VysyxSoCFull_osoc_26000003_core* core;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__clock;
        CData/*0:0*/ __PVT__reset;
        CData/*0:0*/ __PVT__io_interrupt;
        CData/*0:0*/ __PVT__io_master_awready;
        CData/*0:0*/ __PVT__io_master_awvalid;
        CData/*3:0*/ __PVT__io_master_awid;
        CData/*7:0*/ __PVT__io_master_awlen;
        CData/*2:0*/ __PVT__io_master_awsize;
        CData/*1:0*/ __PVT__io_master_awburst;
        CData/*0:0*/ __PVT__io_master_wready;
        CData/*0:0*/ __PVT__io_master_wvalid;
        CData/*3:0*/ __PVT__io_master_wstrb;
        CData/*0:0*/ __PVT__io_master_wlast;
        CData/*0:0*/ __PVT__io_master_bready;
        CData/*0:0*/ __PVT__io_master_bvalid;
        CData/*1:0*/ __PVT__io_master_bresp;
        CData/*3:0*/ __PVT__io_master_bid;
        CData/*0:0*/ __PVT__io_master_arready;
        CData/*0:0*/ __PVT__io_master_arvalid;
        CData/*3:0*/ __PVT__io_master_arid;
        CData/*7:0*/ __PVT__io_master_arlen;
        CData/*2:0*/ __PVT__io_master_arsize;
        CData/*1:0*/ __PVT__io_master_arburst;
        CData/*0:0*/ __PVT__io_master_rready;
        CData/*0:0*/ __PVT__io_master_rvalid;
        CData/*1:0*/ __PVT__io_master_rresp;
        CData/*0:0*/ __PVT__io_master_rlast;
        CData/*3:0*/ __PVT__io_master_rid;
        CData/*0:0*/ __PVT__io_slave_awready;
        CData/*0:0*/ __PVT__io_slave_awvalid;
        CData/*3:0*/ __PVT__io_slave_awid;
        CData/*7:0*/ __PVT__io_slave_awlen;
        CData/*2:0*/ __PVT__io_slave_awsize;
        CData/*1:0*/ __PVT__io_slave_awburst;
        CData/*0:0*/ __PVT__io_slave_wready;
        CData/*0:0*/ __PVT__io_slave_wvalid;
        CData/*3:0*/ __PVT__io_slave_wstrb;
        CData/*0:0*/ __PVT__io_slave_wlast;
        CData/*0:0*/ __PVT__io_slave_bready;
        CData/*0:0*/ __PVT__io_slave_bvalid;
        CData/*1:0*/ __PVT__io_slave_bresp;
        CData/*3:0*/ __PVT__io_slave_bid;
        CData/*0:0*/ __PVT__io_slave_arready;
        CData/*0:0*/ __PVT__io_slave_arvalid;
        CData/*3:0*/ __PVT__io_slave_arid;
        CData/*7:0*/ __PVT__io_slave_arlen;
        CData/*2:0*/ __PVT__io_slave_arsize;
        CData/*1:0*/ __PVT__io_slave_arburst;
        CData/*0:0*/ __PVT__io_slave_rready;
        CData/*0:0*/ __PVT__io_slave_rvalid;
        CData/*1:0*/ __PVT__io_slave_rresp;
        CData/*0:0*/ __PVT__io_slave_rlast;
        CData/*3:0*/ __PVT__io_slave_rid;
        CData/*0:0*/ __PVT__crvalid;
        CData/*0:0*/ __PVT__cawvalid;
        CData/*0:0*/ __PVT__carvalid;
        CData/*0:0*/ __PVT__match_aw;
        CData/*0:0*/ __PVT__match_ar;
        CData/*1:0*/ __PVT__trans;
        SData/*11:0*/ __PVT__CLINT_mod__DOT__divisor;
        IData/*31:0*/ __PVT__io_master_awaddr;
        IData/*31:0*/ __PVT__io_master_wdata;
        IData/*31:0*/ __PVT__io_master_araddr;
        IData/*31:0*/ __PVT__io_master_rdata;
    };
    struct {
        IData/*31:0*/ __PVT__io_slave_awaddr;
        IData/*31:0*/ __PVT__io_slave_wdata;
        IData/*31:0*/ __PVT__io_slave_araddr;
        IData/*31:0*/ __PVT__io_slave_rdata;
        IData/*31:0*/ __PVT__crdata;
        IData/*31:0*/ __PVT__caddr;
        IData/*31:0*/ __PVT__CLINT_mod__DOT__buff;
        IData/*31:0*/ __PVT__CLINT_mod__DOT__clint_r;
        QData/*63:0*/ __PVT__CLINT_mod__DOT__mtime;
    };

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VysyxSoCFull_osoc_26000003();
    ~VysyxSoCFull_osoc_26000003();
    void ctor(VysyxSoCFull__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VysyxSoCFull_osoc_26000003);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
