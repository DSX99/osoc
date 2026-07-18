// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___eval_static__TOP__ysyxSoCFull__asic(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___eval_static__TOP__ysyxSoCFull__asic\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15275119439118525320ull);
}

extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h0e58a3b9_0;
extern const VlUnpacked<SData/*9:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h3a83442a_0;
extern const VlUnpacked<VlWide<3>/*79:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h56072089_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_hb83ca8a9_0;
extern const VlUnpacked<CData/*5:0*/, 1024> VysyxSoCFull__ConstPool__TABLE_hcf4cd27d_0;
extern const VlUnpacked<CData/*2:0*/, 16> VysyxSoCFull__ConstPool__TABLE_hbdf4cb16_0;

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __PVT__axi4xbar__DOT___readys_filter_T_1;
    __PVT__axi4xbar__DOT___readys_filter_T_1 = 0;
    CData/*1:0*/ __PVT__axi4xbar__DOT___readys_filter_T_3;
    __PVT__axi4xbar__DOT___readys_filter_T_3 = 0;
    CData/*2:0*/ __PVT__axi4xbar_1__DOT___readys_filter_T_1;
    __PVT__axi4xbar_1__DOT___readys_filter_T_1 = 0;
    CData/*2:0*/ __PVT__axi4xbar_1__DOT___readys_filter_T_3;
    __PVT__axi4xbar_1__DOT___readys_filter_T_3 = 0;
    CData/*0:0*/ luart__DOT__muart__DOT____VdfgRegularize_h953d1cf6_0_0;
    luart__DOT__muart__DOT____VdfgRegularize_h953d1cf6_0_0 = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    SData/*9:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    SData/*9:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*3:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done 
        = (0x16U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w 
        = (4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w 
        = (0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w 
        = (0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o 
        = (4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    if (vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awburst 
            = (3U & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                                      >> 5U)));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                                      >> 0x0000002dU)));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize 
            = (7U & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 2U)));
    } else {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awburst = 0U;
        vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize = 0U;
    }
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0x0000000fU & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((0U != (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] 
                   | (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] 
                      | (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] 
                         | (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] 
                            | (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] 
                               | (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] 
                                  | (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] 
                                     | (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] 
                                        | (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] 
                                           | (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] 
                                              | (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10U] 
                                                 | (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11U] 
                                                    | (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12U] 
                                                       | (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13U] 
                                                          | (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14U] 
                                                             | vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15U])))))))))))))))) 
           | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2 
        = (1U & (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                 [vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                 >> 1U));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3 
        = (1U & vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4 
        = (1U & (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                 [vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                 >> 2U));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))));
    __Vtableidx2 = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_value 
        = VysyxSoCFull__ConstPool__TABLE_h0e58a3b9_0
        [__Vtableidx2];
    __Vtableidx5 = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VysyxSoCFull__ConstPool__TABLE_h3a83442a_0
        [__Vtableidx5];
    __Vtableidx7 = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q;
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[0U] 
        = VysyxSoCFull__ConstPool__TABLE_h56072089_0
        [__Vtableidx7][0U];
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[1U] 
        = VysyxSoCFull__ConstPool__TABLE_h56072089_0
        [__Vtableidx7][1U];
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[2U] 
        = VysyxSoCFull__ConstPool__TABLE_h56072089_0
        [__Vtableidx7][2U];
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we 
        = ((~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_ss = 
        (0x000000ffU & (~ ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                           & ((- (IData)(((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                          & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                             >> 0x0000000dU)))) 
                              | (- (IData)((1U & (~ 
                                                  ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                   >> 0x0000000dU)))))))));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0 
        = ((0x00000080U & ((~ (0U != (0x0000007fU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))) 
                           << 7U)) | (0x0000007fU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt))) 
           & (0U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
    vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0 
        = ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__penable) 
           & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__psel));
    __Vtableidx1 = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VysyxSoCFull__ConstPool__TABLE_hb83ca8a9_0
        [__Vtableidx1];
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_pad_o 
        = ((~ ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = 
            ((0x0000000cU & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                             << 2U)) | ((2U & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                               >> 1U)) 
                                        | (1U & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                 >> 3U))));
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in 
            = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_pad_o;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = 8U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in 
            = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad;
    }
    vlSelfRef.__PVT__apbdelay_delayer__DOT__out = (
                                                   (0x000003ffU 
                                                    & (vlSelfRef.__PVT__apbdelay_delayer__DOT__delay 
                                                       >> 0x0000000aU)) 
                                                   > (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__count));
    vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
        = ((IData)(vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
            ? vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__Memory
           [vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full)
            ? (0x0000000fU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                                      >> 0x0000002dU)))
            : 0U);
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o 
        = ((4U == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
           | (6U == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4frag__DOT___in_awready_T = 
        ((0U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter)) 
         | (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__ready_w 
        = ((0x000003ffU & (vlSelfRef.__PVT__axi4delay_delayer__DOT__delay_w 
                           >> 0x0000000aU)) > (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__count_w));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid 
        = ((0x000003ffU & (vlSelfRef.__PVT__axi4delay_delayer__DOT__delay_r 
                           >> 0x0000000aU)) > (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__count_r));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
        [vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr];
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i 
        = (((((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
               ? 0U : 0xffffffffU) & (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                        ? 0U : vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q) 
                                      & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                          ? 0U : 0xffffffffU))) 
            & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                ? 0U : 0xffffffffU)) | (((vlSymsp->TOP__ysyxSoCFull.sdram__DOT__dq__out__strong__out2 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull.sdram__DOT__dq__en0)) 
                                         | (vlSymsp->TOP__ysyxSoCFull.sdram__DOT__dq__out__strong__out3 
                                            & ((IData)(vlSymsp->TOP__ysyxSoCFull.sdram__DOT__dq__en1) 
                                               << 0x00000010U))) 
                                        & (((IData)(vlSymsp->TOP__ysyxSoCFull.sdram__DOT__dq__en1) 
                                            << 0x00000010U) 
                                           | (IData)(vlSymsp->TOP__ysyxSoCFull.sdram__DOT__dq__en0))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
        = (0x000000ffU & ((0x00000800U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                           ? ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                              - ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                 + (1U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                          >> 9U))))
                           : ((0x00000200U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                               ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)
                               : ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                  - (IData)(1U)))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate)));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch 
        = ((((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
               & (0x0000000cU == (0x0000001cU & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__paddr))) 
              << 3U) | (((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                         & (8U == (0x0000001cU & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__paddr))) 
                        << 2U)) | ((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                     & (4U == (0x0000001cU 
                                               & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__paddr))) 
                                    << 1U) | ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                              & (0U 
                                                 == 
                                                 (0x0000001cU 
                                                  & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__paddr))))) 
           & (- (IData)((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwrite))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelfRef.__PVT__axi4frag__DOT__len_1 = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__busy_1)
                                              ? (IData)(vlSelfRef.__PVT__axi4frag__DOT__r_len_1)
                                              : (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len));
    if (vlSelfRef.__PVT__apbdelay_delayer__DOT__out) {
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_prdata 
            = vlSelfRef.__PVT__apbdelay_delayer__DOT__buff_prdata;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pslverr 
            = vlSelfRef.__PVT__apbdelay_delayer__DOT__buff_pslverr;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pready 
            = vlSelfRef.__PVT__apbdelay_delayer__DOT__buff_pready;
    } else {
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_prdata = 0U;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pslverr = 0U;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pready = 0U;
    }
    vlSelfRef.axi4yank__DOT____VdfgRegularize_h6c436e9c_0_0 
        = (1U & ((((((((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                              << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))) 
                      << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))) 
                                << 4U)) | ((((2U & 
                                              ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))) 
                                            << 2U) 
                                           | ((2U & 
                                               ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))))) 
                   << 8U) | (((((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))) 
                               << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))) 
                                         << 4U)) | 
                             ((((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))) 
                               << 2U) | ((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                                                << 1U)) 
                                         | (1U & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full))))))) 
                 >> (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)));
    vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_2 
        = ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o) 
           & (4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)));
    vlSelfRef.axi4yank__DOT____VdfgRegularize_h6c436e9c_0_1 
        = (1U & ((((((((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                              << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))) 
                      << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))) 
                                << 4U)) | ((((2U & 
                                              ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))) 
                                            << 2U) 
                                           | ((2U & 
                                               ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))))) 
                   << 8U) | (((((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))) 
                               << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))) 
                                         << 4U)) | 
                             ((((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))) 
                               << 2U) | ((2U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                                                << 1U)) 
                                         | (1U & (~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full))))))) 
                 >> (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    vlSelfRef.__PVT___axi4delay_delayer_in_rlast = 
        (1U & (IData)(((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid)
                        ? vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[0U]
                        : 0ULL)));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid 
        = ((0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
           & ((0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
              & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                 >> 5U)));
    vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_3 
        = ((0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
           & ((~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                  >> 5U)) & (0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_bresp = 
        ((1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))
          ? ((IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pslverr) 
             << 1U) : (IData)(vlSelfRef.__PVT__axi42apb__DOT__resp_hold_r));
    vlSelfRef.axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0 
        = (((1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)) 
            & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pready)) 
           | (2U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    vlSelfRef.__PVT__axi4xbar_1__DOT___anonIn_awready_T 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__latched)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_bvalid 
        = ((IData)(vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_3) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid 
        = (((IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full) 
            << 2U) | (((IData)(vlSelfRef.__PVT__lmrom__DOT__state) 
                       << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                                                     | ((IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full) 
                                                        | (IData)(vlSelfRef.__PVT__lmrom__DOT__state))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid_1 = 
        (1U & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
               | (IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid_1 
        = (((IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full) 
            << 2U) | (1U & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty))));
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
           & (0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_bvalid 
        = ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__ready_w) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_bvalid));
    __PVT__axi4xbar_1__DOT___readys_filter_T_1 = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask)) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid));
    __PVT__axi4xbar_1__DOT___readys_filter_T_3 = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1)) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid_1));
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready 
        = ((~ (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready)) 
           & ((0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)) 
              & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    __Vtableidx8 = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask) 
                     << 7U) | (((((0x0000000cU & ((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1) 
                                                  << 2U)) 
                                  | (((IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__lmrom__DOT__state))) 
                                 | (((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1) 
                                     << 1U) | (IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full))) 
                                << 3U) | (IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_1)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready 
        = VysyxSoCFull__ConstPool__TABLE_hcf4cd27d_0
        [__Vtableidx8];
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)
            ? (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid)
            : (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0)) 
               | (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_1) 
                   & (IData)(vlSelfRef.__PVT__lmrom__DOT__state)) 
                  | ((IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full) 
                     & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2)))));
    vlSelfRef.__PVT__axi4xbar__DOT__anyValid = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid) 
                                                | (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid));
    vlSelfRef.__PVT__axi4xbar__DOT__readys_valid = 
        (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid) 
          << 1U) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid));
    __Vtableidx9 = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1) 
                     << 7U) | (((((0x0000000cU & ((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3) 
                                                  << 2U)) 
                                  | ((IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full) 
                                     << 1U)) | (((IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full))) 
                                << 3U) | (IData)(__PVT__axi4xbar_1__DOT___readys_filter_T_3)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready_1 
        = VysyxSoCFull__ConstPool__TABLE_hcf4cd27d_0
        [__Vtableidx9];
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
        = ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready)
            ? (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                       >> 4U)) : vlSelfRef.__PVT__axi42apb__DOT__wdata_reg_r);
    vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel 
        = ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready) 
           | ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready) 
              | (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))));
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwrite 
        = ((0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))
            ? (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready)
            : (IData)(vlSelfRef.__PVT__axi42apb__DOT__is_write_r));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys 
        = (7U & (~ (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready) 
                     >> 3U) & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready))));
    __PVT__axi4xbar__DOT___readys_filter_T_1 = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_mask)) 
                                                & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_valid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1 
        = (7U & (~ (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready_1) 
                     >> 3U) & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_unready_1))));
    vlSelfRef.__PVT__apbdelay_delayer__DOT__out_psel 
        = ((~ (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__buff_pready)) 
           & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel));
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_bvalid 
        = ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwrite) 
           & (IData)(vlSelfRef.axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0));
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_rvalid 
        = ((~ (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwrite)) 
           & (IData)(vlSelfRef.axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0));
    vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1 = 
        (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
          >> 1U) & (IData)(vlSelfRef.__PVT__lmrom__DOT__state));
    vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1 = 
        (1U & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_2 = 
        (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
          >> 2U) & (IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full));
    if (vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_2;
    } else {
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_1 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_1;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_2 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2;
    }
    vlSelfRef.__PVT__axi4xbar__DOT__readys_unready 
        = (((4U & ((IData)(__PVT__axi4xbar__DOT___readys_filter_T_1) 
                   << 1U)) | (((2U & ((IData)(__PVT__axi4xbar__DOT___readys_filter_T_1) 
                                      << 1U)) | (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid)) 
                              | (IData)(__PVT__axi4xbar__DOT___readys_filter_T_1))) 
           | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_mask) 
              << 2U));
    vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_0 = 
        (1U & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_2 = 
        (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1) 
          >> 2U) & (IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full));
    if (vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid_1;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_0;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_2;
    } else {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid 
            = (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
                & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0)) 
               | ((IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full) 
                  & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2)));
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0;
        vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_2 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2;
    }
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_bvalid));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
           & (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_rvalid));
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pstrb 
        = ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwrite)
            ? (0x0000000fU & ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready)
                               ? (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data)
                               : (IData)(vlSelfRef.__PVT__axi42apb__DOT__wstrb_reg_r)))
            : 0U);
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 
        = (0x000000ffU & ((2U & (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pstrb))
                           ? (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
                              >> 8U) : (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
                                        >> 0x00000018U)));
    __Vtableidx10 = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pstrb;
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size 
        = VysyxSoCFull__ConstPool__TABLE_hbdf4cb16_0
        [__Vtableidx10];
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
        = ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwrite)
            ? ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready)
                ? (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                           >> 0x0000000bU)) : vlSelfRef.__PVT__axi42apb__DOT__awaddr_reg_r)
            : ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready)
                ? (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                           >> 0x0000000bU)) : vlSelfRef.__PVT__axi42apb__DOT__araddr_reg_r));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_dat8_w 
        = (0x000000ffU & ((2U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                           ? ((1U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                               ? (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
                                  >> 0x00000018U) : 
                              (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
                               >> 0x00000010U)) : (
                                                   (1U 
                                                    & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
                                                    >> 8U)
                                                    : vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata)));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in 
        = ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwrite)
            ? (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_dat8_w)
            : (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_dat8_w_reg));
    vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hf5566834_0_1 
        = ((~ ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 7U)) & (0U == (7U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)));
    vlSelfRef.__PVT__apbxbar__DOT__sel_4 = (0U == (
                                                   (0x00000010U 
                                                    & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                       >> 0x00000019U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                            >> 0x0000001cU)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & ((~ 
                                                              (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                               >> 0x00000010U)) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & (1U 
                                                               ^ 
                                                               (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                                >> 0x0000000cU)))))));
    vlSelfRef.__PVT__apbxbar__DOT__sel_0 = ((0U == 
                                             ((0x00000010U 
                                               & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                  >> 0x00000019U)) 
                                              | ((8U 
                                                  & ((~ 
                                                      (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                       >> 0x0000001cU)) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                        >> 0x0000000eU)) 
                                                    | (3U 
                                                       & (1U 
                                                          ^ 
                                                          (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                           >> 0x0000000cU))))))) 
                                            | (3U == 
                                               (3U 
                                                & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                   >> 0x0000001cU))));
    vlSelfRef.__PVT__apbxbar__DOT__sel_3 = (0U == (
                                                   (0x00000010U 
                                                    & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                       >> 0x00000019U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                            >> 0x0000001cU)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                             >> 0x0000000eU)) 
                                                         | (3U 
                                                            & (2U 
                                                               ^ 
                                                               (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                                >> 0x0000000cU)))))));
    vlSelfRef.__PVT__apbxbar__DOT__sel_1 = (0U == (
                                                   (0x00000010U 
                                                    & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                       >> 0x00000019U)) 
                                                   | ((8U 
                                                       & ((~ 
                                                           (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                            >> 0x0000001cU)) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                             >> 0x0000000eU)) 
                                                         | (3U 
                                                            & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                               >> 0x0000000cU))))));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i 
        = (IData)(((0U == (0x30000000U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)) 
                   & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__out_psel)));
    vlSelfRef.__PVT__axi4xbar__DOT__readys_readys = 
        (3U & (~ (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_unready) 
                   >> 2U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_unready))));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done 
        = (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
            == ((IData)(1U) + (0x000000ffU & ((IData)(7U) 
                                              + VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U))))) 
           | ((2U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)) 
              & (8U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 
        = (0x000000ffU & ((1U & (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pstrb))
                           ? vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata
                           : ((((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pstrb) 
                                >> 1U) & (1U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                               ? (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
                                  >> 8U) : ((((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pstrb) 
                                              >> 2U) 
                                             & (1U 
                                                == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                             ? (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
                                                >> 0x00000010U)
                                             : ((((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pstrb) 
                                                  >> 3U) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                 ? 
                                                (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
                                                 >> 0x00000018U)
                                                 : 
                                                ((((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pstrb) 
                                                   >> 2U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                  ? 
                                                 (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
                                                  >> 0x00000010U)
                                                  : vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata))))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__in_psel 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__out_psel));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__in_penable 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0) 
           & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__in_psel 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_3) 
           & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__out_psel));
    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__in_penable 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_3) 
           & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__in_psel 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_1) 
           & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__out_psel));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__in_penable 
        = ((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_1) 
           & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re 
        = ((~ (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwrite)) 
           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we 
        = ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwrite) 
           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast 
        = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_0) 
            & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data)) 
           | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_1) 
              | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_2)));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_0)
                            ? (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                       >> 0x00000023U))
                            : 0U) | (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_1)
                                       ? (IData)(vlSelfRef.__PVT__lmrom__DOT__nodeIn_rid_r)
                                       : 0U) | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? (IData)(vlSelfRef.__PVT__axi4ram__DOT__r_id)
                                                 : 0U))));
    vlSelfRef.__PVT__axi4xbar__DOT__winner_2_1 = (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys) 
                                                   >> 1U) 
                                                  & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid));
    vlSelfRef.__PVT__axi4xbar__DOT__prefixOR_1 = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp 
        = (3U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_0)
                   ? (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data)
                   : 0U) | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_2)
                             ? ((IData)(vlSelfRef.__PVT__axi4ram__DOT__w_sel1)
                                 ? 0U : 3U) : 0U)));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_0)
                            ? ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data) 
                               >> 2U) : 0U) | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__muxState_4_2)
                                                ? (IData)(vlSelfRef.__PVT__axi4ram__DOT__w_id)
                                                : 0U)));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout 
        = (0x0000000fU & ((2U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))
                           ? (1U & (0x35U >> (7U & 
                                              ((IData)(7U) 
                                               - (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)))))
                           : ((0U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                               ? 3U : ((1U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                        ? 8U : ((2U 
                                                 == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                 ? 
                                                (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 0x00000014U)
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                  ? 
                                                 (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                  >> 0x00000010U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                   ? 
                                                  (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 0x0000000cU)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                    ? 
                                                   (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                    >> 8U)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                     ? 
                                                    (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                     >> 4U)
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                      ? vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0) 
                                                       >> 4U)
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                        ? (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)
                                                        : 
                                                       ((0x0aU 
                                                         == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                         ? 
                                                        ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                                         >> 4U)
                                                         : 
                                                        ((0x0bU 
                                                          == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                          ? (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1)
                                                          : 
                                                         ((0x0cU 
                                                           == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                           ? 
                                                          (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
                                                           >> 0x00000014U)
                                                           : 
                                                          ((0x0dU 
                                                            == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                            ? 
                                                           (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
                                                            >> 0x00000010U)
                                                            : 
                                                           ((0x0eU 
                                                             == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                             ? 
                                                            (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
                                                             >> 0x0000001cU)
                                                             : 
                                                            (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
                                                             >> 0x00000018U))))))))))))))))));
    luart__DOT__muart__DOT____VdfgRegularize_h953d1cf6_0_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__in_penable)) 
                                              & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__in_psel)));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd 
        = ((~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
        = (1U & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)
                  ? (~ (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                         & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                        | ((0x16U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re))))
                  : (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i)));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr 
        = ((~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    vlSelfRef.__PVT__apbdelay_delayer__DOT__out_pready 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pready)) 
                     & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0)) 
                    | (((~ ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__in_penable) 
                            & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__in_psel))) 
                        & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_1)) 
                       | ((IData)(((0U == (0x30000000U 
                                           & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)) 
                                   & (~ (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                           ? (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                           : (0x16U 
                                              == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                                         & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i))))) 
                          | (((~ ((IData)(vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__in_penable) 
                                  & (IData)(vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__in_psel))) 
                              & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_3)) 
                             | (((~ (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_4) 
                                      & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))) 
                                     & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__out_psel))) 
                                 & (IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_4)) 
                                | ((~ (IData)(vlSelfRef.__PVT___lvga_auto_in_pready)) 
                                   & (0x20000000U == 
                                      (0x30000000U 
                                       & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))))))))));
    if (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0x0000000fU & (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n))))));
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout));
    } else {
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten 
            = (0x0000000fU & (- (IData)((8U > (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout 
            = (0x0000000fU & ((0U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                               ? 0x0eU : ((1U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                           ? 0x0bU : 
                                          ((2U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x00000014U)
                                            : ((3U 
                                                == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                ? (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x00000010U)
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x0000000cU)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 8U)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 4U)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                       : 0U)))))))));
    }
    if (vlSelfRef.__PVT__axi4xbar__DOT__idle_2) {
        vlSelfRef.__PVT__axi4xbar__DOT__muxState_2_1 
            = vlSelfRef.__PVT__axi4xbar__DOT__winner_2_1;
        vlSelfRef.__PVT__axi4xbar__DOT__muxState_2_0 
            = vlSelfRef.__PVT__axi4xbar__DOT__prefixOR_1;
    } else {
        vlSelfRef.__PVT__axi4xbar__DOT__muxState_2_1 
            = vlSelfRef.__PVT__axi4xbar__DOT__state_2_1;
        vlSelfRef.__PVT__axi4xbar__DOT__muxState_2_0 
            = vlSelfRef.__PVT__axi4xbar__DOT__state_2_0;
    }
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last 
        = (1U & ((((((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last) 
                       << 3U) | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last) 
                                 << 2U)) | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last))) 
                    << 0x0000000cU) | (((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last) 
                                          << 1U) | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last))) 
                                       << 8U)) | ((
                                                   ((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last))) 
                                                   << 4U) 
                                                  | ((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last) 
                                                         << 2U)) 
                                                     | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last))))) 
                 >> (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(luart__DOT__muart__DOT____VdfgRegularize_h953d1cf6_0_0) 
           & (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwrite));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwrite)) 
           & (IData)(luart__DOT__muart__DOT____VdfgRegularize_h953d1cf6_0_0));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
        = ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)
            ? (0x16U != (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
            : (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
        = ((0U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))
            ? ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr)
                ? ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__set)
                    ? 1U : 2U) : 0U) : ((1U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))
                                         ? ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                             ? 0U : 1U)
                                         : ((2U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))
                                             ? ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                                 ? 0U
                                                 : 2U)
                                             : 0U)));
    vlSelfRef.psram_dio__en = (0x0000000fU & (((1U 
                                                & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten))
                                                ? 1U
                                                : 0U) 
                                              | ((((2U 
                                                    & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten))
                                                    ? 1U
                                                    : 0U) 
                                                  << 1U) 
                                                 | ((((4U 
                                                       & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten))
                                                       ? 1U
                                                       : 0U) 
                                                     << 2U) 
                                                    | (8U 
                                                       & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten))))));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid));
    vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 
        = ((0x0eU & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0)) 
           | (1U & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten) 
                    & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout))));
    vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 
        = ((0x0dU & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1)) 
           | (2U & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten) 
                    & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout))));
    vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out2 
        = ((0x0bU & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out2)) 
           | (4U & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten) 
                    & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout))));
    vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out3 
        = ((7U & (IData)(vlSelfRef.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out3)) 
           | (8U & ((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten) 
                    & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hf5566834_0_1));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelfRef.luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hf5566834_0_1));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (2U == (7U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (6U == (7U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (5U == (7U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))));
    vlSelfRef.__PVT__axi4xbar__DOT__anyValid_1 = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid) 
                                                  | (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_bvalid));
    vlSelfRef.__PVT__axi4xbar__DOT__readys_valid_1 
        = (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_bvalid) 
            << 1U) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__reset_status 
        = ((~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    __PVT__axi4xbar__DOT___readys_filter_T_3 = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_mask_1)) 
                                                & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_valid_1));
    vlSelfRef.__PVT__axi4xbar__DOT__readys_unready_1 
        = (((4U & ((IData)(__PVT__axi4xbar__DOT___readys_filter_T_3) 
                   << 1U)) | (((2U & ((IData)(__PVT__axi4xbar__DOT___readys_filter_T_3) 
                                      << 1U)) | (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_bvalid)) 
                              | (IData)(__PVT__axi4xbar__DOT___readys_filter_T_3))) 
           | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_mask_1) 
              << 2U));
    vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1 
        = (3U & (~ (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_unready_1) 
                     >> 2U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_unready_1))));
    vlSelfRef.__PVT__axi4xbar__DOT__winner_3_1 = (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1) 
                                                   >> 1U) 
                                                  & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_bvalid));
    vlSelfRef.__PVT__axi4xbar__DOT__winner_3_0 = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid));
    if (vlSelfRef.__PVT__axi4xbar__DOT__idle_3) {
        vlSelfRef.__PVT__axi4xbar__DOT__muxState_3_1 
            = vlSelfRef.__PVT__axi4xbar__DOT__winner_3_1;
        vlSelfRef.__PVT__axi4xbar__DOT__muxState_3_0 
            = vlSelfRef.__PVT__axi4xbar__DOT__winner_3_0;
    } else {
        vlSelfRef.__PVT__axi4xbar__DOT__muxState_3_1 
            = vlSelfRef.__PVT__axi4xbar__DOT__state_3_1;
        vlSelfRef.__PVT__axi4xbar__DOT__muxState_3_0 
            = vlSelfRef.__PVT__axi4xbar__DOT__state_3_0;
    }
}

void VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___stl_sequent__TOP__ysyxSoCFull__asic__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata 
            = (IData)((vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                       >> 5U));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb 
            = (0x0000000fU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                      >> 1U)));
    } else {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata 
            = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wdata;
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb 
            = (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wstrb));
    }
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bvalid));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_bready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_3)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1) 
                  >> 1U) : (IData)(vlSelfRef.__PVT__axi4xbar__DOT__state_3_1)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)) 
                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bready) 
                    & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_3)
                        ? (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1)
                        : (IData)(vlSelfRef.__PVT__axi4xbar__DOT__state_3_0)))));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__latched)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awvalid));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full)
            ? (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 0x0000000dU)) : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr);
    vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_0 
        = (1U & ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                     >> 0x0000001fU)) | (0U == ((4U 
                                                 & ((~ 
                                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                                                      >> 0x0000001fU)) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                                                      >> 0x0000001cU))))));
    vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_1 
        = (0U == ((4U & ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                             >> 0x0000001fU)) << 2U)) 
                  | (3U & (2U ^ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr 
                                 >> 0x0000001cU)))));
    if (vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arburst 
            = (3U & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                                      >> 5U)));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize 
            = (7U & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 2U)));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
            = (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                       >> 0x0000000dU));
    } else {
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arburst 
            = (3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arburst));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len 
            = (0x000000ffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen));
        vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize 
            = (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arsize));
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr 
            = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr;
    }
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_2)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys) 
                  >> 1U) : (IData)(vlSelfRef.__PVT__axi4xbar__DOT__state_2_1)));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_2)
               ? (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys)
               : (IData)(vlSelfRef.__PVT__axi4xbar__DOT__state_2_0)));
    vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rready) 
            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rvalid)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rlast));
    vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_0 
        = (1U & ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                     >> 0x0000001fU)) | (0U == ((4U 
                                                 & ((~ 
                                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                                      >> 0x0000001fU)) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                                      >> 0x0000001cU))))));
    vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1 
        = (0U == ((4U & ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                             >> 0x0000001fU)) << 2U)) 
                  | (3U & (2U ^ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr 
                                 >> 0x0000001cU)))));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w 
        = ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid) 
           | (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_bvalid) 
               & ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__ready_w) 
                  & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_bready))) 
              | ((~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                     >> 4U)) & (IData)(vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_3))));
    vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_bready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1) 
                  >> 2U) : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2)));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.__PVT__axi4frag__DOT__addr_1 = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__busy_1)
                                               ? vlSelfRef.__PVT__axi4frag__DOT__r_addr_1
                                               : vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr);
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data 
        = (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_1) 
            << 1U) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3 
        = (((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__full)) 
            | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__latched)) 
           & (((0U == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_0_count)) 
               | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_0_last) 
                  == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_1))) 
              & (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_0_count))));
    if (vlSelfRef.__PVT__axi4frag__DOT__busy) {
        vlSelfRef.__PVT__axi4frag__DOT__len = vlSelfRef.__PVT__axi4frag__DOT__r_len;
        vlSelfRef.__PVT__axi4frag__DOT__addr = vlSelfRef.__PVT__axi4frag__DOT__r_addr;
    } else {
        vlSelfRef.__PVT__axi4frag__DOT__len = vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len;
        vlSelfRef.__PVT__axi4frag__DOT__addr = vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr;
    }
    vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2)));
    vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_1 
        = (((0U == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_count)) 
            | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_last) 
               == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1))) 
           & (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_count)));
    vlSelfRef.axi4ram__DOT____VdfgRegularize_h9fc36335_0_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_bready)));
    vlSelfRef.__PVT__axi4xbar__DOT__in_0_wvalid = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid) 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
        = (~ (((~ (vlSelfRef.__PVT__axi4frag__DOT__addr_1 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize))) 
                                           | (~ vlSelfRef.__PVT__axi4frag__DOT__addr_1)))));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data)
            : vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1]);
    vlSelfRef.__PVT__axi4xbar__DOT__in_0_awvalid = 
        ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awvalid) 
         & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3));
    vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
        = (~ (((~ (vlSelfRef.__PVT__axi4frag__DOT__addr 
                   >> 2U)) << 2U) | (3U & ((~ ((IData)(3U) 
                                               << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize))) 
                                           | (~ vlSelfRef.__PVT__axi4frag__DOT__addr)))));
    vlSelfRef.__PVT__axi4xbar__DOT__in_0_arvalid = 
        ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arvalid) 
         & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_1));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_0 
        = ((0U == ((2U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                          >> 0x0000001cU)) | (1U & 
                                              (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                               >> 0x00000018U)))) 
           | ((0U == ((6U & (4U ^ (0x0000001eU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                  >> 0x0000001bU)))) 
                      | (1U & (~ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                  >> 0x00000018U))))) 
              | (3U == (3U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                              >> 0x0000001cU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_2 
        = (0U == ((6U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                         >> 0x0000001bU)) | (1U & (~ 
                                                   (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                    >> 0x00000018U)))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_wvalid) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits) 
              >> 1U));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_wvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_wvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_1));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_0 
        = ((0U == ((2U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                          >> 0x0000001cU)) | (1U & 
                                              (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                               >> 0x00000018U)))) 
           | ((0U == ((6U & (4U ^ (0x0000001eU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                  >> 0x0000001bU)))) 
                      | (1U & (~ (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                  >> 0x00000018U))))) 
              | (3U == (3U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                              >> 0x0000001cU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_2 
        = (0U == ((6U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                         >> 0x0000001bU)) | (1U & (~ 
                                                   (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                    >> 0x00000018U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_1 
        = (0U == ((6U & (4U ^ (0x0000001eU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                              >> 0x0000001bU)))) 
                  | (1U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                           >> 0x00000018U))));
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_arvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_0));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data 
        = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_2) 
            << 2U) | (((0U == ((6U & (4U ^ (0x0000001eU 
                                            & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                               >> 0x0000001bU)))) 
                               | (1U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                        >> 0x00000018U)))) 
                       << 1U) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_wvalid));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_awvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready 
        = (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_0)) 
           | (((~ (IData)(vlSelfRef.__PVT__lmrom__DOT__state)) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_1)) 
              | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_2) 
                 & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready))));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full) 
           | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_arvalid));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i 
        = ((~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
           & (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid) 
               | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
              & ((4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                 & (((~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                         | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                     | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                    | ((~ (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awvalid)) 
                       | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q))))));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w 
        = ((~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
           & (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awvalid) 
               | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
              & ((4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                 & ((((~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                      & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                     | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q)) 
                    | ((~ (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid)) 
                       | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data)
            : vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]);
    vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid = 
        ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched)) 
         & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.__PVT__axi4frag__DOT___in_awready_T));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_arready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready) 
           & (IData)(vlSelfRef.axi4yank__DOT____VdfgRegularize_h6c436e9c_0_0));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid) 
           & (IData)(vlSelfRef.axi4yank__DOT____VdfgRegularize_h6c436e9c_0_0));
    vlSelfRef.__PVT__axi4yank__DOT___GEN_2 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arready 
        = ((~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i) 
              & (IData)(vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_2)));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
        = (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q) 
            | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))
            ? vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q
            : ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w)
                ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr
                : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_wr_i 
        = (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
            & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wvalid))
            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wstrb)
            : 0U);
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wready 
        = ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
           & (IData)(vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_2));
    vlSelfRef.__PVT__axi4frag__DOT__w_todo = ((0U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter))
                                               ? (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid)
                                               : (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter));
    vlSelfRef.axi4frag__DOT____VdfgRegularize_h068021ff_0_0 
        = ((0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid) 
           & (IData)(vlSelfRef.axi4yank__DOT____VdfgRegularize_h6c436e9c_0_1));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arready));
    vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid));
    vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_en 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_2)));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_0)));
    vlSelfRef.__PVT__lmrom__DOT___nodeIn_rid_T = ((~ (IData)(vlSelfRef.__PVT__lmrom__DOT__state)) 
                                                  & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                                                     & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestARIO_0_1)));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w 
        = (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i) 
            | (0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_wr_i))) 
           & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w 
        = ((0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_wr_i)) 
           | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awready 
        = ((~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
           & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wready));
    vlSelfRef.__PVT__axi4xbar__DOT__in_0_wready = (1U 
                                                   & (((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                                       & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits)) 
                                                      | (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits) 
                                                          >> 1U) 
                                                         & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wready))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid) 
           & (IData)(vlSelfRef.axi4frag__DOT____VdfgRegularize_h068021ff_0_0));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__latched)) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_arvalid)));
    if (vlSelfRef.__PVT__lmrom__DOT___nodeIn_rid_T) {
        VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic(
                                                                                (0x3fffffffU 
                                                                                & vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr), vlSelfRef.__Vtask_lmrom__DOT__mrom__DOT__mrom_read__0__rdata);
        vlSelfRef.__PVT__lmrom__DOT___mrom_rdata = vlSelfRef.__Vtask_lmrom__DOT__mrom__DOT__mrom_read__0__rdata;
    } else {
        vlSelfRef.__PVT__lmrom__DOT___mrom_rdata = 0U;
    }
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q;
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q;
    if ((8U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = ((4U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                ? 0U : ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                         ? 0U : ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                                  ? 6U : 2U)));
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 1U)))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                    = ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                        ? 2U : ((9U == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))
                                 ? 9U : 3U));
            }
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
            if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 1U;
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
            if ((((~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q)) 
                  & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w)) 
                 & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i))) {
                if ((((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                      >> (3U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                >> 0x0000000bU))) & 
                     ((0x00003fffU & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                      >> 0x0000000dU)) 
                      == vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                      [(3U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                              >> 0x0000000bU))]))) {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 4U;
                }
            }
        } else {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = 0U;
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
                = (0x0000000fU & 2U);
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r;
        } else {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
                = (0x0000000fU & 0U);
            if (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                    = ((0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q))
                        ? 8U : 9U);
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r = 9U;
            } else if (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w) {
                if ((((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                      >> (3U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                >> 0x0000000bU))) & 
                     ((0x00003fffU & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                      >> 0x0000000dU)) 
                      == vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                      [(3U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                              >> 0x0000000bU))]))) {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
                        = ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i)
                            ? 4U : 6U);
                } else if ((1U & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                                  >> (3U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                            >> 0x0000000bU))))) {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 8U;
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
                        = ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i)
                            ? 4U : 6U);
                } else {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 3U;
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r 
                        = ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i)
                            ? 4U : 6U);
                }
            }
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q) 
                              - (IData)(1U)));
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r 
            = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q;
    } else {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r 
            = (0x0000000fU & 0U);
        if (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = 2U;
        }
    }
    vlSelfRef.__PVT__axi4xbar__DOT__in_0_awready = 
        (((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full)) 
          & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_0)) 
         | ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_1) 
            & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awready)));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_wready));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_2));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid)));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wready = 
        (1U & (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
                & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits)) 
               | (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                   >> 2U) & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid) 
                             & (IData)(vlSelfRef.axi4ram__DOT____VdfgRegularize_h9fc36335_0_0)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid = 
        ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid) 
         & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid) 
           & ((1U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wready)));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready 
        = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
            & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
               >> 2U)) & (IData)(vlSelfRef.axi4ram__DOT____VdfgRegularize_h9fc36335_0_0));
    vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wready) 
           & (IData)(vlSelfRef.axi4frag__DOT____VdfgRegularize_h068021ff_0_0));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.__PVT__axi4ram__DOT___GEN = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready) 
                                           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awready 
        = (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_0)) 
           | ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__requestAWIO_0_2) 
              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready)));
    vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_wvalid)));
    vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__W0_en 
        = ((IData)(vlSelfRef.__PVT__axi4ram__DOT___GEN) 
           & (0x0f000000U == (0x0fffe000U & vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid));
    vlSelfRef.__PVT__axi4yank__DOT___GEN_8 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awready));
    vlSelfRef.__PVT__axi4yank__DOT__auto_in_awready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awready) 
           & (IData)(vlSelfRef.axi4yank__DOT____VdfgRegularize_h6c436e9c_0_1));
    vlSelfRef.__PVT__axi4frag__DOT__in_awready = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awready) 
                                                  & (IData)(vlSelfRef.__PVT__axi4frag__DOT___in_awready_T));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))) 
           & (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_awready));
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready))) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_awvalid)));
}

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCASIC___ctor_var_reset(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__spi_sck = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7598659639805510901ull);
    vlSelf->__PVT__spi_ss = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13814856865517674682ull);
    vlSelf->__PVT__spi_mosi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 852284730959930751ull);
    vlSelf->__PVT__spi_miso = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12140560756394917646ull);
    vlSelf->__PVT__uart_rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2399467654730215438ull);
    vlSelf->__PVT__uart_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1761512799854230840ull);
    vlSelf->__PVT__psram_sck = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9366220501501135442ull);
    vlSelf->__PVT__psram_ce_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 253043257259189995ull);
    vlSelf->__PVT__psram_dio = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7566955548280960593ull);
    vlSelf->__PVT__sdram_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3688931996657638843ull);
    vlSelf->__PVT__sdram_cke = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4754305267450575977ull);
    vlSelf->__PVT__sdram_cs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16476245496016217047ull);
    vlSelf->__PVT__sdram_ras = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 879436976897849305ull);
    vlSelf->__PVT__sdram_cas = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1090110278223692672ull);
    vlSelf->__PVT__sdram_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2133868856751517442ull);
    vlSelf->__PVT__sdram_a = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 47095864137989737ull);
    vlSelf->__PVT__sdram_ba = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 116281543022381152ull);
    vlSelf->__PVT__sdram_dqm = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5598410593993685894ull);
    vlSelf->__PVT__sdram_dq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10123542867212601932ull);
    vlSelf->__PVT__gpio_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3528322381442655819ull);
    vlSelf->__PVT__gpio_in = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 629115553822814742ull);
    vlSelf->__PVT__gpio_seg_0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2874352041989383406ull);
    vlSelf->__PVT__gpio_seg_1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11660916694634843299ull);
    vlSelf->__PVT__gpio_seg_2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3355026330325360832ull);
    vlSelf->__PVT__gpio_seg_3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12579448052773675551ull);
    vlSelf->__PVT__gpio_seg_4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2598781719187582241ull);
    vlSelf->__PVT__gpio_seg_5 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18317550120865695721ull);
    vlSelf->__PVT__gpio_seg_6 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6828238858359763151ull);
    vlSelf->__PVT__gpio_seg_7 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4021738834285570565ull);
    vlSelf->__PVT__ps2_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8416932302485436191ull);
    vlSelf->__PVT__ps2_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12987539744063830537ull);
    vlSelf->__PVT__vga_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2055607138462276192ull);
    vlSelf->__PVT__vga_g = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5773750216550251743ull);
    vlSelf->__PVT__vga_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17771436561197612375ull);
    vlSelf->__PVT__vga_hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9248359358575596599ull);
    vlSelf->__PVT__vga_vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10946138257059144876ull);
    vlSelf->__PVT__vga_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 189766124944320893ull);
    vlSelf->__PVT___axi4delay_delayer_in_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5226799779607606091ull);
    vlSelf->__PVT___lvga_auto_in_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 107420271610264451ull);
    vlSelf->__PVT___lvga_auto_in_pslverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17544786575999438871ull);
    vlSelf->__PVT___lvga_auto_in_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1653078644375525745ull);
    vlSelf->psram_dio__out = 0;
    vlSelf->psram_dio__en = 0;
    vlSelf->sdram_dq__out = 0;
    vlSelf->sdram_dq__en = 0;
    vlSelf->__PVT__axi4xbar__DOT__auto_anon_out_0_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3175172360355565143ull);
    vlSelf->__PVT__axi4xbar__DOT__auto_anon_out_0_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11250445584691353875ull);
    vlSelf->__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15089176763799671615ull);
    vlSelf->__PVT__axi4xbar__DOT__auto_anon_out_0_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5866171623313431798ull);
    vlSelf->__PVT__axi4xbar__DOT__auto_anon_out_0_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 649398297178935885ull);
    vlSelf->__PVT__axi4xbar__DOT__auto_anon_out_0_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15450014840472770701ull);
    vlSelf->__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7932843886712890013ull);
    vlSelf->__PVT__axi4xbar__DOT__auto_anon_out_0_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9623571337498339506ull);
    vlSelf->__PVT__axi4xbar__DOT__in_0_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14333623762765553351ull);
    vlSelf->__PVT__axi4xbar__DOT__in_0_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 338107578765234609ull);
    vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6953271025114686175ull);
    vlSelf->__PVT__axi4xbar__DOT__requestARIO_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3670478953301297784ull);
    vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17540428667260160248ull);
    vlSelf->__PVT__axi4xbar__DOT__requestAWIO_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12948352526348496915ull);
    vlSelf->__PVT__axi4xbar__DOT___arFIFOMap_0_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1171840972791057391ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_0_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12929392060266173242ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_0_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8662487427123979724ull);
    vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_0_T_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4065230010688693577ull);
    vlSelf->__PVT__axi4xbar__DOT___awFIFOMap_15_T_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6016739304919224055ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_0_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15205076619448782207ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_0_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14313767752101177655ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_1_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14930748275988917806ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_1_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16548697367335644057ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_1_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 668830792982427031ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_1_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4433541097258821392ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_2_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12019740019127383238ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_2_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5097778021787831754ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_2_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17659882400549553254ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_2_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10260846214820916966ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_3_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3614333750212439194ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_3_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17186450973968965220ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_3_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15707149411922886480ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_3_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9484473393115370550ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_4_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9472281667868783641ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_4_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4377548267964126877ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_4_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5797608840446815879ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_4_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 499880712434501245ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_5_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8776133202712571985ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_5_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9972514395381915681ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_5_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15642270744505893350ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_5_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4657694278968090251ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_6_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2816009239071455990ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_6_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9074333727993948295ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_6_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2251469999464045075ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_6_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14800825948033012620ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_7_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13052255828798601875ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_7_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6194989966776162594ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_7_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11890659895643287113ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_7_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10694520639157387910ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_8_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11303856981310684607ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_8_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4301383595430057705ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_8_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11291821528894718461ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_8_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3619486137627459041ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_9_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8507351786283496877ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_9_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9315255976117463031ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_9_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4848569959249849605ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_9_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4282277835841815097ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_10_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14121409855811633992ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_10_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6794970176832056530ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_10_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3192590060449004010ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_10_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1561672849636751674ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_11_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18120851600936324563ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_11_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10507505910749582277ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_11_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13534154735639557814ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_11_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1590908585069906588ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_12_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2187742343785805447ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_12_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5244107058204786522ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_12_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5057684374980170319ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_12_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18129339298501101293ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_13_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7546982577713845652ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_13_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5412072013763093858ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_13_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2541476074559590984ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_13_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 256236955038958693ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_14_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8458205565679699699ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_14_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9921668346186142250ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_14_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8713855414588311765ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_14_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1839632269047933109ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_15_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6041968671142576513ull);
    vlSelf->__PVT__axi4xbar__DOT__arFIFOMap_15_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10785547459077151400ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_15_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1825586337522871770ull);
    vlSelf->__PVT__axi4xbar__DOT__awFIFOMap_15_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 346353962609707070ull);
    vlSelf->__PVT__axi4xbar__DOT__in_0_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9320174922687932834ull);
    vlSelf->__PVT__axi4xbar__DOT__latched = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9209520238461134478ull);
    vlSelf->__PVT__axi4xbar__DOT__in_0_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14467790903291726217ull);
    vlSelf->__PVT__axi4xbar__DOT__in_0_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4598136189020351533ull);
    vlSelf->__PVT__axi4xbar__DOT__idle_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6283930424105716910ull);
    vlSelf->__PVT__axi4xbar__DOT__anyValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3338663373188252579ull);
    vlSelf->__PVT__axi4xbar__DOT__readys_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15395527161901467310ull);
    vlSelf->__PVT__axi4xbar__DOT__readys_mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7010718539035048454ull);
    vlSelf->__PVT__axi4xbar__DOT__readys_unready = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5327636134342098688ull);
    vlSelf->__PVT__axi4xbar__DOT__readys_readys = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 915091841685356507ull);
    vlSelf->__PVT__axi4xbar__DOT__prefixOR_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13655619057206656423ull);
    vlSelf->__PVT__axi4xbar__DOT__winner_2_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15938168572649865132ull);
    vlSelf->__PVT__axi4xbar__DOT__state_2_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3616309283688425490ull);
    vlSelf->__PVT__axi4xbar__DOT__state_2_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14536887185364796978ull);
    vlSelf->__PVT__axi4xbar__DOT__muxState_2_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6289207575164090551ull);
    vlSelf->__PVT__axi4xbar__DOT__muxState_2_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10451183512591441528ull);
    vlSelf->__PVT__axi4xbar__DOT__idle_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2495085723420348198ull);
    vlSelf->__PVT__axi4xbar__DOT__anyValid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14665212957597047368ull);
    vlSelf->__PVT__axi4xbar__DOT__readys_valid_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15729069533190745704ull);
    vlSelf->__PVT__axi4xbar__DOT__readys_mask_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14521966491825129938ull);
    vlSelf->__PVT__axi4xbar__DOT__readys_unready_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17976375511948721535ull);
    vlSelf->__PVT__axi4xbar__DOT__readys_readys_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10874008820459512089ull);
    vlSelf->__PVT__axi4xbar__DOT__winner_3_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14429219634250155735ull);
    vlSelf->__PVT__axi4xbar__DOT__winner_3_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6848311591795756249ull);
    vlSelf->__PVT__axi4xbar__DOT__state_3_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15369217587818450018ull);
    vlSelf->__PVT__axi4xbar__DOT__state_3_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9938968759587118637ull);
    vlSelf->__PVT__axi4xbar__DOT__muxState_3_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13038929595049400840ull);
    vlSelf->__PVT__axi4xbar__DOT__muxState_3_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14516231635873974475ull);
    vlSelf->axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_1 = 0;
    vlSelf->axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3 = 0;
    vlSelf->axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4 = 0;
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12447983527401673332ull);
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5994045963023866910ull);
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 859523860508989502ull);
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4706039881568057183ull);
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__wrap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2794002858011591390ull);
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17415620399727833574ull);
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2764611420372583930ull);
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14387218296413564052ull);
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2220966597068785412ull);
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 870890077085110243ull);
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14793135901946098897ull);
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14716373548832798298ull);
    vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6230275454050725123ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11735373242389755561ull);
    }
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14233877267724937349ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2708905533281378870ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11309248002135237950ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6585461086534017042ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7295039832326570645ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3438514570129384237ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 500522115054088244ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5433701295158137500ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16954952008417704501ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6397316345175946549ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1255380734012332000ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15147203262030162559ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6946249344814826708ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15587166174961684900ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14358404171601536373ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18119774381611045325ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18215176247651285330ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12408886324655281962ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3767981758833376674ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_in_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13400119076519056801ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11845486675392985350ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8623276702187890306ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_out_2_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3888187932698055437ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4129089087754105157ull);
    vlSelf->__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9787553520583950673ull);
    vlSelf->__PVT__axi4xbar_1__DOT__in_0_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12073713726128151206ull);
    vlSelf->__PVT__axi4xbar_1__DOT__in_0_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6909295354113232405ull);
    vlSelf->__PVT__axi4xbar_1__DOT__requestARIO_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13347691880109481321ull);
    vlSelf->__PVT__axi4xbar_1__DOT__requestARIO_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9392515379129677418ull);
    vlSelf->__PVT__axi4xbar_1__DOT__requestARIO_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9809801357063897308ull);
    vlSelf->__PVT__axi4xbar_1__DOT__requestAWIO_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12241681196938358540ull);
    vlSelf->__PVT__axi4xbar_1__DOT__requestAWIO_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5015183583987739682ull);
    vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2477282257252305896ull);
    vlSelf->__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8117135545533775490ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_0_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2459399174123510491ull);
    vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5654326624599730792ull);
    vlSelf->__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1293905962618878108ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_0_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3676850980961660111ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_1_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3442094997372261258ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_1_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 733732335676170786ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_2_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9936533001283364459ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_2_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13987619927028701577ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_3_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9171017818510247772ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_3_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9584240792751406046ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_4_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1051870242998091557ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_4_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9425704770602297121ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_5_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 305233479866474037ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_5_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13279740345553062005ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_6_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11568908477072301208ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_6_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10959191540981881920ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_7_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7235851647992490670ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_7_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9194776536644650710ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_8_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9720429070833387705ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_8_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 745945954578421444ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_9_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2216843708953187680ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_9_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4986761146728321756ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_10_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15961332007564360498ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_10_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6569189486537373886ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_11_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10894785164721756129ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_11_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16079346211722722055ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_12_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4842741206565677155ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_12_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4398015511010296706ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_13_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9997694511843418433ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_13_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18127139038502717111ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_14_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15253128207687174916ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_14_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7370331626889823804ull);
    vlSelf->__PVT__axi4xbar_1__DOT__arFIFOMap_15_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13677529846012156660ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awFIFOMap_15_count = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11690756913978539133ull);
    vlSelf->__PVT__axi4xbar_1__DOT__latched = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9567330264774228074ull);
    vlSelf->__PVT__axi4xbar_1__DOT___anonIn_awready_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15803594098179028950ull);
    vlSelf->__PVT__axi4xbar_1__DOT__in_0_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2903800529778097111ull);
    vlSelf->__PVT__axi4xbar_1__DOT__in_0_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15116494101157677741ull);
    vlSelf->__PVT__axi4xbar_1__DOT__idle_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13953615042175146246ull);
    vlSelf->__PVT__axi4xbar_1__DOT__anyValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15573218994569573210ull);
    vlSelf->__PVT__axi4xbar_1__DOT__readys_valid = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16472849743258188670ull);
    vlSelf->__PVT__axi4xbar_1__DOT__readys_mask = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8324826955126768166ull);
    vlSelf->__PVT__axi4xbar_1__DOT__readys_unready = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13695295949666821284ull);
    vlSelf->__PVT__axi4xbar_1__DOT__readys_readys = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 549549167709074317ull);
    vlSelf->__PVT__axi4xbar_1__DOT__prefixOR_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16638241922990876910ull);
    vlSelf->__PVT__axi4xbar_1__DOT__winner_3_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8890091044770774138ull);
    vlSelf->__PVT__axi4xbar_1__DOT__winner_3_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16729852789540213089ull);
    vlSelf->__PVT__axi4xbar_1__DOT__state_3_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5328171774502030811ull);
    vlSelf->__PVT__axi4xbar_1__DOT__state_3_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 402811521083892530ull);
    vlSelf->__PVT__axi4xbar_1__DOT__state_3_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 896592834675732310ull);
    vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5859750171550807911ull);
    vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4326981574198161292ull);
    vlSelf->__PVT__axi4xbar_1__DOT__muxState_3_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15389507061229983698ull);
    vlSelf->__PVT__axi4xbar_1__DOT__idle_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6554304493003137518ull);
    vlSelf->__PVT__axi4xbar_1__DOT__anyValid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4462377153285318706ull);
    vlSelf->__PVT__axi4xbar_1__DOT__readys_valid_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4238195463066033210ull);
    vlSelf->__PVT__axi4xbar_1__DOT__readys_mask_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11340536702687096462ull);
    vlSelf->__PVT__axi4xbar_1__DOT__readys_unready_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8929736816866525101ull);
    vlSelf->__PVT__axi4xbar_1__DOT__readys_readys_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17502729741328287526ull);
    vlSelf->__PVT__axi4xbar_1__DOT__winner_4_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6658266417275293438ull);
    vlSelf->__PVT__axi4xbar_1__DOT__winner_4_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4413187434859631569ull);
    vlSelf->__PVT__axi4xbar_1__DOT__state_4_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13042605641223795615ull);
    vlSelf->__PVT__axi4xbar_1__DOT__state_4_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9501865779409320547ull);
    vlSelf->__PVT__axi4xbar_1__DOT__muxState_4_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5394437782959648758ull);
    vlSelf->__PVT__axi4xbar_1__DOT__muxState_4_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7962235001441157996ull);
    vlSelf->axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0 = 0;
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11152740934140264139ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1249942609780989366ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 527268637287294890ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1643461519614714705ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1643174249176325222ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11402933686797186763ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13438695119561147112ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11148821316110933953ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12029732923110758721ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7590117786640122871ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17834932667324152170ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13590950197929583311ull);
    vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8777405397315111564ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12338873418343150834ull);
    }
    vlSelf->__PVT__apbxbar__DOT__sel_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13144884058532894402ull);
    vlSelf->__PVT__apbxbar__DOT__sel_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7137123927387472366ull);
    vlSelf->__PVT__apbxbar__DOT__sel_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15850093552363793635ull);
    vlSelf->__PVT__apbxbar__DOT__sel_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6109157710635756677ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__in_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12487055629783509686ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__in_penable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7587782226554230601ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__interrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14197441604855080029ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__reg_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10473552596977428250ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__reg_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12778461246177059620ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__reg_dat8_w = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 210652207662174025ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__reg_dat8_w_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12494645198351577120ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5363417320729668318ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6416644562472124296ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3261635585658613711ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13041253634610046604ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__fcr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5556465280989340474ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12516293540115270523ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4298590527956302724ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1119215082349956876ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10523089629680974964ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__scratch = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6603419194561172546ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6811344120140366885ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10020830054099232510ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9395817190998263525ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__dlc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2461878486212262469ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14086318714310945123ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4440387843054399388ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4420186175009842322ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13537467062912669325ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 219795592335760535ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3568516330985145481ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11210390135842304055ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8331542150819772079ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14191737799653659257ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7528307871000498333ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15917213268663800664ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6106196695262910477ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2575302574503770718ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14316138721882471863ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2790444204439076222ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4957446116805143978ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7895277583988677052ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10062279496354668940ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 289617867894450215ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14386157136322832277ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5134971699124441505ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14044640679302888070ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13015502869293115832ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15651067997639591323ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1041157834211060854ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15313237353245988466ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9267402613819173314ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18266797244214108506ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2796846270306170181ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16715477374770512271ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3331494371365966397ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5101269942841621418ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_value = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3599670107594662696ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13889293679890668875ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14868594296785089977ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4443253208711331578ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9968163218036841260ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17613702238201409554ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12719868212155739110ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9238420150501742089ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8118602433099824895ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15729407571194098561ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13224328194775530083ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4070094948335860642ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3430782540034947001ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17007856579856878184ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 773727071672968813ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15385650330139175908ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9722503252038734759ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9213649216164549821ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4696074286423260793ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10555760453075069015ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11335098737360850528ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2482620633236489146ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10932962623116606941ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17329813124789437902ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10609413010920109627ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4344717160142106878ull);
    vlSelf->luart__DOT__muart__DOT__Uregs__DOT____VdfgRegularize_hf5566834_0_1 = 0;
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_pad_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6172112307531087807ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6528739235852920963ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5468563795984054758ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5395290503148981221ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7330399074932206811ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11069803321220469812ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17452492360032522245ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11917903311528136679ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3787154133431396866ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7124422943685748210ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8909818338131897636ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__reset_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4310599632813382052ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6522270833970620945ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16242715275514667051ull);
    }
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8832794239775340614ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15308051313785166222ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4331837641331570658ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15951980858511468863ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18081592957694570470ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13483163022635382183ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7428109641714041050ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3719937824653159056ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11038138737723795778ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6843521155909116069ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8817508130347615371ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14586485648558871908ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12507000911013249501ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16768050609276915644ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5868344303236950114ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6435426704169793188ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4049882478134862968ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4709752039987420298ull);
    }
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6294166798633816148ull);
    vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 397266065869720926ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15609813767347968585ull);
    }
    vlSelf->__PVT__lgpio__DOT__mgpio__DOT__in_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8729166466222692050ull);
    vlSelf->__PVT__lgpio__DOT__mgpio__DOT__in_penable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1234558192312287223ull);
    vlSelf->__PVT__lgpio__DOT__mgpio__DOT__led = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15464377832014331479ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__lgpio__DOT__mgpio__DOT__hex[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14161023287162374637ull);
    }
    vlSelf->lkeyboard__DOT__mps2__DOT____Vlvbound_h2e66df9a__0 = 0;
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__in_pwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 255553416076070813ull);
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7056096235479547274ull);
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__in_pstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 385180765157403764ull);
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__buffer = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8638183587546230032ull);
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2800101460806036892ull);
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1704966894126114245ull);
    vlSelf->__PVT__lkeyboard__DOT__mps2__DOT__out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15634947166784549279ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__in_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14947606545221717669ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__in_penable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 443084254243438419ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_ss = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6020510856435459155ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__spi_irq_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13430036266177605201ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3490657615189440268ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4764627285092878469ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__penable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5896475010374106523ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__pwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4479108976506833689ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__pwdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7178321677533395884ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__pstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 241735420257164512ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12526828542686283324ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7895441380987232962ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__pslverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7520635730308181295ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__fsm_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6737354899133537104ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10940131418027886840ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__out_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7207472195839547534ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__out_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2464921702132466110ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18035318597484894851ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 7182621837834799556ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5108930333879693856ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5857023280675280487ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2947762610981105494ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13181664840117216337ull);
    vlSelf->lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0 = 0;
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 644590376845719635ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3910474596669945300ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13242777201522184984ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17182997472542660373ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data, __VscopeHash, 10769708346121256460ull);
    vlSelf->__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7061366722750831970ull);
    vlSelf->lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0 = 0;
    vlSelf->lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 = 0;
    vlSelf->lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 = 0;
    vlSelf->lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out2 = 0;
    vlSelf->lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out3 = 0;
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14352061369924704006ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1226391295030814377ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14409493214508509652ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7288907944600200523ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10095081171821249374ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15672297079786849916ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10494147561354863401ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17678433956876312254ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 604024453256704491ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8425989327293391841ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10310566624697168672ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2548320471385732999ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18133039645527620017ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 902238868347573212ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7294232726199591053ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7329763989879975223ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15620573805283309268ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2420868887699628807ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16219307545402697637ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10462407614607110856ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2509803642007340976ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10525754312349505601ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14454070706119894543ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11323854015692722732ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5836925311249682659ull);
    }
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5471679295473494217ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6969201264129342485ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7532633752303489210ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13255903205787753925ull);
    vlSelf->__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 17774245124012736743ull);
    vlSelf->__PVT__lmrom__DOT___mrom_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8269513320011078604ull);
    vlSelf->__PVT__lmrom__DOT__state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12538910612361852885ull);
    vlSelf->__PVT__lmrom__DOT___nodeIn_rid_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2465331029963038942ull);
    vlSelf->__PVT__lmrom__DOT__nodeIn_rdata_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16343562938298624082ull);
    vlSelf->__PVT__lmrom__DOT__nodeIn_rid_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13447699915520454923ull);
    vlSelf->__PVT__axi4ram__DOT__w_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9081581707966785305ull);
    vlSelf->__PVT__axi4ram__DOT__w_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16022244264950924717ull);
    vlSelf->__PVT__axi4ram__DOT__r_sel1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13074479907939901362ull);
    vlSelf->__PVT__axi4ram__DOT__w_sel1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8402162167928661652ull);
    vlSelf->__PVT__axi4ram__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15166446360077395043ull);
    vlSelf->__PVT__axi4ram__DOT__r_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10879876282624318138ull);
    vlSelf->__PVT__axi4ram__DOT__r_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5757599519140506334ull);
    vlSelf->__PVT__axi4ram__DOT__rdata_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11416419678578401265ull);
    vlSelf->__PVT__axi4ram__DOT__rdata_r0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5498149352273612437ull);
    vlSelf->__PVT__axi4ram__DOT__rdata_r1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12539368068379101297ull);
    vlSelf->__PVT__axi4ram__DOT__rdata_r2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2721269413464227682ull);
    vlSelf->__PVT__axi4ram__DOT__rdata_r3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 307160120130260011ull);
    vlSelf->axi4ram__DOT____VdfgRegularize_h9fc36335_0_0 = 0;
    vlSelf->__PVT__axi4ram__DOT__mem_ext__DOT__R0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16779652754057243605ull);
    vlSelf->__PVT__axi4ram__DOT__mem_ext__DOT__R0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2088569636053001839ull);
    vlSelf->__PVT__axi4ram__DOT__mem_ext__DOT__W0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16967299010158288417ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->__PVT__axi4ram__DOT__mem_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17942097188648620326ull);
    }
    vlSelf->__PVT__axi4ram__DOT__mem_ext__DOT___R0_en_d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1514817526663724723ull);
    vlSelf->__PVT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2591516988532930808ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8385235729546720451ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12396675415353897926ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9168274888155058988ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4532751074915866218ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 176957929463088331ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2944649196628726490ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17814158195767175491ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14002778633473449945ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15631438950027333035ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4911931088639203053ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4731839020138181041ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8086843173865010078ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17612134413798491578ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16462123947140920042ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15929410681137419963ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13143557386647492427ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12080913690512304525ull);
    vlSelf->lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_2 = 0;
    vlSelf->lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_3 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1736500143003842435ull);
    }
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8896100628442971692ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17089710772624571781ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14344358053377770395ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14490398404835820888ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13857687836852211880ull);
    }
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16182563278401105963ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12013149338896254085ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4014024846427432041ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_wr_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13833209510168219864ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 911394274096374449ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17122763385268190046ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9500523384271893108ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6499937604036296972ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12740240782124059978ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2106541262216514204ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 14454462382758469798ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7986073571300779202ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8132550721847657236ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18183126636228192780ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15416138805471912279ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10837177187817497255ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16192417219990616562ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2601429083664836829ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[__Vi0] = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 4568815702093272841ull);
    }
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11472190568306441867ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11357437701224297739ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1912514789972375656ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10879792806128553897ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3459757099485154755ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3368394693004835608ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8481124349550908587ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1625210357854589017ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15364966232344856435ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12534772634949524803ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13842872167150269340ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6557795301068587209ull);
    vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12261961897518824315ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state, __VscopeHash, 289357288136558161ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__in_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2240829980980816492ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__in_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14180421746262956313ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__in_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10652483792995584874ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__in_pslverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2306506868134122868ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__out_psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15254653109873689512ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__out_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18020381390437143974ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__buff_pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4188250212683315951ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__buff_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2043864391458970549ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__buff_pslverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14332678100497693504ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10779164329417007893ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__count = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1935983620728825772ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__delay = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 17383378332001039350ull);
    vlSelf->__PVT__apbdelay_delayer__DOT__out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18702409549970776ull);
    vlSelf->__PVT__axi42apb__DOT__auto_in_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8081982214013582603ull);
    vlSelf->__PVT__axi42apb__DOT__auto_in_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18158504421856930822ull);
    vlSelf->__PVT__axi42apb__DOT__auto_in_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13769396185752909130ull);
    vlSelf->__PVT__axi42apb__DOT__auto_in_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2937454572414227156ull);
    vlSelf->__PVT__axi42apb__DOT__auto_in_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10680546259556205826ull);
    vlSelf->__PVT__axi42apb__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9705982954278384235ull);
    vlSelf->__PVT__axi42apb__DOT__is_write_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13282392738077469896ull);
    vlSelf->__PVT__axi42apb__DOT__rid_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13619464707757450994ull);
    vlSelf->__PVT__axi42apb__DOT__bid_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13413470870835230633ull);
    vlSelf->__PVT__axi42apb__DOT__araddr_reg_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6928674691592159332ull);
    vlSelf->__PVT__axi42apb__DOT__awaddr_reg_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13033263405455353723ull);
    vlSelf->__PVT__axi42apb__DOT__wdata_reg_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10637637094925341150ull);
    vlSelf->__PVT__axi42apb__DOT__wstrb_reg_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15595579111481911611ull);
    vlSelf->__PVT__axi42apb__DOT__resp_hold_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11405795289863029789ull);
    vlSelf->__PVT__axi42apb__DOT__nodeIn_rdata_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18021486804095963948ull);
    vlSelf->axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0 = 0;
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10473559554540846271ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6009209921835948708ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1334162424865939345ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5914730436684399377ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15627690729488627474ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11426978863129901647ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data = VL_SCOPED_RAND_RESET_Q(47, __VscopeHash, 8435876338929436445ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6479512917478854077ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_Q(47, __VscopeHash, 6722162307770867881ull);
    }
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15829757596783642315ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10012402223297907014ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 155311503405793468ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2902559057465854056ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17469750220144702840ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4509930728987144832ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 17200701630096091092ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7126820896802709372ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 17389595912783741573ull);
    }
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12016671503647130378ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6652857676324253907ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11963558665106695175ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11925671675748610106ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2261238333846256683ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12976157118996398862ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14176054862926624424ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2584253771658303941ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4726306879313295812ull);
    }
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16634360690938854049ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9707325519967678822ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1218111669468671305ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5011241247775211647ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3340012332524401678ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15545343086066800433ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data = VL_SCOPED_RAND_RESET_Q(47, __VscopeHash, 8808128999976665913ull);
    vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10682400441049668684ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_Q(47, __VscopeHash, 14518328525426037818ull);
    }
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9479499258135999557ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1202565026854317049ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 281670130642337980ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17006836825506309867ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10641183153888172782ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9024599413324797573ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 15523847266823868013ull);
    vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9435620111580845335ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 3840303790117310275ull);
    }
    vlSelf->__PVT__axi4yank__DOT__auto_in_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10501332893727281197ull);
    vlSelf->__PVT__axi4yank__DOT__auto_in_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16135762463848210548ull);
    vlSelf->__PVT__axi4yank__DOT__auto_in_becho_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7909159083332648406ull);
    vlSelf->__PVT__axi4yank__DOT__auto_in_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4305813420536112759ull);
    vlSelf->__PVT__axi4yank__DOT__auto_in_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14465717790717139109ull);
    vlSelf->__PVT__axi4yank__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5453648397764305320ull);
    vlSelf->__PVT__axi4yank__DOT___GEN_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10091265435150400468ull);
    vlSelf->axi4yank__DOT____VdfgRegularize_h6c436e9c_0_0 = 0;
    vlSelf->axi4yank__DOT____VdfgRegularize_h6c436e9c_0_1 = 0;
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5708096578856462032ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2156363974662462633ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6613003400846535873ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10774687401169883704ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2646260310797893723ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13017360852177370074ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2955732254440675370ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5634716237171944524ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13771641218542564208ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2055394051220304886ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9500182134102357217ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 385732355052406528ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12602938014975077900ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13973783206474239267ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8544965800987274218ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11743692550761793006ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5190567631181843613ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15671356132876390319ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9116957328584618512ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7628592422185269851ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2183750440762471012ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15730586661451695830ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18427737508033020185ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16628598530681168390ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3680838996457700985ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17769632216195591091ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9754782679679598032ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4123952036633559227ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11501841644440761316ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4492216044628107580ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14983399035807249178ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8097950737411044833ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12499197937140330414ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10826824189634360568ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8672662269621042735ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2792002159562400978ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10313535917575674609ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2236990070705637266ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6138498411769188003ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10451711220545752526ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15786246882904579443ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2734526763126950068ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 851641892983717966ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3440495541263622469ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2547234677541754215ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11432599379228026236ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8972499417820563306ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3207820082451997562ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14450911160607083741ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13316635701147776132ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4066970897326447951ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4879581073225072051ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15348017994995236928ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9483885531999238877ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16655776964861579773ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13766138549646311554ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7291599169132689142ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2591552362134554453ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4100679739509213807ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9742230619288848763ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4702254584442951888ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18424453928451571772ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13169853355199507652ull);
    vlSelf->__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16359905854886062049ull);
    vlSelf->__PVT__axi4frag__DOT__in_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4865407170250188201ull);
    vlSelf->__PVT__axi4frag__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10745835378753525736ull);
    vlSelf->__PVT__axi4frag__DOT__r_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10728191224477161096ull);
    vlSelf->__PVT__axi4frag__DOT__r_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3397924650130307068ull);
    vlSelf->__PVT__axi4frag__DOT__len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13891361751467243637ull);
    vlSelf->__PVT__axi4frag__DOT__addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17287245906237107622ull);
    vlSelf->__PVT__axi4frag__DOT__busy_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6836227137600612328ull);
    vlSelf->__PVT__axi4frag__DOT__r_addr_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13977799707640653293ull);
    vlSelf->__PVT__axi4frag__DOT__r_len_1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8574245513625628631ull);
    vlSelf->__PVT__axi4frag__DOT__len_1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5321446280744316141ull);
    vlSelf->__PVT__axi4frag__DOT__addr_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11301749099445859812ull);
    vlSelf->__PVT__axi4frag__DOT__wbeats_latched = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14796538934206825436ull);
    vlSelf->__PVT__axi4frag__DOT___in_awready_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3403373395936943084ull);
    vlSelf->__PVT__axi4frag__DOT__wbeats_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 394466718039040619ull);
    vlSelf->__PVT__axi4frag__DOT__w_counter = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7601535065274091641ull);
    vlSelf->__PVT__axi4frag__DOT__w_todo = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17318959709654242339ull);
    vlSelf->__PVT__axi4frag__DOT__error_0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3065784586732102436ull);
    vlSelf->__PVT__axi4frag__DOT__error_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8288690046960877048ull);
    vlSelf->__PVT__axi4frag__DOT__error_2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6173050324282269962ull);
    vlSelf->__PVT__axi4frag__DOT__error_3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5884551215470585874ull);
    vlSelf->__PVT__axi4frag__DOT__error_4 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11537824275499491770ull);
    vlSelf->__PVT__axi4frag__DOT__error_5 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5002828241599292632ull);
    vlSelf->__PVT__axi4frag__DOT__error_6 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13712279207882116092ull);
    vlSelf->__PVT__axi4frag__DOT__error_7 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7582959006385210138ull);
    vlSelf->__PVT__axi4frag__DOT__error_8 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4509066877090620848ull);
    vlSelf->__PVT__axi4frag__DOT__error_9 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16977831730550723145ull);
    vlSelf->__PVT__axi4frag__DOT__error_10 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13616920035842303278ull);
    vlSelf->__PVT__axi4frag__DOT__error_11 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14558151013821758798ull);
    vlSelf->__PVT__axi4frag__DOT__error_12 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5863668210220186118ull);
    vlSelf->__PVT__axi4frag__DOT__error_13 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2338794397144378409ull);
    vlSelf->__PVT__axi4frag__DOT__error_14 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11193113482524549845ull);
    vlSelf->__PVT__axi4frag__DOT__error_15 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5359719667847588185ull);
    vlSelf->axi4frag__DOT____VdfgRegularize_h068021ff_0_0 = 0;
    vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14448437204350866794ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15191973429072750448ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1078507717654028640ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__ram = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15787590159320253643ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2071281573748040089ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7156776479898679472ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15985460261769686511ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15723304250282961414ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2003412297482940060ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7073261893804222976ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__ram = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8760903768923569129ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17549547853796018041ull);
    vlSelf->__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14084406269431391227ull);
    vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5795449670501468644ull);
    vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15244910208999440090ull);
    vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram = VL_SCOPED_RAND_RESET_Q(37, __VscopeHash, 6942967700032419406ull);
    vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7483347222006255888ull);
    vlSelf->__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1848524278478971492ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__in_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17930765101099564685ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__in_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16778799026259535744ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__in_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15128210253940889122ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__in_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12520931381096939888ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__in_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7626510339619695722ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__in_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10719698007067941694ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__in_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6624234593778603172ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__in_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17684885864204679810ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__in_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8469852520640081399ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__in_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12185227611819149287ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__out_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13690734601485260595ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__out_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15757709990103847408ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7249352586815297656ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__count_r = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3162220106299012678ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__count_w = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13485687946388484148ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__burst_count_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1412054082592108584ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__burst_count_w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11408836107080428743ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__delay_r = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 11334269414435757962ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__delay_w = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 2970467724421237711ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__ready_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9326951938165908519ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__axi4delay_delayer__DOT__FIFO_r[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 3094295743076920867ull);
    }
    vlSelf->__PVT__axi4delay_delayer__DOT__FIFO_r_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12804137922348608483ull);
    vlSelf->__PVT__axi4delay_delayer__DOT__out_count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13639598918094367208ull);
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8754609232764417811ull);
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2302728856754090738ull);
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13433152081590292273ull);
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12024647850271718154ull);
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13765131017024286782ull);
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7829207861026958431ull);
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10209384675067581121ull);
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4291873453183600658ull);
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3361747725652637542ull);
    vlSelf->__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13957801796362562013ull);
    vlSelf->__Vtask_lmrom__DOT__mrom__DOT__mrom_read__0__rdata = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__Vdly__lspi__DOT__mspi__DOT__paddr = 0;
    vlSelf->__Vdly__lspi__DOT__mspi__DOT__pwrite = 0;
    vlSelf->__Vdly__lspi__DOT__mspi__DOT__pwdata = 0;
    vlSelf->__Vdly__lspi__DOT__mspi__DOT__pstrb = 0;
    vlSelf->__Vdly__lspi__DOT__mspi__DOT__fsm_state = 0;
    vlSelf->__Vdly__lspi__DOT__mspi__DOT__set = 0;
    vlSelf->__Vdly__lspi__DOT__mspi__DOT__out_pready = 0;
    vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0;
    vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0;
    vlSelf->__Vdly__spi_sck = 0;
    vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0;
    vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0;
    vlSelf->__Vdly__spi_mosi = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data);
    vlSelf->__Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = 0;
}
