// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_CPU_H_
#define VERILATED_VYSYXSOCFULL_CPU_H_  // guard

#include "verilated.h"
class VysyxSoCFull_osoc_26000003;


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_CPU final {
  public:
    // CELLS
    VysyxSoCFull_osoc_26000003* cpu;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clock;
    CData/*0:0*/ __PVT__reset;
    CData/*0:0*/ __PVT__auto_master_out_awready;
    CData/*0:0*/ __PVT__auto_master_out_awvalid;
    CData/*3:0*/ __PVT__auto_master_out_awid;
    CData/*7:0*/ __PVT__auto_master_out_awlen;
    CData/*2:0*/ __PVT__auto_master_out_awsize;
    CData/*1:0*/ __PVT__auto_master_out_awburst;
    CData/*0:0*/ __PVT__auto_master_out_wready;
    CData/*0:0*/ __PVT__auto_master_out_wvalid;
    CData/*3:0*/ __PVT__auto_master_out_wstrb;
    CData/*0:0*/ __PVT__auto_master_out_wlast;
    CData/*0:0*/ __PVT__auto_master_out_bready;
    CData/*0:0*/ __PVT__auto_master_out_bvalid;
    CData/*3:0*/ __PVT__auto_master_out_bid;
    CData/*1:0*/ __PVT__auto_master_out_bresp;
    CData/*0:0*/ __PVT__auto_master_out_arready;
    CData/*0:0*/ __PVT__auto_master_out_arvalid;
    CData/*3:0*/ __PVT__auto_master_out_arid;
    CData/*7:0*/ __PVT__auto_master_out_arlen;
    CData/*2:0*/ __PVT__auto_master_out_arsize;
    CData/*1:0*/ __PVT__auto_master_out_arburst;
    CData/*0:0*/ __PVT__auto_master_out_rready;
    CData/*0:0*/ __PVT__auto_master_out_rvalid;
    CData/*3:0*/ __PVT__auto_master_out_rid;
    CData/*1:0*/ __PVT__auto_master_out_rresp;
    CData/*0:0*/ __PVT__auto_master_out_rlast;
    IData/*31:0*/ __PVT__auto_master_out_awaddr;
    IData/*31:0*/ __PVT__auto_master_out_wdata;
    IData/*31:0*/ __PVT__auto_master_out_araddr;
    IData/*31:0*/ __PVT__auto_master_out_rdata;

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VysyxSoCFull_CPU();
    ~VysyxSoCFull_CPU();
    void ctor(VysyxSoCFull__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VysyxSoCFull_CPU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
