// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop_top___eval_initial__TOP__top(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___eval_initial__TOP__top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pc = 0x80000000U;
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
}

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___stl_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ifu_mod__DOT__next_pc = ((IData)(4U) 
                                              + vlSelfRef.pc);
    vlSelfRef.__PVT__arbiter_mod__DOT__chose = 0U;
    if (((IData)(vlSelfRef.__PVT__arvalid_ifu) & (~ (IData)(vlSelfRef.__PVT__arbiter_mod__DOT__lsu_transfer)))) {
        vlSelfRef.__PVT__arbiter_mod__DOT__chose = 1U;
    }
    vlSelfRef.__PVT__araddr_arbiter = 0U;
    vlSelfRef.__PVT__arvalid_arbiter = 0U;
    vlSelfRef.__PVT__rready_arbiter = 0U;
    if (((IData)(vlSelfRef.__PVT__arbiter_mod__DOT__chose) 
         | (IData)(vlSelfRef.__PVT__arbiter_mod__DOT__ifu_transfer))) {
        vlSelfRef.__PVT__araddr_arbiter = vlSelfRef.__PVT__araddr_ifu;
        vlSelfRef.__PVT__arvalid_arbiter = vlSelfRef.__PVT__arvalid_ifu;
        vlSelfRef.__PVT__arready_ifu = vlSelfRef.__PVT__arready_arbiter;
        vlSelfRef.__PVT__rready_arbiter = vlSelfRef.__PVT__rready_ifu;
        vlSelfRef.__PVT__rdata_ifu = vlSelfRef.__PVT__rdata_arbiter;
        vlSelfRef.__PVT__rresp_ifu = vlSelfRef.__PVT__rresp_arbiter;
        vlSelfRef.__PVT__rvalid_ifu = vlSelfRef.__PVT__rvalid_arbiter;
    } else {
        vlSelfRef.__PVT__arready_ifu = 0U;
        vlSelfRef.__PVT__rdata_ifu = 0U;
        vlSelfRef.__PVT__rresp_ifu = 0U;
        vlSelfRef.__PVT__rvalid_ifu = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__arbiter_mod__DOT__lsu_transfer) 
                | (~ (IData)(vlSelfRef.__PVT__arbiter_mod__DOT__chose))) 
               & (~ (IData)(vlSelfRef.__PVT__arbiter_mod__DOT__ifu_transfer))))) {
        vlSelfRef.__PVT__araddr_arbiter = vlSelfRef.__PVT__araddr_lsu;
        vlSelfRef.__PVT__arvalid_arbiter = vlSelfRef.__PVT__arvalid_lsu;
        vlSelfRef.__PVT__arready_lsu = vlSelfRef.__PVT__arready_arbiter;
        vlSelfRef.__PVT__rready_arbiter = vlSelfRef.__PVT__rready_lsu;
        vlSelfRef.__PVT__rdata_lsu = vlSelfRef.__PVT__rdata_arbiter;
        vlSelfRef.__PVT__rresp_lsu = vlSelfRef.__PVT__rresp_arbiter;
        vlSelfRef.__PVT__rvalid_lsu = vlSelfRef.__PVT__rvalid_arbiter;
    } else {
        vlSelfRef.__PVT__arready_lsu = 0U;
        vlSelfRef.__PVT__rdata_lsu = 0U;
        vlSelfRef.__PVT__rresp_lsu = 0U;
        vlSelfRef.__PVT__rvalid_lsu = 0U;
    }
    vlSelfRef.__PVT__if_id_bus[1U] = (IData)((((QData)((IData)(vlSelfRef.pc)) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(
                                                                ((IData)(4U) 
                                                                 + vlSelfRef.pc)))));
    vlSelfRef.__PVT__if_id_bus[2U] = (IData)(((((QData)((IData)(vlSelfRef.pc)) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(
                                                                 ((IData)(4U) 
                                                                  + vlSelfRef.pc)))) 
                                              >> 0x00000020U));
    vlSelfRef.opcode = vlSelfRef.__PVT__if_id_bus[0U];
    vlSelfRef.__PVT__decode_mod__DOT__imm_i = (((- (IData)(
                                                           (vlSelfRef.__PVT__if_id_bus[0U] 
                                                            >> 0x0000001fU))) 
                                                << 0x0000000bU) 
                                               | (0x000007ffU 
                                                  & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                     >> 0x00000014U)));
    vlSelfRef.decode_mod__DOT____VdfgExtracted_h3b2fb429__0 
        = ((0x000003e0U & (vlSelfRef.__PVT__if_id_bus[0U] 
                           >> 0x0000000aU)) | (0x0000001fU 
                                               & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                  >> 0x00000014U)));
    vlSelfRef.decode_mod__DOT____VdfgRegularize_h901acc23_0_2 
        = ((8U & (vlSelfRef.__PVT__if_id_bus[0U] >> 0x0000001bU)) 
           | (7U & (vlSelfRef.__PVT__if_id_bus[0U] 
                    >> 0x0000000cU)));
    vlSelfRef.__PVT__id_ex_bus_decoded[0U] = 0U;
    vlSelfRef.__PVT__id_ex_bus_decoded[1U] = 0U;
    vlSelfRef.__PVT__id_ex_bus_decoded[2U] = 0U;
    vlSelfRef.__PVT__id_ex_bus_decoded[3U] = 0U;
    vlSelfRef.__PVT__id_ex_bus_decoded[4U] = 0U;
    vlSelfRef.__PVT__id_ex_bus_decoded[5U] = 0U;
    vlSelfRef.__PVT__id_ex_bus_decoded[6U] = 0U;
    vlSelfRef.__PVT__id_ex_bus_decoded[4U] = ((0x000000ffU 
                                               & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                                              | ((IData)(
                                                         (((QData)((IData)(vlSelfRef.__PVT__if_id_bus[2U])) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(vlSelfRef.__PVT__if_id_bus[1U])))) 
                                                 << 8U));
    vlSelfRef.__PVT__id_ex_bus_decoded[5U] = (((IData)(
                                                       (((QData)((IData)(vlSelfRef.__PVT__if_id_bus[2U])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSelfRef.__PVT__if_id_bus[1U])))) 
                                               >> 0x00000018U) 
                                              | ((IData)(
                                                         ((((QData)((IData)(vlSelfRef.__PVT__if_id_bus[2U])) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSelfRef.__PVT__if_id_bus[1U]))) 
                                                          >> 0x00000020U)) 
                                                 << 8U));
    vlSelfRef.__PVT__id_ex_bus_decoded[6U] = ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.__PVT__if_id_bus[2U])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSelfRef.__PVT__if_id_bus[1U]))) 
                                                       >> 0x00000020U)) 
                                              >> 0x00000018U);
    if ((0x00000040U & vlSelfRef.__PVT__if_id_bus[0U])) {
        if ((0x00000020U & vlSelfRef.__PVT__if_id_bus[0U])) {
            if ((0x00000010U & vlSelfRef.__PVT__if_id_bus[0U])) {
                if ((1U & (~ (vlSelfRef.__PVT__if_id_bus[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__if_id_bus[0U] 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.__PVT__if_id_bus[0U])) {
                            if ((1U & vlSelfRef.__PVT__if_id_bus[0U])) {
                                vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                    = ((0xffffff07U 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                       | (0x000000f8U 
                                          & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 4U)));
                                vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                                    = ((0xffffff07U 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                                       | (0x000000f8U 
                                          & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 0x0000000cU)));
                                vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                    = ((0x000000ffU 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                                       | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                                          << 8U));
                                vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                    = ((0xffffff00U 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                                       | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                                          >> 0x00000018U));
                                vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                    = (6U | vlSelfRef.__PVT__id_ex_bus_decoded[0U]);
                                if ((0U == (7U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                  >> 0x0000000cU)))) {
                                    if (VL_UNLIKELY(((IData)(
                                                             ((0x00100000U 
                                                               == 
                                                               (0x01f00000U 
                                                                & vlSelfRef.__PVT__if_id_bus[0U])) 
                                                              & (~ 
                                                                 (0U 
                                                                  != 
                                                                  (vlSelfRef.__PVT__if_id_bus[0U] 
                                                                   >> 0x00000019U)))))))) {
                                        VL_FINISH_MT("vsrc/decode.sv", 120, "");
                                    } else if ((IData)(
                                                       (0U 
                                                        != 
                                                        (0xfff00000U 
                                                         & vlSelfRef.__PVT__if_id_bus[0U])))) {
                                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                            = (0x24000000U 
                                               | (0xc03fffffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                            = (1U | vlSelfRef.__PVT__id_ex_bus_decoded[0U]);
                                        vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                                            = (0xffffff07U 
                                               & vlSelfRef.__PVT__id_ex_bus_decoded[1U]);
                                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                            = (0xffffff07U 
                                               & vlSelfRef.__PVT__id_ex_bus_decoded[0U]);
                                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                            = (0x00040000U 
                                               | (0xffe3ffffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                                        vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                            = (0x00034100U 
                                               | (0x000000ffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[3U]));
                                        vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                            = (0xffffff00U 
                                               & vlSelfRef.__PVT__id_ex_bus_decoded[4U]);
                                    } else {
                                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                            = (0x00016000U 
                                               | (0xfffc1fffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                            = (0x24000000U 
                                               | (0xc03fffffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                            = (1U | vlSelfRef.__PVT__id_ex_bus_decoded[0U]);
                                    }
                                } else {
                                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                        = ((0xffe3ffffU 
                                            & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                           | (0x001c0000U 
                                              & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                 << 6U)));
                                }
                            }
                        }
                    }
                }
            } else if ((8U & vlSelfRef.__PVT__if_id_bus[0U])) {
                if ((4U & vlSelfRef.__PVT__if_id_bus[0U])) {
                    if ((2U & vlSelfRef.__PVT__if_id_bus[0U])) {
                        if ((1U & vlSelfRef.__PVT__if_id_bus[0U])) {
                            vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                = ((0xffffff07U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                   | (0x000000f8U & 
                                      (vlSelfRef.__PVT__if_id_bus[0U] 
                                       >> 4U)));
                            vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                = ((0xf00000ffU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                                   | (0xffffff00U & 
                                      ((((0x000001feU 
                                          & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 0x0000000bU)) 
                                         | (1U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                  >> 0x00000014U))) 
                                        << 0x00000013U) 
                                       | (0x0007fe00U 
                                          & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 0x0000000cU)))));
                            vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                = ((0x0fffffffU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                                   | ((- (IData)((vlSelfRef.__PVT__if_id_bus[0U] 
                                                  >> 0x0000001fU))) 
                                      << 0x0000001cU));
                            vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                = ((0xffffff00U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                                   | (0x000000ffU & 
                                      ((- (IData)((vlSelfRef.__PVT__if_id_bus[0U] 
                                                   >> 0x0000001fU))) 
                                       >> 4U)));
                            vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                = (0x34000000U | (0xc03fffffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                            vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                = (4U | (0xfffffff9U 
                                         & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                        }
                    }
                }
            } else if ((4U & vlSelfRef.__PVT__if_id_bus[0U])) {
                if ((2U & vlSelfRef.__PVT__if_id_bus[0U])) {
                    if ((1U & vlSelfRef.__PVT__if_id_bus[0U])) {
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = ((0xffffff07U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | (0x000000f8U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                 >> 4U)));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = ((0x3fffffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | (((0x000003e0U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                   >> 0x0000000aU)) 
                                   | (0x0000001fU & 
                                      (vlSelfRef.__PVT__if_id_bus[0U] 
                                       >> 0x0000000fU))) 
                                  << 0x0000001eU));
                        vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                               | (0x000000ffU & (((0x000003e0U 
                                                   & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                      >> 0x0000000aU)) 
                                                  | (0x0000001fU 
                                                     & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                        >> 0x0000000fU))) 
                                                 >> 2U)));
                        vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                            = ((0x000000ffU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                               | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                                  << 8U));
                        vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                               | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                                  >> 0x00000018U));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = (0x24000000U | (0xc03fffffU 
                                              & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = (4U | (0xfffffff9U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                    }
                }
            } else if ((2U & vlSelfRef.__PVT__if_id_bus[0U])) {
                if ((1U & vlSelfRef.__PVT__if_id_bus[0U])) {
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = ((0x3fffffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                           | ((IData)(vlSelfRef.decode_mod__DOT____VdfgExtracted_h3b2fb429__0) 
                              << 0x0000001eU));
                    vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                           | ((IData)(vlSelfRef.decode_mod__DOT____VdfgExtracted_h3b2fb429__0) 
                              >> 2U));
                    vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                        = ((0xfff000ffU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                           | (((0x00000800U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                               << 4U)) 
                               | ((0x000007e0U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                  >> 0x00000014U)) 
                                  | (0x0000001eU & 
                                     (vlSelfRef.__PVT__if_id_bus[0U] 
                                      >> 7U)))) << 8U));
                    vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                        = ((0x000fffffU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                           | ((- (IData)((vlSelfRef.__PVT__if_id_bus[0U] 
                                          >> 0x0000001fU))) 
                              << 0x00000014U));
                    vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                           | (0x000000ffU & ((- (IData)(
                                                        (vlSelfRef.__PVT__if_id_bus[0U] 
                                                         >> 0x0000001fU))) 
                                             >> 0x0000000cU)));
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = ((0xc03fffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                           | (0xffc00000U & (0x34000000U 
                                             | (0x01c00000U 
                                                & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                   << 0x0000000aU)))));
                }
            }
        }
    } else if ((0x00000020U & vlSelfRef.__PVT__if_id_bus[0U])) {
        if ((0x00000010U & vlSelfRef.__PVT__if_id_bus[0U])) {
            if ((1U & (~ (vlSelfRef.__PVT__if_id_bus[0U] 
                          >> 3U)))) {
                if ((4U & vlSelfRef.__PVT__if_id_bus[0U])) {
                    if ((2U & vlSelfRef.__PVT__if_id_bus[0U])) {
                        if ((1U & vlSelfRef.__PVT__if_id_bus[0U])) {
                            vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                = ((0xffffff07U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                   | (0x000000f8U & 
                                      (vlSelfRef.__PVT__if_id_bus[0U] 
                                       >> 4U)));
                            vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                = ((0x000000ffU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                                   | (0xfff00000U & 
                                      (vlSelfRef.__PVT__if_id_bus[0U] 
                                       << 8U)));
                            vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                = ((0xffffff00U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                                   | (vlSelfRef.__PVT__if_id_bus[0U] 
                                      >> 0x00000018U));
                            vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                = (0x20000000U | (0xc03fffffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                        }
                    }
                } else if ((2U & vlSelfRef.__PVT__if_id_bus[0U])) {
                    if ((1U & vlSelfRef.__PVT__if_id_bus[0U])) {
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = ((0xffffff07U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | (0x000000f8U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                 >> 4U)));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = ((0xc03fffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | (((0x00000020U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                   >> 0x00000014U)) 
                                   | (IData)(vlSelfRef.decode_mod__DOT____VdfgRegularize_h901acc23_0_2)) 
                                  << 0x00000016U));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = ((0x3fffffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | ((IData)(vlSelfRef.decode_mod__DOT____VdfgExtracted_h3b2fb429__0) 
                                  << 0x0000001eU));
                        vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                               | ((IData)(vlSelfRef.decode_mod__DOT____VdfgExtracted_h3b2fb429__0) 
                                  >> 2U));
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.__PVT__if_id_bus[0U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelfRef.__PVT__if_id_bus[0U] 
                          >> 2U)))) {
                if ((2U & vlSelfRef.__PVT__if_id_bus[0U])) {
                    if ((1U & vlSelfRef.__PVT__if_id_bus[0U])) {
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = ((0x3fffffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | ((IData)(vlSelfRef.decode_mod__DOT____VdfgExtracted_h3b2fb429__0) 
                                  << 0x0000001eU));
                        vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                               | ((IData)(vlSelfRef.decode_mod__DOT____VdfgExtracted_h3b2fb429__0) 
                                  >> 2U));
                        vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                            = ((0x000000ffU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                               | (0xffffff00U & (((- (IData)(
                                                             (vlSelfRef.__PVT__if_id_bus[0U] 
                                                              >> 0x0000001fU))) 
                                                  << 0x00000013U) 
                                                 | (((0x000007e0U 
                                                      & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                         >> 0x00000014U)) 
                                                     | (0x0000001fU 
                                                        & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                           >> 7U))) 
                                                    << 8U))));
                        vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                               | (0x000000ffU & ((0x000000ffU 
                                                  & ((- (IData)(
                                                                (vlSelfRef.__PVT__if_id_bus[0U] 
                                                                 >> 0x0000001fU))) 
                                                     >> 0x0000000dU)) 
                                                 | (((0x000007e0U 
                                                      & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                         >> 0x00000014U)) 
                                                     | (0x0000001fU 
                                                        & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                           >> 7U))) 
                                                    >> 0x00000018U))));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = (0x20000000U | (0xc03fffffU 
                                              & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = ((0xfffff8ffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | (0x00000700U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                 >> 4U)));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = (0x00001000U | vlSelfRef.__PVT__id_ex_bus_decoded[0U]);
                    }
                }
            }
        }
    } else if ((0x00000010U & vlSelfRef.__PVT__if_id_bus[0U])) {
        if ((1U & (~ (vlSelfRef.__PVT__if_id_bus[0U] 
                      >> 3U)))) {
            if ((4U & vlSelfRef.__PVT__if_id_bus[0U])) {
                if ((2U & vlSelfRef.__PVT__if_id_bus[0U])) {
                    if ((1U & vlSelfRef.__PVT__if_id_bus[0U])) {
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = ((0xffffff07U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | (0x000000f8U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                 >> 4U)));
                        vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                            = ((0x000000ffU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                               | (0xfff00000U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                 << 8U)));
                        vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                            = ((0xffffff00U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                               | (vlSelfRef.__PVT__if_id_bus[0U] 
                                  >> 0x00000018U));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = (0x30000000U | (0xc03fffffU 
                                              & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                    }
                }
            } else if ((2U & vlSelfRef.__PVT__if_id_bus[0U])) {
                if ((1U & vlSelfRef.__PVT__if_id_bus[0U])) {
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = ((0xffffff07U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                           | (0x000000f8U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 4U)));
                    vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                        = ((0xffffff07U & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                           | (0x000000f8U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 0x0000000cU)));
                    vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                        = ((0x000000ffU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                           | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                              << 8U));
                    vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                           | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                              >> 0x00000018U));
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = ((0xc03fffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                           | (((5U == (7U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 0x0000000cU)))
                                ? (0x00000080U | (IData)(vlSelfRef.decode_mod__DOT____VdfgRegularize_h901acc23_0_2))
                                : (0x00000080U | (7U 
                                                  & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                     >> 0x0000000cU)))) 
                              << 0x00000016U));
                }
            }
        }
    } else if ((1U & (~ (vlSelfRef.__PVT__if_id_bus[0U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelfRef.__PVT__if_id_bus[0U] 
                      >> 2U)))) {
            if ((2U & vlSelfRef.__PVT__if_id_bus[0U])) {
                if ((1U & vlSelfRef.__PVT__if_id_bus[0U])) {
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = ((0xffffff07U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                           | (0x000000f8U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 4U)));
                    vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                        = ((0xffffff07U & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                           | (0x000000f8U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 0x0000000cU)));
                    vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                        = ((0x000000ffU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                           | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                              << 8U));
                    vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                        = ((0xffffff00U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                           | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                              >> 0x00000018U));
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = (0x20000000U | (0xc03fffffU 
                                          & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = ((0xfffff0ffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                           | (0xffffff00U & (0x00000800U 
                                             | (0x00000700U 
                                                & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                   >> 4U)))));
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = (2U | (0xfffffff9U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                }
            }
        }
    }
    vlSelfRef.__PVT__csr_mod__DOT__working_reg = ((0x0300U 
                                                   == 
                                                   (0x00000fffU 
                                                    & (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                                       >> 8U)))
                                                   ? 2U
                                                   : 
                                                  ((0x0305U 
                                                    == 
                                                    (0x00000fffU 
                                                     & (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                                        >> 8U)))
                                                    ? 4U
                                                    : 
                                                   ((0x0341U 
                                                     == 
                                                     (0x00000fffU 
                                                      & (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                                         >> 8U)))
                                                     ? 1U
                                                     : 
                                                    ((0x0342U 
                                                      == 
                                                      (0x00000fffU 
                                                       & (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                                          >> 8U)))
                                                      ? 3U
                                                      : 0U))));
    if ((0U != (0x0000001fU & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                               >> 0x0000000dU)))) {
        vlSelfRef.__PVT__csr_mod__DOT__working_reg = 4U;
    }
    vlSelfRef.__PVT__csr_data = vlSelfRef.__PVT__csr_mod__DOT__regs
        [vlSelfRef.__PVT__csr_mod__DOT__working_reg];
}

VL_ATTR_COLD void Vtop_top___ctor_var_reset(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4211327832146562899ull);
    vlSelf->opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17409787017080135397ull);
    vlSelf->reg_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4430225706042301878ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->__PVT__if_id_bus, __VscopeHash, 4165204006372198396ull);
    vlSelf->__PVT__if_id_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2712103756575143212ull);
    VL_SCOPED_RAND_RESET_W(200, vlSelf->__PVT__id_ex_bus_decoded, __VscopeHash, 13052232129216562696ull);
    VL_SCOPED_RAND_RESET_W(142, vlSelf->__PVT__ex_ls_bus_alu, __VscopeHash, 15589358827054334394ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->__PVT__ls_wb_bus, __VscopeHash, 14380409961569952781ull);
    vlSelf->__PVT__csr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15513057494073897048ull);
    vlSelf->__PVT__araddr_lsu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5416967447709139ull);
    vlSelf->__PVT__rdata_lsu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 409357992779498488ull);
    vlSelf->__PVT__rresp_lsu = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13257637301706891795ull);
    vlSelf->__PVT__arvalid_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5374114079387349993ull);
    vlSelf->__PVT__arready_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13628591287412370296ull);
    vlSelf->__PVT__rvalid_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12433543299506857095ull);
    vlSelf->__PVT__rready_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15443892785955015948ull);
    vlSelf->__PVT__awaddr_lsu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14890680784206275148ull);
    vlSelf->__PVT__wdata_lsu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4165621799402445171ull);
    vlSelf->__PVT__awvalid_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15576964305551330725ull);
    vlSelf->__PVT__wvalid_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10942038539835955859ull);
    vlSelf->__PVT__bready_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 502261188337401444ull);
    vlSelf->__PVT__araddr_ifu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17403733745108566750ull);
    vlSelf->__PVT__rdata_ifu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15047780144705229670ull);
    vlSelf->__PVT__rresp_ifu = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 386195556598118412ull);
    vlSelf->__PVT__arvalid_ifu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6187099397844950305ull);
    vlSelf->__PVT__arready_ifu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12608958848878039997ull);
    vlSelf->__PVT__rvalid_ifu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5414986147116062343ull);
    vlSelf->__PVT__rready_ifu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7080648654013881954ull);
    vlSelf->__PVT__araddr_arbiter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4522080003760700082ull);
    vlSelf->__PVT__rdata_arbiter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5937642183362379707ull);
    vlSelf->__PVT__rresp_arbiter = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8705138806693364806ull);
    vlSelf->__PVT__arvalid_arbiter = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11139252906900690586ull);
    vlSelf->__PVT__arready_arbiter = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 635676482945031349ull);
    vlSelf->__PVT__rvalid_arbiter = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18033155327291958703ull);
    vlSelf->__PVT__rready_arbiter = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9459083268666690568ull);
    vlSelf->__PVT__bresp_arbiter = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13995451824727468739ull);
    vlSelf->__PVT__awready_arbiter = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16730814839631524371ull);
    vlSelf->__PVT__wready_arbiter = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3395782134897872593ull);
    vlSelf->__PVT__bvalid_arbiter = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4083749381198651581ull);
    vlSelf->__PVT__cwdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12291527178367676863ull);
    vlSelf->__PVT__crdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17927932929912555336ull);
    vlSelf->__PVT__caddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1130972979955015548ull);
    vlSelf->__PVT__cwvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6050811330779783603ull);
    vlSelf->__PVT__crvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 847591021498092698ull);
    vlSelf->__PVT__cready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17562557534312533364ull);
    vlSelf->__PVT__ifu_mod__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9786868741865089741ull);
    vlSelf->__PVT__ifu_mod__DOT__ifu = 0;
    vlSelf->__PVT__decode_mod__DOT__imm_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17728463912631228713ull);
    vlSelf->decode_mod__DOT____VdfgExtracted_h3b2fb429__0 = 0;
    vlSelf->decode_mod__DOT____VdfgRegularize_h901acc23_0_2 = 0;
    VL_SCOPED_RAND_RESET_W(200, vlSelf->__PVT__alu_mod__DOT__bus_in, __VscopeHash, 9512658023472319657ull);
    vlSelf->__PVT__alu_mod__DOT__ready_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11735168189738799635ull);
    vlSelf->__PVT__alu_mod__DOT__val1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3618980885417066799ull);
    vlSelf->__PVT__alu_mod__DOT__val2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5531290321701216620ull);
    vlSelf->__PVT__csr_mod__DOT__data_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12700116229890022093ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__csr_mod__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12209870551186757864ull);
    }
    vlSelf->__PVT__csr_mod__DOT__working_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11201873268134957014ull);
    VL_SCOPED_RAND_RESET_W(142, vlSelf->__PVT__lsu_mod__DOT__bus_in, __VscopeHash, 7939752121783657875ull);
    vlSelf->__PVT__lsu_mod__DOT__valid_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17937545675397858093ull);
    vlSelf->__PVT__lsu_mod__DOT__lsu_r = 0;
    vlSelf->__PVT__lsu_mod__DOT__done_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7759797624961867984ull);
    vlSelf->__PVT__lsu_mod__DOT__done_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16734576510063392104ull);
    vlSelf->__PVT__lsu_mod__DOT__done_aw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7999347421721851315ull);
    vlSelf->__PVT__lsu_mod__DOT__done_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9089321588137706110ull);
    vlSelf->__PVT__lsu_mod__DOT__lsu_w = 0;
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__slave = 0;
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__slave_w = 0;
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__done_aw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9073371225346102364ull);
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__done_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7403064219717101431ull);
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4002819033687668826ull);
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__aw = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10150655162570726797ull);
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6511546567341204472ull);
    vlSelf->__PVT__arbiter_mod__DOT__chose = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2205145542997678515ull);
    vlSelf->__PVT__arbiter_mod__DOT__lsu_transfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11264025650630922834ull);
    vlSelf->__PVT__arbiter_mod__DOT__ifu_transfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3481642720368183497ull);
    vlSelf->__PVT__CLINT_mod__DOT__mtime = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18248436977652874710ull);
    vlSelf->__PVT__CLINT_mod__DOT__timecp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1476644059076731240ull);
    VL_ZERO_RESET_W(136, vlSelf->__Vdly__ls_wb_bus);
    VL_ZERO_RESET_W(136, vlSelf->__VdlyMask__ls_wb_bus);
}
