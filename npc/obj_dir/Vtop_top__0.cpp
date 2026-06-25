// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

extern "C" void memwrite(int addr, int data, int idk);

void Vtop_top____Vdpiimwrap_lsu_mod__DOT__memwrite_TOP__top(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ idk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top____Vdpiimwrap_lsu_mod__DOT__memwrite_TOP__top\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    data__Vcvt = data;
    int idk__Vcvt;
    idk__Vcvt = idk;
    memwrite(addr__Vcvt, data__Vcvt, idk__Vcvt);
}

extern "C" int memread(int addr);

void Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(IData/*31:0*/ addr, IData/*31:0*/ &memread__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int memread__Vfuncrtn__Vcvt;
    memread__Vfuncrtn__Vcvt = memread(addr__Vcvt);
    memread__Vfuncrtn = (memread__Vfuncrtn__Vcvt);
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
}

void Vtop_top___ico_comb__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_comb__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__if_id_ready = ((IData)(vlSelfRef.__PVT__ex_ls_ready) 
                                    & (IData)(vlSelfRef.__PVT__id_ex_ready_csr));
    vlSelfRef.__PVT__id_ex_bus_decoded[0U] = 0U;
    vlSelfRef.__PVT__id_ex_bus_decoded[1U] = 0U;
    vlSelfRef.__PVT__id_ex_bus_decoded[2U] = 0U;
    vlSelfRef.__PVT__id_ex_bus_decoded[3U] = 0U;
    vlSelfRef.__PVT__id_ex_bus_decoded[4U] = 0U;
    vlSelfRef.__PVT__id_ex_bus_decoded[5U] = 0U;
    vlSelfRef.__PVT__id_ex_bus_decoded[6U] = 0U;
    if (((IData)(vlSelfRef.__PVT__if_id_valid) & (IData)(vlSelfRef.__PVT__if_id_ready))) {
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
                                    if ((0U == (7U 
                                                & (vlSelfRef.__PVT__if_id_bus[0U] 
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
                                            VL_FINISH_MT("vsrc/decode.sv", 122, "");
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
                                                = (1U 
                                                   | vlSelfRef.__PVT__id_ex_bus_decoded[0U]);
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
                                                = (1U 
                                                   | vlSelfRef.__PVT__id_ex_bus_decoded[0U]);
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
                                    = ((0xffffff07U 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                       | (0x000000f8U 
                                          & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 4U)));
                                vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                    = ((0xf00000ffU 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                                       | (0xffffff00U 
                                          & ((((0x000001feU 
                                                & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                   >> 0x0000000bU)) 
                                               | (1U 
                                                  & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                     >> 0x00000014U))) 
                                              << 0x00000013U) 
                                             | (0x0007fe00U 
                                                & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                   >> 0x0000000cU)))));
                                vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                    = ((0x0fffffffU 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                                       | ((- (IData)(
                                                     (vlSelfRef.__PVT__if_id_bus[0U] 
                                                      >> 0x0000001fU))) 
                                          << 0x0000001cU));
                                vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                    = ((0xffffff00U 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                                       | (0x000000ffU 
                                          & ((- (IData)(
                                                        (vlSelfRef.__PVT__if_id_bus[0U] 
                                                         >> 0x0000001fU))) 
                                             >> 4U)));
                                vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                    = (0x34000000U 
                                       | (0xc03fffffU 
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
                                   | (0x000000f8U & 
                                      (vlSelfRef.__PVT__if_id_bus[0U] 
                                       >> 4U)));
                            vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                = ((0x3fffffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                   | (((0x000003e0U 
                                        & (vlSelfRef.__PVT__if_id_bus[0U] 
                                           >> 0x0000000aU)) 
                                       | (0x0000001fU 
                                          & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 0x0000000fU))) 
                                      << 0x0000001eU));
                            vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                                = ((0xffffff00U & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                                   | (0x000000ffU & 
                                      (((0x000003e0U 
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
                                = (4U | (0xfffffff9U 
                                         & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
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
                                   | ((0x000007e0U 
                                       & (vlSelfRef.__PVT__if_id_bus[0U] 
                                          >> 0x00000014U)) 
                                      | (0x0000001eU 
                                         & (vlSelfRef.__PVT__if_id_bus[0U] 
                                            >> 7U)))) 
                                  << 8U));
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
                                    = ((0xffffff07U 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                       | (0x000000f8U 
                                          & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 4U)));
                                vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                    = ((0x000000ffU 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                                       | (0xfff00000U 
                                          & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             << 8U)));
                                vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                    = ((0xffffff00U 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                                       | (vlSelfRef.__PVT__if_id_bus[0U] 
                                          >> 0x00000018U));
                                vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                    = (0x20000000U 
                                       | (0xc03fffffU 
                                          & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                            }
                        }
                    } else if ((2U & vlSelfRef.__PVT__if_id_bus[0U])) {
                        if ((1U & vlSelfRef.__PVT__if_id_bus[0U])) {
                            vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                = ((0xffffff07U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                   | (0x000000f8U & 
                                      (vlSelfRef.__PVT__if_id_bus[0U] 
                                       >> 4U)));
                            vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                = ((0xc03fffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                   | (((0x00000020U 
                                        & (vlSelfRef.__PVT__if_id_bus[0U] 
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
                                   | (0xffffff00U & 
                                      (((- (IData)(
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
                                   | (0x000000ffU & 
                                      ((0x000000ffU 
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
                                   | (0x00000700U & 
                                      (vlSelfRef.__PVT__if_id_bus[0U] 
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
                                    ? (0x00000080U 
                                       | (IData)(vlSelfRef.decode_mod__DOT____VdfgRegularize_h901acc23_0_2))
                                    : (0x00000080U 
                                       | (7U & (vlSelfRef.__PVT__if_id_bus[0U] 
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
    }
    vlSelfRef.__PVT__id_ex_ready_csr = vlSelfRef.__PVT__ex_ls_ready;
    if (((IData)(vlSelfRef.__PVT__if_id_valid) & (IData)(vlSelfRef.__PVT__id_ex_ready_csr))) {
        vlSelfRef.__PVT__csr_mod__DOT__working_reg 
            = ((0x0300U == (0x00000fffU & (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                           >> 8U)))
                ? 2U : ((0x0305U == (0x00000fffU & 
                                     (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                      >> 8U))) ? 4U
                         : ((0x0341U == (0x00000fffU 
                                         & (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                            >> 8U)))
                             ? 1U : ((0x0342U == (0x00000fffU 
                                                  & (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                                     >> 8U)))
                                      ? 3U : 0U))));
        if ((0U != (0x0000001fU & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                   >> 0x0000000dU)))) {
            vlSelfRef.__PVT__csr_mod__DOT__working_reg = 4U;
        }
        vlSelfRef.__PVT__csr_data = vlSelfRef.__PVT__csr_mod__DOT__regs
            [vlSelfRef.__PVT__csr_mod__DOT__working_reg];
    }
}

void Vtop_top___ico_comb__TOP__top__1(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_comb__TOP__top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_27;
    VlWide<5>/*159:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_33;
    VlWide<5>/*159:0*/ __Vtemp_35;
    VlWide<5>/*159:0*/ __Vtemp_37;
    CData/*31:0*/ __Vtemp_39;
    VlWide<5>/*159:0*/ __Vtemp_74;
    // Body
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
    vlSelfRef.__PVT__alu_mod__DOT__val2 = ((0x20000000U 
                                            & vlSelfRef.__PVT__id_ex_bus_decoded[0U])
                                            ? ((vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                                  >> 8U))
                                            : vlSymsp->TOP__top__reg_mod.__PVT__data_rs2);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U] = 
        ((IData)((QData)((IData)((vlSelfRef.__PVT__alu_mod__DOT__val1 
                                  + vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
         << 0x0000000eU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U] = 
        (((IData)((QData)((IData)((vlSelfRef.__PVT__alu_mod__DOT__val1 
                                   + vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
          >> 0x00000012U) | ((IData)(((QData)((IData)(
                                                      (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                       + vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                      >> 0x00000020U)) 
                             << 0x0000000eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U] = 
        ((IData)(((QData)((IData)((vlSelfRef.__PVT__alu_mod__DOT__val1 
                                   + vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                  >> 0x00000020U)) >> 0x00000012U);
    if ((5U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                      >> 0x00000016U)))) {
        if ((0x02000000U & vlSelfRef.__PVT__id_ex_bus_decoded[0U])) {
            __Vtemp_27[3U] = (((IData)((QData)((IData)(
                                                       VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__alu_mod__DOT__val1, 
                                                                      (0x0000001fU 
                                                                       & vlSelfRef.__PVT__alu_mod__DOT__val2))))) 
                               >> 0x00000012U) | ((IData)(
                                                          ((QData)((IData)(
                                                                           VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__alu_mod__DOT__val1, 
                                                                                (0x0000001fU 
                                                                                & vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                                                           >> 0x00000020U)) 
                                                  << 0x0000000eU));
            __Vtemp_27[4U] = ((IData)(((QData)((IData)(
                                                       VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__alu_mod__DOT__val1, 
                                                                      (0x0000001fU 
                                                                       & vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                                       >> 0x00000020U)) 
                              >> 0x00000012U);
        } else {
            __Vtemp_27[3U] = (((IData)((QData)((IData)(
                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                        >> 
                                                        (0x0000001fU 
                                                         & vlSelfRef.__PVT__alu_mod__DOT__val2))))) 
                               >> 0x00000012U) | ((IData)(
                                                          ((QData)((IData)(
                                                                           (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                            >> 
                                                                            (0x0000001fU 
                                                                             & vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                                                           >> 0x00000020U)) 
                                                  << 0x0000000eU));
            __Vtemp_27[4U] = ((IData)(((QData)((IData)(
                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                        >> 
                                                        (0x0000001fU 
                                                         & vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                                       >> 0x00000020U)) 
                              >> 0x00000012U);
        }
    } else if ((6U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                             >> 0x00000016U)))) {
        __Vtemp_27[3U] = (((IData)((QData)((IData)(
                                                   (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                    | vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                           >> 0x00000012U) | ((IData)(
                                                      ((QData)((IData)(
                                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                        | vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                                       >> 0x00000020U)) 
                                              << 0x0000000eU));
        __Vtemp_27[4U] = ((IData)(((QData)((IData)(
                                                   (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                    | vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                   >> 0x00000020U)) 
                          >> 0x00000012U);
    } else {
        __Vtemp_27[3U] = (((IData)((QData)((IData)(
                                                   (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                    & vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                           >> 0x00000012U) | ((IData)(
                                                      ((QData)((IData)(
                                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                        & vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                                       >> 0x00000020U)) 
                                              << 0x0000000eU));
        __Vtemp_27[4U] = ((IData)(((QData)((IData)(
                                                   (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                    & vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                   >> 0x00000020U)) 
                          >> 0x00000012U);
    }
    __Vtemp_29[2U] = ((4U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                    >> 0x00000016U)))
                       ? ((IData)((QData)((IData)((vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                   ^ vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                          << 0x0000000eU) : ((5U == 
                                              (7U & 
                                               (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                                >> 0x00000016U)))
                                              ? ((0x02000000U 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[0U])
                                                  ? 
                                                 ((IData)((QData)((IData)(
                                                                          VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__alu_mod__DOT__val1, 
                                                                                (0x0000001fU 
                                                                                & vlSelfRef.__PVT__alu_mod__DOT__val2))))) 
                                                  << 0x0000000eU)
                                                  : 
                                                 ((IData)((QData)((IData)(
                                                                          (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                           >> 
                                                                           (0x0000001fU 
                                                                            & vlSelfRef.__PVT__alu_mod__DOT__val2))))) 
                                                  << 0x0000000eU))
                                              : ((6U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                                      >> 0x00000016U)))
                                                  ? 
                                                 ((IData)((QData)((IData)(
                                                                          (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                           | vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                                                  << 0x0000000eU)
                                                  : 
                                                 ((IData)((QData)((IData)(
                                                                          (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                           & vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                                                  << 0x0000000eU))));
    __Vtemp_33[3U] = ((2U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                    >> 0x00000016U)))
                       ? (((IData)((QData)((IData)(
                                                   VL_LTS_III(32, vlSelfRef.__PVT__alu_mod__DOT__val1, vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                           >> 0x00000012U) | ((IData)(
                                                      ((QData)((IData)(
                                                                       VL_LTS_III(32, vlSelfRef.__PVT__alu_mod__DOT__val1, vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                                       >> 0x00000020U)) 
                                              << 0x0000000eU))
                       : ((3U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                        >> 0x00000016U)))
                           ? (((IData)((QData)((IData)(
                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                        < vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                               >> 0x00000012U) | ((IData)(
                                                          ((QData)((IData)(
                                                                           (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                            < vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                                           >> 0x00000020U)) 
                                                  << 0x0000000eU))
                           : ((4U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                            >> 0x00000016U)))
                               ? (((IData)((QData)((IData)(
                                                           (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                            ^ vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                                   >> 0x00000012U) 
                                  | ((IData)(((QData)((IData)(
                                                              (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                               ^ vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                              >> 0x00000020U)) 
                                     << 0x0000000eU))
                               : __Vtemp_27[3U])));
    if ((1U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                      >> 0x00000016U)))) {
        __Vtemp_35[4U] = ((IData)(((QData)((IData)(
                                                   (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                    << 
                                                    (0x0000001fU 
                                                     & vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                                   >> 0x00000020U)) 
                          >> 0x00000012U);
        __Vtemp_74[0U] = ((0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U]) 
                          | (vlSymsp->TOP__top__reg_mod.__PVT__data_rs1 
                             != vlSymsp->TOP__top__reg_mod.__PVT__data_rs2));
        __Vtemp_74[1U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]) 
                          | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]));
        __Vtemp_74[2U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]) 
                          | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]));
        __Vtemp_74[3U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]) 
                          | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]));
        __Vtemp_74[4U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]) 
                          | (0x00003ffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]));
    } else {
        __Vtemp_35[4U] = ((2U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                        >> 0x00000016U)))
                           ? ((IData)(((QData)((IData)(
                                                       VL_LTS_III(32, vlSelfRef.__PVT__alu_mod__DOT__val1, vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                       >> 0x00000020U)) 
                              >> 0x00000012U) : ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                                      >> 0x00000016U)))
                                                  ? 
                                                 ((IData)(
                                                          ((QData)((IData)(
                                                                           (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                            < vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                                           >> 0x00000020U)) 
                                                  >> 0x00000012U)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                                       >> 0x00000016U)))
                                                   ? 
                                                  ((IData)(
                                                           ((QData)((IData)(
                                                                            (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                             ^ vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000012U)
                                                   : __Vtemp_27[4U])));
        if ((4U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                          >> 0x00000016U)))) {
            __Vtemp_74[0U] = ((0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U]) 
                              | VL_LTS_III(32, vlSymsp->TOP__top__reg_mod.__PVT__data_rs1, vlSymsp->TOP__top__reg_mod.__PVT__data_rs2));
            __Vtemp_74[1U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]));
            __Vtemp_74[2U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]));
            __Vtemp_74[3U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]));
            __Vtemp_74[4U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]) 
                              | (0x00003ffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]));
        } else if ((5U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                 >> 0x00000016U)))) {
            __Vtemp_74[0U] = ((0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U]) 
                              | VL_GTES_III(32, vlSymsp->TOP__top__reg_mod.__PVT__data_rs1, vlSymsp->TOP__top__reg_mod.__PVT__data_rs2));
            __Vtemp_74[1U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]));
            __Vtemp_74[2U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]));
            __Vtemp_74[3U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]));
            __Vtemp_74[4U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]) 
                              | (0x00003ffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]));
        } else if ((6U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                 >> 0x00000016U)))) {
            __Vtemp_74[0U] = ((0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U]) 
                              | (vlSymsp->TOP__top__reg_mod.__PVT__data_rs1 
                                 < vlSymsp->TOP__top__reg_mod.__PVT__data_rs2));
            __Vtemp_74[1U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]));
            __Vtemp_74[2U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]));
            __Vtemp_74[3U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]));
            __Vtemp_74[4U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]) 
                              | (0x00003ffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]));
        } else if ((7U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                 >> 0x00000016U)))) {
            __Vtemp_74[0U] = ((0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U]) 
                              | (vlSymsp->TOP__top__reg_mod.__PVT__data_rs1 
                                 >= vlSymsp->TOP__top__reg_mod.__PVT__data_rs2));
            __Vtemp_74[1U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]));
            __Vtemp_74[2U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]));
            __Vtemp_74[3U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]));
            __Vtemp_74[4U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]) 
                              | (0x00003ffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]));
        } else {
            __Vtemp_74[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U];
            __Vtemp_74[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U];
            __Vtemp_74[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U];
            __Vtemp_74[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U];
            __Vtemp_74[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U];
        }
    }
    if ((0U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                      >> 0x00000016U)))) {
        if ((0x02000000U & vlSelfRef.__PVT__id_ex_bus_decoded[0U])) {
            __Vtemp_37[2U] = ((IData)((QData)((IData)(
                                                      (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                       - vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                              << 0x0000000eU);
            __Vtemp_37[3U] = (((IData)((QData)((IData)(
                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                        - vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                               >> 0x00000012U) | ((IData)(
                                                          ((QData)((IData)(
                                                                           (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                            - vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                                           >> 0x00000020U)) 
                                                  << 0x0000000eU));
        } else {
            __Vtemp_37[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U];
            __Vtemp_37[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U];
        }
    } else if ((1U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                             >> 0x00000016U)))) {
        __Vtemp_37[2U] = ((IData)((QData)((IData)((vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                   << 
                                                   (0x0000001fU 
                                                    & vlSelfRef.__PVT__alu_mod__DOT__val2))))) 
                          << 0x0000000eU);
        __Vtemp_37[3U] = (((IData)((QData)((IData)(
                                                   (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                    << 
                                                    (0x0000001fU 
                                                     & vlSelfRef.__PVT__alu_mod__DOT__val2))))) 
                           >> 0x00000012U) | ((IData)(
                                                      ((QData)((IData)(
                                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                        << 
                                                                        (0x0000001fU 
                                                                         & vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                                                       >> 0x00000020U)) 
                                              << 0x0000000eU));
    } else {
        __Vtemp_37[2U] = ((2U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                        >> 0x00000016U)))
                           ? ((IData)((QData)((IData)(
                                                      VL_LTS_III(32, vlSelfRef.__PVT__alu_mod__DOT__val1, vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                              << 0x0000000eU) : ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                                      >> 0x00000016U)))
                                                  ? 
                                                 ((IData)((QData)((IData)(
                                                                          (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                           < vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                                                  << 0x0000000eU)
                                                  : __Vtemp_29[2U]));
        __Vtemp_37[3U] = __Vtemp_33[3U];
    }
    __Vtemp_39 = (((0U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                 >> 0x00000016U))) 
                   | (1U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                   >> 0x00000016U)))) 
                  | (((2U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                    >> 0x00000016U))) 
                      | (3U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                      >> 0x00000016U)))) 
                     | ((4U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                      >> 0x00000016U))) 
                        | ((5U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                         >> 0x00000016U))) 
                           | ((6U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                            >> 0x00000016U))) 
                              | (7U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                              >> 0x00000016U))))))));
    if ((0U == (3U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                      >> 0x0000001aU)))) {
        if (__Vtemp_39) {
            if ((0U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                              >> 0x00000016U)))) {
                if ((0x02000000U & vlSelfRef.__PVT__id_ex_bus_decoded[0U])) {
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] = 0U;
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] = 0U;
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                        = __Vtemp_37[2U];
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
                        = __Vtemp_37[3U];
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[4U] 
                        = ((IData)(((QData)((IData)(
                                                    (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                     - vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                    >> 0x00000020U)) 
                           >> 0x00000012U);
                } else {
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U];
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U];
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                        = __Vtemp_37[2U];
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
                        = __Vtemp_37[3U];
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[4U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U];
                }
            } else {
                if ((1U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                  >> 0x00000016U)))) {
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] = 0U;
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] = 0U;
                } else if ((2U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                         >> 0x00000016U)))) {
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] = 0U;
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] = 0U;
                } else if ((3U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                         >> 0x00000016U)))) {
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] = 0U;
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] = 0U;
                } else if ((4U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                         >> 0x00000016U)))) {
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] = 0U;
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] = 0U;
                } else {
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] = 0U;
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] = 0U;
                }
                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                    = __Vtemp_37[2U];
                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
                    = __Vtemp_37[3U];
                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[4U] 
                    = __Vtemp_35[4U];
            }
        } else {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] = 0U;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] = 0U;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] = 0U;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] = 0U;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[4U] = 0U;
        }
    } else if ((1U == (3U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                             >> 0x0000001aU)))) {
        if ((0U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                          >> 0x00000016U)))) {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] 
                = ((0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U]) 
                   | (vlSymsp->TOP__top__reg_mod.__PVT__data_rs1 
                      == vlSymsp->TOP__top__reg_mod.__PVT__data_rs2));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] 
                = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]) 
                   | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]) 
                   | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
                = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]) 
                   | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[4U] 
                = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]) 
                   | (0x00003ffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]));
        } else {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] 
                = __Vtemp_74[0U];
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] 
                = __Vtemp_74[1U];
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                = __Vtemp_74[2U];
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
                = __Vtemp_74[3U];
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[4U] 
                = __Vtemp_74[4U];
        }
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[4U] = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__ex_ls_ready) & (IData)(vlSelfRef.__PVT__if_id_valid))) {
        vlSelfRef.__PVT__alu_mod__DOT__bus_out[0U] 
            = ((0xffffc000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U]) 
               | ((0x00003ffeU & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                  << 1U)) | (1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U])));
        vlSelfRef.__PVT__alu_mod__DOT__bus_out[1U] 
            = ((0x00003fffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U]) 
               | (vlSymsp->TOP__top__reg_mod.__PVT__data_rs2 
                  << 0x0000000eU));
        vlSelfRef.__PVT__alu_mod__DOT__bus_out[2U] 
            = ((vlSymsp->TOP__top__reg_mod.__PVT__data_rs2 
                >> 0x00000012U) | ((IData)((((QData)((IData)(
                                                             ((vlSelfRef.__PVT__id_ex_bus_decoded[5U] 
                                                               << 0x00000018U) 
                                                              | (vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                                                 >> 8U)))) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(
                                                              ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
                                                                << 0x00000012U) 
                                                               | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                                                                  >> 0x0000000eU)))))) 
                                   << 0x0000000eU));
        vlSelfRef.__PVT__alu_mod__DOT__bus_out[3U] 
            = (((IData)((((QData)((IData)(((vlSelfRef.__PVT__id_ex_bus_decoded[5U] 
                                            << 0x00000018U) 
                                           | (vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                              >> 8U)))) 
                          << 0x00000020U) | (QData)((IData)(
                                                            ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
                                                              << 0x00000012U) 
                                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                                                                >> 0x0000000eU)))))) 
                >> 0x00000012U) | ((IData)(((((QData)((IData)(
                                                              ((vlSelfRef.__PVT__id_ex_bus_decoded[5U] 
                                                                << 0x00000018U) 
                                                               | (vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                                                  >> 8U)))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
                                                                 << 0x00000012U) 
                                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                                                                   >> 0x0000000eU))))) 
                                            >> 0x00000020U)) 
                                   << 0x0000000eU));
        vlSelfRef.__PVT__alu_mod__DOT__bus_out[4U] 
            = ((IData)(((((QData)((IData)(((vlSelfRef.__PVT__id_ex_bus_decoded[5U] 
                                            << 0x00000018U) 
                                           | (vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                              >> 8U)))) 
                          << 0x00000020U) | (QData)((IData)(
                                                            ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
                                                              << 0x00000012U) 
                                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                                                                >> 0x0000000eU))))) 
                        >> 0x00000020U)) >> 0x00000012U);
    } else {
        vlSelfRef.__PVT__alu_mod__DOT__bus_out[0U] = 0U;
        vlSelfRef.__PVT__alu_mod__DOT__bus_out[1U] = 0U;
        vlSelfRef.__PVT__alu_mod__DOT__bus_out[2U] = 0U;
        vlSelfRef.__PVT__alu_mod__DOT__bus_out[3U] = 0U;
        vlSelfRef.__PVT__alu_mod__DOT__bus_out[4U] = 0U;
    }
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] = ((vlSelfRef.__PVT__csr_data 
                                                  << 0x0000000eU) 
                                                 | (0x00003fffU 
                                                    & vlSelfRef.__PVT__alu_mod__DOT__bus_out[0U]));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] = ((vlSelfRef.__PVT__csr_data 
                                                  >> 0x00000012U) 
                                                 | (0xffffc000U 
                                                    & vlSelfRef.__PVT__alu_mod__DOT__bus_out[1U]));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] = ((0x00003fffU 
                                                  & vlSelfRef.__PVT__alu_mod__DOT__bus_out[2U]) 
                                                 | (0xffffc000U 
                                                    & vlSelfRef.__PVT__alu_mod__DOT__bus_out[2U]));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] = ((0x00003fffU 
                                                  & vlSelfRef.__PVT__alu_mod__DOT__bus_out[3U]) 
                                                 | (0xffffc000U 
                                                    & vlSelfRef.__PVT__alu_mod__DOT__bus_out[3U]));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] = (0x00003fffU 
                                                 & vlSelfRef.__PVT__alu_mod__DOT__bus_out[4U]);
    vlSelfRef.__PVT__ex_ls_ready = 1U;
    vlSelfRef.__PVT__ls_wb_bus[0U] = 0U;
    vlSelfRef.__PVT__ls_wb_bus[1U] = 0U;
    vlSelfRef.__PVT__ls_wb_bus[2U] = 0U;
    vlSelfRef.__PVT__ls_wb_bus[3U] = 0U;
    vlSelfRef.__PVT__ls_wb_bus[4U] = 0U;
    if (vlSelfRef.__PVT__if_id_valid) {
        if ((0x00001000U & vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U])) {
            if ((0U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                              >> 9U)))) {
                Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(
                                                                      ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                        << 0x00000012U) 
                                                                       | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                          >> 0x0000000eU)), vlSelfRef.__Vfunc_lsu_mod__DOT__memread__0__Vfuncout);
                vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__0__Vfuncout;
                vlSelfRef.__PVT__lsu_mod__DOT__lsu_out 
                    = (((- (IData)((1U & (vlSelfRef.__PVT__lsu_mod__DOT__A 
                                          >> 7U)))) 
                        << 8U) | (0x000000ffU & vlSelfRef.__PVT__lsu_mod__DOT__A));
            } else if ((1U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                     >> 9U)))) {
                Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(
                                                                      ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                        << 0x00000012U) 
                                                                       | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                          >> 0x0000000eU)), vlSelfRef.__Vfunc_lsu_mod__DOT__memread__1__Vfuncout);
                vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__1__Vfuncout;
                vlSelfRef.__PVT__lsu_mod__DOT__lsu_out 
                    = (((- (IData)((1U & (vlSelfRef.__PVT__lsu_mod__DOT__A 
                                          >> 0x0fU)))) 
                        << 0x00000010U) | (0x0000ffffU 
                                           & vlSelfRef.__PVT__lsu_mod__DOT__A));
            } else if ((2U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                     >> 9U)))) {
                Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(
                                                                      ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                        << 0x00000012U) 
                                                                       | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                          >> 0x0000000eU)), vlSelfRef.__Vfunc_lsu_mod__DOT__memread__2__Vfuncout);
                vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__2__Vfuncout;
                vlSelfRef.__PVT__lsu_mod__DOT__lsu_out 
                    = vlSelfRef.__PVT__lsu_mod__DOT__A;
            } else if ((4U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                     >> 9U)))) {
                Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(
                                                                      ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                        << 0x00000012U) 
                                                                       | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                          >> 0x0000000eU)), vlSelfRef.__Vfunc_lsu_mod__DOT__memread__3__Vfuncout);
                vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__3__Vfuncout;
                vlSelfRef.__PVT__lsu_mod__DOT__lsu_out 
                    = (0x000000ffU & vlSelfRef.__PVT__lsu_mod__DOT__A);
            } else if ((5U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                     >> 9U)))) {
                Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(
                                                                      ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                        << 0x00000012U) 
                                                                       | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                          >> 0x0000000eU)), vlSelfRef.__Vfunc_lsu_mod__DOT__memread__4__Vfuncout);
                vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__4__Vfuncout;
                vlSelfRef.__PVT__lsu_mod__DOT__lsu_out 
                    = (0x0000ffffU & vlSelfRef.__PVT__lsu_mod__DOT__A);
            }
        }
        vlSelfRef.__PVT__ls_wb_bus[1U] = ((0x000000ffU 
                                           & vlSelfRef.__PVT__ls_wb_bus[1U]) 
                                          | ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                              << 0x0000001aU) 
                                             | (0x03ffff00U 
                                                & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                   >> 6U))));
        vlSelfRef.__PVT__ls_wb_bus[2U] = ((0x000000ffU 
                                           & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                              >> 6U)) 
                                          | ((IData)(
                                                     (((QData)((IData)(
                                                                       ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                         << 0x00000012U) 
                                                                        | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                           >> 0x0000000eU)))) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(vlSelfRef.__PVT__lsu_mod__DOT__lsu_out)))) 
                                             << 8U));
        vlSelfRef.__PVT__ls_wb_bus[3U] = (((IData)(
                                                   (((QData)((IData)(
                                                                     ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                       << 0x00000012U) 
                                                                      | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                         >> 0x0000000eU)))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__lsu_mod__DOT__lsu_out)))) 
                                           >> 0x00000018U) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                          << 0x00000012U) 
                                                                         | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                            >> 0x0000000eU)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSelfRef.__PVT__lsu_mod__DOT__lsu_out))) 
                                                      >> 0x00000020U)) 
                                             << 8U));
        vlSelfRef.__PVT__ls_wb_bus[4U] = ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                       << 0x00000012U) 
                                                                      | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                         >> 0x0000000eU)))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__lsu_mod__DOT__lsu_out))) 
                                                   >> 0x00000020U)) 
                                          >> 0x00000018U);
        vlSelfRef.__PVT__ls_wb_bus[0U] = (IData)((((QData)((IData)(
                                                                   ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                     << 0x00000012U) 
                                                                    | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                       >> 0x0000000eU)))) 
                                                   << 8U) 
                                                  | (QData)((IData)(
                                                                    (0x000000ffU 
                                                                     & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                        >> 1U))))));
        vlSelfRef.__PVT__ls_wb_bus[1U] = ((0xffffff00U 
                                           & vlSelfRef.__PVT__ls_wb_bus[1U]) 
                                          | (IData)(
                                                    ((((QData)((IData)(
                                                                       ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                         << 0x00000012U) 
                                                                        | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                           >> 0x0000000eU)))) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0x000000ffU 
                                                                         & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                            >> 1U))))) 
                                                     >> 0x00000020U)));
    }
}

