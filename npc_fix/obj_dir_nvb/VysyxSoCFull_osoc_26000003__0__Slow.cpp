// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_osoc_26000003___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_osoc_26000003* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_osoc_26000003___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_master_rvalid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_2)
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__anyValid)
                                          : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_2_0)) 
                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_2_1))));
    vlSelfRef.__PVT__io_master_rid = (0x0000000fU & 
                                      (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0)
                                         ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)
                                         : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1)
                                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w)
                                                   : 0U)));
    vlSelfRef.__PVT__io_master_rlast = (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0) 
                                         & (((((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                                   << 3U) 
                                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                     << 2U)) 
                                                 | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last))) 
                                                << 0x0000000cU) 
                                               | (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                     << 3U) 
                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                       << 2U)) 
                                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last))) 
                                                  << 8U)) 
                                              | ((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                     << 3U) 
                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                       << 2U)) 
                                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))) 
                                             >> (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast))) 
                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4delay_delayer_in_rlast)));
    vlSelfRef.__PVT__io_master_bvalid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3)
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__anyValid_1)
                                          : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_0)) 
                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_bvalid) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_1))));
    vlSelfRef.__PVT__io_master_bid = (0x0000000fU & 
                                      (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_3_0)
                                         ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)
                                         : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_3_1)
                                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w)
                                                   : 0U)));
    vlSelfRef.__PVT__io_master_bresp = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_3_0)
                                         ? (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp) 
                                                  | ((((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_15) 
                                                           << 6U) 
                                                          | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_14) 
                                                             << 4U)) 
                                                         | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_13) 
                                                             << 2U) 
                                                            | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_12))) 
                                                        << 0x00000018U) 
                                                       | (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_11) 
                                                             << 6U) 
                                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_10) 
                                                               << 4U)) 
                                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_9) 
                                                               << 2U) 
                                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_8))) 
                                                          << 0x00000010U)) 
                                                      | ((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_7) 
                                                             << 6U) 
                                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_6) 
                                                               << 4U)) 
                                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_5) 
                                                               << 2U) 
                                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_4))) 
                                                          << 8U) 
                                                         | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_3) 
                                                              << 6U) 
                                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_2) 
                                                                << 4U)) 
                                                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_1) 
                                                                << 2U) 
                                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_0))))) 
                                                     >> 
                                                     ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid) 
                                                      << 1U))))
                                         : 0U);
    vlSelfRef.__PVT__match_aw = (1U & ((0x0200U == 
                                        (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__awaddr_lsu 
                                         >> 0x00000010U)) 
                                       | (IData)(vlSelfRef.__PVT__trans)));
    vlSelfRef.__PVT__match_ar = (IData)((((IData)(vlSelfRef.__PVT__trans) 
                                          >> 1U) | 
                                         (0x0200U == 
                                          (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_araddr 
                                           >> 0x00000010U))));
    if (vlSelfRef.__PVT__match_aw) {
        vlSelfRef.__PVT__io_master_wdata = 0U;
        vlSelfRef.__PVT__io_master_wstrb = 0U;
        vlSelfRef.__PVT__io_master_awaddr = 0U;
        vlSelfRef.__PVT__cawvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__awvalid_lsu;
    } else {
        vlSelfRef.__PVT__io_master_wdata = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__wdata_lsu;
        vlSelfRef.__PVT__io_master_wstrb = (0x0000000fU 
                                            & ((0U 
                                                == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))
                                                ? ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out))
                                                : (
                                                   (1U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))
                                                    ? 
                                                   ((IData)(3U) 
                                                    << 
                                                    (3U 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))
                                                     ? 0x0fU
                                                     : 0U))));
        vlSelfRef.__PVT__io_master_awaddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__awaddr_lsu;
        vlSelfRef.__PVT__cawvalid = 0U;
    }
    vlSelfRef.__PVT__io_master_bready = ((~ (IData)(vlSelfRef.__PVT__match_aw)) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__bready_lsu));
    vlSelfRef.__PVT__io_master_wvalid = ((~ (IData)(vlSelfRef.__PVT__match_aw)) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__wvalid_lsu));
    vlSelfRef.__PVT__io_master_awvalid = ((~ (IData)(vlSelfRef.__PVT__match_aw)) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__awvalid_lsu));
    if (vlSelfRef.__PVT__match_ar) {
        vlSelfRef.__PVT__caddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_araddr;
        vlSelfRef.__PVT__io_master_arburst = 0U;
        vlSelfRef.__PVT__io_master_arlen = 0U;
        vlSelfRef.__PVT__io_master_arsize = 0U;
        vlSelfRef.__PVT__io_master_araddr = 0U;
        vlSelfRef.__PVT__carvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_arvalid;
    } else {
        vlSelfRef.__PVT__caddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__awaddr_lsu;
        vlSelfRef.__PVT__io_master_arburst = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_arburst;
        vlSelfRef.__PVT__io_master_arlen = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_arlen;
        vlSelfRef.__PVT__io_master_arsize = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_arsize;
        vlSelfRef.__PVT__io_master_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_araddr;
        vlSelfRef.__PVT__carvalid = 0U;
    }
    vlSelfRef.__PVT__io_master_rready = ((~ (IData)(vlSelfRef.__PVT__match_ar)) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_rready));
    vlSelfRef.__PVT__io_master_arvalid = ((~ (IData)(vlSelfRef.__PVT__match_ar)) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_arvalid));
}

