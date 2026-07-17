// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_YSYXSOCFULL_H_
#define VERILATED_VYSYXSOCFULL_YSYXSOCFULL_H_  // guard

#include "verilated.h"
class VysyxSoCFull_ysyxSoCASIC;


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_ysyxSoCFull final {
  public:
    // CELLS
    VysyxSoCFull_ysyxSoCASIC* asic;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ clock;
        CData/*0:0*/ reset;
        CData/*7:0*/ externalPins_gpio_seg_0;
        CData/*7:0*/ externalPins_gpio_seg_1;
        CData/*7:0*/ externalPins_gpio_seg_2;
        CData/*7:0*/ externalPins_gpio_seg_3;
        CData/*7:0*/ externalPins_gpio_seg_4;
        CData/*7:0*/ externalPins_gpio_seg_5;
        CData/*7:0*/ externalPins_gpio_seg_6;
        CData/*7:0*/ externalPins_gpio_seg_7;
        CData/*0:0*/ externalPins_ps2_clk;
        CData/*0:0*/ externalPins_ps2_data;
        CData/*7:0*/ externalPins_vga_r;
        CData/*7:0*/ externalPins_vga_g;
        CData/*7:0*/ externalPins_vga_b;
        CData/*0:0*/ externalPins_vga_hsync;
        CData/*0:0*/ externalPins_vga_vsync;
        CData/*0:0*/ externalPins_vga_valid;
        CData/*0:0*/ externalPins_uart_rx;
        CData/*0:0*/ externalPins_uart_tx;
        CData/*0:0*/ __PVT___bitrev_miso;
        CData/*0:0*/ __PVT___asic_psram_sck;
        CData/*0:0*/ __PVT___asic_psram_ce_n;
        CData/*0:0*/ __PVT__flash__DOT__reset;
        CData/*2:0*/ __PVT__flash__DOT__state;
        CData/*7:0*/ __PVT__flash__DOT__counter;
        CData/*7:0*/ __PVT__flash__DOT__cmd;
        CData/*6:0*/ __PVT__bitrev__DOT__buff;
        CData/*3:0*/ __PVT__bitrev__DOT__count;
        CData/*3:0*/ __PVT__psram__DOT__dio;
        CData/*7:0*/ __PVT__psram__DOT__counter;
        CData/*7:0*/ __PVT__psram__DOT__oper;
        CData/*0:0*/ __PVT__psram__DOT__rw;
        CData/*0:0*/ __PVT__psram__DOT__set;
        CData/*7:0*/ __PVT__psram__DOT__buff;
        CData/*3:0*/ __PVT__sdram__DOT__sdramsub1__DOT__chose;
        CData/*0:0*/ __PVT__sdram__DOT__sdramsub1__DOT__comb_chose;
        CData/*0:0*/ __PVT__sdram__DOT__sdramsub1__DOT__both;
        CData/*0:0*/ sdram__DOT__sdramsub1__DOT____VdfgRegularize_hd87c5a3c_0_1;
        CData/*0:0*/ sdram__DOT__sdramsub1__DOT____VdfgRegularize_hd87c5a3c_0_2;
        CData/*2:0*/ __PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__state;
        CData/*0:0*/ __PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__will_stop_burst;
        CData/*0:0*/ __PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_read;
        CData/*2:0*/ __PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__cas_lat;
        CData/*1:0*/ __PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_reg;
        CData/*0:0*/ sdram__DOT__sdramsub1__DOT__sdram0__DOT____VdfgRegularize_hdef225f1_0_0;
        CData/*2:0*/ __PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__state;
        CData/*0:0*/ __PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__will_stop_burst;
        CData/*0:0*/ __PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_read;
        CData/*2:0*/ __PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__cas_lat;
        CData/*1:0*/ __PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_reg;
        CData/*0:0*/ sdram__DOT__sdramsub1__DOT__sdram1__DOT____VdfgRegularize_he2a3456f_0_0;
        CData/*3:0*/ __PVT__sdram__DOT__sdramsub2__DOT__chose;
        CData/*0:0*/ __PVT__sdram__DOT__sdramsub2__DOT__comb_chose;
        CData/*0:0*/ sdram__DOT__sdramsub2__DOT____VdfgRegularize_h0f7387ae_0_1;
        CData/*0:0*/ sdram__DOT__sdramsub2__DOT____VdfgRegularize_h0f7387ae_0_2;
        CData/*2:0*/ __PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__state;
        CData/*0:0*/ __PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__will_stop_burst;
        CData/*0:0*/ __PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_read;
        CData/*2:0*/ __PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__cas_lat;
        CData/*1:0*/ __PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_reg;
        CData/*0:0*/ sdram__DOT__sdramsub2__DOT__sdram0__DOT____VdfgRegularize_h9fdf6016_0_0;
        CData/*2:0*/ __PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__state;
        CData/*0:0*/ __PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__will_stop_burst;
    };
    struct {
        CData/*0:0*/ __PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_read;
        CData/*2:0*/ __PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__cas_lat;
        CData/*1:0*/ __PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_reg;
        CData/*0:0*/ sdram__DOT__sdramsub2__DOT__sdram1__DOT____VdfgRegularize_h3b7456c3_0_0;
        CData/*0:0*/ __VdfgRegularize_hbc52461a_1_0;
        CData/*3:0*/ __Vtableidx1;
        CData/*3:0*/ __Vtableidx2;
        CData/*3:0*/ __Vtableidx3;
        CData/*3:0*/ __Vtableidx4;
        CData/*2:0*/ __Vdly__flash__DOT__state;
        CData/*7:0*/ __Vdly__flash__DOT__counter;
        CData/*7:0*/ __Vdly__flash__DOT__cmd;
        CData/*6:0*/ __Vdly__bitrev__DOT__buff;
        SData/*15:0*/ externalPins_gpio_out;
        SData/*15:0*/ externalPins_gpio_in;
        SData/*15:0*/ sdram__DOT__dq__en0;
        SData/*15:0*/ sdram__DOT__dq__en1;
        SData/*9:0*/ __PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__count;
        SData/*15:0*/ __PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__buff;
        SData/*9:0*/ __PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_len;
        SData/*8:0*/ __PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__addr;
        SData/*9:0*/ __PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__count;
        SData/*15:0*/ __PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__buff;
        SData/*9:0*/ __PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_len;
        SData/*8:0*/ __PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__addr;
        SData/*9:0*/ __PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__count;
        SData/*15:0*/ __PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__buff;
        SData/*9:0*/ __PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_len;
        SData/*8:0*/ __PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__addr;
        SData/*9:0*/ __PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__count;
        SData/*15:0*/ __PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__buff;
        SData/*9:0*/ __PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_len;
        SData/*8:0*/ __PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__addr;
        IData/*23:0*/ __PVT__flash__DOT__addr;
        IData/*31:0*/ __PVT__flash__DOT__data;
        IData/*31:0*/ __PVT__flash__DOT__rdata;
        IData/*31:0*/ __PVT__flash__DOT__data_bswap;
        IData/*23:0*/ __PVT__psram__DOT__saddr;
        IData/*31:0*/ sdram__DOT__dq__out__strong__out2;
        IData/*31:0*/ sdram__DOT__dq__out__strong__out3;
        IData/*31:0*/ __Vtask_sdram__DOT__sdramsub1__DOT__sdram0__DOT__sdram_read__4__data;
        IData/*31:0*/ __Vtask_sdram__DOT__sdramsub1__DOT__sdram1__DOT__sdram_read__6__data;
        IData/*31:0*/ __Vtask_sdram__DOT__sdramsub2__DOT__sdram0__DOT__sdram_read__8__data;
        IData/*31:0*/ __Vtask_sdram__DOT__sdramsub2__DOT__sdram1__DOT__sdram_read__10__data;
        IData/*23:0*/ __Vdly__flash__DOT__addr;
        IData/*31:0*/ __Vdly__flash__DOT__data;
        VlUnpacked<SData/*12:0*/, 4> __PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows;
        VlUnpacked<SData/*12:0*/, 4> __PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows;
        VlUnpacked<SData/*12:0*/, 4> __PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows;
        VlUnpacked<SData/*12:0*/, 4> __PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows;
    };

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VysyxSoCFull_ysyxSoCFull();
    ~VysyxSoCFull_ysyxSoCFull();
    void ctor(VysyxSoCFull__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VysyxSoCFull_ysyxSoCFull);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