void Vtop_top___act_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__if_id_ready = ((IData)(vlSelfRef.__PVT__ex_ls_ready) 
                                    & (IData)(vlSelfRef.__PVT__id_ex_ready_csr));
    vlSelfRef.__PVT__id_ex_bus_decoded[0U] = 0U;
    vlSelfRef.__PVT__id_ex_bus_decoded[1U] = 0U;
    vlSelfRef.__PVT__id_ex_bus_decoded[2U] = 0U;
    vlSelfRef.__PVT__id_ex_bus_decoded[3U] = 0U;
    vlSelfRef.__PVT__id_ex_bus_decoded[4U] = 0U;
    vlSelfRef.__PVT__id_ex_bus_decoded[5U] = 0U;
    vlSelfRef.__PVT__id_ex_bus_decoded[6U] = 0U;
    if (((IData)(vlSelfRef.__PVT__if_id_valid) & (IData)(vlSelfRef.__PVT__if_id_ready))) {
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
                                    if ((0U == (7U 
                                                & (vlSelfRef.__PVT__if_id_bus[0U] 
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
                                            VL_FINISH_MT("vsrc/decode.sv", 122, "");
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
                                                = (1U 
                                                   | vlSelfRef.__PVT__id_ex_bus_decoded[0U]);
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
                                                = (1U 
                                                   | vlSelfRef.__PVT__id_ex_bus_decoded[0U]);
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
                                    = ((0xffffff07U 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                       | (0x000000f8U 
                                          & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 4U)));
                                vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                    = ((0xf00000ffU 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                                       | (0xffffff00U 
                                          & ((((0x000001feU 
                                                & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                   >> 0x0000000bU)) 
                                               | (1U 
                                                  & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                     >> 0x00000014U))) 
                                              << 0x00000013U) 
                                             | (0x0007fe00U 
                                                & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                   >> 0x0000000cU)))));
                                vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                    = ((0x0fffffffU 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                                       | ((- (IData)(
                                                     (vlSelfRef.__PVT__if_id_bus[0U] 
                                                      >> 0x0000001fU))) 
                                          << 0x0000001cU));
                                vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                    = ((0xffffff00U 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                                       | (0x000000ffU 
                                          & ((- (IData)(
                                                        (vlSelfRef.__PVT__if_id_bus[0U] 
                                                         >> 0x0000001fU))) 
                                             >> 4U)));
                                vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                    = (0x34000000U 
                                       | (0xc03fffffU 
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
                                   | (0x000000f8U & 
                                      (vlSelfRef.__PVT__if_id_bus[0U] 
                                       >> 4U)));
                            vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                = ((0x3fffffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                   | (((0x000003e0U 
                                        & (vlSelfRef.__PVT__if_id_bus[0U] 
                                           >> 0x0000000aU)) 
                                       | (0x0000001fU 
                                          & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 0x0000000fU))) 
                                      << 0x0000001eU));
                            vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                                = ((0xffffff00U & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                                   | (0x000000ffU & 
                                      (((0x000003e0U 
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
                                = (4U | (0xfffffff9U 
                                         & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
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
                                   | ((0x000007e0U 
                                       & (vlSelfRef.__PVT__if_id_bus[0U] 
                                          >> 0x00000014U)) 
                                      | (0x0000001eU 
                                         & (vlSelfRef.__PVT__if_id_bus[0U] 
                                            >> 7U)))) 
                                  << 8U));
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
                                    = ((0xffffff07U 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                       | (0x000000f8U 
                                          & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 4U)));
                                vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                    = ((0x000000ffU 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                                       | (0xfff00000U 
                                          & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             << 8U)));
                                vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                    = ((0xffffff00U 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                                       | (vlSelfRef.__PVT__if_id_bus[0U] 
                                          >> 0x00000018U));
                                vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                    = (0x20000000U 
                                       | (0xc03fffffU 
                                          & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                            }
                        }
                    } else if ((2U & vlSelfRef.__PVT__if_id_bus[0U])) {
                        if ((1U & vlSelfRef.__PVT__if_id_bus[0U])) {
                            vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                = ((0xffffff07U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                   | (0x000000f8U & 
                                      (vlSelfRef.__PVT__if_id_bus[0U] 
                                       >> 4U)));
                            vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                = ((0xc03fffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                   | (((0x00000020U 
                                        & (vlSelfRef.__PVT__if_id_bus[0U] 
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
                                   | (0xffffff00U & 
                                      (((- (IData)(
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
                                   | (0x000000ffU & 
                                      ((0x000000ffU 
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
                                   | (0x00000700U & 
                                      (vlSelfRef.__PVT__if_id_bus[0U] 
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
                                    ? (0x00000080U 
                                       | (IData)(vlSelfRef.decode_mod__DOT____VdfgRegularize_h901acc23_0_2))
                                    : (0x00000080U 
                                       | (7U & (vlSelfRef.__PVT__if_id_bus[0U] 
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
    }
}

void Vtop_top___act_sequent__TOP__top__1(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_sequent__TOP__top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_27;
    VlWide<5>/*159:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_33;
    VlWide<5>/*159:0*/ __Vtemp_35;
    VlWide<5>/*159:0*/ __Vtemp_37;
    CData/*31:0*/ __Vtemp_39;
    VlWide<5>/*159:0*/ __Vtemp_74;
    // Body
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
    vlSelfRef.__PVT__alu_mod__DOT__val2 = ((0x20000000U 
                                            & vlSelfRef.__PVT__id_ex_bus_decoded[0U])
                                            ? ((vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                                  >> 8U))
                                            : vlSymsp->TOP__top__reg_mod.__PVT__data_rs2);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U] = 
        ((IData)((QData)((IData)((vlSelfRef.__PVT__alu_mod__DOT__val1 
                                  + vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
         << 0x0000000eU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U] = 
        (((IData)((QData)((IData)((vlSelfRef.__PVT__alu_mod__DOT__val1 
                                   + vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
          >> 0x00000012U) | ((IData)(((QData)((IData)(
                                                      (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                       + vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                      >> 0x00000020U)) 
                             << 0x0000000eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U] = 
        ((IData)(((QData)((IData)((vlSelfRef.__PVT__alu_mod__DOT__val1 
                                   + vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                  >> 0x00000020U)) >> 0x00000012U);
    if ((5U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                      >> 0x00000016U)))) {
        if ((0x02000000U & vlSelfRef.__PVT__id_ex_bus_decoded[0U])) {
            __Vtemp_27[3U] = (((IData)((QData)((IData)(
                                                       VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__alu_mod__DOT__val1, 
                                                                      (0x0000001fU 
                                                                       & vlSelfRef.__PVT__alu_mod__DOT__val2))))) 
                               >> 0x00000012U) | ((IData)(
                                                          ((QData)((IData)(
                                                                           VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__alu_mod__DOT__val1, 
                                                                                (0x0000001fU 
                                                                                & vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                                                           >> 0x00000020U)) 
                                                  << 0x0000000eU));
            __Vtemp_27[4U] = ((IData)(((QData)((IData)(
                                                       VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__alu_mod__DOT__val1, 
                                                                      (0x0000001fU 
                                                                       & vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                                       >> 0x00000020U)) 
                              >> 0x00000012U);
        } else {
            __Vtemp_27[3U] = (((IData)((QData)((IData)(
                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                        >> 
                                                        (0x0000001fU 
                                                         & vlSelfRef.__PVT__alu_mod__DOT__val2))))) 
                               >> 0x00000012U) | ((IData)(
                                                          ((QData)((IData)(
                                                                           (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                            >> 
                                                                            (0x0000001fU 
                                                                             & vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                                                           >> 0x00000020U)) 
                                                  << 0x0000000eU));
            __Vtemp_27[4U] = ((IData)(((QData)((IData)(
                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                        >> 
                                                        (0x0000001fU 
                                                         & vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                                       >> 0x00000020U)) 
                              >> 0x00000012U);
        }
    } else if ((6U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                             >> 0x00000016U)))) {
        __Vtemp_27[3U] = (((IData)((QData)((IData)(
                                                   (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                    | vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                           >> 0x00000012U) | ((IData)(
                                                      ((QData)((IData)(
                                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                        | vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                                       >> 0x00000020U)) 
                                              << 0x0000000eU));
        __Vtemp_27[4U] = ((IData)(((QData)((IData)(
                                                   (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                    | vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                   >> 0x00000020U)) 
                          >> 0x00000012U);
    } else {
        __Vtemp_27[3U] = (((IData)((QData)((IData)(
                                                   (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                    & vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                           >> 0x00000012U) | ((IData)(
                                                      ((QData)((IData)(
                                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                        & vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                                       >> 0x00000020U)) 
                                              << 0x0000000eU));
        __Vtemp_27[4U] = ((IData)(((QData)((IData)(
                                                   (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                    & vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                   >> 0x00000020U)) 
                          >> 0x00000012U);
    }
    __Vtemp_29[2U] = ((4U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                    >> 0x00000016U)))
                       ? ((IData)((QData)((IData)((vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                   ^ vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                          << 0x0000000eU) : ((5U == 
                                              (7U & 
                                               (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                                >> 0x00000016U)))
                                              ? ((0x02000000U 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[0U])
                                                  ? 
                                                 ((IData)((QData)((IData)(
                                                                          VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__alu_mod__DOT__val1, 
                                                                                (0x0000001fU 
                                                                                & vlSelfRef.__PVT__alu_mod__DOT__val2))))) 
                                                  << 0x0000000eU)
                                                  : 
                                                 ((IData)((QData)((IData)(
                                                                          (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                           >> 
                                                                           (0x0000001fU 
                                                                            & vlSelfRef.__PVT__alu_mod__DOT__val2))))) 
                                                  << 0x0000000eU))
                                              : ((6U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                                      >> 0x00000016U)))
                                                  ? 
                                                 ((IData)((QData)((IData)(
                                                                          (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                           | vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                                                  << 0x0000000eU)
                                                  : 
                                                 ((IData)((QData)((IData)(
                                                                          (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                           & vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                                                  << 0x0000000eU))));
    __Vtemp_33[3U] = ((2U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                    >> 0x00000016U)))
                       ? (((IData)((QData)((IData)(
                                                   VL_LTS_III(32, vlSelfRef.__PVT__alu_mod__DOT__val1, vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                           >> 0x00000012U) | ((IData)(
                                                      ((QData)((IData)(
                                                                       VL_LTS_III(32, vlSelfRef.__PVT__alu_mod__DOT__val1, vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                                       >> 0x00000020U)) 
                                              << 0x0000000eU))
                       : ((3U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                        >> 0x00000016U)))
                           ? (((IData)((QData)((IData)(
                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                        < vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                               >> 0x00000012U) | ((IData)(
                                                          ((QData)((IData)(
                                                                           (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                            < vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                                           >> 0x00000020U)) 
                                                  << 0x0000000eU))
                           : ((4U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                            >> 0x00000016U)))
                               ? (((IData)((QData)((IData)(
                                                           (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                            ^ vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                                   >> 0x00000012U) 
                                  | ((IData)(((QData)((IData)(
                                                              (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                               ^ vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                              >> 0x00000020U)) 
                                     << 0x0000000eU))
                               : __Vtemp_27[3U])));
    if ((1U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                      >> 0x00000016U)))) {
        __Vtemp_35[4U] = ((IData)(((QData)((IData)(
                                                   (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                    << 
                                                    (0x0000001fU 
                                                     & vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                                   >> 0x00000020U)) 
                          >> 0x00000012U);
        __Vtemp_74[0U] = ((0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U]) 
                          | (vlSymsp->TOP__top__reg_mod.__PVT__data_rs1 
                             != vlSymsp->TOP__top__reg_mod.__PVT__data_rs2));
        __Vtemp_74[1U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]) 
                          | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]));
        __Vtemp_74[2U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]) 
                          | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]));
        __Vtemp_74[3U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]) 
                          | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]));
        __Vtemp_74[4U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]) 
                          | (0x00003ffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]));
    } else {
        __Vtemp_35[4U] = ((2U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                        >> 0x00000016U)))
                           ? ((IData)(((QData)((IData)(
                                                       VL_LTS_III(32, vlSelfRef.__PVT__alu_mod__DOT__val1, vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                       >> 0x00000020U)) 
                              >> 0x00000012U) : ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                                      >> 0x00000016U)))
                                                  ? 
                                                 ((IData)(
                                                          ((QData)((IData)(
                                                                           (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                            < vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                                           >> 0x00000020U)) 
                                                  >> 0x00000012U)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                                       >> 0x00000016U)))
                                                   ? 
                                                  ((IData)(
                                                           ((QData)((IData)(
                                                                            (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                             ^ vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000012U)
                                                   : __Vtemp_27[4U])));
        if ((4U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                          >> 0x00000016U)))) {
            __Vtemp_74[0U] = ((0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U]) 
                              | VL_LTS_III(32, vlSymsp->TOP__top__reg_mod.__PVT__data_rs1, vlSymsp->TOP__top__reg_mod.__PVT__data_rs2));
            __Vtemp_74[1U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]));
            __Vtemp_74[2U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]));
            __Vtemp_74[3U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]));
            __Vtemp_74[4U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]) 
                              | (0x00003ffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]));
        } else if ((5U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                 >> 0x00000016U)))) {
            __Vtemp_74[0U] = ((0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U]) 
                              | VL_GTES_III(32, vlSymsp->TOP__top__reg_mod.__PVT__data_rs1, vlSymsp->TOP__top__reg_mod.__PVT__data_rs2));
            __Vtemp_74[1U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]));
            __Vtemp_74[2U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]));
            __Vtemp_74[3U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]));
            __Vtemp_74[4U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]) 
                              | (0x00003ffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]));
        } else if ((6U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                 >> 0x00000016U)))) {
            __Vtemp_74[0U] = ((0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U]) 
                              | (vlSymsp->TOP__top__reg_mod.__PVT__data_rs1 
                                 < vlSymsp->TOP__top__reg_mod.__PVT__data_rs2));
            __Vtemp_74[1U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]));
            __Vtemp_74[2U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]));
            __Vtemp_74[3U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]));
            __Vtemp_74[4U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]) 
                              | (0x00003ffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]));
        } else if ((7U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                 >> 0x00000016U)))) {
            __Vtemp_74[0U] = ((0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U]) 
                              | (vlSymsp->TOP__top__reg_mod.__PVT__data_rs1 
                                 >= vlSymsp->TOP__top__reg_mod.__PVT__data_rs2));
            __Vtemp_74[1U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]));
            __Vtemp_74[2U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]));
            __Vtemp_74[3U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]) 
                              | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]));
            __Vtemp_74[4U] = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]) 
                              | (0x00003ffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]));
        } else {
            __Vtemp_74[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U];
            __Vtemp_74[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U];
            __Vtemp_74[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U];
            __Vtemp_74[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U];
            __Vtemp_74[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U];
        }
    }
    if ((0U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                      >> 0x00000016U)))) {
        if ((0x02000000U & vlSelfRef.__PVT__id_ex_bus_decoded[0U])) {
            __Vtemp_37[2U] = ((IData)((QData)((IData)(
                                                      (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                       - vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                              << 0x0000000eU);
            __Vtemp_37[3U] = (((IData)((QData)((IData)(
                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                        - vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                               >> 0x00000012U) | ((IData)(
                                                          ((QData)((IData)(
                                                                           (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                            - vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                                           >> 0x00000020U)) 
                                                  << 0x0000000eU));
        } else {
            __Vtemp_37[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U];
            __Vtemp_37[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U];
        }
    } else if ((1U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                             >> 0x00000016U)))) {
        __Vtemp_37[2U] = ((IData)((QData)((IData)((vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                   << 
                                                   (0x0000001fU 
                                                    & vlSelfRef.__PVT__alu_mod__DOT__val2))))) 
                          << 0x0000000eU);
        __Vtemp_37[3U] = (((IData)((QData)((IData)(
                                                   (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                    << 
                                                    (0x0000001fU 
                                                     & vlSelfRef.__PVT__alu_mod__DOT__val2))))) 
                           >> 0x00000012U) | ((IData)(
                                                      ((QData)((IData)(
                                                                       (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                        << 
                                                                        (0x0000001fU 
                                                                         & vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                                                       >> 0x00000020U)) 
                                              << 0x0000000eU));
    } else {
        __Vtemp_37[2U] = ((2U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                        >> 0x00000016U)))
                           ? ((IData)((QData)((IData)(
                                                      VL_LTS_III(32, vlSelfRef.__PVT__alu_mod__DOT__val1, vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                              << 0x0000000eU) : ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                                      >> 0x00000016U)))
                                                  ? 
                                                 ((IData)((QData)((IData)(
                                                                          (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                                           < vlSelfRef.__PVT__alu_mod__DOT__val2)))) 
                                                  << 0x0000000eU)
                                                  : __Vtemp_29[2U]));
        __Vtemp_37[3U] = __Vtemp_33[3U];
    }
    __Vtemp_39 = (((0U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                 >> 0x00000016U))) 
                   | (1U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                   >> 0x00000016U)))) 
                  | (((2U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                    >> 0x00000016U))) 
                      | (3U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                      >> 0x00000016U)))) 
                     | ((4U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                      >> 0x00000016U))) 
                        | ((5U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                         >> 0x00000016U))) 
                           | ((6U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                            >> 0x00000016U))) 
                              | (7U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                              >> 0x00000016U))))))));
    if ((0U == (3U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                      >> 0x0000001aU)))) {
        if (__Vtemp_39) {
            if ((0U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                              >> 0x00000016U)))) {
                if ((0x02000000U & vlSelfRef.__PVT__id_ex_bus_decoded[0U])) {
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] = 0U;
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] = 0U;
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                        = __Vtemp_37[2U];
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
                        = __Vtemp_37[3U];
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[4U] 
                        = ((IData)(((QData)((IData)(
                                                    (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                     - vlSelfRef.__PVT__alu_mod__DOT__val2))) 
                                    >> 0x00000020U)) 
                           >> 0x00000012U);
                } else {
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U];
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U];
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                        = __Vtemp_37[2U];
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
                        = __Vtemp_37[3U];
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[4U] 
                        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U];
                }
            } else {
                if ((1U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                  >> 0x00000016U)))) {
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] = 0U;
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] = 0U;
                } else if ((2U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                         >> 0x00000016U)))) {
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] = 0U;
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] = 0U;
                } else if ((3U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                         >> 0x00000016U)))) {
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] = 0U;
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] = 0U;
                } else if ((4U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                         >> 0x00000016U)))) {
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] = 0U;
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] = 0U;
                } else {
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] = 0U;
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] = 0U;
                }
                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                    = __Vtemp_37[2U];
                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
                    = __Vtemp_37[3U];
                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[4U] 
                    = __Vtemp_35[4U];
            }
        } else {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] = 0U;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] = 0U;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] = 0U;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] = 0U;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[4U] = 0U;
        }
    } else if ((1U == (3U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                             >> 0x0000001aU)))) {
        if ((0U == (7U & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                          >> 0x00000016U)))) {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] 
                = ((0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U]) 
                   | (vlSymsp->TOP__top__reg_mod.__PVT__data_rs1 
                      == vlSymsp->TOP__top__reg_mod.__PVT__data_rs2));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] 
                = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]) 
                   | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U]));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]) 
                   | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
                = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]) 
                   | (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U]));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[4U] 
                = ((1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]) 
                   | (0x00003ffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U]));
        } else {
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] 
                = __Vtemp_74[0U];
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] 
                = __Vtemp_74[1U];
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                = __Vtemp_74[2U];
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
                = __Vtemp_74[3U];
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[4U] 
                = __Vtemp_74[4U];
        }
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[4U] = 0U;
    }
}

