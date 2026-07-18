// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_osoc_26000003___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_osoc_26000003* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_osoc_26000003___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void VysyxSoCFull_osoc_26000003___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_osoc_26000003* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_osoc_26000003___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_master_arready = ((((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_0)) 
                                           | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_1) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_arready))) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_1));
    vlSelfRef.__PVT__io_master_awready = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_awready) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.axi4xbar__DOT____VdfgRegularize_hb9dde7af_0_3));
}

void VysyxSoCFull_osoc_26000003___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_osoc_26000003* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_osoc_26000003___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__trans;
    __Vdly__trans = 0;
    QData/*63:0*/ __Vdly__CLINT_mod__DOT__mtime;
    __Vdly__CLINT_mod__DOT__mtime = 0;
    IData/*31:0*/ __Vdly__CLINT_mod__DOT__clint_r;
    __Vdly__CLINT_mod__DOT__clint_r = 0;
    SData/*11:0*/ __Vdly__CLINT_mod__DOT__divisor;
    __Vdly__CLINT_mod__DOT__divisor = 0;
    CData/*0:0*/ __Vdly__crvalid;
    __Vdly__crvalid = 0;
    IData/*31:0*/ __Vdly__CLINT_mod__DOT__buff;
    __Vdly__CLINT_mod__DOT__buff = 0;
    // Body
    __Vdly__CLINT_mod__DOT__mtime = vlSelfRef.__PVT__CLINT_mod__DOT__mtime;
    __Vdly__CLINT_mod__DOT__clint_r = vlSelfRef.__PVT__CLINT_mod__DOT__clint_r;
    __Vdly__CLINT_mod__DOT__divisor = vlSelfRef.__PVT__CLINT_mod__DOT__divisor;
    __Vdly__CLINT_mod__DOT__buff = vlSelfRef.__PVT__CLINT_mod__DOT__buff;
    __Vdly__crvalid = vlSelfRef.__PVT__crvalid;
    __Vdly__trans = vlSelfRef.__PVT__trans;
    vlSelfRef.__PVT__io_master_rvalid = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_2)
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__anyValid)
                                          : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_2_0)) 
                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_2_1))));
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__reset) {
        __Vdly__trans = 0U;
        vlSelfRef.__PVT__crdata = 0U;
        __Vdly__CLINT_mod__DOT__mtime = 0ULL;
        __Vdly__CLINT_mod__DOT__clint_r = 0U;
        __Vdly__CLINT_mod__DOT__divisor = 0U;
        __Vdly__crvalid = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__match_ar) & (IData)(vlSelfRef.__PVT__carvalid))) {
            __Vdly__trans = 2U;
        }
        if (((IData)(vlSelfRef.__PVT__match_aw) & (IData)(vlSelfRef.__PVT__cawvalid))) {
            __Vdly__trans = 1U;
        }
        if (((((IData)(vlSelfRef.__PVT__trans) >> 1U) 
              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_rready)) 
             & (IData)(vlSelfRef.__PVT__crvalid))) {
            __Vdly__trans = 0U;
        }
        if ((((IData)(vlSelfRef.__PVT__trans) & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__bready_lsu)) 
             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_bvalid))) {
            __Vdly__trans = 0U;
        }
        if ((0x03c9U == (IData)(vlSelfRef.__PVT__CLINT_mod__DOT__divisor))) {
            __Vdly__CLINT_mod__DOT__divisor = 1U;
            __Vdly__CLINT_mod__DOT__mtime = (1ULL + vlSelfRef.__PVT__CLINT_mod__DOT__mtime);
        } else {
            __Vdly__CLINT_mod__DOT__divisor = (0x00000fffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__CLINT_mod__DOT__divisor)));
        }
        if ((0U == vlSelfRef.__PVT__CLINT_mod__DOT__clint_r)) {
            if (vlSelfRef.__PVT__carvalid) {
                __Vdly__CLINT_mod__DOT__clint_r = 1U;
                if ((0xbff8U == (0x0000ffffU & vlSelfRef.__PVT__caddr))) {
                    vlSelfRef.__PVT__crdata = (IData)(vlSelfRef.__PVT__CLINT_mod__DOT__mtime);
                    __Vdly__CLINT_mod__DOT__buff = (IData)(
                                                           (vlSelfRef.__PVT__CLINT_mod__DOT__mtime 
                                                            >> 0x20U));
                } else if ((0xbffcU == (0x0000ffffU 
                                        & vlSelfRef.__PVT__caddr))) {
                    vlSelfRef.__PVT__crdata = vlSelfRef.__PVT__CLINT_mod__DOT__buff;
                }
                __Vdly__crvalid = 1U;
            }
        } else if ((1U == vlSelfRef.__PVT__CLINT_mod__DOT__clint_r)) {
            if (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_rready) 
                 & (IData)(vlSelfRef.__PVT__crvalid))) {
                __Vdly__CLINT_mod__DOT__clint_r = 0U;
                __Vdly__crvalid = 0U;
            }
        }
    }
    vlSelfRef.__PVT__trans = __Vdly__trans;
    vlSelfRef.__PVT__CLINT_mod__DOT__mtime = __Vdly__CLINT_mod__DOT__mtime;
    vlSelfRef.__PVT__CLINT_mod__DOT__clint_r = __Vdly__CLINT_mod__DOT__clint_r;
    vlSelfRef.__PVT__CLINT_mod__DOT__divisor = __Vdly__CLINT_mod__DOT__divisor;
    vlSelfRef.__PVT__CLINT_mod__DOT__buff = __Vdly__CLINT_mod__DOT__buff;
    vlSelfRef.__PVT__crvalid = __Vdly__crvalid;
}

