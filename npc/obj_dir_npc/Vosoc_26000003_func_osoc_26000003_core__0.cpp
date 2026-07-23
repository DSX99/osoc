// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vosoc_26000003_func.h for the primary calling header

#include "Vosoc_26000003_func__pch.h"

void Vosoc_26000003_func_osoc_26000003_core___ico_sequent__TOP__osoc_26000003_func__core__0(Vosoc_26000003_func_osoc_26000003_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vosoc_26000003_func_osoc_26000003_core___ico_sequent__TOP__osoc_26000003_func__core__0\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst = vlSymsp->TOP.reset;
    vlSelfRef.__PVT__ls_wb_bus_csr_pc_wb = 0U;
    if (vlSelfRef.ls_wb_bus_exception_wb) {
        vlSelfRef.__PVT__ls_wb_bus_csr_pc_wb = ((0x0aU 
                                                 != (IData)(vlSelfRef.ls_wb_bus_mcause_wb))
                                                 ? vlSelfRef.__PVT__csr_mod__DOT__regs[4U]
                                                 : vlSelfRef.__PVT__csr_mod__DOT__regs[1U]);
    }
    vlSelfRef.__PVT__bready_lsu = 0U;
    vlSelfRef.__PVT__rready_lsu = 0U;
    vlSelfRef.__PVT__ls_wb_bus_alu_out_ls = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out;
    vlSelfRef.__PVT__lsu_mod__DOT__done_r = 0U;
    vlSelfRef.__PVT__lsu_mod__DOT__done_w = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (((IData)(vlSelfRef.ex_ls_bus_lsu_we_ls) 
             | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__trans_w))) {
            if ((0U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                if ((1U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                    if ((2U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                        vlSelfRef.__PVT__bready_lsu = 1U;
                    }
                    if ((2U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                        if ((3U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                            vlSelfRef.__PVT__lsu_mod__DOT__done_w = 1U;
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelfRef.ex_ls_bus_lsu_re_ls) 
             | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__trans_r))) {
            if ((0U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
                if ((1U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
                    if ((2U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
                        vlSelfRef.__PVT__rready_lsu = 1U;
                        if (vlSelfRef.__PVT__rvalid_lsu) {
                            if ((0U == (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))) {
                                vlSelfRef.__PVT__ls_wb_bus_alu_out_ls 
                                    = ((2U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)
                                        ? ((1U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)
                                            ? (((- (IData)(
                                                           (vlSelfRef.__PVT__rdata_lsu 
                                                            >> 0x1fU))) 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__rdata_lsu 
                                                  >> 0x18U))
                                            : (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.__PVT__rdata_lsu 
                                                               >> 0x17U)))) 
                                                << 8U) 
                                               | (0x000000ffU 
                                                  & (vlSelfRef.__PVT__rdata_lsu 
                                                     >> 0x10U))))
                                        : ((1U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)
                                            ? (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.__PVT__rdata_lsu 
                                                               >> 0x0fU)))) 
                                                << 8U) 
                                               | (0x000000ffU 
                                                  & (vlSelfRef.__PVT__rdata_lsu 
                                                     >> 8U)))
                                            : (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.__PVT__rdata_lsu 
                                                               >> 7U)))) 
                                                << 8U) 
                                               | (0x000000ffU 
                                                  & vlSelfRef.__PVT__rdata_lsu))));
                            } else if ((1U == (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))) {
                                if ((2U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)) {
                                    if ((2U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)) {
                                        vlSelfRef.__PVT__ls_wb_bus_alu_out_ls 
                                            = (((- (IData)(
                                                           (vlSelfRef.__PVT__rdata_lsu 
                                                            >> 0x1fU))) 
                                                << 0x00000010U) 
                                               | (vlSelfRef.__PVT__rdata_lsu 
                                                  >> 0x10U));
                                    }
                                } else {
                                    vlSelfRef.__PVT__ls_wb_bus_alu_out_ls 
                                        = (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.__PVT__rdata_lsu 
                                                           >> 0x0fU)))) 
                                            << 0x00000010U) 
                                           | (0x0000ffffU 
                                              & vlSelfRef.__PVT__rdata_lsu));
                                }
                            } else if ((2U == (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))) {
                                vlSelfRef.__PVT__ls_wb_bus_alu_out_ls 
                                    = vlSelfRef.__PVT__rdata_lsu;
                            } else if ((4U == (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))) {
                                vlSelfRef.__PVT__ls_wb_bus_alu_out_ls 
                                    = ((2U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)
                                        ? ((1U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)
                                            ? (vlSelfRef.__PVT__rdata_lsu 
                                               >> 0x18U)
                                            : (0x000000ffU 
                                               & (vlSelfRef.__PVT__rdata_lsu 
                                                  >> 0x10U)))
                                        : ((1U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)
                                            ? (0x000000ffU 
                                               & (vlSelfRef.__PVT__rdata_lsu 
                                                  >> 8U))
                                            : (0x000000ffU 
                                               & vlSelfRef.__PVT__rdata_lsu)));
                            } else if ((5U == (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))) {
                                if ((2U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)) {
                                    if ((2U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)) {
                                        vlSelfRef.__PVT__ls_wb_bus_alu_out_ls 
                                            = (vlSelfRef.__PVT__rdata_lsu 
                                               >> 0x10U);
                                    }
                                } else {
                                    vlSelfRef.__PVT__ls_wb_bus_alu_out_ls 
                                        = (0x0000ffffU 
                                           & vlSelfRef.__PVT__rdata_lsu);
                                }
                            }
                            vlSelfRef.__PVT__lsu_mod__DOT__done_r = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__ls_wb_valid_ls = (((IData)(vlSelfRef.ex_ls_valid_ls) 
                                        & ((~ (IData)(vlSelfRef.ex_ls_bus_lsu_re_ls)) 
                                           | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__done_r))) 
                                       & ((~ (IData)(vlSelfRef.ex_ls_bus_lsu_we_ls)) 
                                          | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__done_w)));
    vlSelfRef.ex_ls_ready_ls = (1U & (((~ (IData)(vlSelfRef.ex_ls_bus_lsu_re_ls)) 
                                       | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__done_r)) 
                                      & ((~ (IData)(vlSelfRef.ex_ls_bus_lsu_we_ls)) 
                                         | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__done_w))));
    vlSelfRef.flush = vlSelfRef.ls_wb_bus_exception_wb;
    vlSelfRef.__PVT__de_ex_bus_data_rs1_de = vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs
        [(0x0000000fU & (IData)(vlSelfRef.__PVT__de_ex_bus_rs1_de))];
    if (((IData)(vlSelfRef.__PVT__decode_mod__DOT__wb_match_rs1) 
         & (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid))) {
        vlSelfRef.__PVT__de_ex_bus_data_rs1_de = vlSelfRef.__PVT__reg_in;
    }
    if (((IData)(vlSelfRef.__PVT__decode_mod__DOT__ls_match_rs1) 
         & (IData)(vlSelfRef.__PVT__ls_wb_valid_ls))) {
        vlSelfRef.__PVT__de_ex_bus_data_rs1_de = vlSelfRef.__PVT__ls_wb_bus_alu_out_ls;
    }
    if ((((IData)(vlSelfRef.__PVT__decode_mod__DOT__ex_match_rs1) 
          & (IData)(vlSelfRef.ex_ls_valid_ex)) & (~ (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_re)))) {
        vlSelfRef.__PVT__de_ex_bus_data_rs1_de = vlSelfRef.__PVT__ex_ls_bus_alu_out_ex;
    }
    vlSelfRef.__PVT__de_ex_bus_data_rs2_de = vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs
        [(0x0000000fU & (IData)(vlSelfRef.__PVT__de_ex_bus_rs2_de))];
    if (((IData)(vlSelfRef.__PVT__decode_mod__DOT__wb_match_rs2) 
         & (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid))) {
        vlSelfRef.__PVT__de_ex_bus_data_rs2_de = vlSelfRef.__PVT__reg_in;
    }
    if (((IData)(vlSelfRef.__PVT__decode_mod__DOT__ls_match_rs2) 
         & (IData)(vlSelfRef.__PVT__ls_wb_valid_ls))) {
        vlSelfRef.__PVT__de_ex_bus_data_rs2_de = vlSelfRef.__PVT__ls_wb_bus_alu_out_ls;
    }
    if ((((IData)(vlSelfRef.__PVT__decode_mod__DOT__ex_match_rs2) 
          & (IData)(vlSelfRef.ex_ls_valid_ex)) & (~ (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_re)))) {
        vlSelfRef.__PVT__de_ex_bus_data_rs2_de = vlSelfRef.__PVT__ex_ls_bus_alu_out_ex;
    }
    vlSelfRef.__PVT__pc_mod__DOT__ex_valid = ((IData)(vlSelfRef.ex_ls_ready_ls) 
                                              & ((~ 
                                                  ((IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_exception) 
                                                   | (IData)(vlSelfRef.ls_wb_bus_exception_wb))) 
                                                 & (IData)(vlSelfRef.ex_ls_valid_ex)));
    vlSelfRef.__PVT__wdata_lsu = 0U;
    vlSelfRef.__PVT__wvalid_lsu = 0U;
    vlSelfRef.__PVT__awvalid_lsu = 0U;
    vlSelfRef.__PVT__araddr_lsu = 0U;
    vlSelfRef.__PVT__awaddr_lsu = 0U;
    vlSelfRef.__PVT__arvalid_lsu = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (((IData)(vlSelfRef.ex_ls_bus_lsu_we_ls) 
             | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__trans_w))) {
            if ((0U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                if ((((IData)(vlSelfRef.ex_ls_bus_lsu_we_ls) 
                      & (IData)(vlSelfRef.ex_ls_valid_ls)) 
                     & (~ (IData)(vlSelfRef.flush)))) {
                    vlSelfRef.__PVT__wdata_lsu = VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_data_rs2, 
                                                               VL_SHIFTL_III(32,32,32, 
                                                                             (3U 
                                                                              & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out), 3U));
                    vlSelfRef.__PVT__wvalid_lsu = 1U;
                    vlSelfRef.__PVT__awvalid_lsu = 1U;
                    vlSelfRef.__PVT__awaddr_lsu = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out;
                }
            } else if ((1U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                vlSelfRef.__PVT__wdata_lsu = VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_data_rs2, 
                                                           VL_SHIFTL_III(32,32,32, 
                                                                         (3U 
                                                                          & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out), 3U));
                vlSelfRef.__PVT__wvalid_lsu = 1U;
                vlSelfRef.__PVT__awvalid_lsu = 1U;
                vlSelfRef.__PVT__awaddr_lsu = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out;
            }
        }
        if (((IData)(vlSelfRef.ex_ls_bus_lsu_re_ls) 
             | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__trans_r))) {
            if ((0U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
                if ((((IData)(vlSelfRef.ex_ls_bus_lsu_re_ls) 
                      & (IData)(vlSelfRef.ex_ls_valid_ls)) 
                     & (~ (IData)(vlSelfRef.flush)))) {
                    vlSelfRef.__PVT__araddr_lsu = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out;
                    vlSelfRef.__PVT__arvalid_lsu = 1U;
                }
            } else if ((1U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
                vlSelfRef.__PVT__araddr_lsu = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out;
                vlSelfRef.__PVT__arvalid_lsu = 1U;
            }
        }
    }
    vlSelfRef.flush_ex = (((IData)(vlSelfRef.__PVT__ex_ls_bus_branch_ex) 
                           != (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_speculate)) 
                          & (IData)(vlSelfRef.__PVT__pc_mod__DOT__ex_valid));
    vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__flush 
        = ((IData)(vlSelfRef.flush) | (IData)(vlSelfRef.flush_ex));
    vlSelfRef.cache_miss = 0U;
    vlSelfRef.__PVT__cache_opcode = 0U;
    vlSelfRef.__PVT__cache_ready = 0U;
    vlSelfRef.__PVT__rready_ifu = 0U;
    vlSelfRef.__PVT__arsize_ifu = 0U;
    vlSelfRef.__PVT__arburst_ifu = 0U;
    vlSelfRef.__PVT__arlen_ifu = 0U;
    vlSelfRef.__PVT__arvalid_ifu = 0U;
    vlSelfRef.__PVT__araddr_ifu = 0U;
    if ((1U & (((~ (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__flush)) 
                & (~ (IData)(vlSymsp->TOP.reset))) 
               | (IData)(vlSelfRef.__PVT__icache_mod__DOT__trans)))) {
        if ((1U & (~ ((IData)(vlSelfRef.cache_hit) 
                      & (~ (IData)(vlSelfRef.__PVT__icache_mod__DOT__trans)))))) {
            vlSelfRef.cache_miss = 1U;
            if ((0U != vlSelfRef.__PVT__icache_mod__DOT__state)) {
                if ((1U == vlSelfRef.__PVT__icache_mod__DOT__state)) {
                    vlSelfRef.__PVT__rready_ifu = 1U;
                }
            }
            if ((0U == vlSelfRef.__PVT__icache_mod__DOT__state)) {
                if (vlSelfRef.__PVT__icache_mod__DOT__do_burst) {
                    vlSelfRef.__PVT__arsize_ifu = 2U;
                    vlSelfRef.__PVT__arburst_ifu = 1U;
                    vlSelfRef.__PVT__arlen_ifu = 3U;
                }
                vlSelfRef.__PVT__arvalid_ifu = 1U;
                vlSelfRef.__PVT__araddr_ifu = ((0xffffffc0U 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                               | ((0x00000030U 
                                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                                  | ((IData)(vlSelfRef.__PVT__icache_mod__DOT__fill_count) 
                                                     << 2U)));
            }
        }
        if (((IData)(vlSelfRef.cache_hit) & (~ (IData)(vlSelfRef.__PVT__icache_mod__DOT__trans)))) {
            vlSelfRef.__PVT__cache_opcode = vlSelfRef.__PVT__icache_mod__DOT__block_cache
                [(3U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                        >> 4U))][(3U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                        >> 2U))][vlSelfRef.__PVT__icache_mod__DOT__hit_1];
            vlSelfRef.__PVT__cache_ready = 1U;
        }
    }
    vlSelfRef.if_de_valid_if = vlSelfRef.__PVT__cache_ready;
    vlSelfRef.__PVT__io_master_rready = 0U;
    vlSelfRef.__PVT__io_master_arsize = 0U;
    vlSelfRef.__PVT__io_master_arburst = 0U;
    vlSelfRef.__PVT__io_master_arlen = 0U;
    if (vlSelfRef.__PVT__arbiter_mod__DOT__read_busy) {
        if (vlSelfRef.__PVT__arbiter_mod__DOT__read_select) {
            vlSelfRef.__PVT__io_master_rready = vlSelfRef.__PVT__rready_ifu;
            vlSelfRef.__PVT__io_master_arsize = vlSelfRef.__PVT__arsize_ifu;
            vlSelfRef.__PVT__io_master_arburst = vlSelfRef.__PVT__arburst_ifu;
            vlSelfRef.__PVT__io_master_arlen = vlSelfRef.__PVT__arlen_ifu;
            vlSelfRef.__PVT__io_master_arvalid = vlSelfRef.__PVT__arvalid_ifu;
            vlSelfRef.__PVT__io_master_araddr = vlSelfRef.__PVT__araddr_ifu;
        } else {
            vlSelfRef.__PVT__io_master_rready = vlSelfRef.__PVT__rready_lsu;
            vlSelfRef.__PVT__io_master_arvalid = vlSelfRef.__PVT__arvalid_lsu;
            vlSelfRef.__PVT__io_master_araddr = vlSelfRef.__PVT__araddr_lsu;
        }
    } else {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__arvalid_lsu)))) {
            vlSelfRef.__PVT__io_master_arsize = vlSelfRef.__PVT__arsize_ifu;
            vlSelfRef.__PVT__io_master_arburst = vlSelfRef.__PVT__arburst_ifu;
            vlSelfRef.__PVT__io_master_arlen = vlSelfRef.__PVT__arlen_ifu;
        }
        if (vlSelfRef.__PVT__arvalid_lsu) {
            vlSelfRef.__PVT__io_master_arvalid = vlSelfRef.__PVT__arvalid_lsu;
            vlSelfRef.__PVT__io_master_araddr = vlSelfRef.__PVT__araddr_lsu;
        } else {
            vlSelfRef.__PVT__io_master_arvalid = vlSelfRef.__PVT__arvalid_ifu;
            vlSelfRef.__PVT__io_master_araddr = vlSelfRef.__PVT__araddr_ifu;
        }
    }
}