void Vtop_top___act_comb__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_comb__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id_ex_ready_csr = vlSelfRef.__PVT__ex_ls_ready;
    if (((IData)(vlSelfRef.__PVT__if_id_valid) & (IData)(vlSelfRef.__PVT__id_ex_ready_csr))) {
        vlSelfRef.__PVT__csr_mod__DOT__working_reg 
            = ((0x0300U == (0x00000fffU & (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                           >> 8U)))
                ? 2U : ((0x0305U == (0x00000fffU & 
                                     (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                      >> 8U))) ? 4U
                         : ((0x0341U == (0x00000fffU 
                                         & (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                            >> 8U)))
                             ? 1U : ((0x0342U == (0x00000fffU 
                                                  & (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                                     >> 8U)))
                                      ? 3U : 0U))));
        if ((0U != (0x0000001fU & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                   >> 0x0000000dU)))) {
            vlSelfRef.__PVT__csr_mod__DOT__working_reg = 4U;
        }
        vlSelfRef.__PVT__csr_data = vlSelfRef.__PVT__csr_mod__DOT__regs
            [vlSelfRef.__PVT__csr_mod__DOT__working_reg];
    }
    if (((IData)(vlSelfRef.__PVT__ex_ls_ready) & (IData)(vlSelfRef.__PVT__if_id_valid))) {
        vlSelfRef.__PVT__alu_mod__DOT__bus_out[0U] 
            = ((0xffffc000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U]) 
               | ((0x00003ffeU & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                  << 1U)) | (1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U])));
        vlSelfRef.__PVT__alu_mod__DOT__bus_out[1U] 
            = ((0x00003fffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U]) 
               | (vlSymsp->TOP__top__reg_mod.__PVT__data_rs2 
                  << 0x0000000eU));
        vlSelfRef.__PVT__alu_mod__DOT__bus_out[2U] 
            = ((vlSymsp->TOP__top__reg_mod.__PVT__data_rs2 
                >> 0x00000012U) | ((IData)((((QData)((IData)(
                                                             ((vlSelfRef.__PVT__id_ex_bus_decoded[5U] 
                                                               << 0x00000018U) 
                                                              | (vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                                                 >> 8U)))) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(
                                                              ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
                                                                << 0x00000012U) 
                                                               | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                                                                  >> 0x0000000eU)))))) 
                                   << 0x0000000eU));
        vlSelfRef.__PVT__alu_mod__DOT__bus_out[3U] 
            = (((IData)((((QData)((IData)(((vlSelfRef.__PVT__id_ex_bus_decoded[5U] 
                                            << 0x00000018U) 
                                           | (vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                              >> 8U)))) 
                          << 0x00000020U) | (QData)((IData)(
                                                            ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
                                                              << 0x00000012U) 
                                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                                                                >> 0x0000000eU)))))) 
                >> 0x00000012U) | ((IData)(((((QData)((IData)(
                                                              ((vlSelfRef.__PVT__id_ex_bus_decoded[5U] 
                                                                << 0x00000018U) 
                                                               | (vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                                                  >> 8U)))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
                                                                 << 0x00000012U) 
                                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                                                                   >> 0x0000000eU))))) 
                                            >> 0x00000020U)) 
                                   << 0x0000000eU));
        vlSelfRef.__PVT__alu_mod__DOT__bus_out[4U] 
            = ((IData)(((((QData)((IData)(((vlSelfRef.__PVT__id_ex_bus_decoded[5U] 
                                            << 0x00000018U) 
                                           | (vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                              >> 8U)))) 
                          << 0x00000020U) | (QData)((IData)(
                                                            ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
                                                              << 0x00000012U) 
                                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                                                                >> 0x0000000eU))))) 
                        >> 0x00000020U)) >> 0x00000012U);
    } else {
        vlSelfRef.__PVT__alu_mod__DOT__bus_out[0U] = 0U;
        vlSelfRef.__PVT__alu_mod__DOT__bus_out[1U] = 0U;
        vlSelfRef.__PVT__alu_mod__DOT__bus_out[2U] = 0U;
        vlSelfRef.__PVT__alu_mod__DOT__bus_out[3U] = 0U;
        vlSelfRef.__PVT__alu_mod__DOT__bus_out[4U] = 0U;
    }
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] = ((vlSelfRef.__PVT__csr_data 
                                                  << 0x0000000eU) 
                                                 | (0x00003fffU 
                                                    & vlSelfRef.__PVT__alu_mod__DOT__bus_out[0U]));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] = ((vlSelfRef.__PVT__csr_data 
                                                  >> 0x00000012U) 
                                                 | (0xffffc000U 
                                                    & vlSelfRef.__PVT__alu_mod__DOT__bus_out[1U]));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] = ((0x00003fffU 
                                                  & vlSelfRef.__PVT__alu_mod__DOT__bus_out[2U]) 
                                                 | (0xffffc000U 
                                                    & vlSelfRef.__PVT__alu_mod__DOT__bus_out[2U]));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] = ((0x00003fffU 
                                                  & vlSelfRef.__PVT__alu_mod__DOT__bus_out[3U]) 
                                                 | (0xffffc000U 
                                                    & vlSelfRef.__PVT__alu_mod__DOT__bus_out[3U]));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] = (0x00003fffU 
                                                 & vlSelfRef.__PVT__alu_mod__DOT__bus_out[4U]);
    vlSelfRef.__PVT__ex_ls_ready = 1U;
    vlSelfRef.__PVT__ls_wb_bus[0U] = 0U;
    vlSelfRef.__PVT__ls_wb_bus[1U] = 0U;
    vlSelfRef.__PVT__ls_wb_bus[2U] = 0U;
    vlSelfRef.__PVT__ls_wb_bus[3U] = 0U;
    vlSelfRef.__PVT__ls_wb_bus[4U] = 0U;
    if (vlSelfRef.__PVT__if_id_valid) {
        if ((0x00001000U & vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U])) {
            if ((0U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                              >> 9U)))) {
                Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(
                                                                      ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                        << 0x00000012U) 
                                                                       | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                          >> 0x0000000eU)), vlSelfRef.__Vfunc_lsu_mod__DOT__memread__0__Vfuncout);
                vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__0__Vfuncout;
                vlSelfRef.__PVT__lsu_mod__DOT__lsu_out 
                    = (((- (IData)((1U & (vlSelfRef.__PVT__lsu_mod__DOT__A 
                                          >> 7U)))) 
                        << 8U) | (0x000000ffU & vlSelfRef.__PVT__lsu_mod__DOT__A));
            } else if ((1U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                     >> 9U)))) {
                Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(
                                                                      ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                        << 0x00000012U) 
                                                                       | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                          >> 0x0000000eU)), vlSelfRef.__Vfunc_lsu_mod__DOT__memread__1__Vfuncout);
                vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__1__Vfuncout;
                vlSelfRef.__PVT__lsu_mod__DOT__lsu_out 
                    = (((- (IData)((1U & (vlSelfRef.__PVT__lsu_mod__DOT__A 
                                          >> 0x0fU)))) 
                        << 0x00000010U) | (0x0000ffffU 
                                           & vlSelfRef.__PVT__lsu_mod__DOT__A));
            } else if ((2U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                     >> 9U)))) {
                Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(
                                                                      ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                        << 0x00000012U) 
                                                                       | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                          >> 0x0000000eU)), vlSelfRef.__Vfunc_lsu_mod__DOT__memread__2__Vfuncout);
                vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__2__Vfuncout;
                vlSelfRef.__PVT__lsu_mod__DOT__lsu_out 
                    = vlSelfRef.__PVT__lsu_mod__DOT__A;
            } else if ((4U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                     >> 9U)))) {
                Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(
                                                                      ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                        << 0x00000012U) 
                                                                       | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                          >> 0x0000000eU)), vlSelfRef.__Vfunc_lsu_mod__DOT__memread__3__Vfuncout);
                vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__3__Vfuncout;
                vlSelfRef.__PVT__lsu_mod__DOT__lsu_out 
                    = (0x000000ffU & vlSelfRef.__PVT__lsu_mod__DOT__A);
            } else if ((5U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                     >> 9U)))) {
                Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(
                                                                      ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                        << 0x00000012U) 
                                                                       | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                          >> 0x0000000eU)), vlSelfRef.__Vfunc_lsu_mod__DOT__memread__4__Vfuncout);
                vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__4__Vfuncout;
                vlSelfRef.__PVT__lsu_mod__DOT__lsu_out 
                    = (0x0000ffffU & vlSelfRef.__PVT__lsu_mod__DOT__A);
            }
        }
        vlSelfRef.__PVT__ls_wb_bus[1U] = ((0x000000ffU 
                                           & vlSelfRef.__PVT__ls_wb_bus[1U]) 
                                          | ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                              << 0x0000001aU) 
                                             | (0x03ffff00U 
                                                & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                   >> 6U))));
        vlSelfRef.__PVT__ls_wb_bus[2U] = ((0x000000ffU 
                                           & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                              >> 6U)) 
                                          | ((IData)(
                                                     (((QData)((IData)(
                                                                       ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                         << 0x00000012U) 
                                                                        | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                           >> 0x0000000eU)))) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(vlSelfRef.__PVT__lsu_mod__DOT__lsu_out)))) 
                                             << 8U));
        vlSelfRef.__PVT__ls_wb_bus[3U] = (((IData)(
                                                   (((QData)((IData)(
                                                                     ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                       << 0x00000012U) 
                                                                      | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                         >> 0x0000000eU)))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__lsu_mod__DOT__lsu_out)))) 
                                           >> 0x00000018U) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                          << 0x00000012U) 
                                                                         | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                            >> 0x0000000eU)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSelfRef.__PVT__lsu_mod__DOT__lsu_out))) 
                                                      >> 0x00000020U)) 
                                             << 8U));
        vlSelfRef.__PVT__ls_wb_bus[4U] = ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                       << 0x00000012U) 
                                                                      | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                         >> 0x0000000eU)))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__lsu_mod__DOT__lsu_out))) 
                                                   >> 0x00000020U)) 
                                          >> 0x00000018U);
        vlSelfRef.__PVT__ls_wb_bus[0U] = (IData)((((QData)((IData)(
                                                                   ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                     << 0x00000012U) 
                                                                    | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                       >> 0x0000000eU)))) 
                                                   << 8U) 
                                                  | (QData)((IData)(
                                                                    (0x000000ffU 
                                                                     & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                        >> 1U))))));
        vlSelfRef.__PVT__ls_wb_bus[1U] = ((0xffffff00U 
                                           & vlSelfRef.__PVT__ls_wb_bus[1U]) 
                                          | (IData)(
                                                    ((((QData)((IData)(
                                                                       ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                         << 0x00000012U) 
                                                                        | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                           >> 0x0000000eU)))) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0x000000ffU 
                                                                         & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                            >> 1U))))) 
                                                     >> 0x00000020U)));
    }
}