void VysyxSoCFull_osoc_26000003___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_osoc_26000003* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_osoc_26000003___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void VysyxSoCFull_osoc_26000003___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2(VysyxSoCFull_osoc_26000003* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_osoc_26000003___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
        vlSelfRef.__PVT__cawvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__awvalid_lsu;
        vlSelfRef.__PVT__io_master_wstrb = 0U;
    } else {
        vlSelfRef.__PVT__cawvalid = 0U;
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
    }
    vlSelfRef.__PVT__io_master_bready = ((~ (IData)(vlSelfRef.__PVT__match_aw)) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__bready_lsu));
    vlSelfRef.__PVT__io_master_awvalid = ((~ (IData)(vlSelfRef.__PVT__match_aw)) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__awvalid_lsu));
    if (vlSelfRef.__PVT__match_ar) {
        vlSelfRef.__PVT__caddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_araddr;
        vlSelfRef.__PVT__io_master_arsize = 0U;
        vlSelfRef.__PVT__carvalid = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_arvalid;
    } else {
        vlSelfRef.__PVT__caddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__awaddr_lsu;
        vlSelfRef.__PVT__io_master_arsize = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_arsize;
        vlSelfRef.__PVT__carvalid = 0U;
    }
    vlSelfRef.__PVT__io_master_rready = ((~ (IData)(vlSelfRef.__PVT__match_ar)) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_rready));
    vlSelfRef.__PVT__io_master_arvalid = ((~ (IData)(vlSelfRef.__PVT__match_ar)) 
                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_arvalid));
}

void VysyxSoCFull_osoc_26000003___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3(VysyxSoCFull_osoc_26000003* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_osoc_26000003___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__match_aw) {
        vlSelfRef.__PVT__io_master_wdata = 0U;
        vlSelfRef.__PVT__io_master_awaddr = 0U;
    } else {
        vlSelfRef.__PVT__io_master_wdata = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__wdata_lsu;
        vlSelfRef.__PVT__io_master_awaddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__awaddr_lsu;
    }
    if (vlSelfRef.__PVT__match_ar) {
        vlSelfRef.__PVT__io_master_araddr = 0U;
        vlSelfRef.__PVT__io_master_arburst = 0U;
        vlSelfRef.__PVT__io_master_arlen = 0U;
    } else {
        vlSelfRef.__PVT__io_master_araddr = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_araddr;
        vlSelfRef.__PVT__io_master_arburst = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_arburst;
        vlSelfRef.__PVT__io_master_arlen = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_arlen;
    }
    vlSelfRef.__PVT__io_master_wvalid = ((~ (IData)(vlSelfRef.__PVT__match_aw)) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__wvalid_lsu));
}

void VysyxSoCFull_osoc_26000003___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull_osoc_26000003* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_osoc_26000003___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_master_rid = (0x0000000fU & 
                                      (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0)
                                         ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)
                                         : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1)
                                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w)
                                                   : 0U)));
}

void VysyxSoCFull_osoc_26000003___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1(VysyxSoCFull_osoc_26000003* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_osoc_26000003___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}