void Vosoc_26000003_func_osoc_26000003_core___ico_sequent__TOP__osoc_26000003_func__core__1(Vosoc_26000003_func_osoc_26000003_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vosoc_26000003_func_osoc_26000003_core___ico_sequent__TOP__osoc_26000003_func__core__1\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    __VdfgRegularize_h6e95ff9d_0_7 = 0;
    // Body
    vlSelfRef.__PVT__fencei_commit = ((IData)(vlSelfRef.__PVT__fencei) 
                                      & ((~ ((IData)(vlSelfRef.__PVT__awvalid_lsu) 
                                             | ((IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__core_bvalid) 
                                                | (IData)(vlSelfRef.__PVT__wvalid_lsu)))) 
                                         & ((~ (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_valid)) 
                                            & ((~ (IData)(vlSelfRef.ex_ls_valid_ls)) 
                                               & (~ (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid))))));
    if (vlSelfRef.__PVT__arbiter_mod__DOT__read_busy) {
        vlSelfRef.__PVT__arready_ifu = ((IData)(vlSelfRef.__PVT__arbiter_mod__DOT__read_select) 
                                        && (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__core_arready));
        vlSelfRef.__PVT__arready_lsu = ((1U & (~ (IData)(vlSelfRef.__PVT__arbiter_mod__DOT__read_select))) 
                                        && (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__core_arready));
    } else {
        vlSelfRef.__PVT__arready_ifu = ((1U & (~ (IData)(vlSelfRef.__PVT__arvalid_lsu))) 
                                        && (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__core_arready));
        vlSelfRef.__PVT__arready_lsu = ((IData)(vlSelfRef.__PVT__arvalid_lsu) 
                                        && (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__core_arready));
    }
    vlSelfRef.__PVT__if_de_pipeline_mod__DOT__flush 
        = ((IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__flush) 
           | (IData)(vlSelfRef.__PVT__fencei_commit));
    __VdfgRegularize_h6e95ff9d_0_7 = (1U & ((~ ((((IData)(vlSelfRef.__PVT__decode_mod__DOT__ex_match_rs1) 
                                                  | (IData)(vlSelfRef.__PVT__decode_mod__DOT__ex_match_rs2)) 
                                                 & ((~ (IData)(vlSelfRef.ex_ls_valid_ex)) 
                                                    | (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_re))) 
                                                | (((~ (IData)(vlSelfRef.__PVT__ls_wb_valid_ls)) 
                                                    & ((IData)(vlSelfRef.__PVT__decode_mod__DOT__ls_match_rs1) 
                                                       | (IData)(vlSelfRef.__PVT__decode_mod__DOT__ls_match_rs2))) 
                                                   | (((~ (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid)) 
                                                       & ((IData)(vlSelfRef.__PVT__decode_mod__DOT__wb_match_rs1) 
                                                          | (IData)(vlSelfRef.__PVT__decode_mod__DOT__wb_match_rs2))) 
                                                      | (0U 
                                                         != 
                                                         ((IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_csr) 
                                                          | ((IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_csr) 
                                                             | (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr)))))))) 
                                            & (~ ((
                                                   ((IData)(vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_valid) 
                                                    & (0x0000100fU 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode))) 
                                                   & (~ (IData)(vlSelfRef.__PVT__fencei_commit))) 
                                                  & (IData)(vlSelfRef.__PVT__fencei)))));
    vlSelfRef.__PVT__de_ex_valid_de = ((IData)(vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_valid) 
                                       & (IData)(__VdfgRegularize_h6e95ff9d_0_7));
    vlSelfRef.__PVT__if_de_ready_de = ((IData)(vlSelfRef.ex_ls_ready_ls) 
                                       & (IData)(__VdfgRegularize_h6e95ff9d_0_7));
    vlSelfRef.if_de_ready_if = vlSelfRef.__PVT__if_de_ready_de;
}