VL_ATTR_COLD void VysyxSoCFull_osoc_26000003___ctor_var_reset(VysyxSoCFull_osoc_26000003* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_osoc_26000003___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__io_interrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 408515240381666009ull);
    vlSelf->__PVT__io_master_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15918341228068111945ull);
    vlSelf->__PVT__io_master_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1254038570903178483ull);
    vlSelf->__PVT__io_master_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5100000641368617149ull);
    vlSelf->__PVT__io_master_awid = 0U;
    ;
    vlSelf->__PVT__io_master_awlen = 0U;
    ;
    vlSelf->__PVT__io_master_awsize = 0U;
    ;
    vlSelf->__PVT__io_master_awburst = 0U;
    ;
    vlSelf->__PVT__io_master_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10619170216674498609ull);
    vlSelf->__PVT__io_master_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1901748201038864800ull);
    vlSelf->__PVT__io_master_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4508192480944508561ull);
    vlSelf->__PVT__io_master_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4103275223239596405ull);
    vlSelf->__PVT__io_master_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3571525934430669283ull);
    vlSelf->__PVT__io_master_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5636029676147399511ull);
    vlSelf->__PVT__io_master_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14479403608764655851ull);
    vlSelf->__PVT__io_master_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 252024972192926592ull);
    vlSelf->__PVT__io_master_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1062445100397978765ull);
    vlSelf->__PVT__io_master_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 189821581177370283ull);
    vlSelf->__PVT__io_master_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17696505626772089272ull);
    vlSelf->__PVT__io_master_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7705699152724094327ull);
    vlSelf->__PVT__io_master_arid = 0U;
    ;
    vlSelf->__PVT__io_master_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12197991585860830104ull);
    vlSelf->__PVT__io_master_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2926577748560128850ull);
    vlSelf->__PVT__io_master_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5406036630392025300ull);
    vlSelf->__PVT__io_master_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14835472978164275174ull);
    vlSelf->__PVT__io_master_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4643816389357758479ull);
    vlSelf->__PVT__io_master_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17575739218363420612ull);
    vlSelf->__PVT__io_master_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13565575050082382344ull);
    vlSelf->__PVT__io_master_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18248460336661176801ull);
    vlSelf->__PVT__io_master_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10731670764913458081ull);
    vlSelf->__PVT__io_slave_awready = 0U;
    ;
    vlSelf->__PVT__io_slave_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5334601523648441864ull);
    vlSelf->__PVT__io_slave_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2745451994456866424ull);
    vlSelf->__PVT__io_slave_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12914048876469032452ull);
    vlSelf->__PVT__io_slave_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8315638325092922864ull);
    vlSelf->__PVT__io_slave_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16399205572355175556ull);
    vlSelf->__PVT__io_slave_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5360184287951858800ull);
    vlSelf->__PVT__io_slave_wready = 0U;
    ;
    vlSelf->__PVT__io_slave_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13353078287730269036ull);
    vlSelf->__PVT__io_slave_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13100422519405067609ull);
    vlSelf->__PVT__io_slave_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1200568031881101223ull);
    vlSelf->__PVT__io_slave_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11119378898008568253ull);
    vlSelf->__PVT__io_slave_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5991839402217458983ull);
    vlSelf->__PVT__io_slave_bvalid = 0U;
    ;
    vlSelf->__PVT__io_slave_bresp = 0U;
    ;
    vlSelf->__PVT__io_slave_bid = 0U;
    ;
    vlSelf->__PVT__io_slave_arready = 0U;
    ;
    vlSelf->__PVT__io_slave_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9295917410590269615ull);
    vlSelf->__PVT__io_slave_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8494381812203753726ull);
    vlSelf->__PVT__io_slave_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4271623300114428176ull);
    vlSelf->__PVT__io_slave_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15287740914422975644ull);
    vlSelf->__PVT__io_slave_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4321564869539443489ull);
    vlSelf->__PVT__io_slave_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13405440217435810056ull);
    vlSelf->__PVT__io_slave_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13430075741762723373ull);
    vlSelf->__PVT__io_slave_rvalid = 0U;
    ;
    vlSelf->__PVT__io_slave_rresp = 0U;
    ;
    vlSelf->__PVT__io_slave_rdata = 0U;
    ;
    vlSelf->__PVT__io_slave_rlast = 0U;
    ;
    vlSelf->__PVT__io_slave_rid = 0U;
    ;
    vlSelf->__PVT__crdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17927932929912555336ull);
    vlSelf->__PVT__caddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1130972979955015548ull);
    vlSelf->__PVT__crvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 847591021498092698ull);
    vlSelf->__PVT__cawvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6622422924559443519ull);
    vlSelf->__PVT__carvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9608625259224865541ull);
    vlSelf->__PVT__match_aw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1788252777389368285ull);
    vlSelf->__PVT__match_ar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6325071766536394058ull);
    vlSelf->__PVT__trans = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1909746036518947576ull);
    vlSelf->__PVT__CLINT_mod__DOT__divisor = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6588282828465286366ull);
    vlSelf->__PVT__CLINT_mod__DOT__mtime = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18248436977652874710ull);
    vlSelf->__PVT__CLINT_mod__DOT__buff = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5723302894740306796ull);
    vlSelf->__PVT__CLINT_mod__DOT__clint_r = 0;
}
