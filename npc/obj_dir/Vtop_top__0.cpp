// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

extern "C" int memread(int addr);

void Vtop_top____Vdpiimwrap_axi_slave_lsu_mod__DOT__memread_TOP__top(IData/*31:0*/ addr, IData/*31:0*/ &memread__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top____Vdpiimwrap_axi_slave_lsu_mod__DOT__memread_TOP__top\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int memread__Vfuncrtn__Vcvt;
    memread__Vfuncrtn__Vcvt = memread(addr__Vcvt);
    memread__Vfuncrtn = (memread__Vfuncrtn__Vcvt);
}

extern "C" void memwrite(int addr, int data, int idk);

void Vtop_top____Vdpiimwrap_axi_slave_lsu_mod__DOT__memwrite_TOP__top(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ idk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top____Vdpiimwrap_axi_slave_lsu_mod__DOT__memwrite_TOP__top\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    data__Vcvt = data;
    int idk__Vcvt;
    idk__Vcvt = idk;
    memwrite(addr__Vcvt, data__Vcvt, idk__Vcvt);
}

void Vtop_top___ico_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ifu_mod__DOT__next_pc = ((IData)(4U) 
                                              + vlSelfRef.pc);
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

void Vtop_top___ico_sequent__TOP__top__1(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_sequent__TOP__top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alu_mod__DOT__val2 = ((0x20000000U 
                                            & vlSelfRef.__PVT__id_ex_bus_decoded[0U])
                                            ? ((vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                                  >> 8U))
                                            : vlSymsp->TOP__top__reg_mod.__PVT__data_rs2);
    vlSelfRef.__PVT__csr_mod__DOT__data_in = ((0x00100000U 
                                               & vlSelfRef.__PVT__id_ex_bus_decoded[0U])
                                               ? (0x0000001fU 
                                                  & (vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                                                     >> 3U))
                                               : vlSymsp->TOP__top__reg_mod.__PVT__data_rs1);
    vlSelfRef.__PVT__alu_mod__DOT__val1 = ((0x10000000U 
                                            & vlSelfRef.__PVT__id_ex_bus_decoded[0U])
                                            ? ((vlSelfRef.__PVT__id_ex_bus_decoded[6U] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__PVT__id_ex_bus_decoded[5U] 
                                                  >> 8U))
                                            : vlSymsp->TOP__top__reg_mod.__PVT__data_rs1);
    vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] = (IData)(
                                                        (0x000000ffffffffffULL 
                                                         & (((QData)((IData)(vlSelfRef.__PVT__id_ex_bus_decoded[1U])) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.__PVT__id_ex_bus_decoded[0U])))));
    vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] = ((vlSymsp->TOP__top__reg_mod.__PVT__data_rs2 
                                                  << 8U) 
                                                 | (IData)(
                                                           ((0x000000ffffffffffULL 
                                                             & (((QData)((IData)(vlSelfRef.__PVT__id_ex_bus_decoded[1U])) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(vlSelfRef.__PVT__id_ex_bus_decoded[0U])))) 
                                                            >> 0x00000020U)));
    vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] = ((vlSymsp->TOP__top__reg_mod.__PVT__data_rs2 
                                                  >> 0x00000018U) 
                                                 | (vlSymsp->TOP__top__reg_mod.__PVT__data_rs1 
                                                    << 8U));
    vlSelfRef.__PVT__alu_mod__DOT__bus_in[3U] = ((vlSymsp->TOP__top__reg_mod.__PVT__data_rs1 
                                                  >> 0x00000018U) 
                                                 | (0xffffff00U 
                                                    & vlSelfRef.__PVT__id_ex_bus_decoded[3U]));
    vlSelfRef.__PVT__alu_mod__DOT__bus_in[4U] = ((0x000000ffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                                                 | (0xffffff00U 
                                                    & vlSelfRef.__PVT__id_ex_bus_decoded[4U]));
    vlSelfRef.__PVT__alu_mod__DOT__bus_in[5U] = ((0x000000ffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[5U]) 
                                                 | (0xffffff00U 
                                                    & vlSelfRef.__PVT__id_ex_bus_decoded[5U]));
    vlSelfRef.__PVT__alu_mod__DOT__bus_in[6U] = (0x000000ffU 
                                                 & vlSelfRef.__PVT__id_ex_bus_decoded[6U]);
    vlSelfRef.__PVT__ex_ls_bus_alu[0U] = 0U;
    vlSelfRef.__PVT__ex_ls_bus_alu[1U] = 0U;
    vlSelfRef.__PVT__ex_ls_bus_alu[2U] = 0U;
    vlSelfRef.__PVT__ex_ls_bus_alu[3U] = 0U;
    vlSelfRef.__PVT__ex_ls_bus_alu[4U] = 0U;
    vlSelfRef.__PVT__ex_ls_bus_alu[2U] = (0x00003fffU 
                                          & vlSelfRef.__PVT__ex_ls_bus_alu[2U]);
    vlSelfRef.__PVT__ex_ls_bus_alu[3U] = (0xffffc000U 
                                          & vlSelfRef.__PVT__ex_ls_bus_alu[3U]);
    vlSelfRef.__PVT__ex_ls_bus_alu[0U] = (0xfffffffeU 
                                          & vlSelfRef.__PVT__ex_ls_bus_alu[0U]);
    if ((0U == (3U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                      >> 0x0000001aU)))) {
        if (((((((((0U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                 >> 0x00000016U))) 
                   | (1U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                   >> 0x00000016U)))) 
                  | (2U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                  >> 0x00000016U)))) 
                 | (3U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                 >> 0x00000016U)))) 
                | (4U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                >> 0x00000016U)))) 
               | (5U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                               >> 0x00000016U)))) | 
              (6U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                            >> 0x00000016U)))) | (7U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                      >> 0x00000016U))))) {
            vlSelfRef.__PVT__ex_ls_bus_alu[2U] = ((0x00003fffU 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[2U]) 
                                                  | (((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                           >> 0x00000016U)))
                                                       ? 
                                                      ((0x02000000U 
                                                        & vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U])
                                                        ? 
                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                        - vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                        : 
                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                        + vlSelfRef.__PVT__alu_mod__DOT__val2))
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                            >> 0x00000016U)))
                                                        ? 
                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                        << 
                                                        (0x0000001fU 
                                                         & vlSelfRef.__PVT__alu_mod__DOT__val2))
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                             >> 0x00000016U)))
                                                         ? 
                                                        VL_LTS_III(32, vlSelfRef.__PVT__alu_mod__DOT__val1, vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                              >> 0x00000016U)))
                                                          ? 
                                                         (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                          < vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                               >> 0x00000016U)))
                                                           ? 
                                                          (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                           ^ vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                           : 
                                                          ((5U 
                                                            == 
                                                            (7U 
                                                             & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                                >> 0x00000016U)))
                                                            ? 
                                                           ((0x02000000U 
                                                             & vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U])
                                                             ? 
                                                            VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__alu_mod__DOT__val1, 
                                                                           (0x0000001fU 
                                                                            & vlSelfRef.__PVT__alu_mod__DOT__val2))
                                                             : 
                                                            (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                             >> 
                                                             (0x0000001fU 
                                                              & vlSelfRef.__PVT__alu_mod__DOT__val2)))
                                                            : 
                                                           ((6U 
                                                             == 
                                                             (7U 
                                                              & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                                 >> 0x00000016U)))
                                                             ? 
                                                            (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                             | vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                             : 
                                                            (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                             & vlSelfRef.__PVT__alu_mod__DOT__val2)))))))) 
                                                     << 0x0000000eU));
            vlSelfRef.__PVT__ex_ls_bus_alu[3U] = ((0xffffc000U 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[3U]) 
                                                  | (((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                           >> 0x00000016U)))
                                                       ? 
                                                      ((0x02000000U 
                                                        & vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U])
                                                        ? 
                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                        - vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                        : 
                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                        + vlSelfRef.__PVT__alu_mod__DOT__val2))
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                            >> 0x00000016U)))
                                                        ? 
                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                        << 
                                                        (0x0000001fU 
                                                         & vlSelfRef.__PVT__alu_mod__DOT__val2))
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                             >> 0x00000016U)))
                                                         ? 
                                                        VL_LTS_III(32, vlSelfRef.__PVT__alu_mod__DOT__val1, vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                              >> 0x00000016U)))
                                                          ? 
                                                         (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                          < vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                               >> 0x00000016U)))
                                                           ? 
                                                          (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                           ^ vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                           : 
                                                          ((5U 
                                                            == 
                                                            (7U 
                                                             & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                                >> 0x00000016U)))
                                                            ? 
                                                           ((0x02000000U 
                                                             & vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U])
                                                             ? 
                                                            VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__alu_mod__DOT__val1, 
                                                                           (0x0000001fU 
                                                                            & vlSelfRef.__PVT__alu_mod__DOT__val2))
                                                             : 
                                                            (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                             >> 
                                                             (0x0000001fU 
                                                              & vlSelfRef.__PVT__alu_mod__DOT__val2)))
                                                            : 
                                                           ((6U 
                                                             == 
                                                             (7U 
                                                              & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                                 >> 0x00000016U)))
                                                             ? 
                                                            (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                             | vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                             : 
                                                            (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                             & vlSelfRef.__PVT__alu_mod__DOT__val2)))))))) 
                                                     >> 0x00000012U));
        }
    } else if ((1U == (3U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                             >> 0x0000001aU)))) {
        vlSelfRef.__PVT__ex_ls_bus_alu[2U] = ((0x00003fffU 
                                               & vlSelfRef.__PVT__ex_ls_bus_alu[2U]) 
                                              | ((vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                  + vlSelfRef.__PVT__alu_mod__DOT__val2) 
                                                 << 0x0000000eU));
        vlSelfRef.__PVT__ex_ls_bus_alu[3U] = ((0xffffc000U 
                                               & vlSelfRef.__PVT__ex_ls_bus_alu[3U]) 
                                              | ((vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                  + vlSelfRef.__PVT__alu_mod__DOT__val2) 
                                                 >> 0x00000012U));
        if ((0U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                          >> 0x00000016U)))) {
            vlSelfRef.__PVT__ex_ls_bus_alu[0U] = ((0xfffffffeU 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[0U]) 
                                                  | (((vlSelfRef.__PVT__alu_mod__DOT__bus_in[3U] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                         >> 8U)) 
                                                     == 
                                                     ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                         >> 8U))));
        } else if ((1U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                 >> 0x00000016U)))) {
            vlSelfRef.__PVT__ex_ls_bus_alu[0U] = ((0xfffffffeU 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[0U]) 
                                                  | (((vlSelfRef.__PVT__alu_mod__DOT__bus_in[3U] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                         >> 8U)) 
                                                     != 
                                                     ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                         >> 8U))));
        } else if ((4U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                 >> 0x00000016U)))) {
            vlSelfRef.__PVT__ex_ls_bus_alu[0U] = ((0xfffffffeU 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[0U]) 
                                                  | VL_LTS_III(32, 
                                                               ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[3U] 
                                                                 << 0x00000018U) 
                                                                | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                                   >> 8U)), 
                                                               ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                                 << 0x00000018U) 
                                                                | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                                   >> 8U))));
        } else if ((5U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                 >> 0x00000016U)))) {
            vlSelfRef.__PVT__ex_ls_bus_alu[0U] = ((0xfffffffeU 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[0U]) 
                                                  | VL_GTES_III(32, 
                                                                ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[3U] 
                                                                  << 0x00000018U) 
                                                                 | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                                    >> 8U)), 
                                                                ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                                  << 0x00000018U) 
                                                                 | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                                    >> 8U))));
        } else if ((6U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                 >> 0x00000016U)))) {
            vlSelfRef.__PVT__ex_ls_bus_alu[0U] = ((0xfffffffeU 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[0U]) 
                                                  | (((vlSelfRef.__PVT__alu_mod__DOT__bus_in[3U] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                         >> 8U)) 
                                                     < 
                                                     ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                         >> 8U))));
        } else if ((7U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                 >> 0x00000016U)))) {
            vlSelfRef.__PVT__ex_ls_bus_alu[0U] = ((0xfffffffeU 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[0U]) 
                                                  | (((vlSelfRef.__PVT__alu_mod__DOT__bus_in[3U] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                         >> 8U)) 
                                                     >= 
                                                     ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                         >> 8U))));
        }
    }
    vlSelfRef.__PVT__ex_ls_bus_alu[3U] = ((0x00003fffU 
                                           & vlSelfRef.__PVT__ex_ls_bus_alu[3U]) 
                                          | (0xffffc000U 
                                             & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[4U] 
                                                << 6U)));
    vlSelfRef.__PVT__ex_ls_bus_alu[4U] = (0x00003fffU 
                                          & ((0x00003fc0U 
                                              & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[5U] 
                                                 << 6U)) 
                                             | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[4U] 
                                                >> 0x0000001aU)));
    vlSelfRef.__PVT__ex_ls_bus_alu[1U] = ((0x00003fffU 
                                           & vlSelfRef.__PVT__ex_ls_bus_alu[1U]) 
                                          | (0xffffc000U 
                                             & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                << 6U)));
    vlSelfRef.__PVT__ex_ls_bus_alu[2U] = ((0xffffc000U 
                                           & vlSelfRef.__PVT__ex_ls_bus_alu[2U]) 
                                          | (0x00003fffU 
                                             & ((0x00003fc0U 
                                                 & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                    << 6U)) 
                                                | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                   >> 0x0000001aU))));
    vlSelfRef.__PVT__ex_ls_bus_alu[0U] = ((0xffffc001U 
                                           & vlSelfRef.__PVT__ex_ls_bus_alu[0U]) 
                                          | (0x00003ffeU 
                                             & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                << 1U)));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] = ((vlSelfRef.__PVT__csr_data 
                                                  << 0x0000000eU) 
                                                 | (0x00003fffU 
                                                    & vlSelfRef.__PVT__ex_ls_bus_alu[0U]));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] = ((vlSelfRef.__PVT__csr_data 
                                                  >> 0x00000012U) 
                                                 | (0xffffc000U 
                                                    & vlSelfRef.__PVT__ex_ls_bus_alu[1U]));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] = ((0x00003fffU 
                                                  & vlSelfRef.__PVT__ex_ls_bus_alu[2U]) 
                                                 | (0xffffc000U 
                                                    & vlSelfRef.__PVT__ex_ls_bus_alu[2U]));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] = ((0x00003fffU 
                                                  & vlSelfRef.__PVT__ex_ls_bus_alu[3U]) 
                                                 | (0xffffc000U 
                                                    & vlSelfRef.__PVT__ex_ls_bus_alu[3U]));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] = (0x00003fffU 
                                                 & vlSelfRef.__PVT__ex_ls_bus_alu[4U]);
    vlSelfRef.__PVT__alu_mod__DOT__ready_right = (1U 
                                                  & (((~ 
                                                       (vlSelfRef.__PVT__ex_ls_bus_alu[0U] 
                                                        >> 0x0000000cU)) 
                                                      | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__done_r)) 
                                                     & ((~ 
                                                         (vlSelfRef.__PVT__ex_ls_bus_alu[0U] 
                                                          >> 0x0000000dU)) 
                                                        | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__done_w))));
    vlSelfRef.__PVT__ls_wb_bus[3U] = (0x000000ffU & vlSelfRef.__PVT__ls_wb_bus[3U]);
    vlSelfRef.__PVT__ls_wb_bus[4U] = 0U;
    vlSelfRef.__PVT__ls_wb_bus[0U] = 0U;
    vlSelfRef.__PVT__ls_wb_bus[1U] = 0U;
    vlSelfRef.__PVT__ls_wb_bus[2U] = (0xffffff00U & vlSelfRef.__PVT__ls_wb_bus[2U]);
    if (vlSelfRef.__PVT__if_id_valid) {
        vlSelfRef.__PVT__ls_wb_bus[3U] = ((0x000000ffU 
                                           & vlSelfRef.__PVT__ls_wb_bus[3U]) 
                                          | (0xffffff00U 
                                             & ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                 << 0x0000001aU) 
                                                | (0x03ffff00U 
                                                   & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                      >> 6U)))));
        vlSelfRef.__PVT__ls_wb_bus[4U] = (0x000000ffU 
                                          & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                             >> 6U));
        vlSelfRef.__PVT__ls_wb_bus[0U] = ((7U & vlSelfRef.__PVT__ls_wb_bus[0U]) 
                                          | (((IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                                                          << 0x00000012U) 
                                                                         | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                            >> 0x0000000eU)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                           << 0x00000012U) 
                                                                          | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                             >> 0x0000000eU)))))) 
                                              << 8U) 
                                             | (0x000000f8U 
                                                & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                   >> 1U))));
        vlSelfRef.__PVT__ls_wb_bus[1U] = ((7U & ((IData)(
                                                         (((QData)((IData)(
                                                                           ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                                                             << 0x00000012U) 
                                                                            | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                               >> 0x0000000eU)))) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                              << 0x00000012U) 
                                                                             | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                                >> 0x0000000eU)))))) 
                                                 >> 0x00000018U)) 
                                          | ((0x000000f8U 
                                              & ((IData)(
                                                         (((QData)((IData)(
                                                                           ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                                                             << 0x00000012U) 
                                                                            | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                               >> 0x0000000eU)))) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                              << 0x00000012U) 
                                                                             | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                                >> 0x0000000eU)))))) 
                                                 >> 0x00000018U)) 
                                             | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                                                             << 0x00000012U) 
                                                                            | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                               >> 0x0000000eU)))) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                              << 0x00000012U) 
                                                                             | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                                >> 0x0000000eU))))) 
                                                         >> 0x00000020U)) 
                                                << 8U)));
        vlSelfRef.__PVT__ls_wb_bus[2U] = ((0xffffff00U 
                                           & vlSelfRef.__PVT__ls_wb_bus[2U]) 
                                          | ((7U & 
                                              ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                                                            << 0x00000012U) 
                                                                           | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                              >> 0x0000000eU)))) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(
                                                                           ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                             << 0x00000012U) 
                                                                            | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                               >> 0x0000000eU))))) 
                                                        >> 0x00000020U)) 
                                               >> 0x00000018U)) 
                                             | (0x000000f8U 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                                                                << 0x00000012U) 
                                                                               | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                                >> 0x0000000eU)))) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                                << 0x00000012U) 
                                                                                | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                                >> 0x0000000eU))))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000018U))));
        vlSelfRef.__PVT__ls_wb_bus[0U] = ((0xfffffff8U 
                                           & vlSelfRef.__PVT__ls_wb_bus[0U]) 
                                          | (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                   >> 1U)));
        vlSelfRef.__PVT__lsu_mod__DOT__valid_right 
            = vlSelfRef.__PVT__alu_mod__DOT__ready_right;
    } else {
        vlSelfRef.__PVT__lsu_mod__DOT__valid_right = 0U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_hfbd30b60_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hdfc2b09e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_ha546e273_0;

void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_axi_slave_lsu_mod__DOT__memread__0__Vfuncout;
    __Vfunc_axi_slave_lsu_mod__DOT__memread__0__Vfuncout = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __Vdly__ifu_mod__DOT__ifu;
    __Vdly__ifu_mod__DOT__ifu = 0;
    VlWide<3>/*95:0*/ __Vdly__if_id_bus;
    VL_ZERO_W(96, __Vdly__if_id_bus);
    VlWide<3>/*95:0*/ __VdlyMask__if_id_bus;
    VL_ZERO_W(96, __VdlyMask__if_id_bus);
    CData/*0:0*/ __Vdly__arvalid_ifu;
    __Vdly__arvalid_ifu = 0;
    CData/*0:0*/ __Vdly__rready_ifu;
    __Vdly__rready_ifu = 0;
    CData/*0:0*/ __Vdly__arvalid_lsu;
    __Vdly__arvalid_lsu = 0;
    IData/*31:0*/ __Vdly__araddr_lsu;
    __Vdly__araddr_lsu = 0;
    CData/*0:0*/ __Vdly__rready_lsu;
    __Vdly__rready_lsu = 0;
    IData/*31:0*/ __Vdly__lsu_mod__DOT__lsu_r;
    __Vdly__lsu_mod__DOT__lsu_r = 0;
    IData/*31:0*/ __Vdly__lsu_mod__DOT__lsu_w;
    __Vdly__lsu_mod__DOT__lsu_w = 0;
    IData/*31:0*/ __Vdly__axi_slave_lsu_mod__DOT__slave;
    __Vdly__axi_slave_lsu_mod__DOT__slave = 0;
    CData/*0:0*/ __Vdly__arready_arbiter;
    __Vdly__arready_arbiter = 0;
    CData/*0:0*/ __Vdly__rvalid_arbiter;
    __Vdly__rvalid_arbiter = 0;
    IData/*31:0*/ __Vdly__axi_slave_lsu_mod__DOT__slave_w;
    __Vdly__axi_slave_lsu_mod__DOT__slave_w = 0;
    CData/*0:0*/ __Vdly__awready_arbiter;
    __Vdly__awready_arbiter = 0;
    CData/*0:0*/ __Vdly__wready_arbiter;
    __Vdly__wready_arbiter = 0;
    IData/*31:0*/ __Vdly__axi_slave_lsu_mod__DOT__aw;
    __Vdly__axi_slave_lsu_mod__DOT__aw = 0;
    IData/*31:0*/ __Vdly__axi_slave_lsu_mod__DOT__w;
    __Vdly__axi_slave_lsu_mod__DOT__w = 0;
    CData/*3:0*/ __Vdly__axi_slave_lsu_mod__DOT__mask;
    __Vdly__axi_slave_lsu_mod__DOT__mask = 0;
    CData/*0:0*/ __Vdly__axi_slave_lsu_mod__DOT__done_aw;
    __Vdly__axi_slave_lsu_mod__DOT__done_aw = 0;
    CData/*0:0*/ __Vdly__axi_slave_lsu_mod__DOT__done_w;
    __Vdly__axi_slave_lsu_mod__DOT__done_w = 0;
    CData/*0:0*/ __Vdly__bvalid_arbiter;
    __Vdly__bvalid_arbiter = 0;
    CData/*0:0*/ __Vdly__arbiter_mod__DOT__ifu_transfer;
    __Vdly__arbiter_mod__DOT__ifu_transfer = 0;
    CData/*0:0*/ __VdlySet__csr_mod__DOT__regs__v0;
    __VdlySet__csr_mod__DOT__regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__csr_mod__DOT__regs__v33;
    __VdlyVal__csr_mod__DOT__regs__v33 = 0;
    CData/*4:0*/ __VdlyDim0__csr_mod__DOT__regs__v33;
    __VdlyDim0__csr_mod__DOT__regs__v33 = 0;
    CData/*0:0*/ __VdlySet__csr_mod__DOT__regs__v33;
    __VdlySet__csr_mod__DOT__regs__v33 = 0;
    IData/*31:0*/ __VdlyVal__csr_mod__DOT__regs__v34;
    __VdlyVal__csr_mod__DOT__regs__v34 = 0;
    CData/*4:0*/ __VdlyDim0__csr_mod__DOT__regs__v34;
    __VdlyDim0__csr_mod__DOT__regs__v34 = 0;
    CData/*0:0*/ __VdlySet__csr_mod__DOT__regs__v34;
    __VdlySet__csr_mod__DOT__regs__v34 = 0;
    IData/*31:0*/ __VdlyVal__csr_mod__DOT__regs__v35;
    __VdlyVal__csr_mod__DOT__regs__v35 = 0;
    CData/*0:0*/ __VdlySet__csr_mod__DOT__regs__v35;
    __VdlySet__csr_mod__DOT__regs__v35 = 0;
    IData/*31:0*/ __VdlyVal__csr_mod__DOT__regs__v36;
    __VdlyVal__csr_mod__DOT__regs__v36 = 0;
    // Body
    __Vdly__arbiter_mod__DOT__ifu_transfer = vlSelfRef.__PVT__arbiter_mod__DOT__ifu_transfer;
    __Vdly__axi_slave_lsu_mod__DOT__slave = vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__slave;
    __Vdly__arready_arbiter = vlSelfRef.__PVT__arready_arbiter;
    __Vdly__rvalid_arbiter = vlSelfRef.__PVT__rvalid_arbiter;
    __Vdly__ifu_mod__DOT__ifu = vlSelfRef.__PVT__ifu_mod__DOT__ifu;
    __Vdly__arvalid_ifu = vlSelfRef.__PVT__arvalid_ifu;
    __Vdly__rready_ifu = vlSelfRef.__PVT__rready_ifu;
    __Vdly__lsu_mod__DOT__lsu_w = vlSelfRef.__PVT__lsu_mod__DOT__lsu_w;
    __Vdly__arvalid_lsu = vlSelfRef.__PVT__arvalid_lsu;
    __Vdly__araddr_lsu = vlSelfRef.__PVT__araddr_lsu;
    __Vdly__rready_lsu = vlSelfRef.__PVT__rready_lsu;
    __Vdly__lsu_mod__DOT__lsu_r = vlSelfRef.__PVT__lsu_mod__DOT__lsu_r;
    __VdlySet__csr_mod__DOT__regs__v0 = 0U;
    __VdlySet__csr_mod__DOT__regs__v33 = 0U;
    __VdlySet__csr_mod__DOT__regs__v34 = 0U;
    __VdlySet__csr_mod__DOT__regs__v35 = 0U;
    __Vdly__axi_slave_lsu_mod__DOT__slave_w = vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__slave_w;
    __Vdly__awready_arbiter = vlSelfRef.__PVT__awready_arbiter;
    __Vdly__wready_arbiter = vlSelfRef.__PVT__wready_arbiter;
    __Vdly__axi_slave_lsu_mod__DOT__aw = vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__aw;
    __Vdly__axi_slave_lsu_mod__DOT__w = vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__w;
    __Vdly__axi_slave_lsu_mod__DOT__mask = vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__mask;
    __Vdly__axi_slave_lsu_mod__DOT__done_aw = vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__done_aw;
    __Vdly__axi_slave_lsu_mod__DOT__done_w = vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__done_w;
    __Vdly__bvalid_arbiter = vlSelfRef.__PVT__bvalid_arbiter;
    __Vtableidx1 = ((((((IData)(vlSelfRef.__PVT__arbiter_mod__DOT__lsu_transfer) 
                        << 3U) | ((IData)(vlSelfRef.__PVT__rready_lsu) 
                                  << 2U)) | (((IData)(vlSelfRef.__PVT__rvalid_arbiter) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.__PVT__arbiter_mod__DOT__ifu_transfer))) 
                     << 3U) | (((IData)(vlSelfRef.__PVT__arready_arbiter) 
                                << 2U) | ((IData)(vlSelfRef.__PVT__arvalid_lsu) 
                                          << 1U)));
    if ((1U & Vtop__ConstPool__TABLE_hfbd30b60_0[__Vtableidx1])) {
        __Vdly__arbiter_mod__DOT__ifu_transfer = Vtop__ConstPool__TABLE_hdfc2b09e_0
            [__Vtableidx1];
    }
    if ((2U & Vtop__ConstPool__TABLE_hfbd30b60_0[__Vtableidx1])) {
        vlSelfRef.__PVT__arbiter_mod__DOT__lsu_transfer 
            = Vtop__ConstPool__TABLE_ha546e273_0[__Vtableidx1];
    }
    vlSelfRef.reg_valid = vlSelfRef.__PVT__lsu_mod__DOT__valid_right;
    if (vlSymsp->TOP.rst) {
        __VdlySet__csr_mod__DOT__regs__v0 = 1U;
        vlSelfRef.__Vdly__ls_wb_bus[2U] = (0x000000ffU 
                                           & vlSelfRef.__Vdly__ls_wb_bus[2U]);
        vlSelfRef.__Vdly__ls_wb_bus[3U] = (0xffffff00U 
                                           & vlSelfRef.__Vdly__ls_wb_bus[3U]);
        vlSelfRef.__VdlyMask__ls_wb_bus[2U] = (0xffffff00U 
                                               | vlSelfRef.__VdlyMask__ls_wb_bus[2U]);
        vlSelfRef.__VdlyMask__ls_wb_bus[3U] = (0x000000ffU 
                                               | vlSelfRef.__VdlyMask__ls_wb_bus[3U]);
        __Vdly__arvalid_lsu = 0U;
        __Vdly__araddr_lsu = 0U;
        __Vdly__rready_lsu = 0U;
        vlSelfRef.__PVT__lsu_mod__DOT__done_r = 1U;
    } else {
        if (((IData)(vlSelfRef.__PVT__if_id_valid) 
             & (IData)(vlSelfRef.__PVT__alu_mod__DOT__ready_right))) {
            if ((0x00080000U & vlSelfRef.__PVT__id_ex_bus_decoded[0U])) {
                __VdlyVal__csr_mod__DOT__regs__v33 
                    = ((0x00040000U & vlSelfRef.__PVT__id_ex_bus_decoded[0U])
                        ? (vlSelfRef.__PVT__csr_mod__DOT__regs
                           [vlSelfRef.__PVT__csr_mod__DOT__working_reg] 
                           & (~ vlSelfRef.__PVT__csr_mod__DOT__data_in))
                        : (vlSelfRef.__PVT__csr_mod__DOT__regs
                           [vlSelfRef.__PVT__csr_mod__DOT__working_reg] 
                           | vlSelfRef.__PVT__csr_mod__DOT__data_in));
                __VdlyDim0__csr_mod__DOT__regs__v33 
                    = vlSelfRef.__PVT__csr_mod__DOT__working_reg;
                __VdlySet__csr_mod__DOT__regs__v33 = 1U;
            } else if ((0x00040000U & vlSelfRef.__PVT__id_ex_bus_decoded[0U])) {
                __VdlyVal__csr_mod__DOT__regs__v34 
                    = vlSelfRef.__PVT__csr_mod__DOT__data_in;
                __VdlyDim0__csr_mod__DOT__regs__v34 
                    = vlSelfRef.__PVT__csr_mod__DOT__working_reg;
                __VdlySet__csr_mod__DOT__regs__v34 = 1U;
            }
            if ((0U != (0x0000001fU & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                       >> 0x0000000dU)))) {
                __VdlyVal__csr_mod__DOT__regs__v35 
                    = vlSelfRef.pc;
                __VdlySet__csr_mod__DOT__regs__v35 = 1U;
                __VdlyVal__csr_mod__DOT__regs__v36 
                    = (0x0000001fU & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                      >> 0x0000000dU));
            }
        }
        if ((0U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
            vlSelfRef.__PVT__lsu_mod__DOT__done_r = 0U;
            if (((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                  >> 0x0000000cU) & (IData)(vlSelfRef.__PVT__if_id_valid))) {
                __Vdly__arvalid_lsu = 1U;
                __Vdly__araddr_lsu = ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                       << 0x00000012U) 
                                      | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                         >> 0x0000000eU));
                __Vdly__lsu_mod__DOT__lsu_r = 1U;
            }
        } else if ((1U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
            if (((IData)(vlSelfRef.__PVT__arready_lsu) 
                 & (IData)(vlSelfRef.__PVT__arvalid_lsu))) {
                __Vdly__arvalid_lsu = 0U;
                __Vdly__rready_lsu = 1U;
                __Vdly__lsu_mod__DOT__lsu_r = 2U;
            }
        } else if ((2U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
            if (((IData)(vlSelfRef.__PVT__rvalid_arbiter) 
                 & (IData)(vlSelfRef.__PVT__rready_lsu))) {
                __Vdly__lsu_mod__DOT__lsu_r = 3U;
                if ((0U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                  >> 9U)))) {
                    vlSelfRef.__Vdly__ls_wb_bus[2U] 
                        = ((0x000000ffU & vlSelfRef.__Vdly__ls_wb_bus[2U]) 
                           | (0xffffff00U & (((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.__PVT__rdata_arbiter 
                                                             >> 7U)))) 
                                              << 0x00000010U) 
                                             | (0x0000ff00U 
                                                & (vlSelfRef.__PVT__rdata_arbiter 
                                                   << 8U)))));
                    vlSelfRef.__Vdly__ls_wb_bus[3U] 
                        = ((0xffffff00U & vlSelfRef.__Vdly__ls_wb_bus[3U]) 
                           | (0x000000ffU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.__PVT__rdata_arbiter 
                                                            >> 7U)))) 
                                             >> 0x00000010U)));
                    vlSelfRef.__VdlyMask__ls_wb_bus[2U] 
                        = (0xffffff00U | vlSelfRef.__VdlyMask__ls_wb_bus[2U]);
                    vlSelfRef.__VdlyMask__ls_wb_bus[3U] 
                        = (0x000000ffU | vlSelfRef.__VdlyMask__ls_wb_bus[3U]);
                } else if ((1U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                         >> 9U)))) {
                    vlSelfRef.__Vdly__ls_wb_bus[2U] 
                        = ((0x000000ffU & vlSelfRef.__Vdly__ls_wb_bus[2U]) 
                           | (0xffffff00U & (((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.__PVT__rdata_arbiter 
                                                             >> 0x0fU)))) 
                                              << 0x00000018U) 
                                             | (0x00ffff00U 
                                                & (vlSelfRef.__PVT__rdata_arbiter 
                                                   << 8U)))));
                    vlSelfRef.__Vdly__ls_wb_bus[3U] 
                        = ((0xffffff00U & vlSelfRef.__Vdly__ls_wb_bus[3U]) 
                           | (0x000000ffU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.__PVT__rdata_arbiter 
                                                            >> 0x0fU)))) 
                                             >> 8U)));
                    vlSelfRef.__VdlyMask__ls_wb_bus[2U] 
                        = (0xffffff00U | vlSelfRef.__VdlyMask__ls_wb_bus[2U]);
                    vlSelfRef.__VdlyMask__ls_wb_bus[3U] 
                        = (0x000000ffU | vlSelfRef.__VdlyMask__ls_wb_bus[3U]);
                } else if ((2U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                         >> 9U)))) {
                    vlSelfRef.__Vdly__ls_wb_bus[2U] 
                        = ((0x000000ffU & vlSelfRef.__Vdly__ls_wb_bus[2U]) 
                           | (vlSelfRef.__PVT__rdata_arbiter 
                              << 8U));
                    vlSelfRef.__Vdly__ls_wb_bus[3U] 
                        = ((0xffffff00U & vlSelfRef.__Vdly__ls_wb_bus[3U]) 
                           | (vlSelfRef.__PVT__rdata_arbiter 
                              >> 0x00000018U));
                    vlSelfRef.__VdlyMask__ls_wb_bus[2U] 
                        = (0xffffff00U | vlSelfRef.__VdlyMask__ls_wb_bus[2U]);
                    vlSelfRef.__VdlyMask__ls_wb_bus[3U] 
                        = (0x000000ffU | vlSelfRef.__VdlyMask__ls_wb_bus[3U]);
                } else if ((4U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                         >> 9U)))) {
                    vlSelfRef.__Vdly__ls_wb_bus[2U] 
                        = ((0x000000ffU & vlSelfRef.__Vdly__ls_wb_bus[2U]) 
                           | (0x0000ff00U & (vlSelfRef.__PVT__rdata_arbiter 
                                             << 8U)));
                    vlSelfRef.__Vdly__ls_wb_bus[3U] 
                        = (0xffffff00U & vlSelfRef.__Vdly__ls_wb_bus[3U]);
                    vlSelfRef.__VdlyMask__ls_wb_bus[2U] 
                        = (0xffffff00U | vlSelfRef.__VdlyMask__ls_wb_bus[2U]);
                    vlSelfRef.__VdlyMask__ls_wb_bus[3U] 
                        = (0x000000ffU | vlSelfRef.__VdlyMask__ls_wb_bus[3U]);
                } else if ((5U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                         >> 9U)))) {
                    vlSelfRef.__Vdly__ls_wb_bus[2U] 
                        = ((0x000000ffU & vlSelfRef.__Vdly__ls_wb_bus[2U]) 
                           | (0x00ffff00U & (vlSelfRef.__PVT__rdata_arbiter 
                                             << 8U)));
                    vlSelfRef.__Vdly__ls_wb_bus[3U] 
                        = (0xffffff00U & vlSelfRef.__Vdly__ls_wb_bus[3U]);
                    vlSelfRef.__VdlyMask__ls_wb_bus[2U] 
                        = (0xffffff00U | vlSelfRef.__VdlyMask__ls_wb_bus[2U]);
                    vlSelfRef.__VdlyMask__ls_wb_bus[3U] 
                        = (0x000000ffU | vlSelfRef.__VdlyMask__ls_wb_bus[3U]);
                }
                __Vdly__rready_lsu = 0U;
                vlSelfRef.__PVT__lsu_mod__DOT__done_r = 1U;
            }
        } else if ((3U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
            if (vlSelfRef.__PVT__if_id_valid) {
                vlSelfRef.__PVT__lsu_mod__DOT__done_r = 0U;
                __Vdly__lsu_mod__DOT__lsu_r = 0U;
            }
        }
    }
    if (vlSymsp->TOP.rst) {
        __Vdly__axi_slave_lsu_mod__DOT__slave_w = 0U;
        __Vdly__awready_arbiter = 1U;
        __Vdly__wready_arbiter = 1U;
        __Vdly__axi_slave_lsu_mod__DOT__aw = 0U;
        __Vdly__axi_slave_lsu_mod__DOT__w = 0U;
        __Vdly__axi_slave_lsu_mod__DOT__mask = 0U;
        __Vdly__axi_slave_lsu_mod__DOT__done_aw = 0U;
        __Vdly__axi_slave_lsu_mod__DOT__done_w = 0U;
        __Vdly__bvalid_arbiter = 0U;
        vlSelfRef.__PVT__bresp_arbiter = 0U;
    } else if ((0U == vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__slave_w)) {
        if ((((IData)(vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__done_aw) 
              | (IData)(vlSelfRef.__PVT__awvalid_lsu)) 
             & ((IData)(vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__done_w) 
                | (IData)(vlSelfRef.__PVT__wvalid_lsu)))) {
            __Vdly__axi_slave_lsu_mod__DOT__slave_w = 1U;
        }
        if (vlSelfRef.__PVT__awvalid_lsu) {
            __Vdly__axi_slave_lsu_mod__DOT__aw = vlSelfRef.__PVT__awaddr_lsu;
            __Vdly__axi_slave_lsu_mod__DOT__done_aw = 1U;
        }
        if (vlSelfRef.__PVT__wvalid_lsu) {
            __Vdly__axi_slave_lsu_mod__DOT__w = vlSelfRef.__PVT__wdata_lsu;
            __Vdly__axi_slave_lsu_mod__DOT__mask = vlSelfRef.__PVT__wstrb_arbiter;
            __Vdly__axi_slave_lsu_mod__DOT__done_w = 1U;
        }
    } else if ((1U == vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__slave_w)) {
        if ((1U == (IData)(vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__mask))) {
            Vtop_top____Vdpiimwrap_axi_slave_lsu_mod__DOT__memwrite_TOP__top(vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__aw, vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__w, 0U);
        } else if ((3U == (IData)(vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__mask))) {
            Vtop_top____Vdpiimwrap_axi_slave_lsu_mod__DOT__memwrite_TOP__top(vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__aw, vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__w, 1U);
        } else if ((0x0fU == (IData)(vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__mask))) {
            Vtop_top____Vdpiimwrap_axi_slave_lsu_mod__DOT__memwrite_TOP__top(vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__aw, vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__w, 2U);
        }
        __Vdly__axi_slave_lsu_mod__DOT__done_aw = 0U;
        __Vdly__axi_slave_lsu_mod__DOT__done_w = 0U;
        __Vdly__bvalid_arbiter = 1U;
        __Vdly__axi_slave_lsu_mod__DOT__slave_w = 2U;
    } else if ((2U == vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__slave_w)) {
        if (vlSelfRef.__PVT__bready_lsu) {
            __Vdly__bvalid_arbiter = 0U;
            vlSelfRef.__PVT__bresp_arbiter = 0U;
            __Vdly__axi_slave_lsu_mod__DOT__slave_w = 0U;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__bready_lsu = 1U;
        vlSelfRef.__PVT__wdata_lsu = 0U;
        vlSelfRef.__PVT__wvalid_lsu = 0U;
        vlSelfRef.__PVT__awaddr_lsu = 0U;
        vlSelfRef.__PVT__awvalid_lsu = 0U;
        __Vdly__ifu_mod__DOT__ifu = 0U;
        __Vdly__if_id_bus[0U] = 0U;
        __VdlyMask__if_id_bus[0U] = 0xffffffffU;
        __Vdly__arvalid_ifu = 0U;
        vlSelfRef.__PVT__araddr_ifu = 0U;
        __Vdly__rready_ifu = 0U;
        vlSelfRef.__PVT__if_id_valid = 0U;
    } else {
        if ((0U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
            vlSelfRef.__PVT__lsu_mod__DOT__done_w = 0U;
            if (((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                  >> 0x0000000dU) & (IData)(vlSelfRef.__PVT__if_id_valid))) {
                vlSelfRef.__PVT__awaddr_lsu = ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                << 0x00000012U) 
                                               | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                  >> 0x0000000eU));
                vlSelfRef.__PVT__awvalid_lsu = 1U;
                vlSelfRef.__PVT__wdata_lsu = ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                               << 0x00000012U) 
                                              | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                 >> 0x0000000eU));
                vlSelfRef.__PVT__wvalid_lsu = 1U;
                __Vdly__lsu_mod__DOT__lsu_w = 1U;
            }
        } else if ((1U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
            if ((((IData)(vlSelfRef.__PVT__lsu_mod__DOT__done_aw) 
                  | (IData)(vlSelfRef.__PVT__awready_arbiter)) 
                 & ((IData)(vlSelfRef.__PVT__lsu_mod__DOT__done_wdata) 
                    | (IData)(vlSelfRef.__PVT__wready_arbiter)))) {
                __Vdly__lsu_mod__DOT__lsu_w = 2U;
            }
            if (vlSelfRef.__PVT__wready_arbiter) {
                vlSelfRef.__PVT__wvalid_lsu = 0U;
                vlSelfRef.__PVT__lsu_mod__DOT__done_wdata = 1U;
            }
            if (vlSelfRef.__PVT__awready_arbiter) {
                vlSelfRef.__PVT__awvalid_lsu = 0U;
                vlSelfRef.__PVT__lsu_mod__DOT__done_aw = 1U;
            }
        } else if ((2U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
            vlSelfRef.__PVT__lsu_mod__DOT__done_aw = 0U;
            vlSelfRef.__PVT__lsu_mod__DOT__done_wdata = 0U;
            if (vlSelfRef.__PVT__bvalid_arbiter) {
                __Vdly__lsu_mod__DOT__lsu_w = 3U;
                vlSelfRef.__PVT__lsu_mod__DOT__done_w = 1U;
            }
        } else if ((3U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
            if (vlSelfRef.__PVT__if_id_valid) {
                vlSelfRef.__PVT__lsu_mod__DOT__done_w = 0U;
                __Vdly__lsu_mod__DOT__lsu_w = 0U;
            }
        }
        if ((0U == vlSelfRef.__PVT__ifu_mod__DOT__ifu)) {
            vlSelfRef.__PVT__if_id_valid = 0U;
            __Vdly__arvalid_ifu = 1U;
            vlSelfRef.__PVT__araddr_ifu = vlSelfRef.pc;
            __Vdly__ifu_mod__DOT__ifu = 1U;
        } else if ((1U == vlSelfRef.__PVT__ifu_mod__DOT__ifu)) {
            if (((IData)(vlSelfRef.__PVT__arready_arbiter) 
                 & (IData)(vlSelfRef.__PVT__arvalid_ifu))) {
                __Vdly__arvalid_ifu = 0U;
                __Vdly__ifu_mod__DOT__ifu = 2U;
                __Vdly__rready_ifu = 1U;
            }
        } else if ((2U == vlSelfRef.__PVT__ifu_mod__DOT__ifu)) {
            if ((((IData)(vlSelfRef.__PVT__arbiter_mod__DOT__ifu_transfer) 
                  & (IData)(vlSelfRef.__PVT__rvalid_arbiter)) 
                 & (IData)(vlSelfRef.__PVT__rready_ifu))) {
                __Vdly__ifu_mod__DOT__ifu = 3U;
                __Vdly__if_id_bus[0U] = ((IData)(vlSelfRef.__PVT__arbiter_mod__DOT__ifu_transfer)
                                          ? vlSelfRef.__PVT__rdata_arbiter
                                          : 0U);
                __VdlyMask__if_id_bus[0U] = 0xffffffffU;
                __Vdly__rready_ifu = 0U;
                vlSelfRef.__PVT__if_id_valid = 1U;
            }
        } else if ((3U == vlSelfRef.__PVT__ifu_mod__DOT__ifu)) {
            if (vlSelfRef.__PVT__alu_mod__DOT__ready_right) {
                vlSelfRef.__PVT__if_id_valid = 0U;
                __Vdly__ifu_mod__DOT__ifu = 0U;
            }
        }
    }
    if (vlSymsp->TOP.rst) {
        __Vdly__axi_slave_lsu_mod__DOT__slave = 0U;
        __Vdly__arready_arbiter = 0U;
        vlSelfRef.__PVT__rdata_arbiter = 0U;
        vlSelfRef.__PVT__rresp_arbiter = 0U;
        __Vdly__rvalid_arbiter = 0U;
    } else if ((0U == vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__slave)) {
        if (vlSelfRef.__PVT__arvalid_lsu) {
            __Vdly__arready_arbiter = 1U;
            __Vdly__axi_slave_lsu_mod__DOT__slave = 1U;
        }
    } else if ((1U == vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__slave)) {
        if (((IData)(vlSelfRef.__PVT__arready_arbiter) 
             & (IData)(vlSelfRef.__PVT__arvalid_lsu))) {
            Vtop_top____Vdpiimwrap_axi_slave_lsu_mod__DOT__memread_TOP__top(vlSelfRef.__PVT__araddr_lsu, __Vfunc_axi_slave_lsu_mod__DOT__memread__0__Vfuncout);
            __Vdly__arready_arbiter = 0U;
            __Vdly__axi_slave_lsu_mod__DOT__slave = 2U;
            __Vdly__rvalid_arbiter = 1U;
            vlSelfRef.__PVT__rdata_arbiter = __Vfunc_axi_slave_lsu_mod__DOT__memread__0__Vfuncout;
        }
    } else if ((2U == vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__slave)) {
        if (((IData)(vlSelfRef.__PVT__rvalid_arbiter) 
             & (IData)(vlSelfRef.__PVT__rready_lsu))) {
            vlSelfRef.__PVT__rdata_arbiter = 0U;
            __Vdly__rvalid_arbiter = 0U;
            __Vdly__axi_slave_lsu_mod__DOT__slave = 0U;
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.pc = 0x80000000U;
    } else if (vlSelfRef.__PVT__lsu_mod__DOT__valid_right) {
        vlSelfRef.pc = vlSelfRef.__PVT__ifu_mod__DOT__next_pc;
        if ((1U & vlSelfRef.__PVT__ex_ls_bus_alu[0U])) {
            vlSelfRef.pc = ((1U & vlSelfRef.__PVT__ls_wb_bus[0U])
                             ? ((vlSelfRef.__PVT__ls_wb_bus[1U] 
                                 << 0x00000018U) | 
                                (vlSelfRef.__PVT__ls_wb_bus[0U] 
                                 >> 8U)) : ((vlSelfRef.__PVT__ls_wb_bus[4U] 
                                             << 0x00000018U) 
                                            | (vlSelfRef.__PVT__ls_wb_bus[3U] 
                                               >> 8U)));
        }
    }
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
    }
    if (__VdlySet__csr_mod__DOT__regs__v33) {
        vlSelfRef.__PVT__csr_mod__DOT__regs[__VdlyDim0__csr_mod__DOT__regs__v33] 
            = __VdlyVal__csr_mod__DOT__regs__v33;
    }
    if (__VdlySet__csr_mod__DOT__regs__v34) {
        vlSelfRef.__PVT__csr_mod__DOT__regs[__VdlyDim0__csr_mod__DOT__regs__v34] 
            = __VdlyVal__csr_mod__DOT__regs__v34;
    }
    if (__VdlySet__csr_mod__DOT__regs__v35) {
        vlSelfRef.__PVT__csr_mod__DOT__regs[1U] = __VdlyVal__csr_mod__DOT__regs__v35;
        vlSelfRef.__PVT__csr_mod__DOT__regs[3U] = __VdlyVal__csr_mod__DOT__regs__v36;
    }
    vlSelfRef.__PVT__lsu_mod__DOT__lsu_r = __Vdly__lsu_mod__DOT__lsu_r;
    vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__slave_w 
        = __Vdly__axi_slave_lsu_mod__DOT__slave_w;
    vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__aw = __Vdly__axi_slave_lsu_mod__DOT__aw;
    vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__w = __Vdly__axi_slave_lsu_mod__DOT__w;
    vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__mask = __Vdly__axi_slave_lsu_mod__DOT__mask;
    vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__done_aw 
        = __Vdly__axi_slave_lsu_mod__DOT__done_aw;
    vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__done_w 
        = __Vdly__axi_slave_lsu_mod__DOT__done_w;
    vlSelfRef.__PVT__awready_arbiter = __Vdly__awready_arbiter;
    vlSelfRef.__PVT__wready_arbiter = __Vdly__wready_arbiter;
    vlSelfRef.__PVT__bvalid_arbiter = __Vdly__bvalid_arbiter;
    vlSelfRef.__PVT__lsu_mod__DOT__lsu_w = __Vdly__lsu_mod__DOT__lsu_w;
    vlSelfRef.__PVT__ifu_mod__DOT__ifu = __Vdly__ifu_mod__DOT__ifu;
    vlSelfRef.__PVT__arvalid_ifu = __Vdly__arvalid_ifu;
    vlSelfRef.__PVT__rready_ifu = __Vdly__rready_ifu;
    vlSelfRef.__PVT__arbiter_mod__DOT__ifu_transfer 
        = __Vdly__arbiter_mod__DOT__ifu_transfer;
    vlSelfRef.__PVT__if_id_bus[0U] = ((__Vdly__if_id_bus[0U] 
                                       & __VdlyMask__if_id_bus[0U]) 
                                      | (vlSelfRef.__PVT__if_id_bus[0U] 
                                         & (~ __VdlyMask__if_id_bus[0U])));
    vlSelfRef.__PVT__if_id_bus[1U] = ((__Vdly__if_id_bus[1U] 
                                       & __VdlyMask__if_id_bus[1U]) 
                                      | (vlSelfRef.__PVT__if_id_bus[1U] 
                                         & (~ __VdlyMask__if_id_bus[1U])));
    vlSelfRef.__PVT__if_id_bus[2U] = ((__Vdly__if_id_bus[2U] 
                                       & __VdlyMask__if_id_bus[2U]) 
                                      | (vlSelfRef.__PVT__if_id_bus[2U] 
                                         & (~ __VdlyMask__if_id_bus[2U])));
    __VdlyMask__if_id_bus[0U] = 0U;
    __VdlyMask__if_id_bus[1U] = 0U;
    __VdlyMask__if_id_bus[2U] = 0U;
    vlSelfRef.__PVT__araddr_lsu = __Vdly__araddr_lsu;
    vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__slave 
        = __Vdly__axi_slave_lsu_mod__DOT__slave;
    vlSelfRef.__PVT__arvalid_lsu = __Vdly__arvalid_lsu;
    vlSelfRef.__PVT__arready_arbiter = __Vdly__arready_arbiter;
    vlSelfRef.__PVT__rready_lsu = __Vdly__rready_lsu;
    vlSelfRef.__PVT__rvalid_arbiter = __Vdly__rvalid_arbiter;
    vlSelfRef.__PVT__ifu_mod__DOT__next_pc = ((IData)(4U) 
                                              + vlSelfRef.pc);
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

void Vtop_top___nba_sequent__TOP__top__1(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ls_wb_bus[0U] = ((vlSelfRef.__Vdly__ls_wb_bus[0U] 
                                       & vlSelfRef.__VdlyMask__ls_wb_bus[0U]) 
                                      | (vlSelfRef.__PVT__ls_wb_bus[0U] 
                                         & (~ vlSelfRef.__VdlyMask__ls_wb_bus[0U])));
    vlSelfRef.__PVT__ls_wb_bus[1U] = ((vlSelfRef.__Vdly__ls_wb_bus[1U] 
                                       & vlSelfRef.__VdlyMask__ls_wb_bus[1U]) 
                                      | (vlSelfRef.__PVT__ls_wb_bus[1U] 
                                         & (~ vlSelfRef.__VdlyMask__ls_wb_bus[1U])));
    vlSelfRef.__PVT__ls_wb_bus[2U] = ((vlSelfRef.__Vdly__ls_wb_bus[2U] 
                                       & vlSelfRef.__VdlyMask__ls_wb_bus[2U]) 
                                      | (vlSelfRef.__PVT__ls_wb_bus[2U] 
                                         & (~ vlSelfRef.__VdlyMask__ls_wb_bus[2U])));
    vlSelfRef.__PVT__ls_wb_bus[3U] = ((vlSelfRef.__Vdly__ls_wb_bus[3U] 
                                       & vlSelfRef.__VdlyMask__ls_wb_bus[3U]) 
                                      | (vlSelfRef.__PVT__ls_wb_bus[3U] 
                                         & (~ vlSelfRef.__VdlyMask__ls_wb_bus[3U])));
    vlSelfRef.__PVT__ls_wb_bus[4U] = ((vlSelfRef.__Vdly__ls_wb_bus[4U] 
                                       & vlSelfRef.__VdlyMask__ls_wb_bus[4U]) 
                                      | (vlSelfRef.__PVT__ls_wb_bus[4U] 
                                         & (~ vlSelfRef.__VdlyMask__ls_wb_bus[4U])));
    vlSelfRef.__VdlyMask__ls_wb_bus[0U] = 0U;
    vlSelfRef.__VdlyMask__ls_wb_bus[1U] = 0U;
    vlSelfRef.__VdlyMask__ls_wb_bus[2U] = 0U;
    vlSelfRef.__VdlyMask__ls_wb_bus[3U] = 0U;
    vlSelfRef.__VdlyMask__ls_wb_bus[4U] = 0U;
    vlSelfRef.__PVT__alu_mod__DOT__val2 = ((0x20000000U 
                                            & vlSelfRef.__PVT__id_ex_bus_decoded[0U])
                                            ? ((vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                                  >> 8U))
                                            : vlSymsp->TOP__top__reg_mod.__PVT__data_rs2);
    vlSelfRef.__PVT__csr_mod__DOT__data_in = ((0x00100000U 
                                               & vlSelfRef.__PVT__id_ex_bus_decoded[0U])
                                               ? (0x0000001fU 
                                                  & (vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                                                     >> 3U))
                                               : vlSymsp->TOP__top__reg_mod.__PVT__data_rs1);
    vlSelfRef.__PVT__alu_mod__DOT__val1 = ((0x10000000U 
                                            & vlSelfRef.__PVT__id_ex_bus_decoded[0U])
                                            ? ((vlSelfRef.__PVT__id_ex_bus_decoded[6U] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__PVT__id_ex_bus_decoded[5U] 
                                                  >> 8U))
                                            : vlSymsp->TOP__top__reg_mod.__PVT__data_rs1);
    vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] = (IData)(
                                                        (0x000000ffffffffffULL 
                                                         & (((QData)((IData)(vlSelfRef.__PVT__id_ex_bus_decoded[1U])) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.__PVT__id_ex_bus_decoded[0U])))));
    vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] = ((vlSymsp->TOP__top__reg_mod.__PVT__data_rs2 
                                                  << 8U) 
                                                 | (IData)(
                                                           ((0x000000ffffffffffULL 
                                                             & (((QData)((IData)(vlSelfRef.__PVT__id_ex_bus_decoded[1U])) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(vlSelfRef.__PVT__id_ex_bus_decoded[0U])))) 
                                                            >> 0x00000020U)));
    vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] = ((vlSymsp->TOP__top__reg_mod.__PVT__data_rs2 
                                                  >> 0x00000018U) 
                                                 | (vlSymsp->TOP__top__reg_mod.__PVT__data_rs1 
                                                    << 8U));
    vlSelfRef.__PVT__alu_mod__DOT__bus_in[3U] = ((vlSymsp->TOP__top__reg_mod.__PVT__data_rs1 
                                                  >> 0x00000018U) 
                                                 | (0xffffff00U 
                                                    & vlSelfRef.__PVT__id_ex_bus_decoded[3U]));
    vlSelfRef.__PVT__alu_mod__DOT__bus_in[4U] = ((0x000000ffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                                                 | (0xffffff00U 
                                                    & vlSelfRef.__PVT__id_ex_bus_decoded[4U]));
    vlSelfRef.__PVT__alu_mod__DOT__bus_in[5U] = ((0x000000ffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[5U]) 
                                                 | (0xffffff00U 
                                                    & vlSelfRef.__PVT__id_ex_bus_decoded[5U]));
    vlSelfRef.__PVT__alu_mod__DOT__bus_in[6U] = (0x000000ffU 
                                                 & vlSelfRef.__PVT__id_ex_bus_decoded[6U]);
    vlSelfRef.__PVT__ex_ls_bus_alu[0U] = 0U;
    vlSelfRef.__PVT__ex_ls_bus_alu[1U] = 0U;
    vlSelfRef.__PVT__ex_ls_bus_alu[2U] = 0U;
    vlSelfRef.__PVT__ex_ls_bus_alu[3U] = 0U;
    vlSelfRef.__PVT__ex_ls_bus_alu[4U] = 0U;
    vlSelfRef.__PVT__ex_ls_bus_alu[2U] = (0x00003fffU 
                                          & vlSelfRef.__PVT__ex_ls_bus_alu[2U]);
    vlSelfRef.__PVT__ex_ls_bus_alu[3U] = (0xffffc000U 
                                          & vlSelfRef.__PVT__ex_ls_bus_alu[3U]);
    vlSelfRef.__PVT__ex_ls_bus_alu[0U] = (0xfffffffeU 
                                          & vlSelfRef.__PVT__ex_ls_bus_alu[0U]);
    if ((0U == (3U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                      >> 0x0000001aU)))) {
        if (((((((((0U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                 >> 0x00000016U))) 
                   | (1U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                   >> 0x00000016U)))) 
                  | (2U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                  >> 0x00000016U)))) 
                 | (3U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                 >> 0x00000016U)))) 
                | (4U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                >> 0x00000016U)))) 
               | (5U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                               >> 0x00000016U)))) | 
              (6U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                            >> 0x00000016U)))) | (7U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                      >> 0x00000016U))))) {
            vlSelfRef.__PVT__ex_ls_bus_alu[2U] = ((0x00003fffU 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[2U]) 
                                                  | (((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                           >> 0x00000016U)))
                                                       ? 
                                                      ((0x02000000U 
                                                        & vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U])
                                                        ? 
                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                        - vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                        : 
                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                        + vlSelfRef.__PVT__alu_mod__DOT__val2))
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                            >> 0x00000016U)))
                                                        ? 
                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                        << 
                                                        (0x0000001fU 
                                                         & vlSelfRef.__PVT__alu_mod__DOT__val2))
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                             >> 0x00000016U)))
                                                         ? 
                                                        VL_LTS_III(32, vlSelfRef.__PVT__alu_mod__DOT__val1, vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                              >> 0x00000016U)))
                                                          ? 
                                                         (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                          < vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                               >> 0x00000016U)))
                                                           ? 
                                                          (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                           ^ vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                           : 
                                                          ((5U 
                                                            == 
                                                            (7U 
                                                             & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                                >> 0x00000016U)))
                                                            ? 
                                                           ((0x02000000U 
                                                             & vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U])
                                                             ? 
                                                            VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__alu_mod__DOT__val1, 
                                                                           (0x0000001fU 
                                                                            & vlSelfRef.__PVT__alu_mod__DOT__val2))
                                                             : 
                                                            (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                             >> 
                                                             (0x0000001fU 
                                                              & vlSelfRef.__PVT__alu_mod__DOT__val2)))
                                                            : 
                                                           ((6U 
                                                             == 
                                                             (7U 
                                                              & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                                 >> 0x00000016U)))
                                                             ? 
                                                            (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                             | vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                             : 
                                                            (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                             & vlSelfRef.__PVT__alu_mod__DOT__val2)))))))) 
                                                     << 0x0000000eU));
            vlSelfRef.__PVT__ex_ls_bus_alu[3U] = ((0xffffc000U 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[3U]) 
                                                  | (((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                           >> 0x00000016U)))
                                                       ? 
                                                      ((0x02000000U 
                                                        & vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U])
                                                        ? 
                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                        - vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                        : 
                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                        + vlSelfRef.__PVT__alu_mod__DOT__val2))
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                            >> 0x00000016U)))
                                                        ? 
                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                        << 
                                                        (0x0000001fU 
                                                         & vlSelfRef.__PVT__alu_mod__DOT__val2))
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                             >> 0x00000016U)))
                                                         ? 
                                                        VL_LTS_III(32, vlSelfRef.__PVT__alu_mod__DOT__val1, vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                              >> 0x00000016U)))
                                                          ? 
                                                         (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                          < vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                               >> 0x00000016U)))
                                                           ? 
                                                          (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                           ^ vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                           : 
                                                          ((5U 
                                                            == 
                                                            (7U 
                                                             & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                                >> 0x00000016U)))
                                                            ? 
                                                           ((0x02000000U 
                                                             & vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U])
                                                             ? 
                                                            VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__alu_mod__DOT__val1, 
                                                                           (0x0000001fU 
                                                                            & vlSelfRef.__PVT__alu_mod__DOT__val2))
                                                             : 
                                                            (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                             >> 
                                                             (0x0000001fU 
                                                              & vlSelfRef.__PVT__alu_mod__DOT__val2)))
                                                            : 
                                                           ((6U 
                                                             == 
                                                             (7U 
                                                              & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                                 >> 0x00000016U)))
                                                             ? 
                                                            (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                             | vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                             : 
                                                            (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                             & vlSelfRef.__PVT__alu_mod__DOT__val2)))))))) 
                                                     >> 0x00000012U));
        }
    } else if ((1U == (3U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                             >> 0x0000001aU)))) {
        vlSelfRef.__PVT__ex_ls_bus_alu[2U] = ((0x00003fffU 
                                               & vlSelfRef.__PVT__ex_ls_bus_alu[2U]) 
                                              | ((vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                  + vlSelfRef.__PVT__alu_mod__DOT__val2) 
                                                 << 0x0000000eU));
        vlSelfRef.__PVT__ex_ls_bus_alu[3U] = ((0xffffc000U 
                                               & vlSelfRef.__PVT__ex_ls_bus_alu[3U]) 
                                              | ((vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                  + vlSelfRef.__PVT__alu_mod__DOT__val2) 
                                                 >> 0x00000012U));
        if ((0U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                          >> 0x00000016U)))) {
            vlSelfRef.__PVT__ex_ls_bus_alu[0U] = ((0xfffffffeU 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[0U]) 
                                                  | (((vlSelfRef.__PVT__alu_mod__DOT__bus_in[3U] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                         >> 8U)) 
                                                     == 
                                                     ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                         >> 8U))));
        } else if ((1U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                 >> 0x00000016U)))) {
            vlSelfRef.__PVT__ex_ls_bus_alu[0U] = ((0xfffffffeU 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[0U]) 
                                                  | (((vlSelfRef.__PVT__alu_mod__DOT__bus_in[3U] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                         >> 8U)) 
                                                     != 
                                                     ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                         >> 8U))));
        } else if ((4U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                 >> 0x00000016U)))) {
            vlSelfRef.__PVT__ex_ls_bus_alu[0U] = ((0xfffffffeU 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[0U]) 
                                                  | VL_LTS_III(32, 
                                                               ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[3U] 
                                                                 << 0x00000018U) 
                                                                | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                                   >> 8U)), 
                                                               ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                                 << 0x00000018U) 
                                                                | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                                   >> 8U))));
        } else if ((5U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                 >> 0x00000016U)))) {
            vlSelfRef.__PVT__ex_ls_bus_alu[0U] = ((0xfffffffeU 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[0U]) 
                                                  | VL_GTES_III(32, 
                                                                ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[3U] 
                                                                  << 0x00000018U) 
                                                                 | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                                    >> 8U)), 
                                                                ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                                  << 0x00000018U) 
                                                                 | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                                    >> 8U))));
        } else if ((6U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                 >> 0x00000016U)))) {
            vlSelfRef.__PVT__ex_ls_bus_alu[0U] = ((0xfffffffeU 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[0U]) 
                                                  | (((vlSelfRef.__PVT__alu_mod__DOT__bus_in[3U] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                         >> 8U)) 
                                                     < 
                                                     ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                         >> 8U))));
        } else if ((7U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                 >> 0x00000016U)))) {
            vlSelfRef.__PVT__ex_ls_bus_alu[0U] = ((0xfffffffeU 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[0U]) 
                                                  | (((vlSelfRef.__PVT__alu_mod__DOT__bus_in[3U] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                         >> 8U)) 
                                                     >= 
                                                     ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                         >> 8U))));
        }
    }
    vlSelfRef.__PVT__ex_ls_bus_alu[3U] = ((0x00003fffU 
                                           & vlSelfRef.__PVT__ex_ls_bus_alu[3U]) 
                                          | (0xffffc000U 
                                             & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[4U] 
                                                << 6U)));
    vlSelfRef.__PVT__ex_ls_bus_alu[4U] = (0x00003fffU 
                                          & ((0x00003fc0U 
                                              & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[5U] 
                                                 << 6U)) 
                                             | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[4U] 
                                                >> 0x0000001aU)));
    vlSelfRef.__PVT__ex_ls_bus_alu[1U] = ((0x00003fffU 
                                           & vlSelfRef.__PVT__ex_ls_bus_alu[1U]) 
                                          | (0xffffc000U 
                                             & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                << 6U)));
    vlSelfRef.__PVT__ex_ls_bus_alu[2U] = ((0xffffc000U 
                                           & vlSelfRef.__PVT__ex_ls_bus_alu[2U]) 
                                          | (0x00003fffU 
                                             & ((0x00003fc0U 
                                                 & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                    << 6U)) 
                                                | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                   >> 0x0000001aU))));
    vlSelfRef.__PVT__ex_ls_bus_alu[0U] = ((0xffffc001U 
                                           & vlSelfRef.__PVT__ex_ls_bus_alu[0U]) 
                                          | (0x00003ffeU 
                                             & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                << 1U)));
    vlSelfRef.__PVT__alu_mod__DOT__ready_right = (1U 
                                                  & (((~ 
                                                       (vlSelfRef.__PVT__ex_ls_bus_alu[0U] 
                                                        >> 0x0000000cU)) 
                                                      | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__done_r)) 
                                                     & ((~ 
                                                         (vlSelfRef.__PVT__ex_ls_bus_alu[0U] 
                                                          >> 0x0000000dU)) 
                                                        | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__done_w))));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] = ((vlSelfRef.__PVT__csr_data 
                                                  << 0x0000000eU) 
                                                 | (0x00003fffU 
                                                    & vlSelfRef.__PVT__ex_ls_bus_alu[0U]));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] = ((vlSelfRef.__PVT__csr_data 
                                                  >> 0x00000012U) 
                                                 | (0xffffc000U 
                                                    & vlSelfRef.__PVT__ex_ls_bus_alu[1U]));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] = ((0x00003fffU 
                                                  & vlSelfRef.__PVT__ex_ls_bus_alu[2U]) 
                                                 | (0xffffc000U 
                                                    & vlSelfRef.__PVT__ex_ls_bus_alu[2U]));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] = ((0x00003fffU 
                                                  & vlSelfRef.__PVT__ex_ls_bus_alu[3U]) 
                                                 | (0xffffc000U 
                                                    & vlSelfRef.__PVT__ex_ls_bus_alu[3U]));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] = (0x00003fffU 
                                                 & vlSelfRef.__PVT__ex_ls_bus_alu[4U]);
    vlSelfRef.__PVT__lsu_mod__DOT__valid_right = ((IData)(vlSelfRef.__PVT__if_id_valid) 
                                                  & (IData)(vlSelfRef.__PVT__alu_mod__DOT__ready_right));
    vlSelfRef.__PVT__ls_wb_bus[3U] = (0x000000ffU & vlSelfRef.__PVT__ls_wb_bus[3U]);
    vlSelfRef.__PVT__ls_wb_bus[4U] = 0U;
    vlSelfRef.__PVT__ls_wb_bus[0U] = 0U;
    vlSelfRef.__PVT__ls_wb_bus[1U] = 0U;
    vlSelfRef.__PVT__ls_wb_bus[2U] = (0xffffff00U & vlSelfRef.__PVT__ls_wb_bus[2U]);
    if (vlSelfRef.__PVT__if_id_valid) {
        vlSelfRef.__PVT__ls_wb_bus[3U] = ((0x000000ffU 
                                           & vlSelfRef.__PVT__ls_wb_bus[3U]) 
                                          | (0xffffff00U 
                                             & ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                 << 0x0000001aU) 
                                                | (0x03ffff00U 
                                                   & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                      >> 6U)))));
        vlSelfRef.__PVT__ls_wb_bus[4U] = (0x000000ffU 
                                          & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                             >> 6U));
        vlSelfRef.__PVT__ls_wb_bus[0U] = ((7U & vlSelfRef.__PVT__ls_wb_bus[0U]) 
                                          | (((IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                                                          << 0x00000012U) 
                                                                         | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                            >> 0x0000000eU)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                           << 0x00000012U) 
                                                                          | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                             >> 0x0000000eU)))))) 
                                              << 8U) 
                                             | (0x000000f8U 
                                                & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                   >> 1U))));
        vlSelfRef.__PVT__ls_wb_bus[1U] = ((7U & ((IData)(
                                                         (((QData)((IData)(
                                                                           ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                                                             << 0x00000012U) 
                                                                            | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                               >> 0x0000000eU)))) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                              << 0x00000012U) 
                                                                             | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                                >> 0x0000000eU)))))) 
                                                 >> 0x00000018U)) 
                                          | ((0x000000f8U 
                                              & ((IData)(
                                                         (((QData)((IData)(
                                                                           ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                                                             << 0x00000012U) 
                                                                            | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                               >> 0x0000000eU)))) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                              << 0x00000012U) 
                                                                             | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                                >> 0x0000000eU)))))) 
                                                 >> 0x00000018U)) 
                                             | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                                                             << 0x00000012U) 
                                                                            | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                               >> 0x0000000eU)))) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                              << 0x00000012U) 
                                                                             | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                                >> 0x0000000eU))))) 
                                                         >> 0x00000020U)) 
                                                << 8U)));
        vlSelfRef.__PVT__ls_wb_bus[2U] = ((0xffffff00U 
                                           & vlSelfRef.__PVT__ls_wb_bus[2U]) 
                                          | ((7U & 
                                              ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                                                            << 0x00000012U) 
                                                                           | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                              >> 0x0000000eU)))) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(
                                                                           ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                             << 0x00000012U) 
                                                                            | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                               >> 0x0000000eU))))) 
                                                        >> 0x00000020U)) 
                                               >> 0x00000018U)) 
                                             | (0x000000f8U 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                                                                << 0x00000012U) 
                                                                               | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                                >> 0x0000000eU)))) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                                << 0x00000012U) 
                                                                                | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                                >> 0x0000000eU))))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000018U))));
        vlSelfRef.__PVT__ls_wb_bus[0U] = ((0xfffffff8U 
                                           & vlSelfRef.__PVT__ls_wb_bus[0U]) 
                                          | (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                   >> 1U)));
    }
}
