// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

extern "C" int memread(int addr);

void Vtop_top____Vdpiimwrap_ifu_mod__DOT__memread_TOP__top(IData/*31:0*/ addr, IData/*31:0*/ &memread__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top____Vdpiimwrap_ifu_mod__DOT__memread_TOP__top\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int memread__Vfuncrtn__Vcvt;
    memread__Vfuncrtn__Vcvt = memread(addr__Vcvt);
    memread__Vfuncrtn = (memread__Vfuncrtn__Vcvt);
}

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

void Vtop_top___ico_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ifu_mod__DOT__next_pc = ((IData)(4U) 
                                              + vlSelfRef.pc);
    vlSelfRef.__PVT__if_id_bus[0U] = 0U;
    vlSelfRef.__PVT__if_id_bus[1U] = 0U;
    vlSelfRef.__PVT__if_id_bus[2U] = 0U;
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
    vlSelfRef.__PVT__if_id_valid = 1U;
    Vtop_top____Vdpiimwrap_ifu_mod__DOT__memread_TOP__top(vlSelfRef.pc, vlSelfRef.ifu_mod__DOT____VlemCall_0__memread);
    vlSelfRef.__PVT__if_id_bus[0U] = vlSelfRef.ifu_mod__DOT____VlemCall_0__memread;
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
    vlSelfRef.__PVT__id_ex_bus_decoded[4U] = ((0x0000007fU 
                                               & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                                              | ((IData)(
                                                         (((QData)((IData)(vlSelfRef.__PVT__if_id_bus[2U])) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(vlSelfRef.__PVT__if_id_bus[1U])))) 
                                                 << 7U));
    vlSelfRef.__PVT__id_ex_bus_decoded[5U] = (((IData)(
                                                       (((QData)((IData)(vlSelfRef.__PVT__if_id_bus[2U])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSelfRef.__PVT__if_id_bus[1U])))) 
                                               >> 0x00000019U) 
                                              | ((IData)(
                                                         ((((QData)((IData)(vlSelfRef.__PVT__if_id_bus[2U])) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSelfRef.__PVT__if_id_bus[1U]))) 
                                                          >> 0x00000020U)) 
                                                 << 7U));
    vlSelfRef.__PVT__id_ex_bus_decoded[6U] = ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.__PVT__if_id_bus[2U])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSelfRef.__PVT__if_id_bus[1U]))) 
                                                       >> 0x00000020U)) 
                                              >> 0x00000019U);
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
                                    = ((0xffffff83U 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                       | (0x0000007cU 
                                          & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 5U)));
                                vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                                    = ((0xffffff83U 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                                       | (0x0000007cU 
                                          & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 0x0000000dU)));
                                vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                    = ((0x0000007fU 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                                       | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                                          << 7U));
                                vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                    = ((0xffffff80U 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                                       | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                                          >> 0x00000019U));
                                vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                    = (3U | vlSelfRef.__PVT__id_ex_bus_decoded[0U]);
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
                                            = (0x12000000U 
                                               | (0xe01fffffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                                        vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                                            = (0xffffff83U 
                                               & vlSelfRef.__PVT__id_ex_bus_decoded[1U]);
                                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                            = (0xffffff83U 
                                               & vlSelfRef.__PVT__id_ex_bus_decoded[0U]);
                                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                            = (0x00020000U 
                                               | (0xfff1ffffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                                        vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                            = (0x0001a080U 
                                               | (0x0000007fU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[3U]));
                                        vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                            = (0xffffff80U 
                                               & vlSelfRef.__PVT__id_ex_bus_decoded[4U]);
                                    } else {
                                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                            = (0x0000b000U 
                                               | (0xfffe0fffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                            = (0x12000000U 
                                               | (0xe01fffffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                                    }
                                } else {
                                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                        = ((0xfff1ffffU 
                                            & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                           | (0x000e0000U 
                                              & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                 << 5U)));
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
                                = ((0xffffff83U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                   | (0x0000007cU & 
                                      (vlSelfRef.__PVT__if_id_bus[0U] 
                                       >> 5U)));
                            vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                = ((0xf800007fU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                                   | (0xffffff80U & 
                                      ((((0x000001feU 
                                          & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 0x0000000bU)) 
                                         | (1U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                  >> 0x00000014U))) 
                                        << 0x00000012U) 
                                       | (0x0003ff00U 
                                          & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 0x0000000dU)))));
                            vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                = ((0x07ffffffU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                                   | ((- (IData)((vlSelfRef.__PVT__if_id_bus[0U] 
                                                  >> 0x0000001fU))) 
                                      << 0x0000001bU));
                            vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                                   | (0x0000007fU & 
                                      ((- (IData)((vlSelfRef.__PVT__if_id_bus[0U] 
                                                   >> 0x0000001fU))) 
                                       >> 5U)));
                            vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                = (0x1a000000U | (0xe01fffffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                            vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                = (2U | (0xfffffffcU 
                                         & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                        }
                    }
                }
            } else if ((4U & vlSelfRef.__PVT__if_id_bus[0U])) {
                if ((2U & vlSelfRef.__PVT__if_id_bus[0U])) {
                    if ((1U & vlSelfRef.__PVT__if_id_bus[0U])) {
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = ((0xffffff83U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | (0x0000007cU & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                 >> 5U)));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = ((0x1fffffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | (((0x000003e0U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                   >> 0x0000000aU)) 
                                   | (0x0000001fU & 
                                      (vlSelfRef.__PVT__if_id_bus[0U] 
                                       >> 0x0000000fU))) 
                                  << 0x0000001dU));
                        vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                            = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                               | (0x0000007fU & (((0x000003e0U 
                                                   & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                      >> 0x0000000aU)) 
                                                  | (0x0000001fU 
                                                     & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                        >> 0x0000000fU))) 
                                                 >> 3U)));
                        vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                            = ((0x0000007fU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                               | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                                  << 7U));
                        vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                            = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                               | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                                  >> 0x00000019U));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = (0x12000000U | (0xe01fffffU 
                                              & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = (2U | (0xfffffffcU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                    }
                }
            } else if ((2U & vlSelfRef.__PVT__if_id_bus[0U])) {
                if ((1U & vlSelfRef.__PVT__if_id_bus[0U])) {
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = ((0x1fffffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                           | ((IData)(vlSelfRef.decode_mod__DOT____VdfgExtracted_h3b2fb429__0) 
                              << 0x0000001dU));
                    vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                        = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                           | ((IData)(vlSelfRef.decode_mod__DOT____VdfgExtracted_h3b2fb429__0) 
                              >> 3U));
                    vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                        = ((0xfff8007fU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                           | (((0x00000800U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                               << 4U)) 
                               | ((0x000007e0U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                  >> 0x00000014U)) 
                                  | (0x0000001eU & 
                                     (vlSelfRef.__PVT__if_id_bus[0U] 
                                      >> 7U)))) << 7U));
                    vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                        = ((0x0007ffffU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                           | ((- (IData)((vlSelfRef.__PVT__if_id_bus[0U] 
                                          >> 0x0000001fU))) 
                              << 0x00000013U));
                    vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                        = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                           | (0x0000007fU & ((- (IData)(
                                                        (vlSelfRef.__PVT__if_id_bus[0U] 
                                                         >> 0x0000001fU))) 
                                             >> 0x0000000dU)));
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = ((0xe01fffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                           | (0xffe00000U & (0x1a000000U 
                                             | (0x00e00000U 
                                                & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                   << 9U)))));
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
                                = ((0xffffff83U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                   | (0x0000007cU & 
                                      (vlSelfRef.__PVT__if_id_bus[0U] 
                                       >> 5U)));
                            vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                = ((0x0000007fU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                                   | (0xfff80000U & 
                                      (vlSelfRef.__PVT__if_id_bus[0U] 
                                       << 7U)));
                            vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                                   | (vlSelfRef.__PVT__if_id_bus[0U] 
                                      >> 0x00000019U));
                            vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                = (0x10000000U | (0xe01fffffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                        }
                    }
                } else if ((2U & vlSelfRef.__PVT__if_id_bus[0U])) {
                    if ((1U & vlSelfRef.__PVT__if_id_bus[0U])) {
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = ((0xffffff83U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | (0x0000007cU & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                 >> 5U)));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = ((0xe01fffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | (((0x00000020U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                   >> 0x00000014U)) 
                                   | (IData)(vlSelfRef.decode_mod__DOT____VdfgRegularize_h901acc23_0_2)) 
                                  << 0x00000015U));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = ((0x1fffffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | ((IData)(vlSelfRef.decode_mod__DOT____VdfgExtracted_h3b2fb429__0) 
                                  << 0x0000001dU));
                        vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                            = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                               | ((IData)(vlSelfRef.decode_mod__DOT____VdfgExtracted_h3b2fb429__0) 
                                  >> 3U));
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
                            = ((0x1fffffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | ((IData)(vlSelfRef.decode_mod__DOT____VdfgExtracted_h3b2fb429__0) 
                                  << 0x0000001dU));
                        vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                            = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                               | ((IData)(vlSelfRef.decode_mod__DOT____VdfgExtracted_h3b2fb429__0) 
                                  >> 3U));
                        vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                            = ((0x0000007fU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                               | (0xffffff80U & (((- (IData)(
                                                             (vlSelfRef.__PVT__if_id_bus[0U] 
                                                              >> 0x0000001fU))) 
                                                  << 0x00000012U) 
                                                 | (((0x000007e0U 
                                                      & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                         >> 0x00000014U)) 
                                                     | (0x0000001fU 
                                                        & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                           >> 7U))) 
                                                    << 7U))));
                        vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                            = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                               | (0x0000007fU & ((0x0000007fU 
                                                  & ((- (IData)(
                                                                (vlSelfRef.__PVT__if_id_bus[0U] 
                                                                 >> 0x0000001fU))) 
                                                     >> 0x0000000eU)) 
                                                 | (((0x000007e0U 
                                                      & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                         >> 0x00000014U)) 
                                                     | (0x0000001fU 
                                                        & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                           >> 7U))) 
                                                    >> 0x00000019U))));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = (0x10000000U | (0xe01fffffU 
                                              & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = ((0xfffffc7fU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | (0x00000380U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                 >> 5U)));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = (0x00000800U | vlSelfRef.__PVT__id_ex_bus_decoded[0U]);
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
                            = ((0xffffff83U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | (0x0000007cU & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                 >> 5U)));
                        vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                            = ((0x0000007fU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                               | (0xfff80000U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                 << 7U)));
                        vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                            = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                               | (vlSelfRef.__PVT__if_id_bus[0U] 
                                  >> 0x00000019U));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = (0x18000000U | (0xe01fffffU 
                                              & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                    }
                }
            } else if ((2U & vlSelfRef.__PVT__if_id_bus[0U])) {
                if ((1U & vlSelfRef.__PVT__if_id_bus[0U])) {
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = ((0xffffff83U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                           | (0x0000007cU & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 5U)));
                    vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                        = ((0xffffff83U & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                           | (0x0000007cU & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 0x0000000dU)));
                    vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                        = ((0x0000007fU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                           | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                              << 7U));
                    vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                        = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                           | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                              >> 0x00000019U));
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = ((0xe01fffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                           | (((5U == (7U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 0x0000000cU)))
                                ? (0x00000080U | (IData)(vlSelfRef.decode_mod__DOT____VdfgRegularize_h901acc23_0_2))
                                : (0x00000080U | (7U 
                                                  & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                     >> 0x0000000cU)))) 
                              << 0x00000015U));
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
                        = ((0xffffff83U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                           | (0x0000007cU & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 5U)));
                    vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                        = ((0xffffff83U & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                           | (0x0000007cU & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 0x0000000dU)));
                    vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                        = ((0x0000007fU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                           | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                              << 7U));
                    vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                        = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                           | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                              >> 0x00000019U));
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = (0x10000000U | (0xe01fffffU 
                                          & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = ((0xfffff87fU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                           | (0xffffff80U & (0x00000400U 
                                             | (0x00000380U 
                                                & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                   >> 5U)))));
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = (1U | (0xfffffffcU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                }
            }
        }
    }
    vlSelfRef.__PVT__csr_mod__DOT__working_reg = ((0x0300U 
                                                   == 
                                                   (0x00000fffU 
                                                    & (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                                       >> 7U)))
                                                   ? 2U
                                                   : 
                                                  ((0x0305U 
                                                    == 
                                                    (0x00000fffU 
                                                     & (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                                        >> 7U)))
                                                    ? 4U
                                                    : 
                                                   ((0x0341U 
                                                     == 
                                                     (0x00000fffU 
                                                      & (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 
                                                    ((0x0342U 
                                                      == 
                                                      (0x00000fffU 
                                                       & (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                                          >> 7U)))
                                                      ? 3U
                                                      : 0U))));
    if ((0U != (0x0000001fU & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                               >> 0x0000000cU)))) {
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
    vlSelfRef.__PVT__alu_mod__DOT__val2 = ((0x10000000U 
                                            & vlSelfRef.__PVT__id_ex_bus_decoded[0U])
                                            ? ((vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                                << 0x00000019U) 
                                               | (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                                  >> 7U))
                                            : vlSymsp->TOP__top__reg_mod.__PVT__data_rs2);
    vlSelfRef.__PVT__csr_mod__DOT__data_in = ((0x00080000U 
                                               & vlSelfRef.__PVT__id_ex_bus_decoded[0U])
                                               ? (0x0000001fU 
                                                  & (vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                                                     >> 2U))
                                               : vlSymsp->TOP__top__reg_mod.__PVT__data_rs1);
    vlSelfRef.__PVT__alu_mod__DOT__val1 = ((0x08000000U 
                                            & vlSelfRef.__PVT__id_ex_bus_decoded[0U])
                                            ? ((vlSelfRef.__PVT__id_ex_bus_decoded[6U] 
                                                << 0x00000019U) 
                                               | (vlSelfRef.__PVT__id_ex_bus_decoded[5U] 
                                                  >> 7U))
                                            : vlSymsp->TOP__top__reg_mod.__PVT__data_rs1);
    vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] = (IData)(
                                                        (0x0000007fffffffffULL 
                                                         & (((QData)((IData)(vlSelfRef.__PVT__id_ex_bus_decoded[1U])) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.__PVT__id_ex_bus_decoded[0U])))));
    vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] = ((vlSymsp->TOP__top__reg_mod.__PVT__data_rs2 
                                                  << 7U) 
                                                 | (IData)(
                                                           ((0x0000007fffffffffULL 
                                                             & (((QData)((IData)(vlSelfRef.__PVT__id_ex_bus_decoded[1U])) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(vlSelfRef.__PVT__id_ex_bus_decoded[0U])))) 
                                                            >> 0x00000020U)));
    vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] = ((vlSymsp->TOP__top__reg_mod.__PVT__data_rs2 
                                                  >> 0x00000019U) 
                                                 | (vlSymsp->TOP__top__reg_mod.__PVT__data_rs1 
                                                    << 7U));
    vlSelfRef.__PVT__alu_mod__DOT__bus_in[3U] = ((vlSymsp->TOP__top__reg_mod.__PVT__data_rs1 
                                                  >> 0x00000019U) 
                                                 | (0xffffff80U 
                                                    & vlSelfRef.__PVT__id_ex_bus_decoded[3U]));
    vlSelfRef.__PVT__alu_mod__DOT__bus_in[4U] = ((0x0000007fU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                                                 | (0xffffff80U 
                                                    & vlSelfRef.__PVT__id_ex_bus_decoded[4U]));
    vlSelfRef.__PVT__alu_mod__DOT__bus_in[5U] = ((0x0000007fU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[5U]) 
                                                 | (0xffffff80U 
                                                    & vlSelfRef.__PVT__id_ex_bus_decoded[5U]));
    vlSelfRef.__PVT__alu_mod__DOT__bus_in[6U] = (0x0000007fU 
                                                 & vlSelfRef.__PVT__id_ex_bus_decoded[6U]);
    vlSelfRef.__PVT__ex_ls_bus_alu[0U] = 0U;
    vlSelfRef.__PVT__ex_ls_bus_alu[1U] = 0U;
    vlSelfRef.__PVT__ex_ls_bus_alu[2U] = 0U;
    vlSelfRef.__PVT__ex_ls_bus_alu[3U] = 0U;
    vlSelfRef.__PVT__ex_ls_bus_alu[4U] = 0U;
    vlSelfRef.__PVT__ex_ls_bus_alu[2U] = (0x00001fffU 
                                          & vlSelfRef.__PVT__ex_ls_bus_alu[2U]);
    vlSelfRef.__PVT__ex_ls_bus_alu[3U] = (0xffffe000U 
                                          & vlSelfRef.__PVT__ex_ls_bus_alu[3U]);
    vlSelfRef.__PVT__ex_ls_bus_alu[0U] = (0xfffffffeU 
                                          & vlSelfRef.__PVT__ex_ls_bus_alu[0U]);
    if ((0U == (3U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                      >> 0x00000019U)))) {
        if (((((((((0U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                 >> 0x00000015U))) 
                   | (1U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                   >> 0x00000015U)))) 
                  | (2U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                  >> 0x00000015U)))) 
                 | (3U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                 >> 0x00000015U)))) 
                | (4U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                >> 0x00000015U)))) 
               | (5U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                               >> 0x00000015U)))) | 
              (6U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                            >> 0x00000015U)))) | (7U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                      >> 0x00000015U))))) {
            vlSelfRef.__PVT__ex_ls_bus_alu[2U] = ((0x00001fffU 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[2U]) 
                                                  | (((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                           >> 0x00000015U)))
                                                       ? 
                                                      ((0x01000000U 
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
                                                            >> 0x00000015U)))
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
                                                             >> 0x00000015U)))
                                                         ? 
                                                        VL_LTS_III(32, vlSelfRef.__PVT__alu_mod__DOT__val1, vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                              >> 0x00000015U)))
                                                          ? 
                                                         (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                          < vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                               >> 0x00000015U)))
                                                           ? 
                                                          (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                           ^ vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                           : 
                                                          ((5U 
                                                            == 
                                                            (7U 
                                                             & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                                >> 0x00000015U)))
                                                            ? 
                                                           ((0x01000000U 
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
                                                                 >> 0x00000015U)))
                                                             ? 
                                                            (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                             | vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                             : 
                                                            (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                             & vlSelfRef.__PVT__alu_mod__DOT__val2)))))))) 
                                                     << 0x0000000dU));
            vlSelfRef.__PVT__ex_ls_bus_alu[3U] = ((0xffffe000U 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[3U]) 
                                                  | (((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                           >> 0x00000015U)))
                                                       ? 
                                                      ((0x01000000U 
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
                                                            >> 0x00000015U)))
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
                                                             >> 0x00000015U)))
                                                         ? 
                                                        VL_LTS_III(32, vlSelfRef.__PVT__alu_mod__DOT__val1, vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                              >> 0x00000015U)))
                                                          ? 
                                                         (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                          < vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                               >> 0x00000015U)))
                                                           ? 
                                                          (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                           ^ vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                           : 
                                                          ((5U 
                                                            == 
                                                            (7U 
                                                             & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                                >> 0x00000015U)))
                                                            ? 
                                                           ((0x01000000U 
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
                                                                 >> 0x00000015U)))
                                                             ? 
                                                            (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                             | vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                             : 
                                                            (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                             & vlSelfRef.__PVT__alu_mod__DOT__val2)))))))) 
                                                     >> 0x00000013U));
        }
    } else if ((1U == (3U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                             >> 0x00000019U)))) {
        vlSelfRef.__PVT__ex_ls_bus_alu[2U] = ((0x00001fffU 
                                               & vlSelfRef.__PVT__ex_ls_bus_alu[2U]) 
                                              | ((vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                  + vlSelfRef.__PVT__alu_mod__DOT__val2) 
                                                 << 0x0000000dU));
        vlSelfRef.__PVT__ex_ls_bus_alu[3U] = ((0xffffe000U 
                                               & vlSelfRef.__PVT__ex_ls_bus_alu[3U]) 
                                              | ((vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                  + vlSelfRef.__PVT__alu_mod__DOT__val2) 
                                                 >> 0x00000013U));
        if ((0U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                          >> 0x00000015U)))) {
            vlSelfRef.__PVT__ex_ls_bus_alu[0U] = ((0xfffffffeU 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[0U]) 
                                                  | (((vlSelfRef.__PVT__alu_mod__DOT__bus_in[3U] 
                                                       << 0x00000019U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                         >> 7U)) 
                                                     == 
                                                     ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                       << 0x00000019U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                         >> 7U))));
        } else if ((1U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                 >> 0x00000015U)))) {
            vlSelfRef.__PVT__ex_ls_bus_alu[0U] = ((0xfffffffeU 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[0U]) 
                                                  | (((vlSelfRef.__PVT__alu_mod__DOT__bus_in[3U] 
                                                       << 0x00000019U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                         >> 7U)) 
                                                     != 
                                                     ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                       << 0x00000019U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                         >> 7U))));
        } else if ((4U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                 >> 0x00000015U)))) {
            vlSelfRef.__PVT__ex_ls_bus_alu[0U] = ((0xfffffffeU 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[0U]) 
                                                  | VL_LTS_III(32, 
                                                               ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[3U] 
                                                                 << 0x00000019U) 
                                                                | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                                   >> 7U)), 
                                                               ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                                 << 0x00000019U) 
                                                                | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                                   >> 7U))));
        } else if ((5U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                 >> 0x00000015U)))) {
            vlSelfRef.__PVT__ex_ls_bus_alu[0U] = ((0xfffffffeU 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[0U]) 
                                                  | VL_GTES_III(32, 
                                                                ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[3U] 
                                                                  << 0x00000019U) 
                                                                 | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                                    >> 7U)), 
                                                                ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                                  << 0x00000019U) 
                                                                 | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                                    >> 7U))));
        } else if ((6U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                 >> 0x00000015U)))) {
            vlSelfRef.__PVT__ex_ls_bus_alu[0U] = ((0xfffffffeU 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[0U]) 
                                                  | (((vlSelfRef.__PVT__alu_mod__DOT__bus_in[3U] 
                                                       << 0x00000019U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                         >> 7U)) 
                                                     < 
                                                     ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                       << 0x00000019U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                         >> 7U))));
        } else if ((7U == (7U & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                 >> 0x00000015U)))) {
            vlSelfRef.__PVT__ex_ls_bus_alu[0U] = ((0xfffffffeU 
                                                   & vlSelfRef.__PVT__ex_ls_bus_alu[0U]) 
                                                  | (((vlSelfRef.__PVT__alu_mod__DOT__bus_in[3U] 
                                                       << 0x00000019U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                         >> 7U)) 
                                                     >= 
                                                     ((vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                       << 0x00000019U) 
                                                      | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                         >> 7U))));
        }
    }
    vlSelfRef.__PVT__ex_ls_bus_alu[3U] = ((0x00001fffU 
                                           & vlSelfRef.__PVT__ex_ls_bus_alu[3U]) 
                                          | (0xffffe000U 
                                             & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[4U] 
                                                << 6U)));
    vlSelfRef.__PVT__ex_ls_bus_alu[4U] = (0x00001fffU 
                                          & ((0x00001fc0U 
                                              & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[5U] 
                                                 << 6U)) 
                                             | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[4U] 
                                                >> 0x0000001aU)));
    vlSelfRef.__PVT__ex_ls_bus_alu[1U] = ((0x00001fffU 
                                           & vlSelfRef.__PVT__ex_ls_bus_alu[1U]) 
                                          | (0xffffe000U 
                                             & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                << 6U)));
    vlSelfRef.__PVT__ex_ls_bus_alu[2U] = ((0xffffe000U 
                                           & vlSelfRef.__PVT__ex_ls_bus_alu[2U]) 
                                          | (0x00001fffU 
                                             & ((0x00001fc0U 
                                                 & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[2U] 
                                                    << 6U)) 
                                                | (vlSelfRef.__PVT__alu_mod__DOT__bus_in[1U] 
                                                   >> 0x0000001aU))));
    vlSelfRef.__PVT__ex_ls_bus_alu[0U] = ((0xffffe001U 
                                           & vlSelfRef.__PVT__ex_ls_bus_alu[0U]) 
                                          | (0x00001ffeU 
                                             & (vlSelfRef.__PVT__alu_mod__DOT__bus_in[0U] 
                                                << 1U)));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] = ((vlSelfRef.__PVT__csr_data 
                                                  << 0x0000000dU) 
                                                 | (0x00001fffU 
                                                    & vlSelfRef.__PVT__ex_ls_bus_alu[0U]));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] = ((vlSelfRef.__PVT__csr_data 
                                                  >> 0x00000013U) 
                                                 | (0xffffe000U 
                                                    & vlSelfRef.__PVT__ex_ls_bus_alu[1U]));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] = ((0x00001fffU 
                                                  & vlSelfRef.__PVT__ex_ls_bus_alu[2U]) 
                                                 | (0xffffe000U 
                                                    & vlSelfRef.__PVT__ex_ls_bus_alu[2U]));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] = ((0x00001fffU 
                                                  & vlSelfRef.__PVT__ex_ls_bus_alu[3U]) 
                                                 | (0xffffe000U 
                                                    & vlSelfRef.__PVT__ex_ls_bus_alu[3U]));
    vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] = (0x00001fffU 
                                                 & vlSelfRef.__PVT__ex_ls_bus_alu[4U]);
    vlSelfRef.__PVT__ls_wb_bus[0U] = 0U;
    vlSelfRef.__PVT__ls_wb_bus[1U] = 0U;
    vlSelfRef.__PVT__ls_wb_bus[2U] = 0U;
    vlSelfRef.__PVT__ls_wb_bus[3U] = 0U;
    vlSelfRef.__PVT__ls_wb_bus[4U] = 0U;
    if ((0x00000800U & vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U])) {
        if ((0U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                          >> 8U)))) {
            Vtop_top____Vdpiimwrap_ifu_mod__DOT__memread_TOP__top(
                                                                  ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                    << 0x00000013U) 
                                                                   | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                      >> 0x0000000dU)), vlSelfRef.__Vfunc_lsu_mod__DOT__memread__1__Vfuncout);
            vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__1__Vfuncout;
            vlSelfRef.__PVT__lsu_mod__DOT__lsu_out 
                = (((- (IData)((1U & (vlSelfRef.__PVT__lsu_mod__DOT__A 
                                      >> 7U)))) << 8U) 
                   | (0x000000ffU & vlSelfRef.__PVT__lsu_mod__DOT__A));
        } else if ((1U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                 >> 8U)))) {
            Vtop_top____Vdpiimwrap_ifu_mod__DOT__memread_TOP__top(
                                                                  ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                    << 0x00000013U) 
                                                                   | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                      >> 0x0000000dU)), vlSelfRef.__Vfunc_lsu_mod__DOT__memread__2__Vfuncout);
            vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__2__Vfuncout;
            vlSelfRef.__PVT__lsu_mod__DOT__lsu_out 
                = (((- (IData)((1U & (vlSelfRef.__PVT__lsu_mod__DOT__A 
                                      >> 0x0fU)))) 
                    << 0x00000010U) | (0x0000ffffU 
                                       & vlSelfRef.__PVT__lsu_mod__DOT__A));
        } else if ((2U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                 >> 8U)))) {
            Vtop_top____Vdpiimwrap_ifu_mod__DOT__memread_TOP__top(
                                                                  ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                    << 0x00000013U) 
                                                                   | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                      >> 0x0000000dU)), vlSelfRef.__Vfunc_lsu_mod__DOT__memread__3__Vfuncout);
            vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__3__Vfuncout;
            vlSelfRef.__PVT__lsu_mod__DOT__lsu_out 
                = vlSelfRef.__PVT__lsu_mod__DOT__A;
        } else if ((4U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                 >> 8U)))) {
            Vtop_top____Vdpiimwrap_ifu_mod__DOT__memread_TOP__top(
                                                                  ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                    << 0x00000013U) 
                                                                   | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                      >> 0x0000000dU)), vlSelfRef.__Vfunc_lsu_mod__DOT__memread__4__Vfuncout);
            vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__4__Vfuncout;
            vlSelfRef.__PVT__lsu_mod__DOT__lsu_out 
                = (0x000000ffU & vlSelfRef.__PVT__lsu_mod__DOT__A);
        } else if ((5U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                 >> 8U)))) {
            Vtop_top____Vdpiimwrap_ifu_mod__DOT__memread_TOP__top(
                                                                  ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                    << 0x00000013U) 
                                                                   | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                      >> 0x0000000dU)), vlSelfRef.__Vfunc_lsu_mod__DOT__memread__5__Vfuncout);
            vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__5__Vfuncout;
            vlSelfRef.__PVT__lsu_mod__DOT__lsu_out 
                = (0x0000ffffU & vlSelfRef.__PVT__lsu_mod__DOT__A);
        }
    }
    vlSelfRef.__PVT__ls_wb_bus[3U] = ((0x0000007fU 
                                       & vlSelfRef.__PVT__ls_wb_bus[3U]) 
                                      | (((0x00000800U 
                                           & vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U])
                                           ? vlSelfRef.__PVT__lsu_mod__DOT__lsu_out
                                           : ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                               << 0x00000013U) 
                                              | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                 >> 0x0000000dU))) 
                                         << 7U));
    vlSelfRef.__PVT__ls_wb_bus[4U] = (((0x00000800U 
                                        & vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U])
                                        ? vlSelfRef.__PVT__lsu_mod__DOT__lsu_out
                                        : ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                            << 0x00000013U) 
                                           | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                              >> 0x0000000dU))) 
                                      >> 0x00000019U);
    vlSelfRef.__PVT__ls_wb_bus[0U] = ((3U & vlSelfRef.__PVT__ls_wb_bus[0U]) 
                                      | (((IData)((
                                                   ((QData)((IData)(
                                                                    ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                                                      << 0x00000013U) 
                                                                     | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                        >> 0x0000000dU)))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                       << 0x00000013U) 
                                                                      | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                         >> 0x0000000dU)))))) 
                                          << 7U) | 
                                         (0x0000007cU 
                                          & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                             >> 1U))));
    vlSelfRef.__PVT__ls_wb_bus[1U] = ((3U & ((IData)(
                                                     (((QData)((IData)(
                                                                       ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                                                         << 0x00000013U) 
                                                                        | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                           >> 0x0000000dU)))) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(
                                                                        ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                          << 0x00000013U) 
                                                                         | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                            >> 0x0000000dU)))))) 
                                             >> 0x00000019U)) 
                                      | ((0x0000007cU 
                                          & ((IData)(
                                                     (((QData)((IData)(
                                                                       ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                                                         << 0x00000013U) 
                                                                        | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                           >> 0x0000000dU)))) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(
                                                                        ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                          << 0x00000013U) 
                                                                         | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                            >> 0x0000000dU)))))) 
                                             >> 0x00000019U)) 
                                         | ((IData)(
                                                    ((((QData)((IData)(
                                                                       ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                                                         << 0x00000013U) 
                                                                        | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                           >> 0x0000000dU)))) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(
                                                                        ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                          << 0x00000013U) 
                                                                         | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                            >> 0x0000000dU))))) 
                                                     >> 0x00000020U)) 
                                            << 7U)));
    vlSelfRef.__PVT__ls_wb_bus[2U] = ((0xffffff80U 
                                       & vlSelfRef.__PVT__ls_wb_bus[2U]) 
                                      | ((3U & ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                                                             << 0x00000013U) 
                                                                            | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                               >> 0x0000000dU)))) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                              << 0x00000013U) 
                                                                             | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                                >> 0x0000000dU))))) 
                                                         >> 0x00000020U)) 
                                                >> 0x00000019U)) 
                                         | (0x0000007cU 
                                            & ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[4U] 
                                                                            << 0x00000013U) 
                                                                           | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                              >> 0x0000000dU)))) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(
                                                                           ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                             << 0x00000013U) 
                                                                            | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                                               >> 0x0000000dU))))) 
                                                        >> 0x00000020U)) 
                                               >> 0x00000019U))));
    vlSelfRef.__PVT__ls_wb_bus[0U] = ((0xfffffffcU 
                                       & vlSelfRef.__PVT__ls_wb_bus[0U]) 
                                      | (3U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                               >> 1U)));
}