void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_axi_slave_mod__DOT__memread__8__Vfuncout;
    __Vfunc_axi_slave_mod__DOT__memread__8__Vfuncout = 0;
    IData/*31:0*/ __Vdly__axi_slave_mod__DOT__slave;
    __Vdly__axi_slave_mod__DOT__slave = 0;
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
    vlSelfRef.__Vdly__ifu_mod__DOT__ifu = vlSelfRef.__PVT__ifu_mod__DOT__ifu;
    if (((IData)(vlSelfRef.__PVT__if_id_valid) & (IData)(vlSelfRef.__PVT__ex_ls_ready))) {
        if ((0x00002000U & vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U])) {
            if ((0U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                              >> 9U)))) {
                Vtop_top____Vdpiimwrap_lsu_mod__DOT__memwrite_TOP__top(
                                                                       ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                         << 0x00000012U) 
                                                                        | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                           >> 0x0000000eU)), 
                                                                       ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                         << 0x00000012U) 
                                                                        | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                           >> 0x0000000eU)), 0U);
            } else if ((1U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                     >> 9U)))) {
                Vtop_top____Vdpiimwrap_lsu_mod__DOT__memwrite_TOP__top(
                                                                       ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                         << 0x00000012U) 
                                                                        | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                           >> 0x0000000eU)), 
                                                                       ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                         << 0x00000012U) 
                                                                        | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                           >> 0x0000000eU)), 1U);
            } else if ((2U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                     >> 9U)))) {
                Vtop_top____Vdpiimwrap_lsu_mod__DOT__memwrite_TOP__top(
                                                                       ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                         << 0x00000012U) 
                                                                        | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                           >> 0x0000000eU)), 
                                                                       ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                         << 0x00000012U) 
                                                                        | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                           >> 0x0000000eU)), 2U);
            }
        }
    }
    __VdlySet__csr_mod__DOT__regs__v0 = 0U;
    __VdlySet__csr_mod__DOT__regs__v33 = 0U;
    __VdlySet__csr_mod__DOT__regs__v34 = 0U;
    __VdlySet__csr_mod__DOT__regs__v35 = 0U;
    vlSelfRef.__Vdly__arready_ifu = vlSelfRef.__PVT__arready_ifu;
    vlSelfRef.__Vdly__rdata_ifu = vlSelfRef.__PVT__rdata_ifu;
    vlSelfRef.__Vdly__rvalid_ifu = vlSelfRef.__PVT__rvalid_ifu;
    __Vdly__axi_slave_mod__DOT__slave = vlSelfRef.__PVT__axi_slave_mod__DOT__slave;
    if (vlSymsp->TOP.rst) {
        __VdlySet__csr_mod__DOT__regs__v0 = 1U;
    } else if (((IData)(vlSelfRef.__PVT__if_id_valid) 
                & (IData)(vlSelfRef.__PVT__id_ex_ready_csr))) {
        if ((0x00080000U & vlSelfRef.__PVT__id_ex_bus_decoded[0U])) {
            __VdlyVal__csr_mod__DOT__regs__v33 = ((0x00040000U 
                                                   & vlSelfRef.__PVT__id_ex_bus_decoded[0U])
                                                   ? 
                                                  (vlSelfRef.__PVT__csr_mod__DOT__regs
                                                   [vlSelfRef.__PVT__csr_mod__DOT__working_reg] 
                                                   & (~ vlSelfRef.__PVT__csr_mod__DOT__data_in))
                                                   : 
                                                  (vlSelfRef.__PVT__csr_mod__DOT__regs
                                                   [vlSelfRef.__PVT__csr_mod__DOT__working_reg] 
                                                   | vlSelfRef.__PVT__csr_mod__DOT__data_in));
            __VdlyDim0__csr_mod__DOT__regs__v33 = vlSelfRef.__PVT__csr_mod__DOT__working_reg;
            __VdlySet__csr_mod__DOT__regs__v33 = 1U;
        } else if ((0x00040000U & vlSelfRef.__PVT__id_ex_bus_decoded[0U])) {
            __VdlyVal__csr_mod__DOT__regs__v34 = vlSelfRef.__PVT__csr_mod__DOT__data_in;
            __VdlyDim0__csr_mod__DOT__regs__v34 = vlSelfRef.__PVT__csr_mod__DOT__working_reg;
            __VdlySet__csr_mod__DOT__regs__v34 = 1U;
        }
        if ((0U != (0x0000001fU & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                   >> 0x0000000dU)))) {
            __VdlyVal__csr_mod__DOT__regs__v35 = vlSelfRef.pc;
            __VdlySet__csr_mod__DOT__regs__v35 = 1U;
            __VdlyVal__csr_mod__DOT__regs__v36 = (0x0000001fU 
                                                  & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                                     >> 0x0000000dU));
        }
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__Vdly__arready_ifu = 0U;
        vlSelfRef.__Vdly__rdata_ifu = 0U;
        vlSelfRef.__PVT__rresp_ifu = 0U;
        vlSelfRef.__Vdly__rvalid_ifu = 0U;
    } else if ((0U == vlSelfRef.__PVT__axi_slave_mod__DOT__slave)) {
        if (vlSelfRef.__PVT__arvalid_ifu) {
            vlSelfRef.__Vdly__arready_ifu = 1U;
            __Vdly__axi_slave_mod__DOT__slave = 1U;
        }
    } else if ((1U == vlSelfRef.__PVT__axi_slave_mod__DOT__slave)) {
        if (((IData)(vlSelfRef.__PVT__arready_ifu) 
             & (IData)(vlSelfRef.__PVT__arvalid_ifu))) {
            Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(vlSelfRef.__PVT__araddr_ifu, __Vfunc_axi_slave_mod__DOT__memread__8__Vfuncout);
            vlSelfRef.__Vdly__arready_ifu = 0U;
            __Vdly__axi_slave_mod__DOT__slave = 2U;
            vlSelfRef.__Vdly__rvalid_ifu = 1U;
            vlSelfRef.__Vdly__rdata_ifu = __Vfunc_axi_slave_mod__DOT__memread__8__Vfuncout;
        }
    } else if ((2U == vlSelfRef.__PVT__axi_slave_mod__DOT__slave)) {
        if (((IData)(vlSelfRef.__PVT__rvalid_ifu) & (IData)(vlSelfRef.__PVT__rready_ifu))) {
            vlSelfRef.__Vdly__rdata_ifu = 0U;
            vlSelfRef.__Vdly__rvalid_ifu = 0U;
            __Vdly__axi_slave_mod__DOT__slave = 0U;
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
    vlSelfRef.__PVT__axi_slave_mod__DOT__slave = __Vdly__axi_slave_mod__DOT__slave;
}

void Vtop_top___nba_sequent__TOP__top__1(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vdly__if_id_bus;
    VL_ZERO_W(96, __Vdly__if_id_bus);
    VlWide<3>/*95:0*/ __VdlyMask__if_id_bus;
    VL_ZERO_W(96, __VdlyMask__if_id_bus);
    // Body
    if (vlSymsp->TOP.rst) {
        __Vdly__if_id_bus[0U] = 0U;
        __VdlyMask__if_id_bus[0U] = 0xffffffffU;
        vlSelfRef.__PVT__arvalid_ifu = 0U;
        vlSelfRef.__PVT__araddr_ifu = 0U;
        vlSelfRef.__PVT__rready_ifu = 0U;
        vlSelfRef.__PVT__if_id_valid = 0U;
        vlSelfRef.pc = 0x80000000U;
    } else {
        if (vlSelfRef.__PVT__if_id_ready) {
            if ((0U == vlSelfRef.__PVT__ifu_mod__DOT__ifu)) {
                vlSelfRef.__PVT__arvalid_ifu = 1U;
                vlSelfRef.__PVT__araddr_ifu = vlSelfRef.pc;
                vlSelfRef.__Vdly__ifu_mod__DOT__ifu = 1U;
                vlSelfRef.__PVT__if_id_valid = 0U;
            } else if ((1U == vlSelfRef.__PVT__ifu_mod__DOT__ifu)) {
                if (vlSelfRef.__PVT__arready_ifu) {
                    vlSelfRef.__PVT__arvalid_ifu = 0U;
                    vlSelfRef.__Vdly__ifu_mod__DOT__ifu = 2U;
                    vlSelfRef.__PVT__rready_ifu = 1U;
                }
            } else if ((2U == vlSelfRef.__PVT__ifu_mod__DOT__ifu)) {
                if (vlSelfRef.__PVT__rvalid_ifu) {
                    vlSelfRef.__Vdly__ifu_mod__DOT__ifu = 0U;
                    __Vdly__if_id_bus[0U] = vlSelfRef.__PVT__rdata_ifu;
                    __VdlyMask__if_id_bus[0U] = 0xffffffffU;
                    vlSelfRef.__PVT__rready_ifu = 0U;
                    vlSelfRef.__PVT__if_id_valid = 1U;
                }
            }
        }
        vlSelfRef.pc = vlSelfRef.__PVT__ifu_mod__DOT__next_pc;
        if ((1U & vlSelfRef.__PVT__alu_mod__DOT__bus_out[0U])) {
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
    vlSelfRef.__PVT__rdata_ifu = vlSelfRef.__Vdly__rdata_ifu;
    vlSelfRef.__PVT__ifu_mod__DOT__ifu = vlSelfRef.__Vdly__ifu_mod__DOT__ifu;
    vlSelfRef.__PVT__arready_ifu = vlSelfRef.__Vdly__arready_ifu;
    vlSelfRef.__PVT__rvalid_ifu = vlSelfRef.__Vdly__rvalid_ifu;
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
}
