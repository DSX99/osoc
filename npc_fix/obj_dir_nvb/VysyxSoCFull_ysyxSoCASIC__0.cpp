// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

extern "C" void mrom_read(int raddr, int* rdata);

void VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic(IData/*31:0*/ raddr, IData/*31:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC____Vdpiimwrap_lmrom__DOT__mrom__DOT__mrom_read_TOP__ysyxSoCFull__asic\n"); );
    // Body
    rdata = 0U;
    int raddr__Vcvt;
    raddr__Vcvt = raddr;
    int rdata__Vcvt;
    mrom_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = (rdata__Vcvt);
}

void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ luart__DOT__muart__DOT____VdfgRegularize_h953d1cf6_0_0;
    luart__DOT__muart__DOT____VdfgRegularize_h953d1cf6_0_0 = 0;
    // Body
    luart__DOT__muart__DOT____VdfgRegularize_h953d1cf6_0_0 
        = ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__in_penable)) 
                                              & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__in_psel)));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(luart__DOT__muart__DOT____VdfgRegularize_h953d1cf6_0_0) 
           & (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwrite));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwrite)) 
           & (IData)(luart__DOT__muart__DOT____VdfgRegularize_h953d1cf6_0_0));
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
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__reset_status 
        = ((~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
}

void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__1\n"); );
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
    vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rready) 
            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rvalid)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rlast));
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
    vlSelfRef.__PVT__axi4yank__DOT___GEN_2 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arready));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid) 
           & (IData)(vlSelfRef.axi4yank__DOT____VdfgRegularize_h6c436e9c_0_0));
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

void VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___ico_sequent__TOP__ysyxSoCFull__asic__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_0_T_2 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arvalid));
    vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_0_T_2 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awvalid));
}

extern const VlUnpacked<CData/*5:0*/, 1024> VysyxSoCFull__ConstPool__TABLE_hcf4cd27d_0;

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__0(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __PVT__axi4xbar__DOT___readys_filter_T_1;
    __PVT__axi4xbar__DOT___readys_filter_T_1 = 0;
    CData/*2:0*/ __PVT__axi4xbar_1__DOT___readys_filter_T_1;
    __PVT__axi4xbar_1__DOT___readys_filter_T_1 = 0;
    CData/*2:0*/ __PVT__axi4xbar_1__DOT___readys_filter_T_3;
    __PVT__axi4xbar_1__DOT___readys_filter_T_3 = 0;
    SData/*15:0*/ __PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_4;
    __PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_4 = 0;
    SData/*15:0*/ __PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_5;
    __PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_5 = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq;
    __PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq = 0;
    CData/*0:0*/ __PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_0;
    __PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_0 = 0;
    CData/*0:0*/ __PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_1;
    __PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_1 = 0;
    SData/*9:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    SData/*9:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*0:0*/ __Vdly__axi4xbar__DOT__idle_2;
    __Vdly__axi4xbar__DOT__idle_2 = 0;
    CData/*0:0*/ __Vdly__axi4xbar__DOT__idle_3;
    __Vdly__axi4xbar__DOT__idle_3 = 0;
    CData/*0:0*/ __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap;
    __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__axi4xbar_1__DOT__idle_3;
    __Vdly__axi4xbar_1__DOT__idle_3 = 0;
    CData/*0:0*/ __Vdly__axi4xbar_1__DOT__idle_4;
    __Vdly__axi4xbar_1__DOT__idle_4 = 0;
    CData/*0:0*/ __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = 0;
    CData/*3:0*/ __Vdly__lkeyboard__DOT__mps2__DOT__count;
    __Vdly__lkeyboard__DOT__mps2__DOT__count = 0;
    CData/*0:0*/ __Vdly__axi4ram__DOT__w_full;
    __Vdly__axi4ram__DOT__w_full = 0;
    SData/*9:0*/ __Vdly__apbdelay_delayer__DOT__count;
    __Vdly__apbdelay_delayer__DOT__count = 0;
    IData/*19:0*/ __Vdly__apbdelay_delayer__DOT__delay;
    __Vdly__apbdelay_delayer__DOT__delay = 0;
    CData/*0:0*/ __Vdly__apbdelay_delayer__DOT__buff_pready;
    __Vdly__apbdelay_delayer__DOT__buff_pready = 0;
    CData/*1:0*/ __Vdly__axi42apb__DOT__state;
    __Vdly__axi42apb__DOT__state = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap = 0;
    CData/*0:0*/ __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_0;
    __Vdly__axi4frag__DOT__error_0 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_1;
    __Vdly__axi4frag__DOT__error_1 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_2;
    __Vdly__axi4frag__DOT__error_2 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_3;
    __Vdly__axi4frag__DOT__error_3 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_4;
    __Vdly__axi4frag__DOT__error_4 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_5;
    __Vdly__axi4frag__DOT__error_5 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_6;
    __Vdly__axi4frag__DOT__error_6 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_7;
    __Vdly__axi4frag__DOT__error_7 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_8;
    __Vdly__axi4frag__DOT__error_8 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_9;
    __Vdly__axi4frag__DOT__error_9 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_10;
    __Vdly__axi4frag__DOT__error_10 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_11;
    __Vdly__axi4frag__DOT__error_11 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_12;
    __Vdly__axi4frag__DOT__error_12 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_13;
    __Vdly__axi4frag__DOT__error_13 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_14;
    __Vdly__axi4frag__DOT__error_14 = 0;
    CData/*1:0*/ __Vdly__axi4frag__DOT__error_15;
    __Vdly__axi4frag__DOT__error_15 = 0;
    CData/*0:0*/ __Vdly__axi4frag__DOT__deq_q__DOT__full;
    __Vdly__axi4frag__DOT__deq_q__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4frag__DOT__deq_q_1__DOT__full;
    __Vdly__axi4frag__DOT__deq_q_1__DOT__full = 0;
    CData/*0:0*/ __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full;
    __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full = 0;
    CData/*2:0*/ __Vdly__axi4delay_delayer__DOT__FIFO_r_count;
    __Vdly__axi4delay_delayer__DOT__FIFO_r_count = 0;
    IData/*19:0*/ __Vdly__axi4delay_delayer__DOT__delay_w;
    __Vdly__axi4delay_delayer__DOT__delay_w = 0;
    IData/*19:0*/ __Vdly__axi4delay_delayer__DOT__delay_r;
    __Vdly__axi4delay_delayer__DOT__delay_r = 0;
    SData/*9:0*/ __Vdly__axi4delay_delayer__DOT__count_w;
    __Vdly__axi4delay_delayer__DOT__count_w = 0;
    SData/*9:0*/ __Vdly__axi4delay_delayer__DOT__count_r;
    __Vdly__axi4delay_delayer__DOT__count_r = 0;
    CData/*1:0*/ __VdlyVal__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*2:0*/ __VdlyVal__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*3:0*/ __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*3:0*/ __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__lgpio__DOT__mgpio__DOT__hex__v0;
    __VdlySet__lgpio__DOT__mgpio__DOT__hex__v0 = 0;
    CData/*7:0*/ __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v8;
    __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v8 = 0;
    CData/*0:0*/ __VdlySet__lgpio__DOT__mgpio__DOT__hex__v8;
    __VdlySet__lgpio__DOT__mgpio__DOT__hex__v8 = 0;
    CData/*7:0*/ __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v9;
    __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v9 = 0;
    CData/*7:0*/ __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v10;
    __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v10 = 0;
    CData/*7:0*/ __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v11;
    __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v11 = 0;
    CData/*7:0*/ __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v12;
    __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v12 = 0;
    CData/*0:0*/ __VdlySet__lgpio__DOT__mgpio__DOT__hex__v12;
    __VdlySet__lgpio__DOT__mgpio__DOT__hex__v12 = 0;
    CData/*7:0*/ __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v13;
    __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v13 = 0;
    CData/*7:0*/ __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v14;
    __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v14 = 0;
    CData/*7:0*/ __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v15;
    __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v15 = 0;
    CData/*7:0*/ __VdlyVal__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    __VdlyVal__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*1:0*/ __VdlyDim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    __VdlyDim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*0:0*/ __VdlySet__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    __VdlySet__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*7:0*/ __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    SData/*10:0*/ __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v0;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    SData/*10:0*/ __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v1;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    SData/*10:0*/ __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v2;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    SData/*10:0*/ __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v3;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0;
    QData/*46:0*/ __VdlyVal__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*35:0*/ __VdlyVal__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*5:0*/ __VdlyVal__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*46:0*/ __VdlyVal__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    QData/*38:0*/ __VdlyVal__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlyDim0__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4delay_delayer__DOT__FIFO_r__v0;
    __VdlySet__axi4delay_delayer__DOT__FIFO_r__v0 = 0;
    QData/*32:0*/ __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v8;
    __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v8 = 0;
    CData/*2:0*/ __VdlyDim0__axi4delay_delayer__DOT__FIFO_r__v8;
    __VdlyDim0__axi4delay_delayer__DOT__FIFO_r__v8 = 0;
    CData/*0:0*/ __VdlySet__axi4delay_delayer__DOT__FIFO_r__v8;
    __VdlySet__axi4delay_delayer__DOT__FIFO_r__v8 = 0;
    CData/*0:0*/ __VdlySet__axi4delay_delayer__DOT__FIFO_r__v9;
    __VdlySet__axi4delay_delayer__DOT__FIFO_r__v9 = 0;
    QData/*32:0*/ __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v10;
    __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v10 = 0;
    CData/*0:0*/ __VdlySet__axi4delay_delayer__DOT__FIFO_r__v10;
    __VdlySet__axi4delay_delayer__DOT__FIFO_r__v10 = 0;
    QData/*32:0*/ __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v11;
    __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v11 = 0;
    QData/*32:0*/ __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v12;
    __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v12 = 0;
    QData/*32:0*/ __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v13;
    __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v13 = 0;
    QData/*32:0*/ __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v14;
    __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v14 = 0;
    QData/*32:0*/ __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v15;
    __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v15 = 0;
    QData/*32:0*/ __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v16;
    __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v16 = 0;
    // Body
    __VdlySet__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 0U;
    __Vdly__lkeyboard__DOT__mps2__DOT__count = vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__count;
    __VdlySet__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full = vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full;
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
                         & (0U == ((6U & (4U ^ (0x0000001eU 
                                                & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                   >> 0x0000001bU)))) 
                                   | (1U & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                            >> 0x00000018U))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2930: Assertion failed in %m: Assertion failed: do not support write operations\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.lmrom", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2930, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2932: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.lmrom", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2932, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
                         & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                            >> 1U)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2936: Assertion failed in %m: Assertion failed: do not support write operations\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.lmrom", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2936, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2938: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.lmrom", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2938, "", false);
    }
    __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((0x00000200U & ((~ 
                                                 ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wready) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid))) 
                                                << 9U)) 
                                | (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_todo))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5055: Assertion failed in %m: Assertion failed at Fragmenter.scala:181\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4frag", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5055, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5057: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4frag", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5057, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid)) 
                                   | (~ ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                          ? (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wvalid)))) 
                                  | (1U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_todo))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5061: Assertion failed in %m: Assertion failed at Fragmenter.scala:190\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4frag", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5061, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5063: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4frag", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5063, "", false);
    }
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 0U;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 0U;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 0U;
    __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 0U;
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap = vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    __VdlySet__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__axi4frag__DOT__deq_q__DOT__full = vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full;
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ (((IData)(1U) 
                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                           & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:592: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 592, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:594: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 594, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_0_T_2)) 
                                  | (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:598: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 598, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:600: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 600, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ (((IData)(1U) 
                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                                           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_0_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:604: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 604, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:606: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 606, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_0_T_2)) 
                                  | (7U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:610: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 610, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:612: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 612, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 1U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_1_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:616: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 616, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:618: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 618, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                                              >> 1U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_1_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:628: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 628, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:630: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 630, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 2U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_2_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:640: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 640, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:642: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 642, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                                              >> 2U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_2_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:652: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 652, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:654: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 654, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 3U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_3_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:664: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 664, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:666: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 666, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                                              >> 3U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_3_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:676: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 676, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:678: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 678, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 4U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_4_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:688: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 688, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:690: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 690, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                                              >> 4U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_4_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:700: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 700, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:702: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 702, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 5U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_5_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:712: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 712, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:714: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 714, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                                              >> 5U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_5_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:724: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 724, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:726: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 726, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 6U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_6_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:736: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 736, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:738: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 738, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                                              >> 6U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_6_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:748: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 748, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:750: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 750, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 7U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_7_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:760: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 760, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:762: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 762, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                                              >> 7U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_7_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:772: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 772, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:774: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 774, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 8U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_8_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:784: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 784, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:786: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 786, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                                              >> 8U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_8_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:796: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 796, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:798: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 798, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 9U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_9_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:808: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 808, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:810: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 810, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                                              >> 9U))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_9_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:820: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 820, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:822: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 822, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 0x0000000aU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_10_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:832: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 832, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:834: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 834, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                                              >> 0x0000000aU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_10_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:844: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 844, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:846: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 846, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 0x0000000bU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_11_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:856: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 856, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:858: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 858, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                                              >> 0x0000000bU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_11_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:868: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 868, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:870: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 870, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 0x0000000cU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_12_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:880: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 880, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:882: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 882, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                                              >> 0x0000000cU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_12_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:892: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 892, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:894: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 894, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 0x0000000dU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_13_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:904: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 904, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:906: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 906, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                                              >> 0x0000000dU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_13_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:916: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 916, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:918: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 918, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 0x0000000eU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_14_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:928: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 928, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:930: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 930, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                                              >> 0x0000000eU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_14_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:940: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 940, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:942: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 942, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                              >> 0x0000000fU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_15_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:952: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 952, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:954: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 954, "", false);
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.reset)) 
                      & (0U == ((8U & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                                              >> 0x0000000fU))) 
                                       << 3U)) | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_15_count))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:964: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 964, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:966: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 966, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__prefixOR_1)) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__winner_2_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:976: Assertion failed in %m: Assertion failed at Xbar.scala:286\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 976, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:978: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 978, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__anyValid)) 
                                   | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__prefixOR_1)) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__winner_2_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:982: Assertion failed in %m: Assertion failed at Xbar.scala:288\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 982, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:984: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 984, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__winner_3_0)) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__winner_3_1))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:988: Assertion failed in %m: Assertion failed at Xbar.scala:286\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 988, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:990: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 990, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__anyValid_1)) 
                                   | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__winner_3_0)) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__winner_3_1)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:994: Assertion failed in %m: Assertion failed at Xbar.scala:288\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 994, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:996: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 996, "", false);
    }
    __Vdly__axi4xbar__DOT__idle_3 = vlSelfRef.__PVT__axi4xbar__DOT__idle_3;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
        = vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    __Vdly__axi4frag__DOT__error_0 = vlSelfRef.__PVT__axi4frag__DOT__error_0;
    __Vdly__axi4frag__DOT__error_1 = vlSelfRef.__PVT__axi4frag__DOT__error_1;
    __Vdly__axi4frag__DOT__error_2 = vlSelfRef.__PVT__axi4frag__DOT__error_2;
    __Vdly__axi4frag__DOT__error_3 = vlSelfRef.__PVT__axi4frag__DOT__error_3;
    __Vdly__axi4frag__DOT__error_4 = vlSelfRef.__PVT__axi4frag__DOT__error_4;
    __Vdly__axi4frag__DOT__error_5 = vlSelfRef.__PVT__axi4frag__DOT__error_5;
    __Vdly__axi4frag__DOT__error_6 = vlSelfRef.__PVT__axi4frag__DOT__error_6;
    __Vdly__axi4frag__DOT__error_7 = vlSelfRef.__PVT__axi4frag__DOT__error_7;
    __Vdly__axi4frag__DOT__error_8 = vlSelfRef.__PVT__axi4frag__DOT__error_8;
    __Vdly__axi4frag__DOT__error_9 = vlSelfRef.__PVT__axi4frag__DOT__error_9;
    __Vdly__axi4frag__DOT__error_10 = vlSelfRef.__PVT__axi4frag__DOT__error_10;
    __Vdly__axi4frag__DOT__error_11 = vlSelfRef.__PVT__axi4frag__DOT__error_11;
    __Vdly__axi4frag__DOT__error_12 = vlSelfRef.__PVT__axi4frag__DOT__error_12;
    __Vdly__axi4frag__DOT__error_13 = vlSelfRef.__PVT__axi4frag__DOT__error_13;
    __Vdly__axi4frag__DOT__error_14 = vlSelfRef.__PVT__axi4frag__DOT__error_14;
    __Vdly__axi4frag__DOT__error_15 = vlSelfRef.__PVT__axi4frag__DOT__error_15;
    __Vdly__axi4delay_delayer__DOT__delay_w = vlSelfRef.__PVT__axi4delay_delayer__DOT__delay_w;
    __Vdly__axi4delay_delayer__DOT__count_w = vlSelfRef.__PVT__axi4delay_delayer__DOT__count_w;
    __VdlySet__lgpio__DOT__mgpio__DOT__hex__v0 = 0U;
    __VdlySet__lgpio__DOT__mgpio__DOT__hex__v8 = 0U;
    __VdlySet__lgpio__DOT__mgpio__DOT__hex__v12 = 0U;
    __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap = vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap;
    __Vdly__axi4xbar__DOT__idle_2 = vlSelfRef.__PVT__axi4xbar__DOT__idle_2;
    __Vdly__axi4delay_delayer__DOT__FIFO_r_count = vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r_count;
    __VdlySet__axi4delay_delayer__DOT__FIFO_r__v0 = 0U;
    __VdlySet__axi4delay_delayer__DOT__FIFO_r__v8 = 0U;
    __VdlySet__axi4delay_delayer__DOT__FIFO_r__v9 = 0U;
    __VdlySet__axi4delay_delayer__DOT__FIFO_r__v10 = 0U;
    __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap_1 = vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    __Vdly__axi4delay_delayer__DOT__delay_r = vlSelfRef.__PVT__axi4delay_delayer__DOT__delay_r;
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                      & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_0_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1764: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1764, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1766: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1766, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                      & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1770: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1770, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1772: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1772, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                      & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_0_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1776: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1776, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1778: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1778, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (((IData)(1U) 
                                       << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                      & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_0_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1782: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1782, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1784: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1784, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 1U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_1_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1788: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1788, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1790: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1790, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 1U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_1_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1794: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1794, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1796: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1796, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 1U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_1_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1800: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1800, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1802: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1802, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 1U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_1_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1806: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1806, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1808: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1808, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 2U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_2_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1812: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1812, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1814: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1814, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 2U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_2_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1818: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1818, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1820: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1820, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 2U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_2_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1824: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1824, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1826: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1826, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 2U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_2_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1830: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1830, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1832: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1832, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 3U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_3_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1836: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1836, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1838: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1838, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 3U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_3_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1842: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1842, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1844: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1844, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 3U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_3_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1848: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1848, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1850: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1850, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 3U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_3_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1854: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1854, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1856: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1856, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 4U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_4_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1860: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1860, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1862: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1862, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 4U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_4_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1866: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1866, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1868: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1868, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 4U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_4_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1872: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1872, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1874: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1874, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 4U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_4_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1878: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1878, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1880: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1880, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 5U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_5_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1884: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1884, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1886: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1886, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 5U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_5_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1890: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1890, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1892: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1892, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 5U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_5_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1896: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1896, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1898: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1898, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 5U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_5_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1902: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1902, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1904: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1904, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 6U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_6_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1908: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1908, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1910: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1910, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 6U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_6_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1914: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1914, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1916: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1916, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 6U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_6_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1920: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1920, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1922: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1922, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 6U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_6_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1926: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1926, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1928: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1928, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 7U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_7_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1932: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1932, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1934: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1934, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 7U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_7_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1938: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1938, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1940: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1940, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 7U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_7_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1944: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1944, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1946: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1946, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 7U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_7_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1950: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1950, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1952: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1952, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 8U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_8_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1956: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1956, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1958: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1958, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 8U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_8_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1962: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1962, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1964: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1964, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 8U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_8_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1968: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1968, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1970: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1970, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 8U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_8_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1974: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1974, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1976: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1976, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 9U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_9_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1980: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1980, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1982: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1982, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 9U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_9_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1986: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1986, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1988: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1988, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 9U))) | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_9_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1992: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1992, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:1994: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1994, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 9U))) | 
                                  (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_9_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:1998: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 1998, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2000: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2000, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000aU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_10_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2004: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2004, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2006: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2006, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000aU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_10_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2010: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2010, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2012: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2012, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000aU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_10_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2016: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2016, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2018: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2018, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000aU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_10_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2022: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2022, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2024: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2024, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000bU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_11_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2028: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2028, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2030: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2030, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000bU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_11_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2034: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2034, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2036: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2036, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000bU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_11_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2040: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2040, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2042: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2042, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000bU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_11_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2046: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2046, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2048: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2048, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000cU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_12_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2052: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2052, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2054: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2054, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000cU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_12_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2058: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2058, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2060: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2060, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000cU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_12_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2064: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2064, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2066: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2066, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000cU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_12_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2070: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2070, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2072: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2072, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000dU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_13_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2076: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2076, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2078: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2078, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000dU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_13_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2082: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2082, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2084: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2084, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000dU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_13_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2088: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2088, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2090: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2090, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000dU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_13_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2094: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2094, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2096: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2096, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000eU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_14_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2100: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2100, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2102: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2102, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000eU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_14_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2106: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2106, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2108: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2108, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000eU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_14_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2112: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2112, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2114: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2114, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000eU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_14_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2118: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2118, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2120: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2120, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                         >> 0x0000000fU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_15_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2124: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2124, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2126: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2126, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                         >> 0x0000000fU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_15_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2130: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2130, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2132: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2132, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                         >> 0x0000000fU))) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_15_count)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2136: Assertion failed in %m: Assertion failed at Xbar.scala:131\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2136, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2138: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2138, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                         >> 0x0000000fU))) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_15_count))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2142: Assertion failed in %m: Assertion failed at Xbar.scala:132\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2142, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2144: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2144, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1)) 
                                   | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1))) 
                                  & ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1) 
                                         | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1))) 
                                     | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_2)))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2150: Assertion failed in %m: Assertion failed at Xbar.scala:286\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2150, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2152: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2152, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid)) 
                                    | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1)) 
                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1)) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_2)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2156: Assertion failed in %m: Assertion failed at Xbar.scala:288\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2156, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2158: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2158, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_0)) 
                                  | (~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_2))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2162: Assertion failed in %m: Assertion failed at Xbar.scala:286\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2162, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2164: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2164, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid_1)) 
                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_0)) 
                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_2)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:2168: Assertion failed in %m: Assertion failed at Xbar.scala:288\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2168, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:2170: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4xbar_1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 2170, "", false);
    }
    __VdlySet__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__axi4frag__DOT__deq_q_1__DOT__full = vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full;
    __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    __VdlySet__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    __Vdly__axi4delay_delayer__DOT__count_r = vlSelfRef.__PVT__axi4delay_delayer__DOT__count_r;
    vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__pwdata 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwdata;
    vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__pstrb = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pstrb;
    vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__fsm_state 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__fsm_state;
    vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__set = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__set;
    vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__paddr = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__paddr;
    vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__pwrite 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwrite;
    __VdlySet__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0U;
    if (VL_UNLIKELY(((((~ (IData)(vlSymsp->TOP.reset)) 
                       & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty))) 
                      & (0U != (0x000000ffU & (IData)(
                                                      (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                       >> 3U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3305: Assertion failed in %m: Assertion failed at AXI4ToAPB.scala:61\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi42apb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 3305, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3307: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi42apb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 3307, "", false);
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSymsp->TOP.reset)) 
                       & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty))) 
                      & (0U != (0x000000ffU & (IData)(
                                                      (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                       >> 3U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3311: Assertion failed in %m: Assertion failed at AXI4ToAPB.scala:62\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi42apb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 3311, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3313: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi42apb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 3313, "", false);
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSymsp->TOP.reset)) 
                       & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty))) 
                      & (2U < (7U & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3317: Assertion failed in %m: Assertion failed at AXI4ToAPB.scala:64\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi42apb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 3317, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3319: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi42apb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 3319, "", false);
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSymsp->TOP.reset)) 
                       & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty))) 
                      & (2U < (7U & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:3323: Assertion failed in %m: Assertion failed at AXI4ToAPB.scala:65\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi42apb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 3323, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:3325: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi42apb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 3325, "", false);
    }
    __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    __Vdly__axi4xbar_1__DOT__idle_3 = vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3;
    __Vdly__apbdelay_delayer__DOT__count = vlSelfRef.__PVT__apbdelay_delayer__DOT__count;
    __Vdly__apbdelay_delayer__DOT__delay = vlSelfRef.__PVT__apbdelay_delayer__DOT__delay;
    __Vdly__axi4ram__DOT__w_full = vlSelfRef.__PVT__axi4ram__DOT__w_full;
    __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0U;
    __Vdly__axi4xbar_1__DOT__idle_4 = vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4;
    __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    __VdlySet__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    __Vdly__axi42apb__DOT__state = vlSelfRef.__PVT__axi42apb__DOT__state;
    __Vdly__apbdelay_delayer__DOT__buff_pready = vlSelfRef.__PVT__apbdelay_delayer__DOT__buff_pready;
    __PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_4 
        = (((((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full) 
                << 3U) | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full) 
                                   << 3U) | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full) 
                                     << 1U) | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full))) 
                                << 8U)) | ((((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    __PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_5 
        = (((((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full) 
                << 3U) | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full))) 
             << 0x0000000cU) | (((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full) 
                                   << 3U) | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full) 
                                     << 1U) | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full))) 
                                << 8U)) | ((((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid)) 
                                  | ((IData)(__PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_4) 
                                     >> (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4375: Assertion failed in %m: Assertion failed at UserYanker.scala:69\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4yank.unnamedblk1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4375, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4377: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4yank.unnamedblk1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4377, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid)) 
                                  | ((IData)(__PVT__axi4yank__DOT__unnamedblk1__DOT___GEN_5) 
                                     >> (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:4381: Assertion failed in %m: Assertion failed at UserYanker.scala:98\n\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4yank.unnamedblk1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4381, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:4383: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.asic.axi4yank.unnamedblk1", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4383, "", false);
    }
    if (((0x0eU <= (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
         & (0x15U >= (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))) {
        if (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) {
            __VdlyVal__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 
                = ((0x000000f0U & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                   [(3U & (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                            >> 1U) 
                                           - (IData)(3U)))] 
                                   << 4U)) | (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__dio));
            __VdlyDim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 
                = (3U & (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                          >> 1U) - (IData)(3U)));
            __VdlySet__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0 = 1U;
        }
    }
    if (vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data;
        __VdlyDim0__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap;
        __VdlySet__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_13_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_13_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 0x0000000dU))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                 >> 0x0000000dU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_12_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_12_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 0x0000000cU))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                 >> 0x0000000cU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_11_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_11_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 0x0000000bU))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                 >> 0x0000000bU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_10_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_10_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 0x0000000aU))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                 >> 0x0000000aU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_9_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_9_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 9U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                        >> 9U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_8_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_8_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 8U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                        >> 8U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_7_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_7_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 7U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                        >> 7U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_6_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_6_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 6U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                        >> 6U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_4_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_4_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 4U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                        >> 4U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_0_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_0_count) 
                   + (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                      & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1))) 
                  - (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                     & (IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_1_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_1_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 1U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                        >> 1U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_2_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_2_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 2U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                        >> 2U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_3_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_3_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 3U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                        >> 3U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_5_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_5_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 5U))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                        >> 5U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_14_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_14_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 0x0000000eU))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                 >> 0x0000000eU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_15_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__arFIFOMap_15_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                         >> 0x0000000fU))) - ((IData)(vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                                 >> 0x0000000fU)))));
    if (((IData)(vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__W0_en) 
         & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb))) {
        __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v0 
            = (0x000000ffU & vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata);
        __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v0 
            = (0x000007ffU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                              >> 2U));
        __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__W0_en) 
         & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb) 
            >> 1U))) {
        __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v1 
            = (0x000000ffU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata 
                              >> 8U));
        __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v1 
            = (0x000007ffU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                              >> 2U));
        __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v1 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__W0_en) 
         & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb) 
            >> 2U))) {
        __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v2 
            = (0x000000ffU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata 
                              >> 0x10U));
        __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v2 
            = (0x000007ffU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                              >> 2U));
        __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v2 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__W0_en) 
         & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb) 
            >> 3U))) {
        __VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v3 
            = (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata 
               >> 0x18U);
        __VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v3 
            = (0x000007ffU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                              >> 2U));
        __VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v3 = 1U;
    }
    vlSelfRef.__PVT__axi4xbar_1__DOT__latched = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && ((~ 
                                                      ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awready) 
                                                       & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__in_0_awvalid))) 
                                                     & (((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                                                         & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid)) 
                                                        | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__latched))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_13_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_13_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000dU))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                 >> 0x0000000dU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_12_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_12_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000cU))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                 >> 0x0000000cU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_11_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_11_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000bU))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                 >> 0x0000000bU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_10_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_10_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000aU))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                 >> 0x0000000aU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_9_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_9_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 9U))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                        >> 9U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_8_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_8_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 8U))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                        >> 8U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_7_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_7_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 7U))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                        >> 7U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_6_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_6_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 6U))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                        >> 6U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_0_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_0_count) 
                   + (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                      & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1))) 
                  - (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                     & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_1_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_1_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 1U))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                        >> 1U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_2_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_2_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 2U))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                        >> 2U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_3_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_3_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 3U))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                        >> 3U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_4_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_4_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 4U))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                        >> 4U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_5_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_5_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 5U))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                        >> 5U)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_14_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_14_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000eU))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                 >> 0x0000000eU)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_15_count 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awFIFOMap_15_count) 
                   + ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_1) 
                      & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                         >> 0x0000000fU))) - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                                 >> 0x0000000fU)))));
    if (vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data;
        __VdlyDim0__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap;
        __VdlySet__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((~ ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awready) 
                & (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_awvalid))) 
            & (((IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_valid) 
                & (0U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter))) 
               | (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched))));
    vlSelfRef.__PVT__axi4xbar__DOT__latched = ((1U 
                                                & (~ (IData)(vlSymsp->TOP.reset))) 
                                               && ((~ 
                                                    ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_awready) 
                                                     & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__in_0_awvalid))) 
                                                   & (((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__full)) 
                                                       & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid)) 
                                                      | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__latched))));
    if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata)) 
                << 4U) | (QData)((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb)));
        __VdlyDim0__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
        __VdlySet__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                << 0x0000002bU) | (((QData)((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr)) 
                                    << 0x0000000bU) 
                                   | (QData)((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize))));
        __VdlyDim0__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
        __VdlySet__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                << 0x0000002bU) | (((QData)((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr)) 
                                    << 0x0000000bU) 
                                   | (QData)((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize))));
        __VdlyDim0__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
        __VdlySet__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.__PVT__axi4ram__DOT__r_full = ((1U & 
                                              (~ (IData)(vlSymsp->TOP.reset))) 
                                             && ((IData)(vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_en) 
                                                 | ((~ 
                                                     ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready) 
                                                      & (IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full))) 
                                                    & (IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full))));
    if (vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((IData)(vlSelfRef.__PVT__axi42apb__DOT__bid_reg) 
                << 2U) | (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_bresp));
        __VdlyDim0__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
        __VdlySet__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we) {
        __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                              >> 3U));
        __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
        __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 1U;
    }
    __Vdly__axi4ram__DOT__w_full = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && ((IData)(vlSelfRef.__PVT__axi4ram__DOT___GEN) 
                                        | ((~ ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_bready) 
                                               & (IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full))) 
                                           & (IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full))));
    if (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) {
        __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in;
        __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top;
        __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 1U;
    }
    vlSelfRef.__PVT__lmrom__DOT__state = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                                & ((IData)(vlSelfRef.__PVT__lmrom__DOT__state)
                                                    ? 
                                                   (~ 
                                                    (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
                                                      & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)
                                                          ? 
                                                         ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
                                                          >> 1U)
                                                          : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_1))) 
                                                     & (IData)(vlSelfRef.__PVT__lmrom__DOT__state)))
                                                    : (IData)(vlSelfRef.__PVT__lmrom__DOT___nodeIn_rid_T))));
    if (vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = (((QData)((IData)(vlSelfRef.__PVT__axi42apb__DOT__rid_reg)) 
                << 0x00000023U) | (((QData)((IData)(
                                                    ((1U 
                                                      == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))
                                                      ? vlSelfRef.__PVT__apbdelay_delayer__DOT__in_prdata
                                                      : vlSelfRef.__PVT__axi42apb__DOT__nodeIn_rdata_r))) 
                                    << 3U) | (QData)((IData)(
                                                             (1U 
                                                              | ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_bresp) 
                                                                 << 1U))))));
        __VdlyDim0__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
        __VdlySet__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_dat8_w_reg 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_dat8_w;
    vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT___R0_en_d0 
        = vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_en;
    if (vlSelfRef.__PVT__lmrom__DOT___nodeIn_rid_T) {
        vlSelfRef.__PVT__lmrom__DOT__nodeIn_rdata_r 
            = vlSelfRef.__PVT__lmrom__DOT___mrom_rdata;
        vlSelfRef.__PVT__lmrom__DOT__nodeIn_rid_r = vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid;
    }
    vlSelfRef.__PVT__axi4ram__DOT__r_sel1 = (0x7800U 
                                             == (0x00007fffU 
                                                 & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                    >> 0x0000000dU)));
    vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0 
        = (0x000007ffU & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                          >> 2U));
    if (vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_en) {
        vlSelfRef.__PVT__axi4ram__DOT__r_id = vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid;
    }
    if (vlSelfRef.__PVT__axi4ram__DOT__rdata_REG) {
        vlSelfRef.__PVT__axi4ram__DOT__rdata_r0 = (0x000000ffU 
                                                   & vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data);
        vlSelfRef.__PVT__axi4ram__DOT__rdata_r1 = (0x000000ffU 
                                                   & (vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                      >> 8U));
        vlSelfRef.__PVT__axi4ram__DOT__rdata_r2 = (0x000000ffU 
                                                   & (vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                      >> 0x10U));
        vlSelfRef.__PVT__axi4ram__DOT__rdata_r3 = (vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                   >> 0x18U);
    }
    vlSelfRef.__PVT__axi4ram__DOT__w_sel1 = (0x7800U 
                                             == (0x00007fffU 
                                                 & (vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                    >> 0x0000000dU)));
    if (vlSelfRef.__PVT__axi4ram__DOT___GEN) {
        vlSelfRef.__PVT__axi4ram__DOT__w_id = vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid;
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2) 
              & ((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid))));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 1U));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 2U));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 3U));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 4U));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 5U));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 6U));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 7U));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 8U));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 9U));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000aU));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000bU));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000cU));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000dU));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000eU));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_2)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
              >> 0x0000000fU));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len))));
    }
    if (vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_0_T_2) {
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_last 
            = vlSelfRef.__PVT__axi4xbar__DOT__requestARIO_0_1;
    }
    __PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_0 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arready) 
           & (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid));
    if (__PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_0) {
        vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1 
            = (vlSelfRef.__PVT__axi4frag__DOT__addr 
               + (0x0000ffffU & ((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize))));
        vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
            = (0x007fffffU & ((0xffU | ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len) 
                                        << 8U)) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize)));
        vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1 
            = (~ vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr);
        vlSelfRef.__PVT__axi4frag__DOT__r_len = (0x000000ffU 
                                                 & ((IData)(vlSelfRef.__PVT__axi4frag__DOT__len) 
                                                    - (IData)(1U)));
        vlSelfRef.__PVT__axi4frag__DOT__r_addr = ((0U 
                                                   == (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arburst))
                                                   ? vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arburst))
                                                    ? 
                                                   ((0x00007fffU 
                                                     & (vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1 
                                                        & (vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
                                                           >> 8U))) 
                                                    | (~ 
                                                       ((0xffff8000U 
                                                         & vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1) 
                                                        | (0x00007fffU 
                                                           & (vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___mux_addr_T_1 
                                                              | (vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___wrapMask_T_1 
                                                                 >> 8U))))))
                                                    : vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk3__DOT___inc_addr_T_1));
    }
    if (vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__do_enq) {
        vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
            = (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr)) 
                << 0x0000000dU) | (QData)((IData)((
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen) 
                                                    << 5U) 
                                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arsize) 
                                                       << 2U) 
                                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arburst))))));
    }
    if (vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_0_T_2) {
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_0_last 
            = vlSelfRef.__PVT__axi4xbar__DOT__requestAWIO_0_1;
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)) 
           & ((IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8) 
              & ((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid))));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 1U));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 2U));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 3U));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 4U));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 5U));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 6U));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 7U));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 8U));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 9U));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000aU));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000bU));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000cU));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000dU));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000eU));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    __PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq 
        = (((~ (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
            & (IData)(vlSelfRef.__PVT__axi4yank__DOT___GEN_8)) 
           & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
              >> 0x0000000fU));
    if (__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last 
            = (1U & (~ (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1))));
    }
    __PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_1 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_awready) 
           & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_13_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_12_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_11_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_10_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_9_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_8_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_7_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_6_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_1_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_2_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_3_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_4_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_5_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_14_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_15_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_13_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_12_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_11_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_10_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_9_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_8_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_7_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_6_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_4_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_1_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_2_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_3_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_5_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_14_count = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_15_count = 0U;
        __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full = 0U;
        __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_count = 0U;
        __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 = 0U;
        __Vdly__axi4frag__DOT__deq_q__DOT__full = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_0_count = 0U;
        __Vdly__axi4frag__DOT__error_0 = 0U;
        __Vdly__axi4frag__DOT__error_1 = 0U;
        __Vdly__axi4frag__DOT__error_2 = 0U;
        __Vdly__axi4frag__DOT__error_3 = 0U;
        __Vdly__axi4frag__DOT__error_4 = 0U;
        __Vdly__axi4frag__DOT__error_5 = 0U;
        __Vdly__axi4frag__DOT__error_6 = 0U;
        __Vdly__axi4frag__DOT__error_7 = 0U;
        __Vdly__axi4frag__DOT__error_8 = 0U;
        __Vdly__axi4frag__DOT__error_9 = 0U;
        __Vdly__axi4frag__DOT__error_10 = 0U;
        __Vdly__axi4frag__DOT__error_11 = 0U;
        __Vdly__axi4frag__DOT__error_12 = 0U;
        __Vdly__axi4frag__DOT__error_13 = 0U;
        __Vdly__axi4frag__DOT__error_14 = 0U;
        __Vdly__axi4frag__DOT__error_15 = 0U;
        __Vdly__axi4delay_delayer__DOT__delay_w = 0U;
        __Vdly__axi4delay_delayer__DOT__count_w = 0U;
        __VdlySet__lgpio__DOT__mgpio__DOT__hex__v0 = 1U;
        __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap = 0U;
        __Vdly__axi4delay_delayer__DOT__FIFO_r_count = 0U;
        __VdlySet__axi4delay_delayer__DOT__FIFO_r__v0 = 1U;
        __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap_1 = 0U;
        __Vdly__axi4delay_delayer__DOT__delay_r = 0U;
        __Vdly__axi4frag__DOT__deq_q_1__DOT__full = 0U;
        __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap = 0U;
        __Vdly__axi4delay_delayer__DOT__count_r = 0U;
        __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap = 0U;
        __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap = 0U;
        __Vdly__axi42apb__DOT__state = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full = 0U;
        vlSelfRef.__PVT__axi4frag__DOT__busy = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full = 0U;
        __Vdly__axi4xbar__DOT__idle_3 = 1U;
        vlSelfRef.__PVT__axi4xbar__DOT__readys_mask_1 = 3U;
        vlSelfRef.__PVT__axi4xbar__DOT__state_3_0 = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__state_3_1 = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full = 0U;
        __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full = 0U;
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__led = 0U;
        __Vdly__axi4xbar__DOT__idle_2 = 1U;
        vlSelfRef.__PVT__axi4xbar__DOT__readys_mask = 3U;
        vlSelfRef.__PVT__axi4xbar__DOT__state_2_0 = 0U;
        vlSelfRef.__PVT__axi4xbar__DOT__state_2_1 = 0U;
        vlSelfRef.__PVT__axi4frag__DOT__busy_1 = 0U;
        __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full = 0U;
        __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full = 0U;
        __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full = 0U;
        __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full = 0U;
        __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 = 0U;
        vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full = 0U;
        __Vdly__apbdelay_delayer__DOT__buff_pready = 0U;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__buff_prdata = 0U;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__buff_pslverr = 0U;
        vlSelfRef.__PVT__axi4frag__DOT__w_counter = 0U;
        __Vdly__axi4xbar_1__DOT__idle_3 = 1U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask = 7U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0 = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_1 = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2 = 0U;
        __Vdly__axi4xbar_1__DOT__idle_4 = 1U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1 = 7U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0 = 0U;
        vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2 = 0U;
        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__out = 0U;
        __Vdly__lkeyboard__DOT__mps2__DOT__count = 0U;
        __Vdly__apbdelay_delayer__DOT__count = 0U;
        __Vdly__apbdelay_delayer__DOT__delay = 0U;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__set = 0U;
    } else {
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_13_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_13_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                               >> 0x0000000dU) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_12_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_12_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                               >> 0x0000000cU) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_11_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_11_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                               >> 0x0000000bU) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_10_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_10_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                               >> 0x0000000aU) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_9_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_9_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                               >> 9U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_8_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_8_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                               >> 8U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_7_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_7_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                               >> 7U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_6_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_6_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                               >> 6U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_1_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_1_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                               >> 1U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_2_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_2_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                               >> 2U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_3_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_3_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                               >> 3U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_4_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_4_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                               >> 4U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_5_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_5_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                               >> 5U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_14_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_14_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                               >> 0x0000000eU) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_15_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_15_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                               >> 0x0000000fU) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_13_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_13_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 0x0000000dU) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_12_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_12_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 0x0000000cU) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_11_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_11_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 0x0000000bU) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_10_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_10_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 0x0000000aU) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_9_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_9_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 9U) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_8_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_8_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 8U) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_7_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_7_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 7U) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_6_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_6_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 6U) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_4_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_4_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 4U) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_1_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_1_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 1U) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_2_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_2_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 2U) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_3_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_3_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 3U) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_5_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_5_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 5U) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_14_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_14_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 0x0000000eU) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_15_count 
            = (7U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_15_count) 
                     - (1U & ((((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                               >> 0x0000000fU) & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4)))));
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full) 
                  & (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready)) 
                 & (IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid)))) {
            __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full 
                = vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) {
            __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_count 
            = (7U & (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__arFIFOMap_0_count) 
                      + (IData)(vlSelfRef.__PVT__axi4xbar__DOT___arFIFOMap_0_T_2)) 
                     - (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                        & (IData)(vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4))));
        if (vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq) {
            __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full) 
                  & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready)) 
                 & (IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_arvalid)))) {
            __Vdly__axi4frag__DOT__deq_q__DOT__full 
                = vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__do_enq;
        }
        vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_0_count 
            = (7U & (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awFIFOMap_0_count) 
                      + (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_0_T_2)) 
                     - (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                        & (IData)(vlSelfRef.__PVT__axi4xbar__DOT___awFIFOMap_15_T_4))));
        vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 
            = (0x0000ffffU & ((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)));
        vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3 
            = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid));
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
             & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_0 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_0) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 1U) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_1 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_1) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 2U) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_2 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_2) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 3U) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_3 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_3) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 4U) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_4 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_4) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 5U) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_5 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_5) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 6U) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_6 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_6) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 7U) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_7 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_7) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 8U) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_8 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_8) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 9U) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_9 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_9) 
                                                  | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0x0aU) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_10 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_10) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0x0bU) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_11 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_11) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0x0cU) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_12 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_12) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0x0dU) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_13 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_13) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0x0eU) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_14 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_14) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
              >> 0x0fU) & (IData)(vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_3))) {
            __Vdly__axi4frag__DOT__error_15 = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__axi4frag__DOT__error_15) 
                                                   | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp)));
        }
        if (vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awvalid) {
            __Vdly__axi4delay_delayer__DOT__delay_w = 0x00000059U;
            __Vdly__axi4delay_delayer__DOT__count_w 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__count_w)));
        }
        if ((0U != vlSelfRef.__PVT__axi4delay_delayer__DOT__delay_w)) {
            __Vdly__axi4delay_delayer__DOT__delay_w 
                = (0x000fffffU & ((IData)(0x00000059U) 
                                  + vlSelfRef.__PVT__axi4delay_delayer__DOT__delay_w));
        }
        if (((0U != (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__count_w)) 
             & (~ (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_bvalid)))) {
            __Vdly__axi4delay_delayer__DOT__count_w 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__count_w)));
        }
        if ((((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__ready_w) 
              & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_bready)) 
             & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_bvalid))) {
            __Vdly__axi4delay_delayer__DOT__delay_w = 0U;
            __Vdly__axi4delay_delayer__DOT__count_w = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__in_psel) 
             & (IData)(vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__in_penable))) {
            if (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwrite) {
                if ((8U == (0x0000000fU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))) {
                    __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v8 
                        = (0x000000ffU & vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata);
                    __VdlySet__lgpio__DOT__mgpio__DOT__hex__v8 = 1U;
                    __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v9 
                        = (0x000000ffU & (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
                                          >> 8U));
                    __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v10 
                        = (0x000000ffU & (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
                                          >> 0x10U));
                    __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v11 
                        = (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
                           >> 0x18U);
                }
                if ((0x0cU == (0x0000000fU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))) {
                    __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v12 
                        = (0x000000ffU & vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata);
                    __VdlySet__lgpio__DOT__mgpio__DOT__hex__v12 = 1U;
                    __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v13 
                        = (0x000000ffU & (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
                                          >> 8U));
                    __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v14 
                        = (0x000000ffU & (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
                                          >> 0x10U));
                    __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v15 
                        = (vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
                           >> 0x18U);
                }
                if ((0U == (0x0000000fU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))) {
                    vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__led 
                        = (0x0000ffffU & vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata);
                }
            }
        }
        if (vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) {
            __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid) {
            __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v8 
                = (((QData)((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                                    [vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr])) 
                    << 1U) | (QData)((IData)((1U & 
                                              ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                               >> 4U)))));
            __VdlyDim0__axi4delay_delayer__DOT__FIFO_r__v8 
                = vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r_count;
            __VdlySet__axi4delay_delayer__DOT__FIFO_r__v8 = 1U;
            __Vdly__axi4delay_delayer__DOT__FIFO_r_count 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r_count)));
        }
        if (vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__do_deq) {
            __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid) {
            __Vdly__axi4delay_delayer__DOT__delay_r = 0x00000059U;
            __Vdly__axi4delay_delayer__DOT__count_r 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__count_r)));
        }
        if ((0U != vlSelfRef.__PVT__axi4delay_delayer__DOT__delay_r)) {
            __Vdly__axi4delay_delayer__DOT__delay_r 
                = (0x000fffffU & ((IData)(0x00000059U) 
                                  + vlSelfRef.__PVT__axi4delay_delayer__DOT__delay_r));
        }
        if (((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full) 
                  & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready)) 
                 & (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid)))) {
            __Vdly__axi4frag__DOT__deq_q_1__DOT__full 
                = vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq;
        }
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (((~ ((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid) 
                 & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                    >> 4U))) & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__set))) {
            __Vdly__axi4delay_delayer__DOT__count_r 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__count_r)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid) 
             & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rready))) {
            if (vlSelfRef.__PVT___axi4delay_delayer_in_rlast) {
                __VdlySet__axi4delay_delayer__DOT__FIFO_r__v9 = 1U;
                __Vdly__axi4delay_delayer__DOT__FIFO_r_count = 0U;
                __Vdly__axi4delay_delayer__DOT__delay_r = 0U;
                __Vdly__axi4delay_delayer__DOT__count_r = 0U;
            } else {
                __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v10 
                    = vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[1U];
                __VdlySet__axi4delay_delayer__DOT__FIFO_r__v10 = 1U;
                __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v11 
                    = vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[2U];
                __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v12 
                    = vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[3U];
                __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v13 
                    = vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[4U];
                __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v14 
                    = vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[5U];
                __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v15 
                    = vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[6U];
                __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v16 
                    = vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[7U];
            }
        }
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en) {
            __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        vlSelfRef.__PVT__axi42apb__DOT__unnamedblk1__DOT___GEN 
            = (((IData)(vlSelfRef.__PVT__axi42apb__DOT__state) 
                << 6U) | ((0x00000020U & ((~ (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
                                               & (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_rvalid)) 
                                              | ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)) 
                                                 & (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_bvalid)))) 
                                          << 5U)) | 
                          ((((IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pready)
                              ? (2U & ((~ (((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)) 
                                            & (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_rvalid)) 
                                           | ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)) 
                                              & (IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_bvalid)))) 
                                       << 1U)) : 1U) 
                            << 2U) | (1U & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
                                            | ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)) 
                                               & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty))))))));
        __Vdly__axi42apb__DOT__state = (3U & ((IData)(vlSelfRef.__PVT__axi42apb__DOT__unnamedblk1__DOT___GEN) 
                                              >> (7U 
                                                  & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.__PVT__axi42apb__DOT__state), 1U))));
        if (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq))) {
            vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full 
                = vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                  & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                     & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast))) 
                 & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 1U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 2U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 3U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 4U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 5U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 6U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 7U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 8U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 9U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000aU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000bU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000cU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000dU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000eU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq) 
             != ((((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                    >> 0x0000000fU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq;
        }
        if (__PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_0) {
            vlSelfRef.__PVT__axi4frag__DOT__busy = 
                (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len));
        }
        if (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__do_deq))) {
            vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full 
                = vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en;
        }
        __Vdly__axi4xbar__DOT__idle_3 = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bready) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bvalid)) 
                                         | ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__anyValid_1)) 
                                            & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_3)));
        if (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_3) 
             & (0U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_valid_1)))) {
            vlSelfRef.__PVT__axi4xbar__DOT__unnamedblk2__DOT___readys_mask_T_5 
                = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys_1) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_valid_1));
            vlSelfRef.__PVT__axi4xbar__DOT__readys_mask_1 
                = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__unnamedblk2__DOT___readys_mask_T_5) 
                   | (2U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__unnamedblk2__DOT___readys_mask_T_5) 
                            << 1U)));
        }
        if (vlSelfRef.__PVT__axi4xbar__DOT__idle_3) {
            vlSelfRef.__PVT__axi4xbar__DOT__state_3_0 
                = vlSelfRef.__PVT__axi4xbar__DOT__winner_3_0;
            vlSelfRef.__PVT__axi4xbar__DOT__state_3_1 
                = vlSelfRef.__PVT__axi4xbar__DOT__winner_3_1;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & ((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))) 
                 & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 1U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 2U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 3U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 4U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 5U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 6U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 7U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 8U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 9U)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000aU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000bU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000cU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000dU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000eU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq;
        }
        if (((IData)(__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq) 
             != (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                  & (IData)(vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                 & (((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                    >> 0x0000000fU)))) {
            __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
                = __PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq;
        }
        __Vdly__axi4xbar__DOT__idle_2 = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rready) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rvalid)) 
                                         | ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__anyValid)) 
                                            & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_2)));
        if (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__idle_2) 
             & (0U != (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_valid)))) {
            vlSelfRef.__PVT__axi4xbar__DOT__unnamedblk1__DOT___readys_mask_T 
                = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_readys) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_valid));
            vlSelfRef.__PVT__axi4xbar__DOT__readys_mask 
                = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__unnamedblk1__DOT___readys_mask_T) 
                   | (2U & ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__unnamedblk1__DOT___readys_mask_T) 
                            << 1U)));
        }
        if (vlSelfRef.__PVT__axi4xbar__DOT__idle_2) {
            vlSelfRef.__PVT__axi4xbar__DOT__state_2_0 
                = vlSelfRef.__PVT__axi4xbar__DOT__prefixOR_1;
            vlSelfRef.__PVT__axi4xbar__DOT__state_2_1 
                = vlSelfRef.__PVT__axi4xbar__DOT__winner_2_1;
        }
        if (__PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_1) {
            vlSelfRef.__PVT__axi4frag__DOT__busy_1 
                = (0U != (IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1));
        }
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready) 
               & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)));
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full 
                = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en;
        }
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready) 
               & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)));
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full 
                = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en;
        }
        vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
                & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)
                    ? (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys)
                    : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0))) 
               & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)));
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full 
                = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en;
        }
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq 
            = ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready) 
               & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)));
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full 
                = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en;
        }
        vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
                & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4)
                    ? (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1)
                    : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0))) 
               & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)));
        if (vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq) {
            __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full 
                = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en;
        }
        if (((IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__out_pready) 
             & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__set))) {
            __Vdly__apbdelay_delayer__DOT__buff_pready 
                = vlSelfRef.__PVT__apbdelay_delayer__DOT__out_pready;
            vlSelfRef.__PVT__apbdelay_delayer__DOT__buff_prdata 
                = (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0)
                     ? vlSelfRef.__PVT__lspi__DOT__mspi__DOT__prdata
                     : 0U) | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_1)
                                ? ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__in_psel)
                                    ? ((((4U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                          ? ((2U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                              ? ((1U 
                                                  & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                  ? (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                  : (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                              : ((1U 
                                                  & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                  ? 
                                                 ((((((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                   << 4U) 
                                                  | ((((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                         << 2U)) 
                                                     | (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                  : 0U))
                                          : ((2U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                              ? ((1U 
                                                  & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                  ? (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                  : 
                                                 (0x000000c0U 
                                                  | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                              : ((1U 
                                                  & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                  ? 
                                                 ((0x00000080U 
                                                   & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                   >> 8U)
                                                   : (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                  : 
                                                 ((0x00000080U 
                                                   & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                   ? (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                   : vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                  [vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                        << 0x00000018U) 
                                       | ((0x00ff0000U 
                                           & (((4U 
                                                & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                ? (
                                                   (2U 
                                                    & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                     : (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? 
                                                    ((((((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                     : 0U))
                                                : (
                                                   (2U 
                                                    & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                     : 
                                                    (0x000000c0U 
                                                     | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? 
                                                    ((0x00000080U 
                                                      & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                      >> 8U)
                                                      : (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                     : 
                                                    ((0x00000080U 
                                                      & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                      ? (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                      : vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                     [vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                              << 0x00000010U)) 
                                          | ((0x0000ff00U 
                                              & (((4U 
                                                   & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                   ? 
                                                  ((2U 
                                                    & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                     : (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? 
                                                    ((((((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                     : 0U))
                                                   : 
                                                  ((2U 
                                                    & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                     : 
                                                    (0x000000c0U 
                                                     | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? 
                                                    ((0x00000080U 
                                                      & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                      >> 8U)
                                                      : (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                     : 
                                                    ((0x00000080U 
                                                      & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                      ? (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                      : vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                     [vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                                 << 8U)) 
                                             | (0x000000ffU 
                                                & ((4U 
                                                    & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((2U 
                                                     & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? 
                                                    ((1U 
                                                      & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                      ? (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                      : (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                      ? 
                                                     ((((((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                       << 4U) 
                                                      | ((((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                           << 3U) 
                                                          | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                      : 0U))
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? 
                                                    ((1U 
                                                      & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                      ? (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                      : 
                                                     (0x000000c0U 
                                                      | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                      ? 
                                                     ((0x00000080U 
                                                       & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                       >> 8U)
                                                       : (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                      : 
                                                     ((0x00000080U 
                                                       & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                       ? (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                       : vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                      [vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]))))))))
                                    : 0U) : 0U) | (
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                         >> 0x0000001cU)))
                                                     ? 
                                                    (((((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3U]) 
                                                        << 8U) 
                                                       | vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2U]) 
                                                      << 0x00000010U) 
                                                     | (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1U]) 
                                                         << 8U) 
                                                        | vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0U]))
                                                     : 0U) 
                                                   | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_3)
                                                        ? 
                                                       ((4U 
                                                         == 
                                                         (0x0000000fU 
                                                          & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))
                                                         ? (IData)(vlSymsp->TOP.externalPins_gpio_in)
                                                         : 0U)
                                                        : 0U) 
                                                      | (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_4)
                                                           ? 
                                                          ((0U 
                                                            == 
                                                            (0x0000000fU 
                                                             & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))
                                                            ? (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__out)
                                                            : 0U)
                                                           : 0U) 
                                                         | ((2U 
                                                             == 
                                                             (3U 
                                                              & (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                                 >> 0x0000001cU)))
                                                             ? vlSelfRef.__PVT___lvga_auto_in_prdata
                                                             : 0U))))));
            vlSelfRef.__PVT__apbdelay_delayer__DOT__buff_pslverr 
                = (((IData)(vlSelfRef.__PVT__apbxbar__DOT__sel_0) 
                    & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pslverr)) 
                   | (IData)(((0x20000000U == (0x30000000U 
                                               & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)) 
                              & (IData)(vlSelfRef.__PVT___lvga_auto_in_pslverr))));
        }
        vlSelfRef.__PVT__axi4frag__DOT__w_counter = 
            (0x000001ffU & ((IData)(vlSelfRef.__PVT__axi4frag__DOT__w_todo) 
                            - ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wready) 
                               & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid))));
        __Vdly__axi4xbar_1__DOT__idle_3 = (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
                                            & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid)) 
                                           | ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid)) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)));
        if (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3) 
             & (0U != (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid)))) {
            vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T 
                = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid));
            vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3 
                = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T) 
                   | (6U & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T) 
                            << 1U)));
            vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask 
                = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3) 
                   | (4U & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk1__DOT___readys_mask_T_3) 
                            << 2U)));
        }
        if (vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3) {
            vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_0 
                = vlSelfRef.__PVT__axi4xbar_1__DOT__prefixOR_1;
            vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_1 
                = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_1;
            vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2 
                = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_3_2;
        }
        __Vdly__axi4xbar_1__DOT__idle_4 = (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
                                            & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid)) 
                                           | ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid_1)) 
                                              & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4)));
        if (((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4) 
             & ((IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full) 
                | (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty))))) {
            vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8 
                = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys_1) 
                   & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid_1));
            vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11 
                = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8) 
                   | (6U & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_8) 
                            << 1U)));
            vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1 
                = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11) 
                   | (4U & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__unnamedblk2__DOT___readys_mask_T_11) 
                            << 2U)));
        }
        if (vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4) {
            vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_0 
                = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_0;
            vlSelfRef.__PVT__axi4xbar_1__DOT__state_4_2 
                = vlSelfRef.__PVT__axi4xbar_1__DOT__winner_4_2;
        }
        if (((~ (IData)(vlSymsp->TOP.externalPins_ps2_clk)) 
             & (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__prev))) {
            if ((0x0aU == (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__count))) {
                if ((((~ (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__buffer)) 
                      & (IData)(vlSymsp->TOP.externalPins_ps2_data)) 
                     & VL_REDXOR_32((0x000001ffU & 
                                     ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__buffer) 
                                      >> 1U))))) {
                    __Vdly__lkeyboard__DOT__mps2__DOT__count = 0U;
                    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__out 
                        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__buffer) 
                                          >> 1U));
                } else {
                    vlSelfRef.lkeyboard__DOT__mps2__DOT____Vlvbound_h2e66df9a__0 
                        = vlSymsp->TOP.externalPins_ps2_data;
                    if ((9U >= (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__count))) {
                        vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__buffer 
                            = (((~ ((IData)(1U) << (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__count))) 
                                & (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__buffer)) 
                               | (0x03ffU & ((IData)(vlSelfRef.lkeyboard__DOT__mps2__DOT____Vlvbound_h2e66df9a__0) 
                                             << (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__count))));
                    }
                    __Vdly__lkeyboard__DOT__mps2__DOT__count 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__count)));
                }
            }
        }
        if (((((IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel) 
               & (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))) 
              & (~ (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__out))) 
             & (~ (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__buff_pready)))) {
            __Vdly__apbdelay_delayer__DOT__count = 
                (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__count)));
            __Vdly__apbdelay_delayer__DOT__delay = 0x00000059U;
            vlSelfRef.__PVT__apbdelay_delayer__DOT__set = 1U;
        }
        if ((0U != vlSelfRef.__PVT__apbdelay_delayer__DOT__delay)) {
            __Vdly__apbdelay_delayer__DOT__delay = 
                (0x000fffffU & ((IData)(0x00000059U) 
                                + vlSelfRef.__PVT__apbdelay_delayer__DOT__delay));
        }
        if (vlSelfRef.__PVT__apbdelay_delayer__DOT__out) {
            __Vdly__apbdelay_delayer__DOT__buff_pready = 0U;
            __Vdly__apbdelay_delayer__DOT__count = 0U;
            __Vdly__apbdelay_delayer__DOT__delay = 0U;
        }
    }
    if (__PVT__axi4frag__DOT__unnamedblk1__DOT___GEN_1) {
        vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3 
            = (vlSelfRef.__PVT__axi4frag__DOT__addr_1 
               + (0x0000ffffU & ((IData)(1U) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize))));
        vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 
            = (0x007fffffU & ((0xffU | ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len) 
                                        << 8U)) << (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize)));
        vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6 
            = (~ vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr);
        vlSelfRef.__PVT__axi4frag__DOT__r_len_1 = (0x000000ffU 
                                                   & ((IData)(vlSelfRef.__PVT__axi4frag__DOT__len_1) 
                                                      - (IData)(1U)));
        vlSelfRef.__PVT__axi4frag__DOT__r_addr_1 = 
            ((0U == (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awburst))
              ? vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr
              : ((2U == (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_awburst))
                  ? ((0x00007fffU & (vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3 
                                     & (vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 
                                        >> 8U))) | 
                     (~ ((0xffff8000U & vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6) 
                         | (0x00007fffU & (vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___mux_addr_T_6 
                                           | (vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___wrapMask_T_3 
                                              >> 8U))))))
                  : vlSelfRef.__PVT__axi4frag__DOT__unnamedblk1__DOT__unnamedblk4__DOT___inc_addr_T_3));
    }
    if (vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready) {
        vlSelfRef.__PVT__axi42apb__DOT__wdata_reg_r 
            = (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                       >> 4U));
        vlSelfRef.__PVT__axi42apb__DOT__wstrb_reg_r 
            = (0x0000000fU & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data));
        vlSelfRef.__PVT__axi42apb__DOT__awaddr_reg_r 
            = (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                       >> 0x0000000bU));
        vlSelfRef.__PVT__axi42apb__DOT__bid_reg = (0x0000000fU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                              >> 0x0000002bU)));
    }
    if (vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq) {
        vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__ram 
            = ((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr)) 
               << 0x0000000dU);
    }
    if (vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready) {
        vlSelfRef.__PVT__axi42apb__DOT__araddr_reg_r 
            = (IData)((vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                       >> 0x0000000bU));
        vlSelfRef.__PVT__axi42apb__DOT__rid_reg = (0x0000000fU 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                              >> 0x0000002bU)));
    }
    if ((0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))) {
        vlSelfRef.__PVT__axi42apb__DOT__is_write_r 
            = vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready;
    }
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_1;
    if (__VdlySet__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full 
        = __Vdly__axi4frag__DOT__in_wdeq_q__DOT__full;
    if (vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq) {
        vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram 
            = (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wdata)) 
                << 5U) | (QData)((IData)((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wstrb) 
                                           << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wvalid)))));
    }
    if (__VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__Memory[__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v0] 
            = ((0xffffff00U & vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__Memory
                [__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v0]) 
               | (IData)(__VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v0));
    }
    if (__VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v1) {
        vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__Memory[__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v1] 
            = ((0xffff00ffU & vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__Memory
                [__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v1]) 
               | ((IData)(__VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v1) 
                  << 8U));
    }
    if (__VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v2) {
        vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__Memory[__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v2] 
            = ((0xff00ffffU & vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__Memory
                [__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v2]) 
               | ((IData)(__VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__axi4ram__DOT__mem_ext__DOT__Memory__v3) {
        vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__Memory[__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v3] 
            = ((0x00ffffffU & vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__Memory
                [__VdlyDim0__axi4ram__DOT__mem_ext__DOT__Memory__v3]) 
               | ((IData)(__VdlyVal__axi4ram__DOT__mem_ext__DOT__Memory__v3) 
                  << 0x00000018U));
    }
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap 
        = __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap;
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1 
        = __Vdly__axi4xbar_1__DOT__awIn_0__DOT__wrap_1;
    if (__VdlySet__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full 
        = __Vdly__axi4frag__DOT__deq_q__DOT__full;
    vlSelfRef.__PVT__axi4frag__DOT__error_0 = __Vdly__axi4frag__DOT__error_0;
    vlSelfRef.__PVT__axi4frag__DOT__error_1 = __Vdly__axi4frag__DOT__error_1;
    vlSelfRef.__PVT__axi4frag__DOT__error_2 = __Vdly__axi4frag__DOT__error_2;
    vlSelfRef.__PVT__axi4frag__DOT__error_3 = __Vdly__axi4frag__DOT__error_3;
    vlSelfRef.__PVT__axi4frag__DOT__error_4 = __Vdly__axi4frag__DOT__error_4;
    vlSelfRef.__PVT__axi4frag__DOT__error_5 = __Vdly__axi4frag__DOT__error_5;
    vlSelfRef.__PVT__axi4frag__DOT__error_6 = __Vdly__axi4frag__DOT__error_6;
    vlSelfRef.__PVT__axi4frag__DOT__error_7 = __Vdly__axi4frag__DOT__error_7;
    vlSelfRef.__PVT__axi4frag__DOT__error_8 = __Vdly__axi4frag__DOT__error_8;
    vlSelfRef.__PVT__axi4frag__DOT__error_9 = __Vdly__axi4frag__DOT__error_9;
    vlSelfRef.__PVT__axi4frag__DOT__error_10 = __Vdly__axi4frag__DOT__error_10;
    vlSelfRef.__PVT__axi4frag__DOT__error_11 = __Vdly__axi4frag__DOT__error_11;
    vlSelfRef.__PVT__axi4frag__DOT__error_12 = __Vdly__axi4frag__DOT__error_12;
    vlSelfRef.__PVT__axi4frag__DOT__error_13 = __Vdly__axi4frag__DOT__error_13;
    vlSelfRef.__PVT__axi4frag__DOT__error_14 = __Vdly__axi4frag__DOT__error_14;
    vlSelfRef.__PVT__axi4frag__DOT__error_15 = __Vdly__axi4frag__DOT__error_15;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__delay_w 
        = __Vdly__axi4delay_delayer__DOT__delay_w;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__count_w 
        = __Vdly__axi4delay_delayer__DOT__count_w;
    if (__VdlySet__lgpio__DOT__mgpio__DOT__hex__v0) {
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__hex[0U] = 0U;
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__hex[1U] = 0U;
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__hex[2U] = 0U;
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__hex[3U] = 0U;
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__hex[4U] = 0U;
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__hex[5U] = 0U;
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__hex[6U] = 0U;
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__hex[7U] = 0U;
    }
    if (__VdlySet__lgpio__DOT__mgpio__DOT__hex__v8) {
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__hex[0U] 
            = __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v8;
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__hex[1U] 
            = __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v9;
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__hex[2U] 
            = __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v10;
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__hex[3U] 
            = __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v11;
    }
    if (__VdlySet__lgpio__DOT__mgpio__DOT__hex__v12) {
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__hex[4U] 
            = __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v12;
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__hex[5U] 
            = __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v13;
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__hex[6U] 
            = __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v14;
        vlSelfRef.__PVT__lgpio__DOT__mgpio__DOT__hex[7U] 
            = __VdlyVal__lgpio__DOT__mgpio__DOT__hex__v15;
    }
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap 
        = __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r_count 
        = __Vdly__axi4delay_delayer__DOT__FIFO_r_count;
    if (__VdlySet__axi4delay_delayer__DOT__FIFO_r__v0) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[0U] = 0ULL;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[1U] = 0ULL;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[2U] = 0ULL;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[3U] = 0ULL;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[4U] = 0ULL;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[5U] = 0ULL;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[6U] = 0ULL;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[7U] = 0ULL;
    }
    if (__VdlySet__axi4delay_delayer__DOT__FIFO_r__v8) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[__VdlyDim0__axi4delay_delayer__DOT__FIFO_r__v8] 
            = __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v8;
    }
    if (__VdlySet__axi4delay_delayer__DOT__FIFO_r__v9) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[7U] = 0ULL;
    }
    if (__VdlySet__axi4delay_delayer__DOT__FIFO_r__v10) {
        vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[0U] 
            = __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v10;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[1U] 
            = __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v11;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[2U] 
            = __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v12;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[3U] 
            = __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v13;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[4U] 
            = __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v14;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[5U] 
            = __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v15;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[6U] 
            = __VdlyVal__axi4delay_delayer__DOT__FIFO_r__v16;
        vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[7U] = 0ULL;
    }
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1 
        = __Vdly__axi4xbar__DOT__awIn_0__DOT__wrap_1;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__delay_r 
        = __Vdly__axi4delay_delayer__DOT__delay_r;
    if (__VdlySet__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__full 
        = __Vdly__axi4frag__DOT__deq_q_1__DOT__full;
    if (__VdlySet__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    if (__VdlySet__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__axi4delay_delayer__DOT__count_r 
        = __Vdly__axi4delay_delayer__DOT__count_r;
    if (__VdlySet__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap;
    if (__VdlySet__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0) {
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0] 
            = __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    }
    if (__VdlySet__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[__VdlyDim0__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap 
        = __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_1__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_2__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_3__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_4__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_5__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_6__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_7__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_8__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_9__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_10__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_11__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_12__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_13__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_14__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_15__DOT__full;
    vlSelfRef.__PVT__axi4xbar__DOT__idle_3 = __Vdly__axi4xbar__DOT__idle_3;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_16__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_17__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_18__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_19__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_20__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_21__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_22__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_23__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_24__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_25__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_26__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_27__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_28__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_29__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_30__DOT__full;
    vlSelfRef.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full 
        = __Vdly__axi4yank__DOT__Queue1_BundleMap_31__DOT__full;
    vlSelfRef.__PVT__axi4xbar__DOT__idle_2 = __Vdly__axi4xbar__DOT__idle_2;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1;
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1;
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1 
        = __Vdly__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1;
    if (__VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0) {
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0] 
            = __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    }
    if (__VdlySet__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0) {
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[__VdlyDim0__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0] 
            = __VdlyVal__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data__v0;
    }
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__ready_w 
        = ((0x000003ffU & (vlSelfRef.__PVT__axi4delay_delayer__DOT__delay_w 
                           >> 0x0000000aU)) > (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__count_w));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid 
        = ((0x000003ffU & (vlSelfRef.__PVT__axi4delay_delayer__DOT__delay_r 
                           >> 0x0000000aU)) > (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__count_r));
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid) {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__set = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid) 
             & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                >> 4U))) {
            vlSelfRef.__PVT__axi4delay_delayer__DOT__set = 0U;
        }
    }
    vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
        = ((IData)(vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
            ? vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__Memory
           [vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
            : 0U);
    vlSelfRef.__PVT__axi4ram__DOT__rdata_REG = vlSelfRef.__PVT__axi4ram__DOT__mem_ext__DOT__R0_en;
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arid 
        = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full)
            ? (0x0000000fU & (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                                      >> 0x0000002dU)))
            : 0U);
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
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_2;
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap) 
           == (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    vlSelfRef.__PVT___axi4delay_delayer_in_rlast = 
        (1U & (IData)(((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_rvalid)
                        ? vlSelfRef.__PVT__axi4delay_delayer__DOT__FIFO_r[0U]
                        : 0ULL)));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1];
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory
        [vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1];
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
    vlSelfRef.__PVT__axi4frag__DOT__len_1 = ((IData)(vlSelfRef.__PVT__axi4frag__DOT__busy_1)
                                              ? (IData)(vlSelfRef.__PVT__axi4frag__DOT__r_len_1)
                                              : (IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len));
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
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3 = __Vdly__axi4xbar_1__DOT__idle_3;
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full 
        = ((IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    vlSelfRef.__PVT__axi4xbar_1__DOT__idle_4 = __Vdly__axi4xbar_1__DOT__idle_4;
    vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    vlSelfRef.__PVT__axi4ram__DOT__w_full = __Vdly__axi4ram__DOT__w_full;
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__count 
        = __Vdly__lkeyboard__DOT__mps2__DOT__count;
    vlSelfRef.__PVT__apbdelay_delayer__DOT__count = __Vdly__apbdelay_delayer__DOT__count;
    vlSelfRef.__PVT__apbdelay_delayer__DOT__delay = __Vdly__apbdelay_delayer__DOT__delay;
    vlSelfRef.__PVT__apbdelay_delayer__DOT__buff_pready 
        = __Vdly__apbdelay_delayer__DOT__buff_pready;
    if ((1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))) {
        vlSelfRef.__PVT__axi42apb__DOT__resp_hold_r 
            = ((IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pslverr) 
               << 1U);
        vlSelfRef.__PVT__axi42apb__DOT__nodeIn_rdata_r 
            = vlSelfRef.__PVT__apbdelay_delayer__DOT__in_prdata;
    }
    vlSelfRef.__PVT__axi42apb__DOT__state = __Vdly__axi42apb__DOT__state;
    vlSelfRef.__PVT__axi4xbar_1__DOT___anonIn_awready_T 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__latched)));
    vlSelfRef.__PVT__axi4frag__DOT___in_awready_T = 
        ((0U == (IData)(vlSelfRef.__PVT__axi4frag__DOT__w_counter)) 
         | (IData)(vlSelfRef.__PVT__axi4frag__DOT__wbeats_latched));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid 
        = (((IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full) 
            << 2U) | (((IData)(vlSelfRef.__PVT__lmrom__DOT__state) 
                       << 1U) | (1U & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)) 
                                                     | ((IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full) 
                                                        | (IData)(vlSelfRef.__PVT__lmrom__DOT__state))));
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_2 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_3;
    vlSelfRef.__PVT__axi4xbar_1__DOT__anyValid_1 = 
        (1U & ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)) 
               | (IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full)));
    vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid_1 
        = (((IData)(vlSelfRef.__PVT__axi4ram__DOT__w_full) 
            << 2U) | (1U & (~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty))));
    vlSelfRef.__PVT__lkeyboard__DOT__mps2__DOT__prev 
        = vlSymsp->TOP.externalPins_ps2_clk;
    vlSelfRef.__PVT__apbdelay_delayer__DOT__out = (
                                                   (0x000003ffU 
                                                    & (vlSelfRef.__PVT__apbdelay_delayer__DOT__delay 
                                                       >> 0x0000000aU)) 
                                                   > (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__count));
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready 
        = ((~ (IData)(vlSelfRef.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
           & (0U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    __PVT__axi4xbar_1__DOT___readys_filter_T_1 = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask)) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid));
    __PVT__axi4xbar_1__DOT___readys_filter_T_3 = ((~ (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_mask_1)) 
                                                  & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_valid_1));
    if (vlSelfRef.__PVT__apbdelay_delayer__DOT__out) {
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_prdata 
            = vlSelfRef.__PVT__apbdelay_delayer__DOT__buff_prdata;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pslverr 
            = vlSelfRef.__PVT__apbdelay_delayer__DOT__buff_pslverr;
    } else {
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_prdata = 0U;
        vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pslverr = 0U;
    }
    vlSelfRef.__PVT__axi42apb__DOT__auto_in_bresp = 
        ((1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))
          ? ((IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pslverr) 
             << 1U) : (IData)(vlSelfRef.__PVT__axi42apb__DOT__resp_hold_r));
    vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pready 
        = ((IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__out) 
           & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__buff_pready));
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
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_3 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_4;
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
    vlSelfRef.axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0 
        = (((1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)) 
            & (IData)(vlSelfRef.__PVT__apbdelay_delayer__DOT__in_pready)) 
           | (2U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state)));
    vlSelfRef.__PVT__apbdelay_delayer__DOT__in_psel 
        = ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_arready) 
           | ((IData)(vlSelfRef.__PVT__axi42apb__DOT__auto_in_awready) 
              | (1U == (IData)(vlSelfRef.__PVT__axi42apb__DOT__state))));
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
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_4 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_5;
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
    vlSelfRef.__PVT__axi4xbar__DOT__readys_readys = 
        (3U & (~ (((IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_unready) 
                   >> 2U) & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__readys_unready))));
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
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_5 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_6;
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
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_6 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_7;
    vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid 
        = ((IData)(vlSelfRef.__PVT__axi4yank__DOT__auto_in_becho_real_last) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid));
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_7 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_8;
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_8 
        = vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_9;
    vlSelfRef.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_9 
        = vlSymsp->TOP.reset;
}

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__1(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)
                           ? (IData)((vlSelfRef.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                      >> 1U)) : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wstrb)));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid 
        = ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__latched)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awvalid));
    vlSelfRef.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_4 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rready) 
            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rvalid)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rlast));
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
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize 
        = (7U & ((IData)(vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__full)
                  ? (IData)((vlSelfRef.__PVT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 2U)) : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arsize)));
    vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid)));
    vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
           & (IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready 
        = ((IData)(vlSelfRef.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
           & ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__idle_3)
               ? ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__readys_readys) 
                  >> 2U) : (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__state_3_2)));
    vlSelfRef.axi4xbar_1__DOT____VdfgRegularize_hc1964d0a_0_0 
        = ((IData)(vlSelfRef.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
           & (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast));
    vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__axi4ram__DOT__r_full)) 
                 | (IData)(vlSelfRef.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready)));
}

