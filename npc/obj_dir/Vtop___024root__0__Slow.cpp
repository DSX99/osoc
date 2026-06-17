// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("vsrc/top.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtop___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtop___024root___eval_triggers_vec__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

void Vtop___024root____Vdpiimwrap_top__DOT__lsu_mod__DOT__read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__lsu_mod__DOT__write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ idk);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->top__DOT__to_regs = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3167951704428672014ull);
    vlSelf->top__DOT__data_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17216885338985492700ull);
    vlSelf->top__DOT__data_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16362994998334702608ull);
    vlSelf->top__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8764853023528993103ull);
    vlSelf->top__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5748649115500010960ull);
    vlSelf->top__DOT__alu_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13228210308208510599ull);
    vlSelf->top__DOT__lsu_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7553745163096644825ull);
    vlSelf->top__DOT__opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18038668320516294893ull);
    vlSelf->top__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18445623346312568628ull);
    vlSelf->top__DOT__alu_op = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2322472247495052196ull);
    vlSelf->top__DOT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13712195198600804357ull);
    vlSelf->top__DOT__rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4635751753440128890ull);
    vlSelf->top__DOT__rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3328450216708286131ull);
    vlSelf->top__DOT__lsu_oper = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5964727172180010457ull);
    vlSelf->top__DOT__mux_select = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1666837902665619449ull);
    vlSelf->top__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9163301880374970101ull);
    vlSelf->top__DOT__lsu_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10168540513888713496ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__reg_mod__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 894231482910474236ull);
    }
    vlSelf->top__DOT__lsu_mod__DOT__A = 0;
    vlSelf->top__DOT__decode_mod__DOT__imm_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11716380480082372914ull);
    vlSelf->top__DOT__alu_mod__DOT__val1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12550182532126941700ull);
    vlSelf->top__DOT__alu_mod__DOT__val2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4828371088645567971ull);
    vlSelf->__Vfunc_top__DOT__lsu_mod__DOT__read__0__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__lsu_mod__DOT__read__1__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__lsu_mod__DOT__read__2__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__lsu_mod__DOT__read__3__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__lsu_mod__DOT__read__4__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__ifu_mod__DOT__read__8__Vfuncout = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