void Vosoc_26000003_func_osoc_26000003_core___nba_sequent__TOP__osoc_26000003_func__core__0(Vosoc_26000003_func_osoc_26000003_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vosoc_26000003_func_osoc_26000003_core___nba_sequent__TOP__osoc_26000003_func__core__0\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ decode_mod__DOT____VdfgExtracted_h5668a4d3__0;
    decode_mod__DOT____VdfgExtracted_h5668a4d3__0 = 0;
    CData/*0:0*/ decode_mod__DOT____VdfgExtracted_hd3654471__0;
    decode_mod__DOT____VdfgExtracted_hd3654471__0 = 0;
    CData/*0:0*/ decode_mod__DOT____VdfgExtracted_h59968114__0;
    decode_mod__DOT____VdfgExtracted_h59968114__0 = 0;
    CData/*0:0*/ decode_mod__DOT____VdfgExtracted_hd3b4e1d7__0;
    decode_mod__DOT____VdfgExtracted_hd3b4e1d7__0 = 0;
    CData/*0:0*/ decode_mod__DOT____VdfgExtracted_hb614df14__0;
    decode_mod__DOT____VdfgExtracted_hb614df14__0 = 0;
    CData/*0:0*/ decode_mod__DOT____VdfgExtracted_h141bf533__0;
    decode_mod__DOT____VdfgExtracted_h141bf533__0 = 0;
    CData/*3:0*/ decode_mod__DOT____VdfgRegularize_h901acc23_0_3;
    decode_mod__DOT____VdfgRegularize_h901acc23_0_3 = 0;
    IData/*31:0*/ __Vdly__pc_ifu;
    __Vdly__pc_ifu = 0;
    IData/*31:0*/ __VdlyMask__pc_ifu;
    __VdlyMask__pc_ifu = 0;
    CData/*1:0*/ __Vdly__icache_mod__DOT__fill_count;
    __Vdly__icache_mod__DOT__fill_count = 0;
    CData/*0:0*/ __Vdly__icache_mod__DOT__trans;
    __Vdly__icache_mod__DOT__trans = 0;
    IData/*31:0*/ __Vdly__icache_mod__DOT__state;
    __Vdly__icache_mod__DOT__state = 0;
    IData/*31:0*/ __Vdly__lsu_mod__DOT__lsu_r;
    __Vdly__lsu_mod__DOT__lsu_r = 0;
    CData/*0:0*/ __Vdly__lsu_mod__DOT__done_aw;
    __Vdly__lsu_mod__DOT__done_aw = 0;
    CData/*0:0*/ __Vdly__lsu_mod__DOT__done_wdata;
    __Vdly__lsu_mod__DOT__done_wdata = 0;
    IData/*31:0*/ __Vdly__lsu_mod__DOT__lsu_w;
    __Vdly__lsu_mod__DOT__lsu_w = 0;
    CData/*0:0*/ __Vdly__arbiter_mod__DOT__read_busy;
    __Vdly__arbiter_mod__DOT__read_busy = 0;
    CData/*0:0*/ __Vdly__arbiter_mod__DOT__write_busy;
    __Vdly__arbiter_mod__DOT__write_busy = 0;
    CData/*0:0*/ __VdlySet__ifu_mod__DOT__block_valid__v0;
    __VdlySet__ifu_mod__DOT__block_valid__v0 = 0;
    IData/*28:0*/ __VdlyVal__ifu_mod__DOT__block_tag__v0;
    __VdlyVal__ifu_mod__DOT__block_tag__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ifu_mod__DOT__block_tag__v0;
    __VdlyDim0__ifu_mod__DOT__block_tag__v0 = 0;
    CData/*0:0*/ __VdlyDim1__ifu_mod__DOT__block_tag__v0;
    __VdlyDim1__ifu_mod__DOT__block_tag__v0 = 0;
    CData/*0:0*/ __VdlySet__ifu_mod__DOT__block_tag__v0;
    __VdlySet__ifu_mod__DOT__block_tag__v0 = 0;
    SData/*11:0*/ __VdlyVal__ifu_mod__DOT__block_offset__v0;
    __VdlyVal__ifu_mod__DOT__block_offset__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ifu_mod__DOT__block_offset__v0;
    __VdlyDim0__ifu_mod__DOT__block_offset__v0 = 0;
    CData/*0:0*/ __VdlyDim1__ifu_mod__DOT__block_offset__v0;
    __VdlyDim1__ifu_mod__DOT__block_offset__v0 = 0;
    CData/*0:0*/ __VdlyDim0__ifu_mod__DOT__block_valid__v4;
    __VdlyDim0__ifu_mod__DOT__block_valid__v4 = 0;
    CData/*0:0*/ __VdlyDim1__ifu_mod__DOT__block_valid__v4;
    __VdlyDim1__ifu_mod__DOT__block_valid__v4 = 0;
    CData/*0:0*/ __VdlySet__icache_mod__DOT__block_valid__v0;
    __VdlySet__icache_mod__DOT__block_valid__v0 = 0;
    IData/*31:0*/ __VdlyVal__icache_mod__DOT__block_cache__v0;
    __VdlyVal__icache_mod__DOT__block_cache__v0 = 0;
    CData/*0:0*/ __VdlyDim0__icache_mod__DOT__block_cache__v0;
    __VdlyDim0__icache_mod__DOT__block_cache__v0 = 0;
    CData/*1:0*/ __VdlyDim1__icache_mod__DOT__block_cache__v0;
    __VdlyDim1__icache_mod__DOT__block_cache__v0 = 0;
    CData/*1:0*/ __VdlyDim2__icache_mod__DOT__block_cache__v0;
    __VdlyDim2__icache_mod__DOT__block_cache__v0 = 0;
    CData/*0:0*/ __VdlySet__icache_mod__DOT__block_cache__v0;
    __VdlySet__icache_mod__DOT__block_cache__v0 = 0;
    IData/*25:0*/ __VdlyVal__icache_mod__DOT__block_tag__v0;
    __VdlyVal__icache_mod__DOT__block_tag__v0 = 0;
    CData/*0:0*/ __VdlyDim0__icache_mod__DOT__block_tag__v0;
    __VdlyDim0__icache_mod__DOT__block_tag__v0 = 0;
    CData/*1:0*/ __VdlyDim1__icache_mod__DOT__block_tag__v0;
    __VdlyDim1__icache_mod__DOT__block_tag__v0 = 0;
    CData/*0:0*/ __VdlyDim0__icache_mod__DOT__block_valid__v8;
    __VdlyDim0__icache_mod__DOT__block_valid__v8 = 0;
    CData/*1:0*/ __VdlyDim1__icache_mod__DOT__block_valid__v8;
    __VdlyDim1__icache_mod__DOT__block_valid__v8 = 0;
    CData/*0:0*/ __VdlySet__icache_mod__DOT__block_valid__v8;
    __VdlySet__icache_mod__DOT__block_valid__v8 = 0;
    IData/*31:0*/ __VdlyVal__icache_mod__DOT__block_cache__v1;
    __VdlyVal__icache_mod__DOT__block_cache__v1 = 0;
    CData/*0:0*/ __VdlyDim0__icache_mod__DOT__block_cache__v1;
    __VdlyDim0__icache_mod__DOT__block_cache__v1 = 0;
    CData/*1:0*/ __VdlyDim1__icache_mod__DOT__block_cache__v1;
    __VdlyDim1__icache_mod__DOT__block_cache__v1 = 0;
    CData/*1:0*/ __VdlyDim2__icache_mod__DOT__block_cache__v1;
    __VdlyDim2__icache_mod__DOT__block_cache__v1 = 0;
    CData/*0:0*/ __VdlySet__icache_mod__DOT__block_cache__v1;
    __VdlySet__icache_mod__DOT__block_cache__v1 = 0;
    CData/*0:0*/ __VdlySet__icache_mod__DOT__block_valid__v9;
    __VdlySet__icache_mod__DOT__block_valid__v9 = 0;
    CData/*0:0*/ __VdlySet__csr_mod__DOT__regs__v0;
    __VdlySet__csr_mod__DOT__regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__csr_mod__DOT__regs__v35;
    __VdlyVal__csr_mod__DOT__regs__v35 = 0;
    CData/*0:0*/ __VdlySet__csr_mod__DOT__regs__v35;
    __VdlySet__csr_mod__DOT__regs__v35 = 0;
    IData/*31:0*/ __VdlyVal__csr_mod__DOT__regs__v36;
    __VdlyVal__csr_mod__DOT__regs__v36 = 0;
    IData/*31:0*/ __VdlyVal__csr_mod__DOT__regs__v37;
    __VdlyVal__csr_mod__DOT__regs__v37 = 0;
    CData/*4:0*/ __VdlyDim0__csr_mod__DOT__regs__v37;
    __VdlyDim0__csr_mod__DOT__regs__v37 = 0;
    CData/*0:0*/ __VdlySet__csr_mod__DOT__regs__v37;
    __VdlySet__csr_mod__DOT__regs__v37 = 0;
    CData/*0:0*/ __VdlySet__csr_mod__DOT__regs__v38;
    __VdlySet__csr_mod__DOT__regs__v38 = 0;
    // Body
    __Vdly__arbiter_mod__DOT__write_busy = vlSelfRef.__PVT__arbiter_mod__DOT__write_busy;
    __Vdly__lsu_mod__DOT__done_aw = vlSelfRef.__PVT__lsu_mod__DOT__done_aw;
    __Vdly__lsu_mod__DOT__done_wdata = vlSelfRef.__PVT__lsu_mod__DOT__done_wdata;
    __VdlySet__csr_mod__DOT__regs__v0 = 0U;
    __VdlySet__csr_mod__DOT__regs__v35 = 0U;
    __VdlySet__csr_mod__DOT__regs__v37 = 0U;
    __VdlySet__csr_mod__DOT__regs__v38 = 0U;
    __Vdly__lsu_mod__DOT__lsu_w = vlSelfRef.__PVT__lsu_mod__DOT__lsu_w;
    __Vdly__lsu_mod__DOT__lsu_r = vlSelfRef.__PVT__lsu_mod__DOT__lsu_r;
    __Vdly__arbiter_mod__DOT__read_busy = vlSelfRef.__PVT__arbiter_mod__DOT__read_busy;
    __VdlySet__icache_mod__DOT__block_cache__v1 = 0U;
    __Vdly__icache_mod__DOT__fill_count = vlSelfRef.__PVT__icache_mod__DOT__fill_count;
    __Vdly__icache_mod__DOT__state = vlSelfRef.__PVT__icache_mod__DOT__state;
    __VdlySet__icache_mod__DOT__block_valid__v0 = 0U;
    __VdlySet__icache_mod__DOT__block_valid__v8 = 0U;
    __VdlySet__icache_mod__DOT__block_valid__v9 = 0U;
    __VdlySet__icache_mod__DOT__block_cache__v0 = 0U;
    __Vdly__icache_mod__DOT__trans = vlSelfRef.__PVT__icache_mod__DOT__trans;
    __VdlySet__ifu_mod__DOT__block_valid__v0 = 0U;
    __VdlySet__ifu_mod__DOT__block_tag__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__pc_ifu = 0x80000000U;
        __Vdly__arbiter_mod__DOT__write_busy = 0U;
        __VdlySet__csr_mod__DOT__regs__v0 = 1U;
        __VdlySet__ifu_mod__DOT__block_valid__v0 = 1U;
        vlSelfRef.prev_pc = 0U;
        vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_diff_pc = 0U;
        vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_branch = 0U;
        vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr = 0U;
        vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select_pc = 0U;
        vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mcause = 0U;
        vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select = 0U;
        vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr_out = 0U;
        __Vdly__lsu_mod__DOT__done_aw = 0U;
        __Vdly__lsu_mod__DOT__done_wdata = 0U;
        __Vdly__lsu_mod__DOT__lsu_w = 0U;
        vlSelfRef.__PVT__lsu_mod__DOT__trans_w = 0U;
        vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_speculate = 0U;
        __Vdly__lsu_mod__DOT__lsu_r = 0U;
        vlSelfRef.__PVT__lsu_mod__DOT__trans_r = 0U;
        __Vdly__arbiter_mod__DOT__read_busy = 0U;
        vlSelfRef.__PVT__arbiter_mod__DOT__read_select = 0U;
        vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_exception = 0U;
        vlSelfRef.opcode = 0U;
        vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_pc = 0U;
        vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_next_pc = 0U;
        __Vdly__icache_mod__DOT__fill_count = 0U;
        __Vdly__icache_mod__DOT__trans = 0U;
        vlSelfRef.__PVT__icache_mod__DOT__burst_reg = 0U;
        vlSelfRef.__PVT__icache_mod__DOT__miss_addr = 0U;
        __Vdly__icache_mod__DOT__state = 0U;
        __VdlySet__icache_mod__DOT__block_valid__v0 = 1U;
        vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_alu_out = 0U;
        vlSelfRef.__PVT__ifu_mod__DOT__latest_row = 0U;
        vlSelfRef.pc = 0U;
        vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__opcode = 0U;
        vlSelfRef.__PVT__icache_mod__DOT__latest_row = 0U;
    } else {
        if (vlSelfRef.__PVT__arbiter_mod__DOT__write_busy) {
            if (((IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__core_bvalid) 
                 & (IData)(vlSelfRef.__PVT__bready_lsu))) {
                __Vdly__arbiter_mod__DOT__write_busy = 0U;
            }
        } else if (vlSelfRef.__PVT__awvalid_lsu) {
            __Vdly__arbiter_mod__DOT__write_busy = 1U;
        }
        if (vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid) {
            if (((IData)(vlSelfRef.ls_wb_bus_exception_wb) 
                 & (0x0aU != (IData)(vlSelfRef.ls_wb_bus_mcause_wb)))) {
                __VdlyVal__csr_mod__DOT__regs__v35 
                    = vlSelfRef.ls_wb_bus_pc_wb;
                __VdlySet__csr_mod__DOT__regs__v35 = 1U;
                __VdlyVal__csr_mod__DOT__regs__v36 
                    = vlSelfRef.ls_wb_bus_mcause_wb;
            } else if ((0U != (IData)(vlSelfRef.__PVT__csr_mod__DOT__working_reg_w))) {
                __VdlyVal__csr_mod__DOT__regs__v37 
                    = vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_alu_out;
                __VdlyDim0__csr_mod__DOT__regs__v37 
                    = vlSelfRef.__PVT__csr_mod__DOT__working_reg_w;
                __VdlySet__csr_mod__DOT__regs__v37 = 1U;
            }
        }
        __VdlySet__csr_mod__DOT__regs__v38 = 1U;
        if (((IData)(vlSelfRef.__PVT__ex_ls_bus_branch_ex) 
             & ((~ (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_speculate)) 
                & (((IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op) 
                    >> 6U) & ((~ (0U != (vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_imm 
                                         >> 0x0000000cU))) 
                              | (0x000fffffU == (vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_imm 
                                                 >> 0x0000000cU))))))) {
            __VdlyVal__ifu_mod__DOT__block_tag__v0 
                = (vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_pc 
                   >> 3U);
            __VdlyDim0__ifu_mod__DOT__block_tag__v0 
                = (1U & (~ (IData)(vlSelfRef.__PVT__ifu_mod__DOT__latest_row)));
            __VdlyDim1__ifu_mod__DOT__block_tag__v0 
                = (1U & (vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_pc 
                         >> 2U));
            __VdlySet__ifu_mod__DOT__block_tag__v0 = 1U;
            __VdlyVal__ifu_mod__DOT__block_offset__v0 
                = (0x00000fffU & (vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_imm 
                                  >> 1U));
            __VdlyDim0__ifu_mod__DOT__block_offset__v0 
                = (1U & (~ (IData)(vlSelfRef.__PVT__ifu_mod__DOT__latest_row)));
            __VdlyDim1__ifu_mod__DOT__block_offset__v0 
                = (1U & (vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_pc 
                         >> 2U));
            __VdlyDim0__ifu_mod__DOT__block_valid__v4 
                = (1U & (~ (IData)(vlSelfRef.__PVT__ifu_mod__DOT__latest_row)));
            __VdlyDim1__ifu_mod__DOT__block_valid__v4 
                = (1U & (vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_pc 
                         >> 2U));
        }
        vlSelfRef.prev_pc = vlSelfRef.pc;
        if (vlSelfRef.__PVT__ls_wb_valid_ls) {
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_diff_pc 
                = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_diff_pc;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_branch 
                = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_branch;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr 
                = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_csr;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select_pc 
                = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mux_select_pc;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mcause 
                = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mcause;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select 
                = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mux_select;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr_out 
                = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_csr_out;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_speculate 
                = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_speculate;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_exception 
                = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_exception;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_pc 
                = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_pc;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_next_pc 
                = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_next_pc;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_alu_out 
                = vlSelfRef.__PVT__ls_wb_bus_alu_out_ls;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__ls_wb_valid_ls)))) {
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr = 0U;
        }
        if ((0U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
            if ((((IData)(vlSelfRef.ex_ls_bus_lsu_we_ls) 
                  & (IData)(vlSelfRef.ex_ls_valid_ls)) 
                 & (~ (IData)(vlSelfRef.flush)))) {
                __Vdly__lsu_mod__DOT__lsu_w = 1U;
                vlSelfRef.__PVT__lsu_mod__DOT__trans_w = 1U;
                if (vlSymsp->TOP__osoc_26000003_func.__PVT__core_wready) {
                    __Vdly__lsu_mod__DOT__done_wdata = 1U;
                }
                if (vlSymsp->TOP__osoc_26000003_func.__PVT__core_awready) {
                    __Vdly__lsu_mod__DOT__done_aw = 1U;
                }
                if (((IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__core_awready) 
                     & (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__core_wready))) {
                    __Vdly__lsu_mod__DOT__lsu_w = 2U;
                }
            }
        } else if ((1U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
            if ((((IData)(vlSelfRef.__PVT__lsu_mod__DOT__done_aw) 
                  | (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__core_awready)) 
                 & ((IData)(vlSelfRef.__PVT__lsu_mod__DOT__done_wdata) 
                    | (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__core_wready)))) {
                __Vdly__lsu_mod__DOT__lsu_w = 2U;
            }
            if (vlSymsp->TOP__osoc_26000003_func.__PVT__core_wready) {
                __Vdly__lsu_mod__DOT__done_wdata = 1U;
            }
            if (vlSymsp->TOP__osoc_26000003_func.__PVT__core_awready) {
                __Vdly__lsu_mod__DOT__done_aw = 1U;
            }
        } else if ((2U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
            if (((IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__core_bvalid) 
                 & (IData)(vlSelfRef.__PVT__bready_lsu))) {
                __Vdly__lsu_mod__DOT__done_aw = 0U;
                __Vdly__lsu_mod__DOT__done_wdata = 0U;
                __Vdly__lsu_mod__DOT__lsu_w = 3U;
            }
        } else if ((3U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
            __Vdly__lsu_mod__DOT__lsu_w = 0U;
            vlSelfRef.__PVT__lsu_mod__DOT__trans_w = 0U;
        }
        if ((0U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
            if ((((IData)(vlSelfRef.ex_ls_bus_lsu_re_ls) 
                  & (IData)(vlSelfRef.ex_ls_valid_ls)) 
                 & (~ (IData)(vlSelfRef.flush)))) {
                __Vdly__lsu_mod__DOT__lsu_r = 1U;
                vlSelfRef.__PVT__lsu_mod__DOT__trans_r = 1U;
                if (((IData)(vlSelfRef.__PVT__arready_lsu) 
                     & (IData)(vlSelfRef.__PVT__arvalid_lsu))) {
                    __Vdly__lsu_mod__DOT__lsu_r = 2U;
                }
            }
        } else if ((1U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
            if (((IData)(vlSelfRef.__PVT__arready_lsu) 
                 & (IData)(vlSelfRef.__PVT__arvalid_lsu))) {
                __Vdly__lsu_mod__DOT__lsu_r = 2U;
            }
        } else if ((2U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
            if (((IData)(vlSelfRef.__PVT__rvalid_lsu) 
                 & (IData)(vlSelfRef.__PVT__rready_lsu))) {
                __Vdly__lsu_mod__DOT__lsu_r = 0U;
                vlSelfRef.__PVT__lsu_mod__DOT__trans_r = 0U;
            }
        }
        if (vlSelfRef.__PVT__arbiter_mod__DOT__read_busy) {
            if ((((IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__core_rvalid) 
                  & (IData)(vlSelfRef.__PVT__io_master_rready)) 
                 & ((1U & ((IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__trans) 
                           >> 1U)) || (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__io_master_rlast)))) {
                __Vdly__arbiter_mod__DOT__read_busy = 0U;
            }
        } else if (vlSelfRef.__PVT__io_master_arvalid) {
            __Vdly__arbiter_mod__DOT__read_busy = 1U;
            vlSelfRef.__PVT__arbiter_mod__DOT__read_select 
                = (1U & (~ (IData)(vlSelfRef.__PVT__arvalid_lsu)));
        }
        vlSelfRef.opcode = vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__opcode;
        if (vlSelfRef.__PVT__ls_wb_valid_ls) {
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__opcode 
                = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__opcode;
        }
        if (vlSelfRef.flush) {
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_diff_pc = 0U;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_branch = 0U;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select_pc = 0U;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mcause = 0U;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select = 0U;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr_out = 0U;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_speculate = 0U;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_exception = 0U;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_pc = 0U;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_next_pc = 0U;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_alu_out = 0U;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__opcode = 0U;
        }
        if ((1U & (((~ (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__flush)) 
                    & (~ (IData)(vlSelfRef.cache_hit))) 
                   | (IData)(vlSelfRef.__PVT__icache_mod__DOT__trans)))) {
            if ((0U == vlSelfRef.__PVT__icache_mod__DOT__state)) {
                if (((IData)(vlSelfRef.__PVT__arvalid_ifu) 
                     & (~ (IData)(vlSelfRef.__PVT__icache_mod__DOT__trans)))) {
                    __Vdly__icache_mod__DOT__trans = 1U;
                    vlSelfRef.__PVT__icache_mod__DOT__burst_reg 
                        = vlSelfRef.__PVT__icache_mod__DOT__burst_addr;
                    vlSelfRef.__PVT__icache_mod__DOT__miss_addr 
                        = vlSelfRef.__PVT__pc_ifu;
                }
                if (((IData)(vlSelfRef.__PVT__arready_ifu) 
                     & (IData)(vlSelfRef.__PVT__arvalid_ifu))) {
                    __Vdly__icache_mod__DOT__state = 1U;
                }
            } else if ((1U == vlSelfRef.__PVT__icache_mod__DOT__state)) {
                if (((IData)(vlSelfRef.__PVT__rvalid_ifu) 
                     & (IData)(vlSelfRef.__PVT__rready_ifu))) {
                    if ((3U == (IData)(vlSelfRef.__PVT__icache_mod__DOT__fill_count))) {
                        __VdlyVal__icache_mod__DOT__block_cache__v0 
                            = vlSelfRef.__PVT__rdata_ifu;
                        __VdlyDim0__icache_mod__DOT__block_cache__v0 
                            = (1U & (~ (IData)(vlSelfRef.__PVT__icache_mod__DOT__latest_row)));
                        __VdlyDim1__icache_mod__DOT__block_cache__v0 
                            = vlSelfRef.__PVT__icache_mod__DOT__fill_count;
                        __VdlyDim2__icache_mod__DOT__block_cache__v0 
                            = (3U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                     >> 4U));
                        __VdlySet__icache_mod__DOT__block_cache__v0 = 1U;
                        __VdlyVal__icache_mod__DOT__block_tag__v0 
                            = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                               >> 6U);
                        __VdlyDim0__icache_mod__DOT__block_tag__v0 
                            = (1U & (~ (IData)(vlSelfRef.__PVT__icache_mod__DOT__latest_row)));
                        __VdlyDim1__icache_mod__DOT__block_tag__v0 
                            = (3U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                     >> 4U));
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__fencei_commit)))) {
                            __VdlyDim0__icache_mod__DOT__block_valid__v8 
                                = (1U & (~ (IData)(vlSelfRef.__PVT__icache_mod__DOT__latest_row)));
                            __VdlyDim1__icache_mod__DOT__block_valid__v8 
                                = (3U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                         >> 4U));
                            __VdlySet__icache_mod__DOT__block_valid__v8 = 1U;
                        }
                        __Vdly__icache_mod__DOT__trans = 0U;
                        __Vdly__icache_mod__DOT__state = 0U;
                        __Vdly__icache_mod__DOT__fill_count = 0U;
                    } else {
                        __VdlyVal__icache_mod__DOT__block_cache__v1 
                            = vlSelfRef.__PVT__rdata_ifu;
                        __VdlyDim0__icache_mod__DOT__block_cache__v1 
                            = (1U & (~ (IData)(vlSelfRef.__PVT__icache_mod__DOT__latest_row)));
                        __VdlyDim1__icache_mod__DOT__block_cache__v1 
                            = vlSelfRef.__PVT__icache_mod__DOT__fill_count;
                        __VdlyDim2__icache_mod__DOT__block_cache__v1 
                            = (3U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                     >> 4U));
                        __VdlySet__icache_mod__DOT__block_cache__v1 = 1U;
                        __Vdly__icache_mod__DOT__state 
                            = ((IData)(vlSelfRef.__PVT__icache_mod__DOT__do_burst)
                                ? 1U : 0U);
                        __Vdly__icache_mod__DOT__fill_count 
                            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__icache_mod__DOT__fill_count)));
                    }
                }
            } else {
                __Vdly__icache_mod__DOT__state = 0U;
            }
        }
        if (vlSelfRef.__PVT__fencei_commit) {
            __VdlySet__icache_mod__DOT__block_valid__v9 = 1U;
        }
        if (vlSelfRef.__PVT__if_de_bus_speculate_if) {
            vlSelfRef.__PVT__ifu_mod__DOT__latest_row 
                = vlSelfRef.__PVT__ifu_mod__DOT__hit_1;
        }
        vlSelfRef.pc = ((IData)(vlSelfRef.ls_wb_bus_exception_wb)
                         ? vlSelfRef.__PVT__ls_wb_bus_csr_pc_wb
                         : vlSelfRef.pc_e);
        if (vlSelfRef.cache_hit) {
            vlSelfRef.__PVT__icache_mod__DOT__latest_row 
                = vlSelfRef.__PVT__icache_mod__DOT__hit_1;
        }
    }
    vlSelfRef.reg_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                           && (IData)(vlSelfRef.reg_valid_e));
    if (((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__flush))) {
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rs1 = 0U;
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_next_pc = 0U;
    } else if (((IData)(vlSelfRef.ex_ls_ready_ls) & (IData)(vlSelfRef.__PVT__de_ex_valid_de))) {
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rs1 
            = vlSelfRef.__PVT__de_ex_bus_rs1_de;
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_next_pc 
            = vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_next_pc;
    }
    if (((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.flush))) {
        vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_valid = 0U;
        vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_we = 0U;
        vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_re = 0U;
        vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_data_rs2 = 0U;
        vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_diff_pc = 0U;
        vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_branch = 0U;
        vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_csr = 0U;
        vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mux_select_pc = 0U;
        vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mcause = 0U;
        vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mux_select = 0U;
        vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_csr_out = 0U;
        vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_speculate = 0U;
        vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_exception = 0U;
        vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_pc = 0U;
        vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_next_pc = 0U;
        vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__opcode = 0U;
    } else {
        if (((IData)(vlSelfRef.ex_ls_ready_ls) & (IData)(vlSelfRef.ex_ls_valid_ex))) {
            vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_we 
                = vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_we;
            vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_re 
                = vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_re;
            vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_data_rs2 
                = vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs2;
            vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_diff_pc 
                = vlSelfRef.__PVT__ex_ls_bus_diff_pc_ex;
            vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_branch 
                = vlSelfRef.__PVT__ex_ls_bus_branch_ex;
            vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_csr 
                = vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_csr;
            vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mux_select_pc 
                = vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_mux_select_pc;
            vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mcause 
                = vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_mcause;
            vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mux_select 
                = vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_mux_select;
            vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_csr_out 
                = vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_csr;
            vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_speculate 
                = vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_speculate;
            vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_exception 
                = vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_exception;
            vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_pc 
                = vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_pc;
            vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_next_pc 
                = ((IData)(4U) + vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_pc);
            vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__opcode 
                = vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__opcode;
        }
        if (vlSelfRef.ex_ls_ready_ls) {
            vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_valid 
                = vlSelfRef.ex_ls_valid_ex;
            if ((1U & (~ (IData)(vlSelfRef.ex_ls_valid_ex)))) {
                vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_we = 0U;
                vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_re = 0U;
                vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_csr = 0U;
            }
        }
    }
    vlSelfRef.__PVT__arbiter_mod__DOT__write_busy = __Vdly__arbiter_mod__DOT__write_busy;
    if (__VdlySet__csr_mod__DOT__regs__v0) {
        vlSelfRef.__PVT__csr_mod__DOT__regs[0U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[1U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[2U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[3U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[4U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[5U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[6U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[7U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[8U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[9U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[10U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[11U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[12U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[13U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[14U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[15U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[16U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[17U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[18U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[19U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[20U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[21U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[22U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[23U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[24U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[25U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[26U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[27U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[28U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[29U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[30U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[31U] = 0U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[2U] = 0x00001800U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[5U] = 0x20445358U;
        vlSelfRef.__PVT__csr_mod__DOT__regs[6U] = 0x20393920U;
    }
    if (__VdlySet__csr_mod__DOT__regs__v35) {
        vlSelfRef.__PVT__csr_mod__DOT__regs[1U] = __VdlyVal__csr_mod__DOT__regs__v35;
        vlSelfRef.__PVT__csr_mod__DOT__regs[3U] = __VdlyVal__csr_mod__DOT__regs__v36;
    }
    if (__VdlySet__csr_mod__DOT__regs__v37) {
        vlSelfRef.__PVT__csr_mod__DOT__regs[__VdlyDim0__csr_mod__DOT__regs__v37] 
            = __VdlyVal__csr_mod__DOT__regs__v37;
    }
    if (__VdlySet__csr_mod__DOT__regs__v38) {
        vlSelfRef.__PVT__csr_mod__DOT__regs[1U] = (0xfffffffeU 
                                                   & vlSelfRef.__PVT__csr_mod__DOT__regs[1U]);
    }
    if (__VdlySet__ifu_mod__DOT__block_valid__v0) {
        vlSelfRef.__PVT__ifu_mod__DOT__block_valid[0U][0U] = 0U;
        vlSelfRef.__PVT__ifu_mod__DOT__block_valid[0U][1U] = 0U;
        vlSelfRef.__PVT__ifu_mod__DOT__block_valid[1U][0U] = 0U;
        vlSelfRef.__PVT__ifu_mod__DOT__block_valid[1U][1U] = 0U;
    }
    if (__VdlySet__ifu_mod__DOT__block_tag__v0) {
        vlSelfRef.__PVT__ifu_mod__DOT__block_offset[__VdlyDim1__ifu_mod__DOT__block_offset__v0][__VdlyDim0__ifu_mod__DOT__block_offset__v0] 
            = __VdlyVal__ifu_mod__DOT__block_offset__v0;
        vlSelfRef.__PVT__ifu_mod__DOT__block_valid[__VdlyDim1__ifu_mod__DOT__block_valid__v4][__VdlyDim0__ifu_mod__DOT__block_valid__v4] = 1U;
        vlSelfRef.__PVT__ifu_mod__DOT__block_tag[__VdlyDim1__ifu_mod__DOT__block_tag__v0][__VdlyDim0__ifu_mod__DOT__block_tag__v0] 
            = __VdlyVal__ifu_mod__DOT__block_tag__v0;
    }
    vlSelfRef.__PVT__lsu_mod__DOT__done_aw = __Vdly__lsu_mod__DOT__done_aw;
    vlSelfRef.__PVT__lsu_mod__DOT__done_wdata = __Vdly__lsu_mod__DOT__done_wdata;
    vlSelfRef.__PVT__lsu_mod__DOT__lsu_w = __Vdly__lsu_mod__DOT__lsu_w;
    vlSelfRef.__PVT__lsu_mod__DOT__lsu_r = __Vdly__lsu_mod__DOT__lsu_r;
    vlSelfRef.__PVT__arbiter_mod__DOT__read_busy = __Vdly__arbiter_mod__DOT__read_busy;
    vlSelfRef.__PVT__icache_mod__DOT__fill_count = __Vdly__icache_mod__DOT__fill_count;
    vlSelfRef.__PVT__icache_mod__DOT__state = __Vdly__icache_mod__DOT__state;
    if (__VdlySet__icache_mod__DOT__block_valid__v0) {
        vlSelfRef.__PVT__icache_mod__DOT__block_valid[0U][0U] = 0U;
        vlSelfRef.__PVT__icache_mod__DOT__block_valid[0U][1U] = 0U;
        vlSelfRef.__PVT__icache_mod__DOT__block_valid[1U][0U] = 0U;
        vlSelfRef.__PVT__icache_mod__DOT__block_valid[1U][1U] = 0U;
        vlSelfRef.__PVT__icache_mod__DOT__block_valid[2U][0U] = 0U;
        vlSelfRef.__PVT__icache_mod__DOT__block_valid[2U][1U] = 0U;
        vlSelfRef.__PVT__icache_mod__DOT__block_valid[3U][0U] = 0U;
        vlSelfRef.__PVT__icache_mod__DOT__block_valid[3U][1U] = 0U;
    }
    if (__VdlySet__icache_mod__DOT__block_valid__v8) {
        vlSelfRef.__PVT__icache_mod__DOT__block_valid[__VdlyDim1__icache_mod__DOT__block_valid__v8][__VdlyDim0__icache_mod__DOT__block_valid__v8] = 1U;
    }
    if (__VdlySet__icache_mod__DOT__block_valid__v9) {
        vlSelfRef.__PVT__icache_mod__DOT__block_valid[0U][0U] = 0U;
        vlSelfRef.__PVT__icache_mod__DOT__block_valid[0U][1U] = 0U;
        vlSelfRef.__PVT__icache_mod__DOT__block_valid[1U][0U] = 0U;
        vlSelfRef.__PVT__icache_mod__DOT__block_valid[1U][1U] = 0U;
        vlSelfRef.__PVT__icache_mod__DOT__block_valid[2U][0U] = 0U;
        vlSelfRef.__PVT__icache_mod__DOT__block_valid[2U][1U] = 0U;
        vlSelfRef.__PVT__icache_mod__DOT__block_valid[3U][0U] = 0U;
        vlSelfRef.__PVT__icache_mod__DOT__block_valid[3U][1U] = 0U;
    }
    if (__VdlySet__icache_mod__DOT__block_cache__v0) {
        vlSelfRef.__PVT__icache_mod__DOT__block_cache[__VdlyDim2__icache_mod__DOT__block_cache__v0][__VdlyDim1__icache_mod__DOT__block_cache__v0][__VdlyDim0__icache_mod__DOT__block_cache__v0] 
            = __VdlyVal__icache_mod__DOT__block_cache__v0;
        vlSelfRef.__PVT__icache_mod__DOT__block_tag[__VdlyDim1__icache_mod__DOT__block_tag__v0][__VdlyDim0__icache_mod__DOT__block_tag__v0] 
            = __VdlyVal__icache_mod__DOT__block_tag__v0;
    }
    if (__VdlySet__icache_mod__DOT__block_cache__v1) {
        vlSelfRef.__PVT__icache_mod__DOT__block_cache[__VdlyDim2__icache_mod__DOT__block_cache__v1][__VdlyDim1__icache_mod__DOT__block_cache__v1][__VdlyDim0__icache_mod__DOT__block_cache__v1] 
            = __VdlyVal__icache_mod__DOT__block_cache__v1;
    }
    vlSelfRef.__PVT__icache_mod__DOT__trans = __Vdly__icache_mod__DOT__trans;
    vlSelfRef.branch_taken = vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_branch;
    vlSelfRef.ex_ls_valid_ls = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_valid;
    vlSelfRef.__PVT__csr_mod__DOT__working_reg_w = 
        ((((0x0300U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr)) 
           | (0x0305U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))) 
          | (((0x0340U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr)) 
              | (0x0341U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))) 
             | ((0x0342U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr)) 
                | ((0x0343U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr)) 
                   | ((0x0f11U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr)) 
                      | (0x0f12U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr)))))))
          ? ((0x0300U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))
              ? 2U : ((0x0305U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))
                       ? 4U : ((0x0340U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))
                                ? 7U : ((0x0341U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))
                                         ? 1U : ((0x0342U 
                                                  == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))
                                                  ? 3U
                                                  : 
                                                 ((0x0343U 
                                                   == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))
                                                   ? 8U
                                                   : 
                                                  ((0x0f11U 
                                                    == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))
                                                    ? 5U
                                                    : 6U)))))))
          : 0U);
    vlSelfRef.ex_ls_bus_lsu_we_ls = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_we;
    vlSelfRef.ls_wb_bus_mcause_wb = vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mcause;
    vlSelfRef.ex_ls_bus_lsu_re_ls = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_re;
    vlSelfRef.ls_wb_bus_speculate_wb = vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_speculate;
    vlSelfRef.ls_wb_bus_pc_wb = vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_pc;
    vlSelfRef.pc_e = vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_diff_pc;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (((IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid) 
             & (IData)(vlSelfRef.ls_wb_bus_exception_wb))) {
            __Vdly__pc_ifu = vlSelfRef.__PVT__ls_wb_bus_csr_pc_wb;
            __VdlyMask__pc_ifu = 0xffffffffU;
        } else if (((IData)(vlSelfRef.__PVT__pc_mod__DOT__ex_valid) 
                    & ((IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_speculate) 
                       != (IData)(vlSelfRef.__PVT__ex_ls_bus_branch_ex)))) {
            __Vdly__pc_ifu = ((IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_speculate)
                               ? ((IData)(4U) + vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_pc)
                               : vlSelfRef.__PVT__ex_branch_addr);
            __VdlyMask__pc_ifu = 0xffffffffU;
        } else if (((IData)(vlSelfRef.if_de_ready_if) 
                    & (IData)(vlSelfRef.if_de_valid_if))) {
            __Vdly__pc_ifu = vlSelfRef.__PVT__if_de_bus_next_pc_if;
            __VdlyMask__pc_ifu = 0xffffffffU;
        }
    }
    if (((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__flush))) {
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_valid = 0U;
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1 = 0U;
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_imm = 0U;
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op = 0U;
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_we = 0U;
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_re = 0U;
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs2 = 0U;
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_csr = 0U;
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_mux_select_pc = 0U;
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_mcause = 0U;
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_mux_select = 0U;
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_csr = 0U;
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_speculate = 0U;
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_exception = 0U;
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_pc = 0U;
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__opcode = 0U;
    } else {
        if (((IData)(vlSelfRef.ex_ls_ready_ls) & (IData)(vlSelfRef.__PVT__de_ex_valid_de))) {
            vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1 
                = vlSelfRef.__PVT__de_ex_bus_data_rs1_de;
            vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_imm 
                = vlSelfRef.__PVT__de_ex_bus_imm_de;
            vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op 
                = vlSelfRef.__PVT__de_ex_bus_alu_op_de;
            vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_we 
                = vlSelfRef.__PVT__de_ex_bus_lsu_we_de;
            vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_re 
                = vlSelfRef.__PVT__de_ex_bus_lsu_re_de;
            vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs2 
                = vlSelfRef.__PVT__de_ex_bus_data_rs2_de;
            vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_csr 
                = vlSelfRef.__PVT__de_ex_bus_csr_de;
            vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_mux_select_pc 
                = vlSelfRef.__PVT__de_ex_bus_mux_select_pc_de;
            vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_mcause 
                = vlSelfRef.__PVT__de_ex_bus_mcause_de;
            vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_mux_select 
                = vlSelfRef.__PVT__de_ex_bus_mux_select_de;
            vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_csr 
                = vlSelfRef.__PVT__de_ex_bus_data_csr_de;
            vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_speculate 
                = vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_speculate;
            vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_exception 
                = vlSelfRef.__PVT__de_ex_bus_exception_de;
            vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_pc 
                = vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_pc;
            vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__opcode 
                = vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode;
        }
        if (vlSelfRef.ex_ls_ready_ls) {
            vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_valid 
                = vlSelfRef.__PVT__de_ex_valid_de;
            if ((1U & (~ (IData)(vlSelfRef.__PVT__de_ex_valid_de)))) {
                vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_csr = 0U;
            }
        }
    }
    if (((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__if_de_pipeline_mod__DOT__flush))) {
        vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_mcause = 0U;
        vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_valid = 0U;
        vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_exception = 0U;
        vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_next_pc = 0U;
        vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_speculate = 0U;
        vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_pc = 0U;
        vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode = 0U;
    } else {
        if (((IData)(vlSelfRef.if_de_ready_if) & (IData)(vlSelfRef.if_de_valid_if))) {
            vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_mcause = 0U;
            vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_exception 
                = (1U & vlSelfRef.__PVT__pc_ifu);
            vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_next_pc 
                = vlSelfRef.__PVT__if_de_bus_next_pc_if;
            vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_speculate 
                = vlSelfRef.__PVT__if_de_bus_speculate_if;
            vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_pc 
                = vlSelfRef.__PVT__pc_ifu;
            vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                = vlSelfRef.__PVT__cache_opcode;
        }
        if (vlSelfRef.__PVT__if_de_ready_de) {
            vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_valid 
                = vlSelfRef.if_de_valid_if;
        }
    }
    vlSelfRef.ls_wb_bus_exception_wb = vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_exception;
    vlSelfRef.__PVT__rready_lsu = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (((IData)(vlSelfRef.ex_ls_bus_lsu_re_ls) 
             | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__trans_r))) {
            if ((0U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
                if ((1U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
                    if ((2U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
                        vlSelfRef.__PVT__rready_lsu = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.branch = (1U == (3U & ((IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op) 
                                     >> 4U)));
    vlSelfRef.__PVT__ls_wb_bus_csr_pc_wb = 0U;
    if (vlSelfRef.ls_wb_bus_exception_wb) {
        vlSelfRef.__PVT__ls_wb_bus_csr_pc_wb = ((0x0aU 
                                                 != (IData)(vlSelfRef.ls_wb_bus_mcause_wb))
                                                 ? vlSelfRef.__PVT__csr_mod__DOT__regs[4U]
                                                 : vlSelfRef.__PVT__csr_mod__DOT__regs[1U]);
    }
    vlSelfRef.__PVT__alu_mod__DOT__val2 = ((0x00000080U 
                                            & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op))
                                            ? vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_imm
                                            : vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs2);
    vlSelfRef.__PVT__alu_mod__DOT__val1 = ((0x00000040U 
                                            & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op))
                                            ? vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_pc
                                            : vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1);
    vlSelfRef.__PVT__ex_ls_bus_branch_ex = 0U;
    vlSelfRef.__PVT__ex_branch_addr = 0U;
    if ((0U != (3U & ((IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op) 
                      >> 4U)))) {
        if ((1U == (3U & ((IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op) 
                          >> 4U)))) {
            vlSelfRef.__PVT__ex_branch_addr = (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                               + vlSelfRef.__PVT__alu_mod__DOT__val2);
            if ((0U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) {
                vlSelfRef.__PVT__ex_ls_bus_branch_ex 
                    = (vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1 
                       == vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs2);
            } else if ((1U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) {
                vlSelfRef.__PVT__ex_ls_bus_branch_ex 
                    = (vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1 
                       != vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs2);
            } else if ((4U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) {
                vlSelfRef.__PVT__ex_ls_bus_branch_ex 
                    = VL_LTS_III(32, vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1, vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs2);
            } else if ((5U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) {
                vlSelfRef.__PVT__ex_ls_bus_branch_ex 
                    = VL_GTES_III(32, vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1, vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs2);
            } else if ((6U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) {
                vlSelfRef.__PVT__ex_ls_bus_branch_ex 
                    = (vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1 
                       < vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs2);
            } else if ((7U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) {
                vlSelfRef.__PVT__ex_ls_bus_branch_ex 
                    = (vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1 
                       >= vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs2);
            }
        }
    }
    vlSelfRef.__PVT__ex_ls_bus_diff_pc_ex = ((IData)(vlSelfRef.__PVT__ex_ls_bus_branch_ex)
                                              ? vlSelfRef.__PVT__ex_branch_addr
                                              : ((IData)(4U) 
                                                 + vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_pc));
    vlSelfRef.__PVT__pc_ifu = ((__Vdly__pc_ifu & __VdlyMask__pc_ifu) 
                               | (vlSelfRef.__PVT__pc_ifu 
                                  & (~ __VdlyMask__pc_ifu)));
    __VdlyMask__pc_ifu = 0U;
    vlSelfRef.__PVT__ifu_mod__DOT__hit_0 = ((vlSelfRef.__PVT__ifu_mod__DOT__block_tag
                                             [(1U & 
                                               (vlSelfRef.__PVT__pc_ifu 
                                                >> 2U))][0U] 
                                             == (vlSelfRef.__PVT__pc_ifu 
                                                 >> 3U)) 
                                            & vlSelfRef.__PVT__ifu_mod__DOT__block_valid
                                            [(1U & 
                                              (vlSelfRef.__PVT__pc_ifu 
                                               >> 2U))][0U]);
    vlSelfRef.__PVT__ifu_mod__DOT__hit_1 = ((vlSelfRef.__PVT__ifu_mod__DOT__block_tag
                                             [(1U & 
                                               (vlSelfRef.__PVT__pc_ifu 
                                                >> 2U))][1U] 
                                             == (vlSelfRef.__PVT__pc_ifu 
                                                 >> 3U)) 
                                            & vlSelfRef.__PVT__ifu_mod__DOT__block_valid
                                            [(1U & 
                                              (vlSelfRef.__PVT__pc_ifu 
                                               >> 2U))][1U]);
    vlSelfRef.__PVT__icache_mod__DOT__burst_addr = 
        ((0xa0000000U <= vlSelfRef.__PVT__pc_ifu) & 
         (0xc0000000U > vlSelfRef.__PVT__pc_ifu));
    if (vlSelfRef.__PVT__icache_mod__DOT__trans) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = vlSelfRef.__PVT__icache_mod__DOT__miss_addr;
        vlSelfRef.__PVT__icache_mod__DOT__do_burst 
            = vlSelfRef.__PVT__icache_mod__DOT__burst_reg;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = vlSelfRef.__PVT__pc_ifu;
        vlSelfRef.__PVT__icache_mod__DOT__do_burst 
            = vlSelfRef.__PVT__icache_mod__DOT__burst_addr;
    }
    vlSelfRef.__PVT__if_de_bus_speculate_if = ((IData)(vlSelfRef.__PVT__ifu_mod__DOT__hit_0) 
                                               | (IData)(vlSelfRef.__PVT__ifu_mod__DOT__hit_1));
    vlSelfRef.__PVT__icache_mod__DOT__hit_1 = (vlSelfRef.__PVT__icache_mod__DOT__block_valid
                                               [(3U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                                    >> 4U))][1U] 
                                               & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                                   >> 6U) 
                                                  == vlSelfRef.__PVT__icache_mod__DOT__block_tag
                                                  [
                                                  (3U 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                                      >> 4U))][1U]));
    vlSelfRef.__PVT__de_ex_bus_mux_select_de = 0U;
    vlSelfRef.__PVT__de_ex_bus_lsu_re_de = 0U;
    vlSelfRef.__PVT__de_ex_bus_lsu_we_de = 0U;
    decode_mod__DOT____VdfgRegularize_h901acc23_0_3 
        = ((8U & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                  >> 0x0000001bU)) | (7U & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__decode_mod__DOT__imm_i = (((- (IData)(
                                                           (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                            >> 0x0000001fU))) 
                                                << 0x0000000bU) 
                                               | (0x000007ffU 
                                                  & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                     >> 0x00000014U)));
    decode_mod__DOT____VdfgExtracted_h141bf533__0 = (IData)(
                                                            (0x30200000U 
                                                             == 
                                                             (0xfff00000U 
                                                              & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)));
    decode_mod__DOT____VdfgExtracted_hb614df14__0 = (IData)(
                                                            (0U 
                                                             != 
                                                             (0xfff00000U 
                                                              & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)));
    decode_mod__DOT____VdfgExtracted_h5668a4d3__0 = (IData)(
                                                            ((0x00001000U 
                                                              == 
                                                              (0x00007000U 
                                                               & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) 
                                                             & (0U 
                                                                != 
                                                                (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                                 >> 0x00000019U))));
    decode_mod__DOT____VdfgExtracted_h59968114__0 = (IData)(
                                                            (0x42000000U 
                                                             == 
                                                             (0x42000000U 
                                                              & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)));
    decode_mod__DOT____VdfgExtracted_hd3654471__0 = (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbe000000U 
                                                              & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)));
    decode_mod__DOT____VdfgExtracted_hd3b4e1d7__0 = (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbc000000U 
                                                              & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)));
    vlSelfRef.decode_mod__DOT____VdfgExtracted_h4e467bd8__0 
        = (IData)(((0x00100000U == (0x01f00000U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) 
                   & (~ (0U != (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                >> 0x00000019U)))));
    vlSelfRef.__PVT__fencei = 0U;
    if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                  >> 6U)))) {
        if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                      >> 5U)))) {
            if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                vlSelfRef.__PVT__de_ex_bus_lsu_re_de = 1U;
                            }
                        }
                    }
                }
                if ((8U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                if ((IData)(((0x00001000U 
                                              == (0x00007000U 
                                                  & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) 
                                             & (IData)(vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_valid)))) {
                                    vlSelfRef.__PVT__fencei = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x00000020U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
            if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                vlSelfRef.__PVT__de_ex_bus_lsu_we_de = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__de_ex_bus_rs1_de = 0U;
    vlSelfRef.__PVT__de_ex_bus_rs2_de = 0U;
    vlSelfRef.__PVT__addr_spec = 0U;
    if (vlSelfRef.__PVT__if_de_bus_speculate_if) {
        if (vlSelfRef.__PVT__ifu_mod__DOT__hit_0) {
            vlSelfRef.__PVT__addr_spec = vlSelfRef.__PVT__ifu_mod__DOT__block_offset
                [(1U & (vlSelfRef.__PVT__pc_ifu >> 2U))][0U];
        }
        if (vlSelfRef.__PVT__ifu_mod__DOT__hit_1) {
            vlSelfRef.__PVT__addr_spec = vlSelfRef.__PVT__ifu_mod__DOT__block_offset
                [(1U & (vlSelfRef.__PVT__pc_ifu >> 2U))][1U];
        }
    }
    vlSelfRef.cache_hit = ((vlSelfRef.__PVT__icache_mod__DOT__block_valid
                            [(3U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                    >> 4U))][0U] & 
                            ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                              >> 6U) == vlSelfRef.__PVT__icache_mod__DOT__block_tag
                             [(3U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                     >> 4U))][0U])) 
                           | (IData)(vlSelfRef.__PVT__icache_mod__DOT__hit_1));
    vlSelfRef.__PVT__de_ex_bus_alu_op_de = 0U;
    vlSelfRef.__PVT__de_ex_bus_imm_de = 0U;
    vlSelfRef.__PVT__de_ex_bus_csr_de = 0U;
    vlSelfRef.__PVT__de_ex_bus_exception_de = vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_exception;
    if ((0x00000040U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
        vlSelfRef.__PVT__de_ex_bus_mux_select_pc_de = 0U;
        vlSelfRef.__PVT__de_ex_bus_mcause_de = vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_mcause;
        if ((0x00000020U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
            if ((0x00000010U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                vlSelfRef.__PVT__de_ex_bus_mux_select_de = 3U;
                                vlSelfRef.__PVT__de_ex_bus_rs1_de 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                          >> 0x0000000fU));
                                vlSelfRef.__PVT__de_ex_bus_alu_op_de 
                                    = (0x00000030U 
                                       | (7U & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                >> 0x0000000cU)));
                                if ((0U != (7U & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                  >> 0x0000000cU)))) {
                                    vlSelfRef.__PVT__de_ex_bus_alu_op_de 
                                        = (0x00000030U 
                                           | (7U & 
                                              (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                               >> 0x0000000cU)));
                                }
                                vlSelfRef.__PVT__de_ex_bus_csr_de 
                                    = (0x00000fffU 
                                       & vlSelfRef.__PVT__decode_mod__DOT__imm_i);
                                if ((0U == (7U & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                  >> 0x0000000cU)))) {
                                    vlSelfRef.__PVT__de_ex_bus_exception_de = 1U;
                                    if ((1U & (~ (IData)(vlSelfRef.decode_mod__DOT____VdfgExtracted_h4e467bd8__0)))) {
                                        if (decode_mod__DOT____VdfgExtracted_hb614df14__0) {
                                            if (decode_mod__DOT____VdfgExtracted_h141bf533__0) {
                                                vlSelfRef.__PVT__de_ex_bus_mux_select_pc_de = 1U;
                                            }
                                        } else {
                                            vlSelfRef.__PVT__de_ex_bus_mux_select_pc_de = 1U;
                                        }
                                    }
                                    vlSelfRef.__PVT__de_ex_bus_mcause_de 
                                        = ((IData)(vlSelfRef.decode_mod__DOT____VdfgExtracted_h4e467bd8__0)
                                            ? 3U : 
                                           ((IData)(decode_mod__DOT____VdfgExtracted_hb614df14__0)
                                             ? ((IData)(decode_mod__DOT____VdfgExtracted_h141bf533__0)
                                                 ? 0x0aU
                                                 : 2U)
                                             : 0x0bU));
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                vlSelfRef.__PVT__de_ex_bus_mux_select_de = 2U;
                                vlSelfRef.__PVT__de_ex_bus_alu_op_de = 0xd0U;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            vlSelfRef.__PVT__de_ex_bus_mux_select_de = 2U;
                            vlSelfRef.__PVT__de_ex_bus_alu_op_de = 0x90U;
                        }
                    }
                } else if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        vlSelfRef.__PVT__de_ex_bus_alu_op_de 
                            = (0x000000d0U | (7U & 
                                              (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                               >> 0x0000000cU)));
                    }
                }
                if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                vlSelfRef.__PVT__de_ex_bus_rs1_de 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                          >> 0x0000000fU));
                            }
                        }
                    } else if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            vlSelfRef.__PVT__de_ex_bus_rs1_de 
                                = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                  >> 0x0000000fU));
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                vlSelfRef.__PVT__de_ex_bus_rs2_de 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                          >> 0x0000000fU));
                            }
                        }
                    } else if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            vlSelfRef.__PVT__de_ex_bus_rs2_de 
                                = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                  >> 0x00000014U));
                        }
                    }
                }
                if ((8U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                vlSelfRef.__PVT__de_ex_bus_imm_de 
                                    = (((- (IData)(
                                                   (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                    >> 0x0000001fU))) 
                                        << 0x00000014U) 
                                       | ((((0x000001feU 
                                             & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                >> 0x0000000bU)) 
                                            | (1U & 
                                               (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                >> 0x00000014U))) 
                                           << 0x0000000bU) 
                                          | (0x000007feU 
                                             & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                >> 0x00000014U))));
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            vlSelfRef.__PVT__de_ex_bus_imm_de 
                                = vlSelfRef.__PVT__decode_mod__DOT__imm_i;
                        }
                    }
                } else if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        vlSelfRef.__PVT__de_ex_bus_imm_de 
                            = (((- (IData)((vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                            >> 0x0000001fU))) 
                                << 0x0000000cU) | (
                                                   (0x00000800U 
                                                    & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                       << 4U)) 
                                                   | ((0x000007e0U 
                                                       & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                          >> 0x00000014U)) 
                                                      | (0x0000001eU 
                                                         & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                            >> 7U)))));
                    }
                }
            }
        }
    } else {
        vlSelfRef.__PVT__de_ex_bus_mux_select_pc_de = 0U;
        vlSelfRef.__PVT__de_ex_bus_mcause_de = vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_mcause;
        if ((0x00000020U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
            if ((0x00000010U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                vlSelfRef.__PVT__de_ex_bus_rs1_de 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                          >> 0x0000000fU));
                                vlSelfRef.__PVT__de_ex_bus_rs2_de 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                          >> 0x00000014U));
                                if (decode_mod__DOT____VdfgExtracted_h59968114__0) {
                                    vlSelfRef.__PVT__de_ex_bus_exception_de = 1U;
                                    vlSelfRef.__PVT__de_ex_bus_mcause_de = 2U;
                                }
                                if (decode_mod__DOT____VdfgExtracted_hd3b4e1d7__0) {
                                    vlSelfRef.__PVT__de_ex_bus_exception_de = 1U;
                                    vlSelfRef.__PVT__de_ex_bus_mcause_de = 2U;
                                }
                            }
                        }
                    }
                    if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                vlSelfRef.__PVT__de_ex_bus_alu_op_de = 0x80U;
                                vlSelfRef.__PVT__de_ex_bus_imm_de 
                                    = (0xfffff000U 
                                       & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode);
                            }
                        }
                    } else if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            vlSelfRef.__PVT__de_ex_bus_alu_op_de 
                                = ((0x00000020U & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                   >> 0x00000014U)) 
                                   | (IData)(decode_mod__DOT____VdfgRegularize_h901acc23_0_3));
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            vlSelfRef.__PVT__de_ex_bus_rs1_de 
                                = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                  >> 0x0000000fU));
                            vlSelfRef.__PVT__de_ex_bus_rs2_de 
                                = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                  >> 0x00000014U));
                            vlSelfRef.__PVT__de_ex_bus_alu_op_de = 0x80U;
                            vlSelfRef.__PVT__de_ex_bus_imm_de 
                                = (((- (IData)((vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                >> 0x0000001fU))) 
                                    << 0x0000000bU) 
                                   | ((0x000007e0U 
                                       & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                          >> 0x00000014U)) 
                                      | (0x0000001fU 
                                         & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                            >> 7U))));
                        }
                    }
                }
            }
        } else if ((0x00000010U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
            if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            vlSelfRef.__PVT__de_ex_bus_rs1_de 
                                = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                  >> 0x0000000fU));
                            if (decode_mod__DOT____VdfgExtracted_h5668a4d3__0) {
                                vlSelfRef.__PVT__de_ex_bus_exception_de = 1U;
                                vlSelfRef.__PVT__de_ex_bus_mcause_de = 2U;
                            }
                            if ((5U == (7U & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                              >> 0x0000000cU)))) {
                                if (decode_mod__DOT____VdfgExtracted_hd3654471__0) {
                                    vlSelfRef.__PVT__de_ex_bus_exception_de = 1U;
                                    vlSelfRef.__PVT__de_ex_bus_mcause_de = 2U;
                                }
                            }
                        }
                    }
                }
                if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            vlSelfRef.__PVT__de_ex_bus_alu_op_de = 0xc0U;
                            vlSelfRef.__PVT__de_ex_bus_imm_de 
                                = (0xfffff000U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode);
                        }
                    }
                } else if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        vlSelfRef.__PVT__de_ex_bus_alu_op_de 
                            = ((5U == (7U & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                             >> 0x0000000cU)))
                                ? (0x00000080U | (IData)(decode_mod__DOT____VdfgRegularize_h901acc23_0_3))
                                : (0x00000080U | (7U 
                                                  & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                     >> 0x0000000cU))));
                        vlSelfRef.__PVT__de_ex_bus_imm_de 
                            = vlSelfRef.__PVT__decode_mod__DOT__imm_i;
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                             >> 3U)))) {
            if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                          >> 2U)))) {
                if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        vlSelfRef.__PVT__de_ex_bus_rs1_de 
                            = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                              >> 0x0000000fU));
                        vlSelfRef.__PVT__de_ex_bus_alu_op_de = 0x80U;
                        vlSelfRef.__PVT__de_ex_bus_imm_de 
                            = vlSelfRef.__PVT__decode_mod__DOT__imm_i;
                    }
                }
            }
        }
    }
    if (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_exception) {
        vlSelfRef.__PVT__de_ex_bus_exception_de = vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_exception;
        vlSelfRef.__PVT__de_ex_bus_mcause_de = vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_mcause;
    }
    vlSelfRef.__PVT__if_de_bus_next_pc_if = (vlSelfRef.__PVT__pc_ifu 
                                             + ((IData)(vlSelfRef.__PVT__if_de_bus_speculate_if)
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.__PVT__addr_spec) 
                                                                 >> 0x0000000bU)))) 
                                                  << 0x0000000dU) 
                                                 | ((IData)(vlSelfRef.__PVT__addr_spec) 
                                                    << 1U))
                                                 : 4U));
    vlSelfRef.__PVT__csr_mod__DOT__working_reg_r = 
        (((((((((0x0300U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de)) 
                | (0x0305U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))) 
               | (0x0340U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))) 
              | (0x0341U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))) 
             | (0x0342U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))) 
            | (0x0343U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))) 
           | (0x0f11U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))) 
          | (0x0f12U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de)))
          ? ((0x0300U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))
              ? 2U : ((0x0305U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))
                       ? 4U : ((0x0340U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))
                                ? 7U : ((0x0341U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))
                                         ? 1U : ((0x0342U 
                                                  == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))
                                                  ? 3U
                                                  : 
                                                 ((0x0343U 
                                                   == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))
                                                   ? 8U
                                                   : 
                                                  ((0x0f11U 
                                                    == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))
                                                    ? 5U
                                                    : 6U)))))))
          : 0U);
    vlSelfRef.__PVT__de_ex_bus_data_csr_de = vlSelfRef.__PVT__csr_mod__DOT__regs
        [vlSelfRef.__PVT__csr_mod__DOT__working_reg_r];
}

