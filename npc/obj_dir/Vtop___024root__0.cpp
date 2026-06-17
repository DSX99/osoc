// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

extern "C" void write(int addr, int data, int idk);

void Vtop___024root____Vdpiimwrap_top__DOT__lsu_mod__DOT__write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ idk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__lsu_mod__DOT__write_TOP\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    data__Vcvt = data;
    int idk__Vcvt;
    idk__Vcvt = idk;
    write(addr__Vcvt, data__Vcvt, idk__Vcvt);
}

extern "C" int read(int addr);

void Vtop___024root____Vdpiimwrap_top__DOT__lsu_mod__DOT__read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__lsu_mod__DOT__read_TOP\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int read__Vfuncrtn__Vcvt;
    read__Vfuncrtn__Vcvt = read(addr__Vcvt);
    read__Vfuncrtn = (read__Vfuncrtn__Vcvt);
}

void Vtop___024root___eval_triggers_vec__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlySet__top__DOT__reg_mod__DOT__regs__v0;
    __VdlySet__top__DOT__reg_mod__DOT__regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__reg_mod__DOT__regs__v32;
    __VdlyVal__top__DOT__reg_mod__DOT__regs__v32 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__reg_mod__DOT__regs__v32;
    __VdlyDim0__top__DOT__reg_mod__DOT__regs__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__reg_mod__DOT__regs__v32;
    __VdlySet__top__DOT__reg_mod__DOT__regs__v32 = 0;
    // Body
    __VdlySet__top__DOT__reg_mod__DOT__regs__v0 = 0U;
    __VdlySet__top__DOT__reg_mod__DOT__regs__v32 = 0U;
    if (vlSelfRef.rst) {
        __VdlySet__top__DOT__reg_mod__DOT__regs__v0 = 1U;
        vlSelfRef.top__DOT__pc = 0x80000000U;
    } else {
        __VdlyVal__top__DOT__reg_mod__DOT__regs__v32 
            = vlSelfRef.top__DOT__to_regs;
        __VdlyDim0__top__DOT__reg_mod__DOT__regs__v32 
            = vlSelfRef.top__DOT__rd;
        __VdlySet__top__DOT__reg_mod__DOT__regs__v32 = 1U;
        vlSelfRef.top__DOT__pc = vlSelfRef.top__DOT__next_pc;
        if (vlSelfRef.top__DOT__branch) {
            vlSelfRef.top__DOT__pc = vlSelfRef.top__DOT__alu_out;
        }
    }
    if (__VdlySet__top__DOT__reg_mod__DOT__regs__v0) {
        vlSelfRef.top__DOT__reg_mod__DOT__regs[0U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[1U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[2U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[3U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[4U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[5U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[6U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[7U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[8U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[9U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[10U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[11U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[12U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[13U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[14U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[15U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[16U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[17U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[18U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[19U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[20U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[21U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[22U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[23U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[24U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[25U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[26U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[27U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[28U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[29U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[30U] = 0U;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[31U] = 0U;
    }
    if (__VdlySet__top__DOT__reg_mod__DOT__regs__v32) {
        vlSelfRef.top__DOT__reg_mod__DOT__regs[__VdlyDim0__top__DOT__reg_mod__DOT__regs__v32] 
            = __VdlyVal__top__DOT__reg_mod__DOT__regs__v32;
        vlSelfRef.top__DOT__reg_mod__DOT__regs[0U] = 0U;
    }
    vlSelfRef.top__DOT__next_pc = ((IData)(4U) + vlSelfRef.top__DOT__pc);
    Vtop___024root____Vdpiimwrap_top__DOT__lsu_mod__DOT__read_TOP(vlSelfRef.top__DOT__pc, vlSelfRef.__Vfunc_top__DOT__ifu_mod__DOT__read__8__Vfuncout);
    vlSelfRef.top__DOT__opcode = vlSelfRef.__Vfunc_top__DOT__ifu_mod__DOT__read__8__Vfuncout;
    vlSelfRef.top__DOT__rd = 0U;
    vlSelfRef.top__DOT__mux_select = 0U;
    vlSelfRef.top__DOT__lsu_oper = 0U;
    vlSelfRef.top__DOT__lsu_we = 0U;
    if ((1U & (~ (vlSelfRef.top__DOT__opcode >> 6U)))) {
        if ((0x00000020U & vlSelfRef.top__DOT__opcode)) {
            if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.top__DOT__opcode)) {
                            if ((1U & vlSelfRef.top__DOT__opcode)) {
                                vlSelfRef.top__DOT__lsu_oper 
                                    = (7U & (vlSelfRef.top__DOT__opcode 
                                             >> 0x0000000cU));
                                vlSelfRef.top__DOT__lsu_we = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                             >> 4U)))) {
            if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.top__DOT__opcode)) {
                        if ((1U & vlSelfRef.top__DOT__opcode)) {
                            vlSelfRef.top__DOT__lsu_oper 
                                = (7U & (vlSelfRef.top__DOT__opcode 
                                         >> 0x0000000cU));
                            vlSelfRef.top__DOT__lsu_we = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.top__DOT__decode_mod__DOT__imm_i = ((
                                                   (- (IData)(
                                                              (vlSelfRef.top__DOT__opcode 
                                                               >> 0x0000001fU))) 
                                                   << 0x0000000bU) 
                                                  | (0x000007ffU 
                                                     & (vlSelfRef.top__DOT__opcode 
                                                        >> 0x00000014U)));
    vlSelfRef.top__DOT__rs1 = 0U;
    vlSelfRef.top__DOT__rs2 = 0U;
    vlSelfRef.top__DOT__alu_op = 0U;
    vlSelfRef.top__DOT__imm = 0U;
    if ((0x00000040U & vlSelfRef.top__DOT__opcode)) {
        if ((0x00000020U & vlSelfRef.top__DOT__opcode)) {
            if ((0x00000010U & vlSelfRef.top__DOT__opcode)) {
                if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.top__DOT__opcode)) {
                            if ((1U & vlSelfRef.top__DOT__opcode)) {
                                vlSelfRef.top__DOT__rd 
                                    = (0x0000001fU 
                                       & (vlSelfRef.top__DOT__opcode 
                                          >> 7U));
                                vlSelfRef.top__DOT__rs1 
                                    = (0x0000001fU 
                                       & (vlSelfRef.top__DOT__opcode 
                                          >> 0x0000000fU));
                                vlSelfRef.top__DOT__alu_op 
                                    = (0x000000c0U 
                                       | (7U & (vlSelfRef.top__DOT__opcode 
                                                >> 0x0000000cU)));
                                vlSelfRef.top__DOT__imm 
                                    = vlSelfRef.top__DOT__decode_mod__DOT__imm_i;
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlSelfRef.top__DOT__opcode)) {
                    if ((4U & vlSelfRef.top__DOT__opcode)) {
                        if ((2U & vlSelfRef.top__DOT__opcode)) {
                            if ((1U & vlSelfRef.top__DOT__opcode)) {
                                vlSelfRef.top__DOT__rd 
                                    = (0x0000001fU 
                                       & (vlSelfRef.top__DOT__opcode 
                                          >> 7U));
                                vlSelfRef.top__DOT__alu_op = 0xd0U;
                                vlSelfRef.top__DOT__imm 
                                    = (((- (IData)(
                                                   (vlSelfRef.top__DOT__opcode 
                                                    >> 0x0000001fU))) 
                                        << 0x00000014U) 
                                       | ((((0x000001feU 
                                             & (vlSelfRef.top__DOT__opcode 
                                                >> 0x0000000bU)) 
                                            | (1U & 
                                               (vlSelfRef.top__DOT__opcode 
                                                >> 0x00000014U))) 
                                           << 0x0000000bU) 
                                          | (0x000007feU 
                                             & (vlSelfRef.top__DOT__opcode 
                                                >> 0x00000014U))));
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.top__DOT__opcode)) {
                    if ((2U & vlSelfRef.top__DOT__opcode)) {
                        if ((1U & vlSelfRef.top__DOT__opcode)) {
                            vlSelfRef.top__DOT__rd 
                                = (0x0000001fU & (vlSelfRef.top__DOT__opcode 
                                                  >> 7U));
                            vlSelfRef.top__DOT__alu_op = 0x90U;
                            vlSelfRef.top__DOT__imm 
                                = vlSelfRef.top__DOT__decode_mod__DOT__imm_i;
                        }
                    }
                } else if ((2U & vlSelfRef.top__DOT__opcode)) {
                    if ((1U & vlSelfRef.top__DOT__opcode)) {
                        vlSelfRef.top__DOT__alu_op 
                            = (0x000000d0U | (7U & 
                                              (vlSelfRef.top__DOT__opcode 
                                               >> 0x0000000cU)));
                        vlSelfRef.top__DOT__imm = (
                                                   ((- (IData)(
                                                               (vlSelfRef.top__DOT__opcode 
                                                                >> 0x0000001fU))) 
                                                    << 0x0000000cU) 
                                                   | ((0x00000800U 
                                                       & (vlSelfRef.top__DOT__opcode 
                                                          << 4U)) 
                                                      | ((0x000007e0U 
                                                          & (vlSelfRef.top__DOT__opcode 
                                                             >> 0x00000014U)) 
                                                         | (0x0000001eU 
                                                            & (vlSelfRef.top__DOT__opcode 
                                                               >> 7U)))));
                    }
                }
                if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.top__DOT__opcode)) {
                        if ((2U & vlSelfRef.top__DOT__opcode)) {
                            if ((1U & vlSelfRef.top__DOT__opcode)) {
                                vlSelfRef.top__DOT__rs1 
                                    = (0x0000001fU 
                                       & (vlSelfRef.top__DOT__opcode 
                                          >> 0x0000000fU));
                            }
                        }
                    } else if ((2U & vlSelfRef.top__DOT__opcode)) {
                        if ((1U & vlSelfRef.top__DOT__opcode)) {
                            vlSelfRef.top__DOT__rs1 
                                = (0x0000001fU & (vlSelfRef.top__DOT__opcode 
                                                  >> 0x0000000fU));
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                          >> 4U)))) {
                if ((8U & vlSelfRef.top__DOT__opcode)) {
                    if ((4U & vlSelfRef.top__DOT__opcode)) {
                        if ((2U & vlSelfRef.top__DOT__opcode)) {
                            if ((1U & vlSelfRef.top__DOT__opcode)) {
                                vlSelfRef.top__DOT__mux_select = 2U;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.top__DOT__opcode)) {
                    if ((2U & vlSelfRef.top__DOT__opcode)) {
                        if ((1U & vlSelfRef.top__DOT__opcode)) {
                            vlSelfRef.top__DOT__mux_select = 2U;
                        }
                    }
                }
                if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.top__DOT__opcode)) {
                            if ((1U & vlSelfRef.top__DOT__opcode)) {
                                vlSelfRef.top__DOT__rs2 
                                    = (0x0000001fU 
                                       & (vlSelfRef.top__DOT__opcode 
                                          >> 0x00000014U));
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x00000020U & vlSelfRef.top__DOT__opcode)) {
            if ((0x00000010U & vlSelfRef.top__DOT__opcode)) {
                if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.top__DOT__opcode)) {
                        if ((2U & vlSelfRef.top__DOT__opcode)) {
                            if ((1U & vlSelfRef.top__DOT__opcode)) {
                                vlSelfRef.top__DOT__rd 
                                    = (0x0000001fU 
                                       & (vlSelfRef.top__DOT__opcode 
                                          >> 7U));
                                vlSelfRef.top__DOT__alu_op = 0x80U;
                                vlSelfRef.top__DOT__imm 
                                    = (0xfffff000U 
                                       & vlSelfRef.top__DOT__opcode);
                            }
                        }
                    } else if ((2U & vlSelfRef.top__DOT__opcode)) {
                        if ((1U & vlSelfRef.top__DOT__opcode)) {
                            vlSelfRef.top__DOT__rd 
                                = (0x0000001fU & (vlSelfRef.top__DOT__opcode 
                                                  >> 7U));
                            vlSelfRef.top__DOT__alu_op 
                                = ((0x00000020U & (vlSelfRef.top__DOT__opcode 
                                                   >> 0x00000014U)) 
                                   | ((8U & (vlSelfRef.top__DOT__opcode 
                                             >> 0x0000001bU)) 
                                      | (7U & (vlSelfRef.top__DOT__opcode 
                                               >> 0x0000000cU))));
                        }
                    }
                    if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.top__DOT__opcode)) {
                            if ((1U & vlSelfRef.top__DOT__opcode)) {
                                vlSelfRef.top__DOT__rs1 
                                    = (0x0000001fU 
                                       & (vlSelfRef.top__DOT__opcode 
                                          >> 0x0000000fU));
                                vlSelfRef.top__DOT__rs2 
                                    = (0x0000001fU 
                                       & (vlSelfRef.top__DOT__opcode 
                                          >> 0x00000014U));
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.top__DOT__opcode)) {
                        if ((1U & vlSelfRef.top__DOT__opcode)) {
                            vlSelfRef.top__DOT__rs1 
                                = (0x0000001fU & (vlSelfRef.top__DOT__opcode 
                                                  >> 0x0000000fU));
                            vlSelfRef.top__DOT__rs2 
                                = (0x0000001fU & (vlSelfRef.top__DOT__opcode 
                                                  >> 0x00000014U));
                            vlSelfRef.top__DOT__alu_op = 0x80U;
                            vlSelfRef.top__DOT__imm 
                                = (((- (IData)((vlSelfRef.top__DOT__opcode 
                                                >> 0x0000001fU))) 
                                    << 0x0000000bU) 
                                   | ((0x000007e0U 
                                       & (vlSelfRef.top__DOT__opcode 
                                          >> 0x00000014U)) 
                                      | (0x0000001fU 
                                         & (vlSelfRef.top__DOT__opcode 
                                            >> 7U))));
                        }
                    }
                }
            }
        } else if ((0x00000010U & vlSelfRef.top__DOT__opcode)) {
            if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                          >> 3U)))) {
                if ((4U & vlSelfRef.top__DOT__opcode)) {
                    if ((2U & vlSelfRef.top__DOT__opcode)) {
                        if ((1U & vlSelfRef.top__DOT__opcode)) {
                            vlSelfRef.top__DOT__rd 
                                = (0x0000001fU & (vlSelfRef.top__DOT__opcode 
                                                  >> 7U));
                            vlSelfRef.top__DOT__alu_op = 0xc0U;
                            vlSelfRef.top__DOT__imm 
                                = (0xfffff000U & vlSelfRef.top__DOT__opcode);
                        }
                    }
                } else if ((2U & vlSelfRef.top__DOT__opcode)) {
                    if ((1U & vlSelfRef.top__DOT__opcode)) {
                        vlSelfRef.top__DOT__rd = (0x0000001fU 
                                                  & (vlSelfRef.top__DOT__opcode 
                                                     >> 7U));
                        vlSelfRef.top__DOT__alu_op 
                            = ((5U == (7U & (vlSelfRef.top__DOT__opcode 
                                             >> 0x0000000cU)))
                                ? (0x00000080U | ((8U 
                                                   & (vlSelfRef.top__DOT__opcode 
                                                      >> 0x0000001bU)) 
                                                  | (7U 
                                                     & (vlSelfRef.top__DOT__opcode 
                                                        >> 0x0000000cU))))
                                : (0x00000080U | (7U 
                                                  & (vlSelfRef.top__DOT__opcode 
                                                     >> 0x0000000cU))));
                        vlSelfRef.top__DOT__imm = vlSelfRef.top__DOT__decode_mod__DOT__imm_i;
                    }
                }
                if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.top__DOT__opcode)) {
                        if ((1U & vlSelfRef.top__DOT__opcode)) {
                            vlSelfRef.top__DOT__rs1 
                                = (0x0000001fU & (vlSelfRef.top__DOT__opcode 
                                                  >> 0x0000000fU));
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                             >> 3U)))) {
            if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                          >> 2U)))) {
                if ((2U & vlSelfRef.top__DOT__opcode)) {
                    if ((1U & vlSelfRef.top__DOT__opcode)) {
                        vlSelfRef.top__DOT__rd = (0x0000001fU 
                                                  & (vlSelfRef.top__DOT__opcode 
                                                     >> 7U));
                        vlSelfRef.top__DOT__rs1 = (0x0000001fU 
                                                   & (vlSelfRef.top__DOT__opcode 
                                                      >> 0x0000000fU));
                        vlSelfRef.top__DOT__alu_op = 0x80U;
                        vlSelfRef.top__DOT__imm = vlSelfRef.top__DOT__decode_mod__DOT__imm_i;
                    }
                }
            }
        }
        if ((1U & (~ (vlSelfRef.top__DOT__opcode >> 5U)))) {
            if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.top__DOT__opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.top__DOT__opcode)) {
                            if ((1U & vlSelfRef.top__DOT__opcode)) {
                                vlSelfRef.top__DOT__mux_select = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.top__DOT__data_rs1 = vlSelfRef.top__DOT__reg_mod__DOT__regs
        [vlSelfRef.top__DOT__rs1];
    vlSelfRef.top__DOT__data_rs2 = vlSelfRef.top__DOT__reg_mod__DOT__regs
        [vlSelfRef.top__DOT__rs2];
    vlSelfRef.top__DOT__alu_mod__DOT__val1 = ((0x00000080U 
                                               & (IData)(vlSelfRef.top__DOT__alu_op))
                                               ? vlSelfRef.top__DOT__pc
                                               : vlSelfRef.top__DOT__data_rs1);
    if ((0U != (3U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                      >> 4U)))) {
        if ((1U == (3U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                          >> 4U)))) {
            vlSelfRef.top__DOT__branch = 0U;
            if ((0U == (7U & (IData)(vlSelfRef.top__DOT__alu_op)))) {
                vlSelfRef.top__DOT__branch = (vlSelfRef.top__DOT__data_rs1 
                                              == vlSelfRef.top__DOT__data_rs2);
            } else if ((1U == (7U & (IData)(vlSelfRef.top__DOT__alu_op)))) {
                vlSelfRef.top__DOT__branch = (vlSelfRef.top__DOT__data_rs1 
                                              != vlSelfRef.top__DOT__data_rs2);
            } else if ((4U == (7U & (IData)(vlSelfRef.top__DOT__alu_op)))) {
                vlSelfRef.top__DOT__branch = VL_LTS_III(32, vlSelfRef.top__DOT__data_rs1, vlSelfRef.top__DOT__data_rs2);
            } else if ((5U == (7U & (IData)(vlSelfRef.top__DOT__alu_op)))) {
                vlSelfRef.top__DOT__branch = VL_GTES_III(32, vlSelfRef.top__DOT__data_rs1, vlSelfRef.top__DOT__data_rs2);
            } else if ((6U == (7U & (IData)(vlSelfRef.top__DOT__alu_op)))) {
                vlSelfRef.top__DOT__branch = (vlSelfRef.top__DOT__data_rs1 
                                              < vlSelfRef.top__DOT__data_rs2);
            } else if ((7U == (7U & (IData)(vlSelfRef.top__DOT__alu_op)))) {
                vlSelfRef.top__DOT__branch = (vlSelfRef.top__DOT__data_rs1 
                                              >= vlSelfRef.top__DOT__data_rs2);
            }
        }
    }
    vlSelfRef.top__DOT__alu_mod__DOT__val2 = ((0x00000040U 
                                               & (IData)(vlSelfRef.top__DOT__alu_op))
                                               ? vlSelfRef.top__DOT__imm
                                               : vlSelfRef.top__DOT__data_rs2);
    vlSelfRef.top__DOT__alu_out = 0U;
    if ((0U == (3U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                      >> 4U)))) {
        if (((((((((0U == (7U & (IData)(vlSelfRef.top__DOT__alu_op))) 
                   | (1U == (7U & (IData)(vlSelfRef.top__DOT__alu_op)))) 
                  | (2U == (7U & (IData)(vlSelfRef.top__DOT__alu_op)))) 
                 | (3U == (7U & (IData)(vlSelfRef.top__DOT__alu_op)))) 
                | (4U == (7U & (IData)(vlSelfRef.top__DOT__alu_op)))) 
               | (5U == (7U & (IData)(vlSelfRef.top__DOT__alu_op)))) 
              | (6U == (7U & (IData)(vlSelfRef.top__DOT__alu_op)))) 
             | (7U == (7U & (IData)(vlSelfRef.top__DOT__alu_op))))) {
            vlSelfRef.top__DOT__alu_out = ((0U == (7U 
                                                   & (IData)(vlSelfRef.top__DOT__alu_op)))
                                            ? ((8U 
                                                & (IData)(vlSelfRef.top__DOT__alu_op))
                                                ? (vlSelfRef.top__DOT__alu_mod__DOT__val1 
                                                   - vlSelfRef.top__DOT__alu_mod__DOT__val2)
                                                : (vlSelfRef.top__DOT__alu_mod__DOT__val1 
                                                   + vlSelfRef.top__DOT__alu_mod__DOT__val2))
                                            : ((1U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelfRef.top__DOT__alu_op)))
                                                ? (vlSelfRef.top__DOT__alu_mod__DOT__val1 
                                                   << 
                                                   (0x0000001fU 
                                                    & vlSelfRef.top__DOT__alu_mod__DOT__val2))
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelfRef.top__DOT__alu_op)))
                                                    ? 
                                                   VL_LTS_III(32, vlSelfRef.top__DOT__alu_mod__DOT__val1, vlSelfRef.top__DOT__alu_mod__DOT__val2)
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelfRef.top__DOT__alu_op)))
                                                     ? 
                                                    (vlSelfRef.top__DOT__alu_mod__DOT__val1 
                                                     < vlSelfRef.top__DOT__alu_mod__DOT__val2)
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelfRef.top__DOT__alu_op)))
                                                      ? 
                                                     (vlSelfRef.top__DOT__alu_mod__DOT__val1 
                                                      ^ vlSelfRef.top__DOT__alu_mod__DOT__val2)
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelfRef.top__DOT__alu_op)))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.top__DOT__alu_op))
                                                        ? 
                                                       (vlSelfRef.top__DOT__alu_mod__DOT__val1 
                                                        >> 
                                                        (0x0000001fU 
                                                         & vlSelfRef.top__DOT__alu_mod__DOT__val2))
                                                        : 
                                                       (vlSelfRef.top__DOT__alu_mod__DOT__val1 
                                                        >> 
                                                        (0x0000001fU 
                                                         & vlSelfRef.top__DOT__alu_mod__DOT__val2)))
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelfRef.top__DOT__alu_op)))
                                                        ? 
                                                       (vlSelfRef.top__DOT__alu_mod__DOT__val1 
                                                        | vlSelfRef.top__DOT__alu_mod__DOT__val2)
                                                        : 
                                                       (vlSelfRef.top__DOT__alu_mod__DOT__val1 
                                                        & vlSelfRef.top__DOT__alu_mod__DOT__val2))))))));
        }
    } else if ((1U == (3U & ((IData)(vlSelfRef.top__DOT__alu_op) 
                             >> 4U)))) {
        vlSelfRef.top__DOT__alu_out = (vlSelfRef.top__DOT__alu_mod__DOT__val1 
                                       + vlSelfRef.top__DOT__alu_mod__DOT__val2);
    }
    vlSelfRef.top__DOT__lsu_out = 0U;
    if (vlSelfRef.top__DOT__lsu_we) {
        if (((((((((0U == (IData)(vlSelfRef.top__DOT__lsu_oper)) 
                   | (1U == (IData)(vlSelfRef.top__DOT__lsu_oper))) 
                  | (2U == (IData)(vlSelfRef.top__DOT__lsu_oper))) 
                 | (3U == (IData)(vlSelfRef.top__DOT__lsu_oper))) 
                | (4U == (IData)(vlSelfRef.top__DOT__lsu_oper))) 
               | (5U == (IData)(vlSelfRef.top__DOT__lsu_oper))) 
              | (6U == (IData)(vlSelfRef.top__DOT__lsu_oper))) 
             | (7U == (IData)(vlSelfRef.top__DOT__lsu_oper)))) {
            if ((0U == (IData)(vlSelfRef.top__DOT__lsu_oper))) {
                Vtop___024root____Vdpiimwrap_top__DOT__lsu_mod__DOT__read_TOP(vlSelfRef.top__DOT__alu_out, vlSelfRef.__Vfunc_top__DOT__lsu_mod__DOT__read__0__Vfuncout);
                vlSelfRef.top__DOT__lsu_mod__DOT__A 
                    = vlSelfRef.__Vfunc_top__DOT__lsu_mod__DOT__read__0__Vfuncout;
                vlSelfRef.top__DOT__lsu_out = (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.top__DOT__lsu_mod__DOT__A 
                                                               >> 7U)))) 
                                                << 8U) 
                                               | (0x000000ffU 
                                                  & vlSelfRef.top__DOT__lsu_mod__DOT__A));
            } else if ((1U == (IData)(vlSelfRef.top__DOT__lsu_oper))) {
                Vtop___024root____Vdpiimwrap_top__DOT__lsu_mod__DOT__read_TOP(vlSelfRef.top__DOT__alu_out, vlSelfRef.__Vfunc_top__DOT__lsu_mod__DOT__read__1__Vfuncout);
                vlSelfRef.top__DOT__lsu_mod__DOT__A 
                    = vlSelfRef.__Vfunc_top__DOT__lsu_mod__DOT__read__1__Vfuncout;
                vlSelfRef.top__DOT__lsu_out = (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.top__DOT__lsu_mod__DOT__A 
                                                               >> 0x0fU)))) 
                                                << 0x00000010U) 
                                               | (0x0000ffffU 
                                                  & vlSelfRef.top__DOT__lsu_mod__DOT__A));
            } else if ((2U == (IData)(vlSelfRef.top__DOT__lsu_oper))) {
                Vtop___024root____Vdpiimwrap_top__DOT__lsu_mod__DOT__read_TOP(vlSelfRef.top__DOT__alu_out, vlSelfRef.__Vfunc_top__DOT__lsu_mod__DOT__read__2__Vfuncout);
                vlSelfRef.top__DOT__lsu_mod__DOT__A 
                    = vlSelfRef.__Vfunc_top__DOT__lsu_mod__DOT__read__2__Vfuncout;
                vlSelfRef.top__DOT__lsu_out = vlSelfRef.top__DOT__lsu_mod__DOT__A;
            } else if ((3U == (IData)(vlSelfRef.top__DOT__lsu_oper))) {
                Vtop___024root____Vdpiimwrap_top__DOT__lsu_mod__DOT__read_TOP(vlSelfRef.top__DOT__alu_out, vlSelfRef.__Vfunc_top__DOT__lsu_mod__DOT__read__3__Vfuncout);
                vlSelfRef.top__DOT__lsu_mod__DOT__A 
                    = vlSelfRef.__Vfunc_top__DOT__lsu_mod__DOT__read__3__Vfuncout;
                vlSelfRef.top__DOT__lsu_out = (0x000000ffU 
                                               & vlSelfRef.top__DOT__lsu_mod__DOT__A);
            } else if ((4U == (IData)(vlSelfRef.top__DOT__lsu_oper))) {
                Vtop___024root____Vdpiimwrap_top__DOT__lsu_mod__DOT__read_TOP(vlSelfRef.top__DOT__alu_out, vlSelfRef.__Vfunc_top__DOT__lsu_mod__DOT__read__4__Vfuncout);
                vlSelfRef.top__DOT__lsu_mod__DOT__A 
                    = vlSelfRef.__Vfunc_top__DOT__lsu_mod__DOT__read__4__Vfuncout;
                vlSelfRef.top__DOT__lsu_out = (0x0000ffffU 
                                               & vlSelfRef.top__DOT__lsu_mod__DOT__A);
            } else if ((5U == (IData)(vlSelfRef.top__DOT__lsu_oper))) {
                Vtop___024root____Vdpiimwrap_top__DOT__lsu_mod__DOT__write_TOP(vlSelfRef.top__DOT__alu_out, vlSelfRef.top__DOT__data_rs2, 0U);
            } else if ((6U == (IData)(vlSelfRef.top__DOT__lsu_oper))) {
                Vtop___024root____Vdpiimwrap_top__DOT__lsu_mod__DOT__write_TOP(vlSelfRef.top__DOT__alu_out, vlSelfRef.top__DOT__data_rs2, 1U);
            } else {
                Vtop___024root____Vdpiimwrap_top__DOT__lsu_mod__DOT__write_TOP(vlSelfRef.top__DOT__alu_out, vlSelfRef.top__DOT__data_rs2, 2U);
            }
        }
    }
    vlSelfRef.top__DOT__to_regs = 0U;
    if ((0U == (IData)(vlSelfRef.top__DOT__mux_select))) {
        vlSelfRef.top__DOT__to_regs = vlSelfRef.top__DOT__alu_out;
    } else if ((1U == (IData)(vlSelfRef.top__DOT__mux_select))) {
        vlSelfRef.top__DOT__to_regs = vlSelfRef.top__DOT__lsu_out;
    } else if ((2U == (IData)(vlSelfRef.top__DOT__mux_select))) {
        vlSelfRef.top__DOT__to_regs = ((IData)(4U) 
                                       + vlSelfRef.top__DOT__pc);
    }
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("vsrc/top.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("vsrc/top.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
}
#endif  // VL_DEBUG
