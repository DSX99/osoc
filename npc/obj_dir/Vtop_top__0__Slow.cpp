// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(IData/*31:0*/ addr, IData/*31:0*/ &memread__Vfuncrtn);

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___stl_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pc_mod__DOT__next_pc = ((IData)(4U) 
                                             + vlSelfRef.__PVT__pc);
    Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(vlSelfRef.__PVT__pc, vlSelfRef.__Vfunc_ifu_mod__DOT__memread__8__Vfuncout);
    vlSelfRef.__PVT__opcode = vlSelfRef.__Vfunc_ifu_mod__DOT__memread__8__Vfuncout;
    vlSelfRef.__PVT__rd = 0U;
    vlSelfRef.__PVT__mux_select = 0U;
    vlSelfRef.__PVT__lsu_oper = 0U;
    vlSelfRef.__PVT__lsu_we = 0U;
    if ((1U & (~ (vlSelfRef.__PVT__opcode >> 6U)))) {
        if ((0x00000020U & vlSelfRef.__PVT__opcode)) {
            if ((1U & (~ (vlSelfRef.__PVT__opcode >> 4U)))) {
                if ((1U & (~ (vlSelfRef.__PVT__opcode 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.__PVT__opcode)) {
                            if ((1U & vlSelfRef.__PVT__opcode)) {
                                vlSelfRef.__PVT__lsu_oper 
                                    = (7U & (vlSelfRef.__PVT__opcode 
                                             >> 0x0000000cU));
                                vlSelfRef.__PVT__lsu_we = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.__PVT__opcode 
                             >> 4U)))) {
            if ((1U & (~ (vlSelfRef.__PVT__opcode >> 3U)))) {
                if ((1U & (~ (vlSelfRef.__PVT__opcode 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.__PVT__opcode)) {
                        if ((1U & vlSelfRef.__PVT__opcode)) {
                            vlSelfRef.__PVT__lsu_oper 
                                = (7U & (vlSelfRef.__PVT__opcode 
                                         >> 0x0000000cU));
                            vlSelfRef.__PVT__lsu_we = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__decode_mod__DOT__imm_i = (((- (IData)(
                                                           (vlSelfRef.__PVT__opcode 
                                                            >> 0x0000001fU))) 
                                                << 0x0000000bU) 
                                               | (0x000007ffU 
                                                  & (vlSelfRef.__PVT__opcode 
                                                     >> 0x00000014U)));
    vlSelfRef.__PVT__rs1 = 0U;
    vlSelfRef.__PVT__rs2 = 0U;
    vlSelfRef.__PVT__alu_op = 0U;
    vlSelfRef.__PVT__imm = 0U;
    if ((0x00000040U & vlSelfRef.__PVT__opcode)) {
        if ((0x00000020U & vlSelfRef.__PVT__opcode)) {
            if ((0x00000010U & vlSelfRef.__PVT__opcode)) {
                if ((1U & (~ (vlSelfRef.__PVT__opcode 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.__PVT__opcode)) {
                            if ((1U & vlSelfRef.__PVT__opcode)) {
                                vlSelfRef.__PVT__rd 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__opcode 
                                          >> 7U));
                                vlSelfRef.__PVT__rs1 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__opcode 
                                          >> 0x0000000fU));
                                vlSelfRef.__PVT__alu_op 
                                    = (0x000000c0U 
                                       | (7U & (vlSelfRef.__PVT__opcode 
                                                >> 0x0000000cU)));
                                vlSelfRef.__PVT__imm 
                                    = vlSelfRef.__PVT__decode_mod__DOT__imm_i;
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlSelfRef.__PVT__opcode)) {
                    if ((4U & vlSelfRef.__PVT__opcode)) {
                        if ((2U & vlSelfRef.__PVT__opcode)) {
                            if ((1U & vlSelfRef.__PVT__opcode)) {
                                vlSelfRef.__PVT__rd 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__opcode 
                                          >> 7U));
                                vlSelfRef.__PVT__alu_op = 0xd0U;
                                vlSelfRef.__PVT__imm 
                                    = (((- (IData)(
                                                   (vlSelfRef.__PVT__opcode 
                                                    >> 0x0000001fU))) 
                                        << 0x00000014U) 
                                       | ((((0x000001feU 
                                             & (vlSelfRef.__PVT__opcode 
                                                >> 0x0000000bU)) 
                                            | (1U & 
                                               (vlSelfRef.__PVT__opcode 
                                                >> 0x00000014U))) 
                                           << 0x0000000bU) 
                                          | (0x000007feU 
                                             & (vlSelfRef.__PVT__opcode 
                                                >> 0x00000014U))));
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.__PVT__opcode)) {
                    if ((2U & vlSelfRef.__PVT__opcode)) {
                        if ((1U & vlSelfRef.__PVT__opcode)) {
                            vlSelfRef.__PVT__rd = (0x0000001fU 
                                                   & (vlSelfRef.__PVT__opcode 
                                                      >> 7U));
                            vlSelfRef.__PVT__alu_op = 0x90U;
                            vlSelfRef.__PVT__imm = vlSelfRef.__PVT__decode_mod__DOT__imm_i;
                        }
                    }
                } else if ((2U & vlSelfRef.__PVT__opcode)) {
                    if ((1U & vlSelfRef.__PVT__opcode)) {
                        vlSelfRef.__PVT__alu_op = (0x000000d0U 
                                                   | (7U 
                                                      & (vlSelfRef.__PVT__opcode 
                                                         >> 0x0000000cU)));
                        vlSelfRef.__PVT__imm = (((- (IData)(
                                                            (vlSelfRef.__PVT__opcode 
                                                             >> 0x0000001fU))) 
                                                 << 0x0000000cU) 
                                                | ((0x00000800U 
                                                    & (vlSelfRef.__PVT__opcode 
                                                       << 4U)) 
                                                   | ((0x000007e0U 
                                                       & (vlSelfRef.__PVT__opcode 
                                                          >> 0x00000014U)) 
                                                      | (0x0000001eU 
                                                         & (vlSelfRef.__PVT__opcode 
                                                            >> 7U)))));
                    }
                }
                if ((1U & (~ (vlSelfRef.__PVT__opcode 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.__PVT__opcode)) {
                        if ((2U & vlSelfRef.__PVT__opcode)) {
                            if ((1U & vlSelfRef.__PVT__opcode)) {
                                vlSelfRef.__PVT__rs1 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__opcode 
                                          >> 0x0000000fU));
                            }
                        }
                    } else if ((2U & vlSelfRef.__PVT__opcode)) {
                        if ((1U & vlSelfRef.__PVT__opcode)) {
                            vlSelfRef.__PVT__rs1 = 
                                (0x0000001fU & (vlSelfRef.__PVT__opcode 
                                                >> 0x0000000fU));
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.__PVT__opcode >> 4U)))) {
                if ((8U & vlSelfRef.__PVT__opcode)) {
                    if ((4U & vlSelfRef.__PVT__opcode)) {
                        if ((2U & vlSelfRef.__PVT__opcode)) {
                            if ((1U & vlSelfRef.__PVT__opcode)) {
                                vlSelfRef.__PVT__mux_select = 2U;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.__PVT__opcode)) {
                    if ((2U & vlSelfRef.__PVT__opcode)) {
                        if ((1U & vlSelfRef.__PVT__opcode)) {
                            vlSelfRef.__PVT__mux_select = 2U;
                        }
                    }
                }
                if ((1U & (~ (vlSelfRef.__PVT__opcode 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.__PVT__opcode)) {
                            if ((1U & vlSelfRef.__PVT__opcode)) {
                                vlSelfRef.__PVT__rs2 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__opcode 
                                          >> 0x00000014U));
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x00000020U & vlSelfRef.__PVT__opcode)) {
            if ((0x00000010U & vlSelfRef.__PVT__opcode)) {
                if ((1U & (~ (vlSelfRef.__PVT__opcode 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.__PVT__opcode)) {
                        if ((2U & vlSelfRef.__PVT__opcode)) {
                            if ((1U & vlSelfRef.__PVT__opcode)) {
                                vlSelfRef.__PVT__rd 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__opcode 
                                          >> 7U));
                                vlSelfRef.__PVT__alu_op = 0x80U;
                                vlSelfRef.__PVT__imm 
                                    = (0xfffff000U 
                                       & vlSelfRef.__PVT__opcode);
                            }
                        }
                    } else if ((2U & vlSelfRef.__PVT__opcode)) {
                        if ((1U & vlSelfRef.__PVT__opcode)) {
                            vlSelfRef.__PVT__rd = (0x0000001fU 
                                                   & (vlSelfRef.__PVT__opcode 
                                                      >> 7U));
                            vlSelfRef.__PVT__alu_op 
                                = ((0x00000020U & (vlSelfRef.__PVT__opcode 
                                                   >> 0x00000014U)) 
                                   | ((8U & (vlSelfRef.__PVT__opcode 
                                             >> 0x0000001bU)) 
                                      | (7U & (vlSelfRef.__PVT__opcode 
                                               >> 0x0000000cU))));
                        }
                    }
                    if ((1U & (~ (vlSelfRef.__PVT__opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.__PVT__opcode)) {
                            if ((1U & vlSelfRef.__PVT__opcode)) {
                                vlSelfRef.__PVT__rs1 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__opcode 
                                          >> 0x0000000fU));
                                vlSelfRef.__PVT__rs2 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__opcode 
                                          >> 0x00000014U));
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.__PVT__opcode 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelfRef.__PVT__opcode 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.__PVT__opcode)) {
                        if ((1U & vlSelfRef.__PVT__opcode)) {
                            vlSelfRef.__PVT__rs1 = 
                                (0x0000001fU & (vlSelfRef.__PVT__opcode 
                                                >> 0x0000000fU));
                            vlSelfRef.__PVT__rs2 = 
                                (0x0000001fU & (vlSelfRef.__PVT__opcode 
                                                >> 0x00000014U));
                            vlSelfRef.__PVT__alu_op = 0x80U;
                            vlSelfRef.__PVT__imm = 
                                (((- (IData)((vlSelfRef.__PVT__opcode 
                                              >> 0x0000001fU))) 
                                  << 0x0000000bU) | 
                                 ((0x000007e0U & (vlSelfRef.__PVT__opcode 
                                                  >> 0x00000014U)) 
                                  | (0x0000001fU & 
                                     (vlSelfRef.__PVT__opcode 
                                      >> 7U))));
                        }
                    }
                }
            }
        } else if ((0x00000010U & vlSelfRef.__PVT__opcode)) {
            if ((1U & (~ (vlSelfRef.__PVT__opcode >> 3U)))) {
                if ((4U & vlSelfRef.__PVT__opcode)) {
                    if ((2U & vlSelfRef.__PVT__opcode)) {
                        if ((1U & vlSelfRef.__PVT__opcode)) {
                            vlSelfRef.__PVT__rd = (0x0000001fU 
                                                   & (vlSelfRef.__PVT__opcode 
                                                      >> 7U));
                            vlSelfRef.__PVT__alu_op = 0xc0U;
                            vlSelfRef.__PVT__imm = 
                                (0xfffff000U & vlSelfRef.__PVT__opcode);
                        }
                    }
                } else if ((2U & vlSelfRef.__PVT__opcode)) {
                    if ((1U & vlSelfRef.__PVT__opcode)) {
                        vlSelfRef.__PVT__rd = (0x0000001fU 
                                               & (vlSelfRef.__PVT__opcode 
                                                  >> 7U));
                        vlSelfRef.__PVT__alu_op = (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.__PVT__opcode 
                                                        >> 0x0000000cU)))
                                                    ? 
                                                   (0x00000080U 
                                                    | ((8U 
                                                        & (vlSelfRef.__PVT__opcode 
                                                           >> 0x0000001bU)) 
                                                       | (7U 
                                                          & (vlSelfRef.__PVT__opcode 
                                                             >> 0x0000000cU))))
                                                    : 
                                                   (0x00000080U 
                                                    | (7U 
                                                       & (vlSelfRef.__PVT__opcode 
                                                          >> 0x0000000cU))));
                        vlSelfRef.__PVT__imm = vlSelfRef.__PVT__decode_mod__DOT__imm_i;
                    }
                }
                if ((1U & (~ (vlSelfRef.__PVT__opcode 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.__PVT__opcode)) {
                        if ((1U & vlSelfRef.__PVT__opcode)) {
                            vlSelfRef.__PVT__rs1 = 
                                (0x0000001fU & (vlSelfRef.__PVT__opcode 
                                                >> 0x0000000fU));
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.__PVT__opcode 
                             >> 3U)))) {
            if ((1U & (~ (vlSelfRef.__PVT__opcode >> 2U)))) {
                if ((2U & vlSelfRef.__PVT__opcode)) {
                    if ((1U & vlSelfRef.__PVT__opcode)) {
                        vlSelfRef.__PVT__rd = (0x0000001fU 
                                               & (vlSelfRef.__PVT__opcode 
                                                  >> 7U));
                        vlSelfRef.__PVT__rs1 = (0x0000001fU 
                                                & (vlSelfRef.__PVT__opcode 
                                                   >> 0x0000000fU));
                        vlSelfRef.__PVT__alu_op = 0x80U;
                        vlSelfRef.__PVT__imm = vlSelfRef.__PVT__decode_mod__DOT__imm_i;
                    }
                }
            }
        }
        if ((1U & (~ (vlSelfRef.__PVT__opcode >> 5U)))) {
            if ((1U & (~ (vlSelfRef.__PVT__opcode >> 4U)))) {
                if ((1U & (~ (vlSelfRef.__PVT__opcode 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.__PVT__opcode)) {
                            if ((1U & vlSelfRef.__PVT__opcode)) {
                                vlSelfRef.__PVT__mux_select = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_ATTR_COLD void Vtop_top___ctor_var_reset(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->__PVT__to_regs = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15888220903761676845ull);
    vlSelf->__PVT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4211327832146562899ull);
    vlSelf->__PVT__alu_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6029336550601928105ull);
    vlSelf->__PVT__lsu_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9985522375493406559ull);
    vlSelf->__PVT__opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17409787017080135397ull);
    vlSelf->__PVT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17436245599429385641ull);
    vlSelf->__PVT__alu_op = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8715831498092569784ull);
    vlSelf->__PVT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10211807078052224816ull);
    vlSelf->__PVT__rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 392999376545494891ull);
    vlSelf->__PVT__rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10303652599525973633ull);
    vlSelf->__PVT__lsu_oper = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18387852698334561910ull);
    vlSelf->__PVT__mux_select = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17308776668031719110ull);
    vlSelf->__PVT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16985980692193088871ull);
    vlSelf->__PVT__lsu_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14626365765754585692ull);
    vlSelf->__PVT__pc_mod__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3103581620590096924ull);
    vlSelf->__PVT__lsu_mod__DOT__A = 0;
    vlSelf->__PVT__decode_mod__DOT__imm_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17728463912631228713ull);
    vlSelf->__PVT__alu_mod__DOT__val1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3618980885417066799ull);
    vlSelf->__PVT__alu_mod__DOT__val2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5531290321701216620ull);
    vlSelf->__Vfunc_lsu_mod__DOT__memread__0__Vfuncout = 0;
    vlSelf->__Vfunc_lsu_mod__DOT__memread__1__Vfuncout = 0;
    vlSelf->__Vfunc_lsu_mod__DOT__memread__2__Vfuncout = 0;
    vlSelf->__Vfunc_lsu_mod__DOT__memread__3__Vfuncout = 0;
    vlSelf->__Vfunc_lsu_mod__DOT__memread__4__Vfuncout = 0;
    vlSelf->__Vfunc_ifu_mod__DOT__memread__8__Vfuncout = 0;
}