void Vosoc_26000003_func_osoc_26000003_core___nba_sequent__TOP__osoc_26000003_func__core__1(Vosoc_26000003_func_osoc_26000003_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vosoc_26000003_func_osoc_26000003_core___nba_sequent__TOP__osoc_26000003_func__core__1\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__bready_lsu = 0U;
    vlSelfRef.__PVT__rresp_ifu = 0U;
    vlSelfRef.__PVT__rresp_lsu = 0U;
    vlSelfRef.__PVT__rdata_ifu = 0U;
    vlSelfRef.__PVT__rdata_lsu = 0U;
    vlSelfRef.__PVT__rvalid_ifu = 0U;
    vlSelfRef.__PVT__rvalid_lsu = 0U;
    vlSelfRef.__PVT__reg_in = ((2U & (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select))
                                ? ((1U & (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select))
                                    ? vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr_out
                                    : vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_next_pc)
                                : ((1U & (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select))
                                    ? 0U : vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_alu_out));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__finish = 0U;
        vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid = 0U;
        vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd = 0U;
    } else {
        if (vlSelfRef.__PVT__ls_wb_valid_ls) {
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__finish 
                = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__finish;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd 
                = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_rd;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid = 1U;
        } else {
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__ls_wb_valid_ls)))) {
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd = 0U;
        }
        if (vlSelfRef.flush) {
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__finish = 0U;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid = 0U;
            vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd = 0U;
        }
    }
    if (((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.flush))) {
        vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out = 0U;
        vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper = 0U;
        vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__finish = 0U;
        vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_rd = 0U;
    } else {
        if (((IData)(vlSelfRef.ex_ls_ready_ls) & (IData)(vlSelfRef.ex_ls_valid_ex))) {
            vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out 
                = vlSelfRef.__PVT__ex_ls_bus_alu_out_ex;
            vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper 
                = vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_oper;
            vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__finish 
                = vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__finish;
            vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_rd 
                = vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rd;
        }
        if (vlSelfRef.ex_ls_ready_ls) {
            if ((1U & (~ (IData)(vlSelfRef.ex_ls_valid_ex)))) {
                vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_rd = 0U;
            }
        }
    }
    vlSelfRef.__PVT__ex_ls_bus_alu_out_ex = 0U;
    vlSelfRef.__PVT__alu_mod__DOT__csr_imm = 0U;
    if ((0U == (3U & ((IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op) 
                      >> 4U)))) {
        if (((((((((0U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op))) 
                   | (1U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) 
                  | (2U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) 
                 | (3U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) 
                | (4U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) 
               | (5U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) 
              | (6U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) 
             | (7U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op))))) {
            vlSelfRef.__PVT__ex_ls_bus_alu_out_ex = 
                ((0U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))
                  ? ((8U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op))
                      ? (vlSelfRef.__PVT__alu_mod__DOT__val1 
                         - vlSelfRef.__PVT__alu_mod__DOT__val2)
                      : (vlSelfRef.__PVT__alu_mod__DOT__val1 
                         + vlSelfRef.__PVT__alu_mod__DOT__val2))
                  : ((1U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))
                      ? (vlSelfRef.__PVT__alu_mod__DOT__val1 
                         << (0x0000001fU & vlSelfRef.__PVT__alu_mod__DOT__val2))
                      : ((2U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))
                          ? VL_LTS_III(32, vlSelfRef.__PVT__alu_mod__DOT__val1, vlSelfRef.__PVT__alu_mod__DOT__val2)
                          : ((3U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))
                              ? (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                 < vlSelfRef.__PVT__alu_mod__DOT__val2)
                              : ((4U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))
                                  ? (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                     ^ vlSelfRef.__PVT__alu_mod__DOT__val2)
                                  : ((5U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))
                                      ? ((8U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op))
                                          ? VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__alu_mod__DOT__val1, 
                                                           (0x0000001fU 
                                                            & vlSelfRef.__PVT__alu_mod__DOT__val2))
                                          : (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                             >> (0x0000001fU 
                                                 & vlSelfRef.__PVT__alu_mod__DOT__val2)))
                                      : ((6U == (7U 
                                                 & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))
                                          ? (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                             | vlSelfRef.__PVT__alu_mod__DOT__val2)
                                          : (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                             & vlSelfRef.__PVT__alu_mod__DOT__val2))))))));
        }
    } else if ((1U == (3U & ((IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op) 
                             >> 4U)))) {
        vlSelfRef.__PVT__ex_ls_bus_alu_out_ex = ((IData)(4U) 
                                                 + vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_pc);
    } else if ((3U == (3U & ((IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op) 
                             >> 4U)))) {
        vlSelfRef.__PVT__alu_mod__DOT__csr_imm = ((4U 
                                                   & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op))
                                                   ? (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rs1)
                                                   : vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1);
        if ((0U != (3U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) {
            if ((1U == (3U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) {
                vlSelfRef.__PVT__ex_ls_bus_alu_out_ex 
                    = vlSelfRef.__PVT__alu_mod__DOT__csr_imm;
            } else if ((2U == (3U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) {
                vlSelfRef.__PVT__ex_ls_bus_alu_out_ex 
                    = (vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_csr 
                       | vlSelfRef.__PVT__alu_mod__DOT__csr_imm);
            } else if ((3U == (3U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) {
                vlSelfRef.__PVT__ex_ls_bus_alu_out_ex 
                    = (vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_csr 
                       & (~ vlSelfRef.__PVT__alu_mod__DOT__csr_imm));
            }
        }
    }
    vlSelfRef.__PVT__ls_wb_bus_alu_out_ls = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out;
    if (((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__flush))) {
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_oper = 0U;
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__finish = 0U;
        vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rd = 0U;
    } else {
        if (((IData)(vlSelfRef.ex_ls_ready_ls) & (IData)(vlSelfRef.__PVT__de_ex_valid_de))) {
            vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_oper 
                = vlSelfRef.__PVT__de_ex_bus_lsu_oper_de;
            vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__finish 
                = vlSelfRef.__PVT__finish_de;
            vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rd 
                = vlSelfRef.__PVT__de_ex_bus_rd_de;
        }
        if (vlSelfRef.ex_ls_ready_ls) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__de_ex_valid_de)))) {
                vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rd = 0U;
            }
        }
    }
    vlSelfRef.reg_valid_e = vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid;
    vlSelfRef.__PVT__decode_mod__DOT__wb_match_rs1 
        = (((IData)(vlSelfRef.__PVT__de_ex_bus_rs1_de) 
            == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd)) 
           & (0U != (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd)));
    vlSelfRef.__PVT__decode_mod__DOT__wb_match_rs2 
        = (((IData)(vlSelfRef.__PVT__de_ex_bus_rs2_de) 
            == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd)) 
           & (0U != (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd)));
    vlSelfRef.__PVT__de_ex_bus_lsu_oper_de = 0U;
    if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                  >> 6U)))) {
        if ((0x00000020U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
            if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                vlSelfRef.__PVT__de_ex_bus_lsu_oper_de 
                                    = (7U & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                             >> 0x0000000cU));
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                             >> 4U)))) {
            if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            vlSelfRef.__PVT__de_ex_bus_lsu_oper_de 
                                = (7U & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                         >> 0x0000000cU));
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.ex_ls_valid_ex = vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_valid;
    vlSelfRef.flush = vlSelfRef.ls_wb_bus_exception_wb;
    vlSelfRef.__PVT__decode_mod__DOT__ls_match_rs1 
        = (((IData)(vlSelfRef.__PVT__de_ex_bus_rs1_de) 
            == (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_rd)) 
           & (0U != (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_rd)));
    vlSelfRef.__PVT__decode_mod__DOT__ls_match_rs2 
        = (((IData)(vlSelfRef.__PVT__de_ex_bus_rs2_de) 
            == (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_rd)) 
           & (0U != (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_rd)));
    vlSelfRef.__PVT__wdata_lsu = 0U;
    vlSelfRef.__PVT__wvalid_lsu = 0U;
    vlSelfRef.__PVT__awvalid_lsu = 0U;
    vlSelfRef.__PVT__araddr_lsu = 0U;
    vlSelfRef.__PVT__awaddr_lsu = 0U;
    vlSelfRef.__PVT__arvalid_lsu = 0U;
    vlSelfRef.__PVT__finish_de = 0U;
    vlSelfRef.__PVT__de_ex_bus_rd_de = 0U;
    if ((0x00000040U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
        if ((0x00000020U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
            if ((0x00000010U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                if ((0U == (7U & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                  >> 0x0000000cU)))) {
                                    if (vlSelfRef.decode_mod__DOT____VdfgExtracted_h4e467bd8__0) {
                                        vlSelfRef.__PVT__finish_de = 1U;
                                    }
                                }
                                vlSelfRef.__PVT__de_ex_bus_rd_de 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                          >> 7U));
                            }
                        }
                    }
                }
            } else if ((8U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            vlSelfRef.__PVT__de_ex_bus_rd_de 
                                = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                  >> 7U));
                        }
                    }
                }
            } else if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        vlSelfRef.__PVT__de_ex_bus_rd_de 
                            = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                              >> 7U));
                    }
                }
            }
        }
    } else if ((0x00000020U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
        if ((0x00000010U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
            if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                          >> 3U)))) {
                if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            vlSelfRef.__PVT__de_ex_bus_rd_de 
                                = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                  >> 7U));
                        }
                    }
                } else if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        vlSelfRef.__PVT__de_ex_bus_rd_de 
                            = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                              >> 7U));
                    }
                }
            }
        }
    } else if ((0x00000010U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
        if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                      >> 3U)))) {
            if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        vlSelfRef.__PVT__de_ex_bus_rd_de 
                            = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                              >> 7U));
                    }
                }
            } else if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    vlSelfRef.__PVT__de_ex_bus_rd_de 
                        = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                          >> 7U));
                }
            }
        }
    } else if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                         >> 3U)))) {
        if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                      >> 2U)))) {
            if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    vlSelfRef.__PVT__de_ex_bus_rd_de 
                        = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                          >> 7U));
                }
            }
        }
    }
    if (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_exception) {
        vlSelfRef.__PVT__de_ex_bus_rd_de = 0U;
    }
    vlSelfRef.__PVT__lsu_mod__DOT__done_r = 0U;
    vlSelfRef.__PVT__lsu_mod__DOT__done_w = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (((IData)(vlSelfRef.ex_ls_bus_lsu_we_ls) 
             | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__trans_w))) {
            if ((0U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                if ((1U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                    if ((2U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                        vlSelfRef.__PVT__bready_lsu = 1U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.__PVT__arbiter_mod__DOT__read_busy) {
        if (vlSelfRef.__PVT__arbiter_mod__DOT__read_select) {
            vlSelfRef.__PVT__rresp_ifu = vlSymsp->TOP__osoc_26000003_func.__PVT__core_rresp;
            vlSelfRef.__PVT__rdata_ifu = vlSymsp->TOP__osoc_26000003_func.__PVT__core_rdata;
            vlSelfRef.__PVT__rvalid_ifu = vlSymsp->TOP__osoc_26000003_func.__PVT__core_rvalid;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__arbiter_mod__DOT__read_select)))) {
            vlSelfRef.__PVT__rresp_lsu = vlSymsp->TOP__osoc_26000003_func.__PVT__core_rresp;
            vlSelfRef.__PVT__rdata_lsu = vlSymsp->TOP__osoc_26000003_func.__PVT__core_rdata;
            vlSelfRef.__PVT__rvalid_lsu = vlSymsp->TOP__osoc_26000003_func.__PVT__core_rvalid;
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (((IData)(vlSelfRef.ex_ls_bus_lsu_re_ls) 
             | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__trans_r))) {
            if ((0U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
                if ((1U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
                    if ((2U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
                        if (vlSelfRef.__PVT__rvalid_lsu) {
                            if ((0U == (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))) {
                                vlSelfRef.__PVT__ls_wb_bus_alu_out_ls 
                                    = ((2U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)
                                        ? ((1U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)
                                            ? (((- (IData)(
                                                           (vlSelfRef.__PVT__rdata_lsu 
                                                            >> 0x1fU))) 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__rdata_lsu 
                                                  >> 0x18U))
                                            : (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.__PVT__rdata_lsu 
                                                               >> 0x17U)))) 
                                                << 8U) 
                                               | (0x000000ffU 
                                                  & (vlSelfRef.__PVT__rdata_lsu 
                                                     >> 0x10U))))
                                        : ((1U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)
                                            ? (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.__PVT__rdata_lsu 
                                                               >> 0x0fU)))) 
                                                << 8U) 
                                               | (0x000000ffU 
                                                  & (vlSelfRef.__PVT__rdata_lsu 
                                                     >> 8U)))
                                            : (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.__PVT__rdata_lsu 
                                                               >> 7U)))) 
                                                << 8U) 
                                               | (0x000000ffU 
                                                  & vlSelfRef.__PVT__rdata_lsu))));
                            } else if ((1U == (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))) {
                                if ((2U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)) {
                                    if ((2U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)) {
                                        vlSelfRef.__PVT__ls_wb_bus_alu_out_ls 
                                            = (((- (IData)(
                                                           (vlSelfRef.__PVT__rdata_lsu 
                                                            >> 0x1fU))) 
                                                << 0x00000010U) 
                                               | (vlSelfRef.__PVT__rdata_lsu 
                                                  >> 0x10U));
                                    }
                                } else {
                                    vlSelfRef.__PVT__ls_wb_bus_alu_out_ls 
                                        = (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.__PVT__rdata_lsu 
                                                           >> 0x0fU)))) 
                                            << 0x00000010U) 
                                           | (0x0000ffffU 
                                              & vlSelfRef.__PVT__rdata_lsu));
                                }
                            } else if ((2U == (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))) {
                                vlSelfRef.__PVT__ls_wb_bus_alu_out_ls 
                                    = vlSelfRef.__PVT__rdata_lsu;
                            } else if ((4U == (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))) {
                                vlSelfRef.__PVT__ls_wb_bus_alu_out_ls 
                                    = ((2U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)
                                        ? ((1U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)
                                            ? (vlSelfRef.__PVT__rdata_lsu 
                                               >> 0x18U)
                                            : (0x000000ffU 
                                               & (vlSelfRef.__PVT__rdata_lsu 
                                                  >> 0x10U)))
                                        : ((1U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)
                                            ? (0x000000ffU 
                                               & (vlSelfRef.__PVT__rdata_lsu 
                                                  >> 8U))
                                            : (0x000000ffU 
                                               & vlSelfRef.__PVT__rdata_lsu)));
                            } else if ((5U == (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))) {
                                if ((2U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)) {
                                    if ((2U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)) {
                                        vlSelfRef.__PVT__ls_wb_bus_alu_out_ls 
                                            = (vlSelfRef.__PVT__rdata_lsu 
                                               >> 0x10U);
                                    }
                                } else {
                                    vlSelfRef.__PVT__ls_wb_bus_alu_out_ls 
                                        = (0x0000ffffU 
                                           & vlSelfRef.__PVT__rdata_lsu);
                                }
                            }
                            vlSelfRef.__PVT__lsu_mod__DOT__done_r = 1U;
                        }
                    }
                }
            }
            if ((0U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
                if ((((IData)(vlSelfRef.ex_ls_bus_lsu_re_ls) 
                      & (IData)(vlSelfRef.ex_ls_valid_ls)) 
                     & (~ (IData)(vlSelfRef.flush)))) {
                    vlSelfRef.__PVT__araddr_lsu = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out;
                    vlSelfRef.__PVT__arvalid_lsu = 1U;
                }
            } else if ((1U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
                vlSelfRef.__PVT__araddr_lsu = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out;
                vlSelfRef.__PVT__arvalid_lsu = 1U;
            }
        }
        if (((IData)(vlSelfRef.ex_ls_bus_lsu_we_ls) 
             | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__trans_w))) {
            if ((0U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                if ((((IData)(vlSelfRef.ex_ls_bus_lsu_we_ls) 
                      & (IData)(vlSelfRef.ex_ls_valid_ls)) 
                     & (~ (IData)(vlSelfRef.flush)))) {
                    vlSelfRef.__PVT__wdata_lsu = VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_data_rs2, 
                                                               VL_SHIFTL_III(32,32,32, 
                                                                             (3U 
                                                                              & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out), 3U));
                    vlSelfRef.__PVT__wvalid_lsu = 1U;
                    vlSelfRef.__PVT__awvalid_lsu = 1U;
                    vlSelfRef.__PVT__awaddr_lsu = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out;
                }
            } else if ((1U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                vlSelfRef.__PVT__wdata_lsu = VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_data_rs2, 
                                                           VL_SHIFTL_III(32,32,32, 
                                                                         (3U 
                                                                          & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out), 3U));
                vlSelfRef.__PVT__wvalid_lsu = 1U;
                vlSelfRef.__PVT__awvalid_lsu = 1U;
                vlSelfRef.__PVT__awaddr_lsu = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out;
            }
            if ((0U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                if ((1U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                    if ((2U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                        if ((3U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                            vlSelfRef.__PVT__lsu_mod__DOT__done_w = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__ls_wb_valid_ls = (((IData)(vlSelfRef.ex_ls_valid_ls) 
                                        & ((~ (IData)(vlSelfRef.ex_ls_bus_lsu_re_ls)) 
                                           | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__done_r))) 
                                       & ((~ (IData)(vlSelfRef.ex_ls_bus_lsu_we_ls)) 
                                          | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__done_w)));
    vlSelfRef.ex_ls_ready_ls = (1U & (((~ (IData)(vlSelfRef.ex_ls_bus_lsu_re_ls)) 
                                       | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__done_r)) 
                                      & ((~ (IData)(vlSelfRef.ex_ls_bus_lsu_we_ls)) 
                                         | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__done_w))));
    vlSelfRef.__PVT__decode_mod__DOT__ex_match_rs1 
        = (((IData)(vlSelfRef.__PVT__de_ex_bus_rs1_de) 
            == (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rd)) 
           & (0U != (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rd)));
    vlSelfRef.__PVT__decode_mod__DOT__ex_match_rs2 
        = (((IData)(vlSelfRef.__PVT__de_ex_bus_rs2_de) 
            == (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rd)) 
           & (0U != (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rd)));
    vlSelfRef.__PVT__pc_mod__DOT__ex_valid = ((IData)(vlSelfRef.ex_ls_ready_ls) 
                                              & ((~ 
                                                  ((IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_exception) 
                                                   | (IData)(vlSelfRef.ls_wb_bus_exception_wb))) 
                                                 & (IData)(vlSelfRef.ex_ls_valid_ex)));
    vlSelfRef.__PVT__de_ex_bus_data_rs1_de = vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs
        [(0x0000000fU & (IData)(vlSelfRef.__PVT__de_ex_bus_rs1_de))];
    if (((IData)(vlSelfRef.__PVT__decode_mod__DOT__wb_match_rs1) 
         & (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid))) {
        vlSelfRef.__PVT__de_ex_bus_data_rs1_de = vlSelfRef.__PVT__reg_in;
    }
    if (((IData)(vlSelfRef.__PVT__decode_mod__DOT__ls_match_rs1) 
         & (IData)(vlSelfRef.__PVT__ls_wb_valid_ls))) {
        vlSelfRef.__PVT__de_ex_bus_data_rs1_de = vlSelfRef.__PVT__ls_wb_bus_alu_out_ls;
    }
    if ((((IData)(vlSelfRef.__PVT__decode_mod__DOT__ex_match_rs1) 
          & (IData)(vlSelfRef.ex_ls_valid_ex)) & (~ (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_re)))) {
        vlSelfRef.__PVT__de_ex_bus_data_rs1_de = vlSelfRef.__PVT__ex_ls_bus_alu_out_ex;
    }
    vlSelfRef.__PVT__de_ex_bus_data_rs2_de = vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs
        [(0x0000000fU & (IData)(vlSelfRef.__PVT__de_ex_bus_rs2_de))];
    if (((IData)(vlSelfRef.__PVT__decode_mod__DOT__wb_match_rs2) 
         & (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid))) {
        vlSelfRef.__PVT__de_ex_bus_data_rs2_de = vlSelfRef.__PVT__reg_in;
    }
    if (((IData)(vlSelfRef.__PVT__decode_mod__DOT__ls_match_rs2) 
         & (IData)(vlSelfRef.__PVT__ls_wb_valid_ls))) {
        vlSelfRef.__PVT__de_ex_bus_data_rs2_de = vlSelfRef.__PVT__ls_wb_bus_alu_out_ls;
    }
    if ((((IData)(vlSelfRef.__PVT__decode_mod__DOT__ex_match_rs2) 
          & (IData)(vlSelfRef.ex_ls_valid_ex)) & (~ (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_re)))) {
        vlSelfRef.__PVT__de_ex_bus_data_rs2_de = vlSelfRef.__PVT__ex_ls_bus_alu_out_ex;
    }
    vlSelfRef.flush_ex = (((IData)(vlSelfRef.__PVT__ex_ls_bus_branch_ex) 
                           != (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_speculate)) 
                          & (IData)(vlSelfRef.__PVT__pc_mod__DOT__ex_valid));
    vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__flush 
        = ((IData)(vlSelfRef.flush) | (IData)(vlSelfRef.flush_ex));
    vlSelfRef.cache_miss = 0U;
    vlSelfRef.__PVT__cache_opcode = 0U;
    vlSelfRef.__PVT__cache_ready = 0U;
    vlSelfRef.__PVT__rready_ifu = 0U;
    vlSelfRef.__PVT__arsize_ifu = 0U;
    vlSelfRef.__PVT__arburst_ifu = 0U;
    vlSelfRef.__PVT__arlen_ifu = 0U;
    vlSelfRef.__PVT__arvalid_ifu = 0U;
    vlSelfRef.__PVT__araddr_ifu = 0U;
    if ((1U & (((~ (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__flush)) 
                & (~ (IData)(vlSymsp->TOP.reset))) 
               | (IData)(vlSelfRef.__PVT__icache_mod__DOT__trans)))) {
        if ((1U & (~ ((IData)(vlSelfRef.cache_hit) 
                      & (~ (IData)(vlSelfRef.__PVT__icache_mod__DOT__trans)))))) {
            vlSelfRef.cache_miss = 1U;
            if ((0U != vlSelfRef.__PVT__icache_mod__DOT__state)) {
                if ((1U == vlSelfRef.__PVT__icache_mod__DOT__state)) {
                    vlSelfRef.__PVT__rready_ifu = 1U;
                }
            }
            if ((0U == vlSelfRef.__PVT__icache_mod__DOT__state)) {
                if (vlSelfRef.__PVT__icache_mod__DOT__do_burst) {
                    vlSelfRef.__PVT__arsize_ifu = 2U;
                    vlSelfRef.__PVT__arburst_ifu = 1U;
                    vlSelfRef.__PVT__arlen_ifu = 3U;
                }
                vlSelfRef.__PVT__arvalid_ifu = 1U;
                vlSelfRef.__PVT__araddr_ifu = ((0xffffffc0U 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                               | ((0x00000030U 
                                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                                  | ((IData)(vlSelfRef.__PVT__icache_mod__DOT__fill_count) 
                                                     << 2U)));
            }
        }
        if (((IData)(vlSelfRef.cache_hit) & (~ (IData)(vlSelfRef.__PVT__icache_mod__DOT__trans)))) {
            vlSelfRef.__PVT__cache_opcode = vlSelfRef.__PVT__icache_mod__DOT__block_cache
                [(3U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                        >> 4U))][(3U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                                        >> 2U))][vlSelfRef.__PVT__icache_mod__DOT__hit_1];
            vlSelfRef.__PVT__cache_ready = 1U;
        }
    }
    vlSelfRef.if_de_valid_if = vlSelfRef.__PVT__cache_ready;
    vlSelfRef.__PVT__io_master_rready = 0U;
    vlSelfRef.__PVT__io_master_arsize = 0U;
    vlSelfRef.__PVT__io_master_arburst = 0U;
    vlSelfRef.__PVT__io_master_arlen = 0U;
    if (vlSelfRef.__PVT__arbiter_mod__DOT__read_busy) {
        if (vlSelfRef.__PVT__arbiter_mod__DOT__read_select) {
            vlSelfRef.__PVT__io_master_rready = vlSelfRef.__PVT__rready_ifu;
            vlSelfRef.__PVT__io_master_arsize = vlSelfRef.__PVT__arsize_ifu;
            vlSelfRef.__PVT__io_master_arburst = vlSelfRef.__PVT__arburst_ifu;
            vlSelfRef.__PVT__io_master_arlen = vlSelfRef.__PVT__arlen_ifu;
            vlSelfRef.__PVT__io_master_arvalid = vlSelfRef.__PVT__arvalid_ifu;
            vlSelfRef.__PVT__io_master_araddr = vlSelfRef.__PVT__araddr_ifu;
        } else {
            vlSelfRef.__PVT__io_master_rready = vlSelfRef.__PVT__rready_lsu;
            vlSelfRef.__PVT__io_master_arvalid = vlSelfRef.__PVT__arvalid_lsu;
            vlSelfRef.__PVT__io_master_araddr = vlSelfRef.__PVT__araddr_lsu;
        }
    } else {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__arvalid_lsu)))) {
            vlSelfRef.__PVT__io_master_arsize = vlSelfRef.__PVT__arsize_ifu;
            vlSelfRef.__PVT__io_master_arburst = vlSelfRef.__PVT__arburst_ifu;
            vlSelfRef.__PVT__io_master_arlen = vlSelfRef.__PVT__arlen_ifu;
        }
        if (vlSelfRef.__PVT__arvalid_lsu) {
            vlSelfRef.__PVT__io_master_arvalid = vlSelfRef.__PVT__arvalid_lsu;
            vlSelfRef.__PVT__io_master_araddr = vlSelfRef.__PVT__araddr_lsu;
        } else {
            vlSelfRef.__PVT__io_master_arvalid = vlSelfRef.__PVT__arvalid_ifu;
            vlSelfRef.__PVT__io_master_araddr = vlSelfRef.__PVT__araddr_ifu;
        }
    }
}