extern const VlUnpacked<CData/*0:0*/, 2048> VysyxSoCFull__ConstPool__TABLE_hfa5ec938_0;
extern const VlUnpacked<CData/*1:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h129ddf5f_0;
extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h2173bdff_0;
extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h3f6d3868_0;
extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_h098d4509_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_hb83ca8a9_0;
extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h0e58a3b9_0;
extern const VlUnpacked<SData/*9:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h3a83442a_0;

void VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__2(VysyxSoCFull_ysyxSoCASIC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull_ysyxSoCASIC___nba_sequent__TOP__ysyxSoCFull__asic__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__Vfuncout;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__addr;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__addr = 0;
    CData/*1:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axtype;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axtype = 0;
    CData/*7:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axlen;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axlen = 0;
    IData/*31:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr = 0;
    IData/*31:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr = 0;
    CData/*1:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axtype;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axtype = 0;
    CData/*7:0*/ __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen;
    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*10:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0;
    CData/*7:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__lsr5r = 0;
    SData/*15:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0;
    CData/*7:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd = 0;
    CData/*2:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0;
    CData/*4:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0;
    CData/*6:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0;
    CData/*2:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0;
    CData/*3:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0;
    CData/*3:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0;
    CData/*2:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0;
    CData/*0:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0;
    CData/*7:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0;
    CData/*7:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0;
    SData/*9:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0;
    CData/*3:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0;
    CData/*3:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0;
    CData/*7:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0;
    IData/*31:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q = 0;
    CData/*0:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q = 0;
    CData/*2:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count = 0;
    CData/*1:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr = 0;
    CData/*1:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr = 0;
    CData/*2:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count = 0;
    CData/*1:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr = 0;
    CData/*1:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr = 0;
    CData/*1:0*/ __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q = 0;
    CData/*0:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0;
    CData/*7:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0;
    CData/*0:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0;
    CData/*7:0*/ __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0;
    CData/*0:0*/ __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*2:0*/ __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*3:0*/ __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*0:0*/ __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*3:0*/ __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*0:0*/ __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*2:0*/ __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*3:0*/ __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*0:0*/ __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*5:0*/ __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*1:0*/ __VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    CData/*1:0*/ __VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0;
    __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 0;
    SData/*13:0*/ __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0;
    CData/*1:0*/ __VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    __VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0;
    CData/*0:0*/ __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0;
    // Body
    vlSelfRef.__Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    vlSelfRef.__Vdly__spi_sck = vlSelfRef.__PVT__spi_sck;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 0U;
    __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 0U;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    vlSelfRef.__Vdly__spi_mosi = vlSelfRef.__PVT__spi_mosi;
    vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0U;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0U;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0U;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0U;
    __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0U;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__out_pready 
        = vlSelfRef.__PVT__lspi__DOT__mspi__DOT__out_pready;
    vlSelfRef.__Vdly__spi_sck = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                       & ((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                            & (0U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                           & ((0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                              | (IData)(vlSelfRef.__PVT__spi_sck)))
                                           ? (~ (IData)(vlSelfRef.__PVT__spi_sck))
                                           : (IData)(vlSelfRef.__PVT__spi_sck))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r 
        = (1U & ((IData)(vlSymsp->TOP.reset) | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                 | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6) 
                                                    & (~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d)))))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__reset_status)
                   ? 0U : ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                           | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7) 
                              & (~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d)))))));
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = (1U & ((IData)(vlSymsp->TOP.reset) | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                 | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
                                                    & (~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d)))))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__reset_status)
                   ? 0U : ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                           | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2) 
                              & (~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d)))))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__reset_status)
                   ? 0U : ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                           | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3) 
                              & (~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d)))))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__reset_status)
                   ? 0U : ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                           | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4) 
                              & (~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d)))))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((((1U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
                     & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
                    & (~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we))) 
                   | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset))
                   ? 0U : ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r) 
                           | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0) 
                              & (~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d)))))));
    vlSelfRef.__Vdly__spi_mosi = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                        & ((1U & ((
                                                   (0U 
                                                    != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                                   & ((0x00000400U 
                                                       & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                       ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                                       : (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) 
                                                  | (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))
                                            ? (vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data
                                               [(3U 
                                                 & (((0x00000800U 
                                                      & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                      ? 
                                                     ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                                                      - (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                      - (IData)(1U))) 
                                                    >> 5U))] 
                                               >> (0x0000001fU 
                                                   & ((0x00000800U 
                                                       & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                       ? 
                                                      ((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                                                       - (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                       - (IData)(1U)))))
                                            : (IData)(vlSelfRef.__PVT__spi_mosi))));
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr_read)
                   ? 0U : (((~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                            & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))
                            ? 1U : ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                    & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                       >> 3U))))));
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read)
                   ? 0U : (((~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                            & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))
                            ? 1U : ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                    & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__reset_status)
                   ? 0U : (((~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                            & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))
                            ? 1U : ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                    & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                       >> 2U))))));
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                    == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)) 
                   & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read))
                   ? 0U : (((~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                            & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))
                            ? 1U : ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                    & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                   | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                      & (2U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir))))
                   ? 0U : (((~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                            & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))
                            ? 1U : ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                    & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                       >> 1U))))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r 
        = (1U & ((~ (IData)(vlSymsp->TOP.reset)) & 
                 ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__reset_status)
                   ? 0U : ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                           | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun) 
                              & (~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d)))))));
    vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__out_pready 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__penable) 
                                               & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__psel)) 
                                              & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__out_pready))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    __Vtableidx3 = ((((((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) 
                        << 5U) | (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                   << 4U) | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                             << 3U))) 
                      | (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                          << 2U) | (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                     << 1U) | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read)))) 
                     << 5U) | ((((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                 << 4U) | (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__reset_status) 
                                              << 2U))) 
                               | (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                   << 1U) | (IData)(vlSymsp->TOP.reset))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__interrupt 
        = VysyxSoCFull__ConstPool__TABLE_hfa5ec938_0
        [__Vtableidx3];
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad 
        = ((IData)(vlSymsp->TOP.reset) || (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    __Vtableidx6 = (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_wr_i) 
                     << 3U) | (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o) 
                                << 2U) | (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i) 
                                           << 1U) | (IData)(vlSymsp->TOP.reset))));
    if ((1U & VysyxSoCFull__ConstPool__TABLE_h129ddf5f_0
         [__Vtableidx6])) {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q 
            = VysyxSoCFull__ConstPool__TABLE_h2173bdff_0
            [__Vtableidx6];
    }
    if ((2U & VysyxSoCFull__ConstPool__TABLE_h129ddf5f_0
         [__Vtableidx6])) {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q 
            = VysyxSoCFull__ConstPool__TABLE_h3f6d3868_0
            [__Vtableidx6];
    }
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx = 4U;
        vlSelfRef.__Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = 0x00002774U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr = 0U;
        vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0x0000ffffU;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q = 0U;
        __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 1U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q = 0U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0U;
        vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count = 0U;
        __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
        vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] = 0U;
        vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] = 0U;
        vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] = 0U;
        vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] = 0U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count = 0U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr = 0U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0x9fU;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0x027fU;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
        __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q = 2U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__fcr = 3U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q = 2U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__set = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = 0U;
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0U;
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q = 0U;
    } else {
        if ((0U == vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
            vlSelfRef.__Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = 0x00000185U;
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 1U;
        } else {
            vlSelfRef.__Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
                = (0x0001ffffU & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
                                  - (IData)(1U)));
            if ((9U == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 0U;
            }
        }
        if (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0U;
        } else if (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
             & (0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr)));
        }
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xf0U & (IData)(__Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset)
                   ? 0U : (0x0000000fU & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr) 
                                          | (0x0eU 
                                             ^ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals))))));
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0x0fU & (IData)(__Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | ((((2U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                           << 1U)) | (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                            >> 1U))) 
                   << 6U) | (((2U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                     >> 1U)) | (1U 
                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                   >> 3U))) 
                             << 4U)));
        vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
            = (0x0000ffffU & ((1U & ((~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
                                     | (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero)))
                               ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                               : ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt) 
                                  - (IData)(1U))));
        __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
            = ((2U & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q) 
                      << 1U)) | (4U == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)));
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                        __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 
                            = (0x00003fffU & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                              >> 0x0000000dU));
                        __VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 
                            = (3U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                     >> 0x0000000bU));
                        __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4 = 1U;
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q 
                            = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wdata;
                    }
                }
            }
        }
        if (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) 
             & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck) 
             & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)));
        } else if ((0U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))) {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        }
        vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)
                               ? ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)
                                   ? ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                               : ((0U != (0x0000007fU 
                                          & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))
                                   ? (0x0000007fU & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                   : 0x80U)));
        if ((1U & (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                    >> 8U) & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 1U;
        } else if ((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))) 
                    & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        }
        if (((((IData)(vlSelfRef.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
               & (0x00000010U == (0x0000001cU & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__paddr))) 
              & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwrite)) 
             & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pstrb))) {
                vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x3f00U & (IData)(vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x000000ffU & (vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwdata 
                                         | (1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pstrb))) {
                vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x00ffU & (IData)(vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x00003f00U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwdata));
            }
        } else if ((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))) 
                    & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                = (0x3effU & (IData)(vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl));
        }
        if (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
                __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
            }
        } else {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
                = (1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck)));
        }
        if (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_re) 
                     & (0U == (7U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))) 
                    & (~ ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 1U;
        }
        if ((((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
              & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w)) 
             & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                   & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w))))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)));
        } else if (((~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
                        & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w))) 
                    & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                       & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w)))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
                = (7U & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n) {
            if ((0U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))) {
                __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
            }
        } else {
            __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
                = (1U & (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)));
        }
        if ((1U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch) 
                   & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pstrb))) {
                vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0x00ffffffU & vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff000000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwdata));
            }
            if ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pstrb))) {
                vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xff00ffffU & vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0x00ff0000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwdata));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pstrb))) {
                vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffff00ffU & vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0x0000ff00U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwdata));
            }
            if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pstrb))) {
                vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffff00U & vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0x000000ffU & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwdata));
            }
        } else if ((1U & (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch) 
                           >> 1U) & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pstrb))) {
                vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0x00ffffffU & vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff000000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwdata));
            }
            if ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pstrb))) {
                vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xff00ffffU & vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0x00ff0000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwdata));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pstrb))) {
                vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffff00ffU & vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0x0000ff00U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwdata));
            }
            if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pstrb))) {
                vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffff00U & vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0x000000ffU & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwdata));
            }
        } else if ((1U & (((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch) 
                           >> 2U) & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pstrb))) {
                vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0x00ffffffU & vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff000000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwdata));
            }
            if ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pstrb))) {
                vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xff00ffffU & vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0x00ff0000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwdata));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pstrb))) {
                vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffff00ffU & vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0x0000ff00U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwdata));
            }
            if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pstrb))) {
                vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffff00U & vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0x000000ffU & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwdata));
            }
        } else if ((IData)((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch) 
                             >> 3U) & (~ (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pstrb))) {
                vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0x00ffffffU & vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff000000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwdata));
            }
            if ((4U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pstrb))) {
                vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xff00ffffU & vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0x00ff0000U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwdata));
            }
            if ((2U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pstrb))) {
                vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffff00ffU & vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0x0000ff00U & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwdata));
            }
            if ((1U & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pstrb))) {
                vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffff00U & vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0x000000ffU & vlSelfRef.__PVT__lspi__DOT__mspi__DOT__pwdata));
            }
        } else {
            vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[(3U 
                                                                                & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos)))) 
                    & vlSelfRef.__Vdly__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data
                    [(3U & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                            >> 5U))]) | ((1U & ((((0x00000200U 
                                                   & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                   ? (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                                   : (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
                                                 & ((0U 
                                                     != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                                    | (IData)(vlSelfRef.__PVT__spi_sck)))
                                                 ? 
                                                ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___bitrev_miso) 
                                                 & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                                    | ((((2U 
                                                          == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                                         & (0U 
                                                            == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))
                                                         ? vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data_bswap
                                                         : vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data) 
                                                       >> 0x0000001fU)))
                                                 : 
                                                (vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data
                                                 [(3U 
                                                   & ((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                      >> 5U))] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))))) 
                                         << (0x0000001fU 
                                             & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))));
        }
        if ((((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q) 
              & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o)) 
             & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                   & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w))))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)));
        } else if (((~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q) 
                        & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o))) 
                    & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                       & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w)))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
                = (7U & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q) 
             & (4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)))) {
            __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 
                = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q;
            __VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 
                = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
            __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 1U;
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr)));
        }
        if (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
             & (0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr)));
        }
        if (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0x000000ffU & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                  >> 2U));
        } else if (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0x000000ffU & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b) 
                                  - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
             & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_value;
        } else if (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = (0x000000ffU & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt) 
                                  - (IData)(1U)));
        }
        if ((((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we) 
              | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
             | (0U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = (0x000003ffU & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__counter_t) 
                                  - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
             & (4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))) {
            __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 
                = (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid) 
                    & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arready))
                    ? (0x00000020U | ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen)) 
                                      << 4U)) : (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awvalid) 
                                                  & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awready))
                                                  ? 0x10U
                                                  : 
                                                 (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i) 
                                                   << 5U) 
                                                  | (((0U 
                                                       == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                      << 4U) 
                                                     | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))));
            __VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 
                = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
            __VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 1U;
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr)));
        }
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__dlc 
            = (0x0000ffffU & ((1U & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc) 
                                     | (~ (0U != (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dlc)))))
                               ? ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                  - (IData)(1U)) : 
                              ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dlc) 
                               - (IData)(1U))));
        if (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
            __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
        } else if ((2U == (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we) 
                            << 1U) | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0x10U > (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)));
                __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = (7U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
                __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
                __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 1U;
                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                    = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we) 
                            << 1U) | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0U < (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x0000001fU & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                      - (IData)(1U)));
                __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 
                    = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 1U;
                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            }
        } else if ((3U == (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we) 
                            << 1U) | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = (7U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
            __VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
            __VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 1U;
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q 
            = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q 
            = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r;
        if (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_we) 
             & (2U == (7U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)))) {
            vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__fcr 
                = (3U & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in) 
                         >> 6U));
        }
        if (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_we) 
             & (4U == (7U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)))) {
            vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr 
                = (0x0000001fU & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in));
        }
        if ((8U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        if ((9U == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))) {
                            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q = 0U;
                        } else {
                            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q 
                                = ((~ ((IData)(1U) 
                                       << (3U & (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                                 >> 0x0000000bU)))) 
                                   & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q));
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q 
                        = (1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q));
                } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q = 1U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q 
                            = ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q) 
                               | (0x0fU & ((IData)(1U) 
                                           << (3U & 
                                               (vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                                >> 0x0000000bU)))));
                    }
                }
            }
        }
        if (((1U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
             & (0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r)))) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q 
                = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r;
        }
        if (((2U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)) 
             & (8U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)))) {
            vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__set = 1U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
             & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd))) {
            vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                = (0x00fffffcU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i);
        }
        if (((0U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)) 
             & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr))) {
            vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                = (0x00ffffffU & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i);
        }
        if (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) 
             | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__reset_status))) {
            vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else if (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                    & (0x10U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 1U;
        }
        if ((((0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_wr_i)) 
              | (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i)) 
             & (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o))) {
            if ((0U == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q = 0U;
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 0U;
            } else {
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axlen 
                    = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q;
                __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                    = (0x000000ffU & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q) 
                                      - (IData)(1U)));
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axtype 
                    = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q;
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__addr 
                    = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
                if ((0U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axtype))) {
                    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__Vfuncout 
                        = __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__addr;
                } else if ((2U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axtype))) {
                    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
                        = ((0U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axlen))
                            ? 3U : ((1U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axlen))
                                     ? 7U : ((3U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axlen))
                                              ? 0x0000000fU
                                              : ((7U 
                                                  == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__axlen))
                                                  ? 0x0000001fU
                                                  : 0x0000003fU))));
                    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__Vfuncout 
                        = ((__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__addr 
                            & (~ vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                           | (((IData)(4U) + __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__addr) 
                              & vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
                } else {
                    __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__Vfuncout 
                        = ((IData)(4U) + __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__addr);
                }
                __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__1__Vfuncout;
            }
        }
        if (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awvalid) 
             & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awready))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
                = (1U & (~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)));
            if (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wvalid) 
                 & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_wready))) {
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr 
                    = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr;
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout 
                    = __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__addr;
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q 
                    = (1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wvalid)));
                __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0xffU;
                __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__2__Vfuncout;
            } else {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 1U;
                __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0U;
                __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr;
            }
        } else if (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid) 
                    & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arready))) {
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
                = (1U & (~ (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)));
            __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen;
            __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axtype 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arburst;
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q 
                = (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen));
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                = (0x000000ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen) 
                                  - (IData)(1U)));
            __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr;
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
            if ((0U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axtype))) {
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout 
                    = __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr;
            } else if ((2U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axtype))) {
                vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
                    = ((0U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen))
                        ? 3U : ((1U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen))
                                 ? 7U : ((3U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen))
                                          ? 0x0000000fU
                                          : ((7U == (IData)(__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__axlen))
                                              ? 0x0000001fU
                                              : 0x0000003fU))));
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout 
                    = ((__Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr 
                        & (~ vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                       | (((IData)(4U) + __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr) 
                          & vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
            } else {
                __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout 
                    = ((IData)(4U) + __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__addr);
            }
            __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                = __Vfunc_lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__3__Vfuncout;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) {
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if ((2U == (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if (VL_UNLIKELY(((0x10U > (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count))))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
            VL_WRITEF_NX("%c",1, '#',8,vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in);
            Verilated::runFlushCallbacks();
            vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        }
    } else if ((1U == (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if ((0U < (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count) 
                                  - (IData)(1U)));
        }
    } else if (VL_UNLIKELY(((3U == (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                                     << 1U) | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))))) {
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
        VL_WRITEF_NX("%c",1, '#',8,vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in);
        Verilated::runFlushCallbacks();
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
            = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
    }
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__msr;
    if (__VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0) {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0U] = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1U] = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2U] = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3U] = 0U;
    }
    if (__VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4) {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[__VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4] 
            = __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v4;
    }
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    if (__VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0) {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[__VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0] 
            = __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    }
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    if (__VdlySet__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0) {
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[__VdlyDim0__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0] 
            = __VdlyVal__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    }
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    if (__VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15U] = 0U;
    }
    if (__VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14U] = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15U] = 0U;
    }
    if (__VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32) {
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32] 
            = __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    }
    if (__VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33) {
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33] = 0U;
    }
    if (__VdlySet__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34) {
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__VdlyDim0__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34] 
            = __VdlyVal__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    }
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = __Vdly__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done 
        = (0x16U == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n 
        = (1U & ((IData)(vlSymsp->TOP.reset) | (~ (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n 
        = (1U & ((IData)(vlSymsp->TOP.reset) | (~ (
                                                   (1U 
                                                    == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)) 
                                                   | (2U 
                                                      == (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))))));
    vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((((IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
              & (IData)(vlSelfRef.__PVT__spi_sck)) 
             & (1U == (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
            | (((~ (0U != (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider))) 
                & (~ (IData)(vlSelfRef.__PVT__spi_sck))) 
               & (IData)(vlSelfRef.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w 
        = (0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o 
        = (4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(
                                                             (((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q) 
                                                               >> 1U) 
                                                              | (6U 
                                                                 == (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    __Vtableidx4 = ((((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                 << 4U) | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int) 
                        << 2U) | (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                   << 1U) | (IData)(vlSymsp->TOP.reset))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir 
        = VysyxSoCFull__ConstPool__TABLE_h098d4509_0
        [__Vtableidx4];
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w 
        = (4U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w 
        = (0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w 
        = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
        [vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr];
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_we) 
             & (0U == (7U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))) 
            && (1U & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                      >> 7U))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSymsp->TOP.externalPins_uart_rx));
    __Vtableidx1 = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VysyxSoCFull__ConstPool__TABLE_hb83ca8a9_0
        [__Vtableidx1];
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_we) 
             & (2U == (7U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))) 
            && (1U & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in) 
                      >> 2U))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_push 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_we) 
             & (0U == (7U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))) 
            && (1U & (~ ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                         >> 7U)))));
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
    vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
        = __Vdly__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_rvalid 
        = ((0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
           & ((0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
              & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                 >> 5U)));
    vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_3 
        = ((0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
           & ((~ ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                  >> 5U)) & (0U != (IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__scratch = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_we) 
             & (7U == (7U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)))) {
            vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__scratch 
                = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in;
        }
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0x0eU;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q 
            = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q;
        if (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_we) 
             & (1U == (7U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
                vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier 
                    = (0x0000000fU & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in));
            }
        }
        if (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awvalid) 
             & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_awready))) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q = 0U;
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q = 0U;
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q = 0U;
        } else if (((IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arvalid) 
                    & (IData)(vlSelfRef.__PVT__axi4delay_delayer__DOT__in_arready))) {
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q = 0U;
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arburst;
            vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q 
                = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen;
        }
        if (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__enable) {
            if ((8U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((4U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                | (0U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = ((0U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))
                                ? 4U : (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                         << 3U) | (
                                                   ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error))));
                        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)))) {
                        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                << 3U) | (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)));
                        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0x0eU;
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0x0eU;
                    } else {
                        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else {
                    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
                        = (1U & (VL_REDXOR_8(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                 ^ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)));
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 5U;
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((2U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        if ((0U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter))) {
                            if ((8U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 3U;
                            } else {
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
                            }
                        } else {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                                = (7U & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter) 
                                         - (IData)(1U)));
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                        }
                        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0x0eU;
                    } else {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                            = ((2U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                ? ((1U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? 7U : 6U) : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                   ? 5U
                                                   : 4U));
                        if (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                            vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0x0eU;
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
                        } else {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 6U;
                        }
                        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
                        = (1U & ((0x00000010U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                  ? ((0x00000020U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)
                                      : (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor))
                                  : ((0x00000020U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity))
                                      : (~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor)))));
                    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 9U;
                } else {
                    if (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
                            = (1U & (~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)));
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0x0aU;
                    }
                    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((1U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
                            = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in;
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 8U;
                    }
                    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                } else {
                    if (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        if ((2U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                        << 7U) | (0x0000007fU 
                                                  & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                     >> 1U)));
                            } else {
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = ((0x80U & (IData)(__Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 6U) | 
                                          (0x0000003fU 
                                           & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                              >> 1U))));
                            }
                        } else {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                = ((1U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? ((0xc0U & (IData)(__Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 5U) | 
                                          (0x0000001fU 
                                           & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                              >> 1U))))
                                    : ((0xe0U & (IData)(__Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 4U) | 
                                          (0x0000000fU 
                                           & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                              >> 1U)))));
                        }
                    }
                    if (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 7U;
                    }
                    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                if (vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate 
                        = ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)
                            ? 0U : 6U);
                }
                vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
            } else {
                vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
                vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0x0eU;
                if (((~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)) 
                     & (0U != (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                }
            }
            if ((4U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((2U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                } else if ((1U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 1U;
                    if ((2U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 7U;
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_8(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out));
                        } else {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 6U;
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x0000007fU 
                                                      & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out))));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 5U;
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x0000003fU 
                                                  & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out))));
                    } else {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 4U;
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x0000001fU 
                                                  & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out))));
                    }
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                        = (0x0000007fU & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out) 
                                          >> 1U));
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                        = (1U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out));
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 1U;
                } else {
                    if ((0U != (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                        } else {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                                  - (IData)(1U)));
                        }
                    } else {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = ((0U == (4U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                ? 0x0dU : ((4U == (7U 
                                                   & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                            ? 0x15U
                                            : 0x1dU));
                    }
                    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((1U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    if ((0U != (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                        } else {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                                  - (IData)(1U)));
                        }
                    } else {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0x0fU;
                    }
                    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                } else {
                    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                    if ((0U != (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            if ((0U < (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter))) {
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
                                    = (7U & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter) 
                                             - (IData)(1U)));
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                                    = ((0x40U & (IData)(__Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out)) 
                                       | (0x0000003fU 
                                          & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out) 
                                             >> 1U)));
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out));
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                            } else if ((8U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = ((0x00000010U 
                                        & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                        ? ((1U & (~ 
                                                  ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                   >> 5U))) 
                                           && (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor))
                                        : ((1U & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                  >> 5U)) 
                                           || (1U & 
                                               (~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor)))));
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 3U;
                            } else {
                                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                            }
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        } else {
                            __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x0000001fU & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                                  - (IData)(1U)));
                        }
                    } else {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0x0fU;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                if ((0U != (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                    } else {
                        __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = (0x0000001fU & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                              - (IData)(1U)));
                    }
                } else {
                    __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0x0fU;
                }
                vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 0U;
            } else if ((0U != (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
                vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 5U;
            } else {
                __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
            }
        } else {
            vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        }
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rstate;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    }
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state 
        = ((~ (IData)(vlSymsp->TOP.reset)) & (IData)(vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0x0000000fU & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelfRef.__PVT__axi4delay_delayer__DOT__out_bvalid 
        = ((IData)(vlSelfRef.lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgRegularize_h48a8691c_0_3) 
           & ((IData)(vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                          - (IData)(1U)));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt))) 
           & (0U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__enable 
        = ((~ (IData)(vlSymsp->TOP.reset)) & ((0U != (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                                              & (~ 
                                                 (0U 
                                                  != (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dlc)))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state = 0U;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0x00ffU & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xff00U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr = 3U;
    } else {
        vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state 
            = vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate;
        vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q 
            = vlSelfRef.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i;
        if (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) 
             | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__reset_status))) {
            vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        } else if ((((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we) 
                     & (~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop))) 
                    & (0x10U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_we) 
             & (1U == (7U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)))) {
            if ((0x00000080U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0x00ffU & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in) 
                          << 8U));
            }
        }
        if (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_we) 
             & (0U == (7U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)))) {
            if ((0x00000080U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xff00U & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in));
            }
        }
        if (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_we) 
             & (3U == (7U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)))) {
            vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr 
                = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in;
        }
    }
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we 
        = ((~ (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate)));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = __Vdly__luart__DOT__muart__DOT__Uregs__DOT__dlc;
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
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))));
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__reg_we) 
             & (2U == (7U & vlSelfRef.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))) 
            && (1U & ((IData)(vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in) 
                      >> 1U))));
    __Vtableidx2 = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_value 
        = VysyxSoCFull__ConstPool__TABLE_h0e58a3b9_0
        [__Vtableidx2];
    __Vtableidx5 = vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelfRef.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VysyxSoCFull__ConstPool__TABLE_h3a83442a_0
        [__Vtableidx5];
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
}