void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
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
    if ((0x00001000U & vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U])) {
        if ((0U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                          >> 8U)))) {
            Vtop_top____Vdpiimwrap_lsu_mod__DOT__memwrite_TOP__top(
                                                                   ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                     << 0x00000013U) 
                                                                    | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                       >> 0x0000000dU)), 
                                                                   ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                     << 0x00000013U) 
                                                                    | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                       >> 0x0000000dU)), 0U);
        } else if ((1U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                 >> 8U)))) {
            Vtop_top____Vdpiimwrap_lsu_mod__DOT__memwrite_TOP__top(
                                                                   ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                     << 0x00000013U) 
                                                                    | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                       >> 0x0000000dU)), 
                                                                   ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                     << 0x00000013U) 
                                                                    | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                       >> 0x0000000dU)), 1U);
        } else if ((2U == (7U & (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[0U] 
                                 >> 8U)))) {
            Vtop_top____Vdpiimwrap_lsu_mod__DOT__memwrite_TOP__top(
                                                                   ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                                     << 0x00000013U) 
                                                                    | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                       >> 0x0000000dU)), 
                                                                   ((vlSelfRef.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                                     << 0x00000013U) 
                                                                    | (vlSelfRef.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                                       >> 0x0000000dU)), 2U);
        }
    }
    __VdlySet__csr_mod__DOT__regs__v0 = 0U;
    __VdlySet__csr_mod__DOT__regs__v33 = 0U;
    __VdlySet__csr_mod__DOT__regs__v34 = 0U;
    __VdlySet__csr_mod__DOT__regs__v35 = 0U;
    if (vlSymsp->TOP.rst) {
        __VdlySet__csr_mod__DOT__regs__v0 = 1U;
        vlSelfRef.pc = 0x80000000U;
    } else {
        if ((0x00040000U & vlSelfRef.__PVT__id_ex_bus_decoded[0U])) {
            __VdlyVal__csr_mod__DOT__regs__v33 = ((0x00020000U 
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
        } else if ((0x00020000U & vlSelfRef.__PVT__id_ex_bus_decoded[0U])) {
            __VdlyVal__csr_mod__DOT__regs__v34 = vlSelfRef.__PVT__csr_mod__DOT__data_in;
            __VdlyDim0__csr_mod__DOT__regs__v34 = vlSelfRef.__PVT__csr_mod__DOT__working_reg;
            __VdlySet__csr_mod__DOT__regs__v34 = 1U;
        }
        if ((0U != (0x0000001fU & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                   >> 0x0000000cU)))) {
            __VdlyVal__csr_mod__DOT__regs__v35 = vlSelfRef.pc;
            __VdlySet__csr_mod__DOT__regs__v35 = 1U;
            __VdlyVal__csr_mod__DOT__regs__v36 = (0x0000001fU 
                                                  & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                                     >> 0x0000000cU));
        }
        vlSelfRef.pc = vlSelfRef.__PVT__ifu_mod__DOT__next_pc;
        if ((1U & vlSelfRef.__PVT__ex_ls_bus_alu[0U])) {
            vlSelfRef.pc = ((vlSelfRef.__PVT__ls_wb_bus[4U] 
                             << 0x00000019U) | (vlSelfRef.__PVT__ls_wb_bus[3U] 
                                                >> 7U));
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
    vlSelfRef.__PVT__ifu_mod__DOT__next_pc = ((IData)(4U) 
                                              + vlSelfRef.pc);
}

void Vtop_top___nba_sequent__TOP__top__1(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__if_id_bus[0U] = 0U;
    vlSelfRef.__PVT__if_id_bus[1U] = 0U;
    vlSelfRef.__PVT__if_id_bus[2U] = 0U;
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
    vlSelfRef.__PVT__if_id_valid = 1U;
    Vtop_top____Vdpiimwrap_ifu_mod__DOT__memread_TOP__top(vlSelfRef.pc, vlSelfRef.ifu_mod__DOT____VlemCall_0__memread);
    vlSelfRef.__PVT__if_id_bus[0U] = vlSelfRef.ifu_mod__DOT____VlemCall_0__memread;
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
    vlSelfRef.__PVT__id_ex_bus_decoded[4U] = ((0x0000007fU 
                                               & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                                              | ((IData)(
                                                         (((QData)((IData)(vlSelfRef.__PVT__if_id_bus[2U])) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(vlSelfRef.__PVT__if_id_bus[1U])))) 
                                                 << 7U));
    vlSelfRef.__PVT__id_ex_bus_decoded[5U] = (((IData)(
                                                       (((QData)((IData)(vlSelfRef.__PVT__if_id_bus[2U])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSelfRef.__PVT__if_id_bus[1U])))) 
                                               >> 0x00000019U) 
                                              | ((IData)(
                                                         ((((QData)((IData)(vlSelfRef.__PVT__if_id_bus[2U])) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSelfRef.__PVT__if_id_bus[1U]))) 
                                                          >> 0x00000020U)) 
                                                 << 7U));
    vlSelfRef.__PVT__id_ex_bus_decoded[6U] = ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.__PVT__if_id_bus[2U])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSelfRef.__PVT__if_id_bus[1U]))) 
                                                       >> 0x00000020U)) 
                                              >> 0x00000019U);
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
                                    = ((0xffffff83U 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                       | (0x0000007cU 
                                          & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 5U)));
                                vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                                    = ((0xffffff83U 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                                       | (0x0000007cU 
                                          & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 0x0000000dU)));
                                vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                    = ((0x0000007fU 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                                       | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                                          << 7U));
                                vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                    = ((0xffffff80U 
                                        & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                                       | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                                          >> 0x00000019U));
                                vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                    = (3U | vlSelfRef.__PVT__id_ex_bus_decoded[0U]);
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
                                            = (0x12000000U 
                                               | (0xe01fffffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                                        vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                                            = (0xffffff83U 
                                               & vlSelfRef.__PVT__id_ex_bus_decoded[1U]);
                                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                            = (0xffffff83U 
                                               & vlSelfRef.__PVT__id_ex_bus_decoded[0U]);
                                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                            = (0x00020000U 
                                               | (0xfff1ffffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                                        vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                            = (0x0001a080U 
                                               | (0x0000007fU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[3U]));
                                        vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                            = (0xffffff80U 
                                               & vlSelfRef.__PVT__id_ex_bus_decoded[4U]);
                                    } else {
                                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                            = (0x0000b000U 
                                               | (0xfffe0fffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                            = (0x12000000U 
                                               | (0xe01fffffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                                    }
                                } else {
                                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                        = ((0xfff1ffffU 
                                            & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                           | (0x000e0000U 
                                              & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                 << 5U)));
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
                                = ((0xffffff83U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                   | (0x0000007cU & 
                                      (vlSelfRef.__PVT__if_id_bus[0U] 
                                       >> 5U)));
                            vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                = ((0xf800007fU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                                   | (0xffffff80U & 
                                      ((((0x000001feU 
                                          & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 0x0000000bU)) 
                                         | (1U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                  >> 0x00000014U))) 
                                        << 0x00000012U) 
                                       | (0x0003ff00U 
                                          & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 0x0000000dU)))));
                            vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                = ((0x07ffffffU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                                   | ((- (IData)((vlSelfRef.__PVT__if_id_bus[0U] 
                                                  >> 0x0000001fU))) 
                                      << 0x0000001bU));
                            vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                                   | (0x0000007fU & 
                                      ((- (IData)((vlSelfRef.__PVT__if_id_bus[0U] 
                                                   >> 0x0000001fU))) 
                                       >> 5U)));
                            vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                = (0x1a000000U | (0xe01fffffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                            vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                = (2U | (0xfffffffcU 
                                         & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                        }
                    }
                }
            } else if ((4U & vlSelfRef.__PVT__if_id_bus[0U])) {
                if ((2U & vlSelfRef.__PVT__if_id_bus[0U])) {
                    if ((1U & vlSelfRef.__PVT__if_id_bus[0U])) {
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = ((0xffffff83U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | (0x0000007cU & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                 >> 5U)));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = ((0x1fffffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | (((0x000003e0U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                   >> 0x0000000aU)) 
                                   | (0x0000001fU & 
                                      (vlSelfRef.__PVT__if_id_bus[0U] 
                                       >> 0x0000000fU))) 
                                  << 0x0000001dU));
                        vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                            = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                               | (0x0000007fU & (((0x000003e0U 
                                                   & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                      >> 0x0000000aU)) 
                                                  | (0x0000001fU 
                                                     & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                        >> 0x0000000fU))) 
                                                 >> 3U)));
                        vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                            = ((0x0000007fU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                               | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                                  << 7U));
                        vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                            = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                               | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                                  >> 0x00000019U));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = (0x12000000U | (0xe01fffffU 
                                              & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = (2U | (0xfffffffcU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                    }
                }
            } else if ((2U & vlSelfRef.__PVT__if_id_bus[0U])) {
                if ((1U & vlSelfRef.__PVT__if_id_bus[0U])) {
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = ((0x1fffffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                           | ((IData)(vlSelfRef.decode_mod__DOT____VdfgExtracted_h3b2fb429__0) 
                              << 0x0000001dU));
                    vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                        = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                           | ((IData)(vlSelfRef.decode_mod__DOT____VdfgExtracted_h3b2fb429__0) 
                              >> 3U));
                    vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                        = ((0xfff8007fU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                           | (((0x00000800U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                               << 4U)) 
                               | ((0x000007e0U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                  >> 0x00000014U)) 
                                  | (0x0000001eU & 
                                     (vlSelfRef.__PVT__if_id_bus[0U] 
                                      >> 7U)))) << 7U));
                    vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                        = ((0x0007ffffU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                           | ((- (IData)((vlSelfRef.__PVT__if_id_bus[0U] 
                                          >> 0x0000001fU))) 
                              << 0x00000013U));
                    vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                        = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                           | (0x0000007fU & ((- (IData)(
                                                        (vlSelfRef.__PVT__if_id_bus[0U] 
                                                         >> 0x0000001fU))) 
                                             >> 0x0000000dU)));
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = ((0xe01fffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                           | (0xffe00000U & (0x1a000000U 
                                             | (0x00e00000U 
                                                & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                   << 9U)))));
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
                                = ((0xffffff83U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                                   | (0x0000007cU & 
                                      (vlSelfRef.__PVT__if_id_bus[0U] 
                                       >> 5U)));
                            vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                = ((0x0000007fU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                                   | (0xfff80000U & 
                                      (vlSelfRef.__PVT__if_id_bus[0U] 
                                       << 7U)));
                            vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                                = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                                   | (vlSelfRef.__PVT__if_id_bus[0U] 
                                      >> 0x00000019U));
                            vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                                = (0x10000000U | (0xe01fffffU 
                                                  & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                        }
                    }
                } else if ((2U & vlSelfRef.__PVT__if_id_bus[0U])) {
                    if ((1U & vlSelfRef.__PVT__if_id_bus[0U])) {
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = ((0xffffff83U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | (0x0000007cU & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                 >> 5U)));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = ((0xe01fffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | (((0x00000020U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                   >> 0x00000014U)) 
                                   | (IData)(vlSelfRef.decode_mod__DOT____VdfgRegularize_h901acc23_0_2)) 
                                  << 0x00000015U));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = ((0x1fffffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | ((IData)(vlSelfRef.decode_mod__DOT____VdfgExtracted_h3b2fb429__0) 
                                  << 0x0000001dU));
                        vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                            = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                               | ((IData)(vlSelfRef.decode_mod__DOT____VdfgExtracted_h3b2fb429__0) 
                                  >> 3U));
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
                            = ((0x1fffffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | ((IData)(vlSelfRef.decode_mod__DOT____VdfgExtracted_h3b2fb429__0) 
                                  << 0x0000001dU));
                        vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                            = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                               | ((IData)(vlSelfRef.decode_mod__DOT____VdfgExtracted_h3b2fb429__0) 
                                  >> 3U));
                        vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                            = ((0x0000007fU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                               | (0xffffff80U & (((- (IData)(
                                                             (vlSelfRef.__PVT__if_id_bus[0U] 
                                                              >> 0x0000001fU))) 
                                                  << 0x00000012U) 
                                                 | (((0x000007e0U 
                                                      & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                         >> 0x00000014U)) 
                                                     | (0x0000001fU 
                                                        & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                           >> 7U))) 
                                                    << 7U))));
                        vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                            = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                               | (0x0000007fU & ((0x0000007fU 
                                                  & ((- (IData)(
                                                                (vlSelfRef.__PVT__if_id_bus[0U] 
                                                                 >> 0x0000001fU))) 
                                                     >> 0x0000000eU)) 
                                                 | (((0x000007e0U 
                                                      & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                         >> 0x00000014U)) 
                                                     | (0x0000001fU 
                                                        & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                           >> 7U))) 
                                                    >> 0x00000019U))));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = (0x10000000U | (0xe01fffffU 
                                              & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = ((0xfffffc7fU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | (0x00000380U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                 >> 5U)));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = (0x00000800U | vlSelfRef.__PVT__id_ex_bus_decoded[0U]);
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
                            = ((0xffffff83U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                               | (0x0000007cU & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                 >> 5U)));
                        vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                            = ((0x0000007fU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                               | (0xfff80000U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                 << 7U)));
                        vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                            = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                               | (vlSelfRef.__PVT__if_id_bus[0U] 
                                  >> 0x00000019U));
                        vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                            = (0x18000000U | (0xe01fffffU 
                                              & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                    }
                }
            } else if ((2U & vlSelfRef.__PVT__if_id_bus[0U])) {
                if ((1U & vlSelfRef.__PVT__if_id_bus[0U])) {
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = ((0xffffff83U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                           | (0x0000007cU & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 5U)));
                    vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                        = ((0xffffff83U & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                           | (0x0000007cU & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 0x0000000dU)));
                    vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                        = ((0x0000007fU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                           | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                              << 7U));
                    vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                        = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                           | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                              >> 0x00000019U));
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = ((0xe01fffffU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                           | (((5U == (7U & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 0x0000000cU)))
                                ? (0x00000080U | (IData)(vlSelfRef.decode_mod__DOT____VdfgRegularize_h901acc23_0_2))
                                : (0x00000080U | (7U 
                                                  & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                     >> 0x0000000cU)))) 
                              << 0x00000015U));
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
                        = ((0xffffff83U & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                           | (0x0000007cU & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 5U)));
                    vlSelfRef.__PVT__id_ex_bus_decoded[1U] 
                        = ((0xffffff83U & vlSelfRef.__PVT__id_ex_bus_decoded[1U]) 
                           | (0x0000007cU & (vlSelfRef.__PVT__if_id_bus[0U] 
                                             >> 0x0000000dU)));
                    vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                        = ((0x0000007fU & vlSelfRef.__PVT__id_ex_bus_decoded[3U]) 
                           | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                              << 7U));
                    vlSelfRef.__PVT__id_ex_bus_decoded[4U] 
                        = ((0xffffff80U & vlSelfRef.__PVT__id_ex_bus_decoded[4U]) 
                           | (vlSelfRef.__PVT__decode_mod__DOT__imm_i 
                              >> 0x00000019U));
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = (0x10000000U | (0xe01fffffU 
                                          & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = ((0xfffff87fU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]) 
                           | (0xffffff80U & (0x00000400U 
                                             | (0x00000380U 
                                                & (vlSelfRef.__PVT__if_id_bus[0U] 
                                                   >> 5U)))));
                    vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                        = (1U | (0xfffffffcU & vlSelfRef.__PVT__id_ex_bus_decoded[0U]));
                }
            }
        }
    }
    vlSelfRef.__PVT__csr_mod__DOT__working_reg = ((0x0300U 
                                                   == 
                                                   (0x00000fffU 
                                                    & (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                                       >> 7U)))
                                                   ? 2U
                                                   : 
                                                  ((0x0305U 
                                                    == 
                                                    (0x00000fffU 
                                                     & (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                                        >> 7U)))
                                                    ? 4U
                                                    : 
                                                   ((0x0341U 
                                                     == 
                                                     (0x00000fffU 
                                                      & (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 
                                                    ((0x0342U 
                                                      == 
                                                      (0x00000fffU 
                                                       & (vlSelfRef.__PVT__id_ex_bus_decoded[3U] 
                                                          >> 7U)))
                                                      ? 3U
                                                      : 0U))));
    if ((0U != (0x0000001fU & (vlSelfRef.__PVT__id_ex_bus_decoded[0U] 
                               >> 0x0000000cU)))) {
        vlSelfRef.__PVT__csr_mod__DOT__working_reg = 4U;
    }
    vlSelfRef.__PVT__csr_data = vlSelfRef.__PVT__csr_mod__DOT__regs
        [vlSelfRef.__PVT__csr_mod__DOT__working_reg];
}
