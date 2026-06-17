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
    vlSelfRef.__PVT__alu_mod__DOT__val1 = ((0x00000080U 
                                            & (IData)(vlSelfRef.__PVT__alu_op))
                                            ? vlSelfRef.__PVT__pc
                                            : vlSymsp->TOP__top__reg_mod.__PVT__data_rs1);
    if ((0U != (3U & ((IData)(vlSelfRef.__PVT__alu_op) 
                      >> 4U)))) {
        if ((1U == (3U & ((IData)(vlSelfRef.__PVT__alu_op) 
                          >> 4U)))) {
            vlSelfRef.__PVT__branch = 0U;
            if ((0U == (7U & (IData)(vlSelfRef.__PVT__alu_op)))) {
                vlSelfRef.__PVT__branch = (vlSymsp->TOP__top__reg_mod.__PVT__data_rs1 
                                           == vlSymsp->TOP__top__reg_mod.__PVT__data_rs2);
            } else if ((1U == (7U & (IData)(vlSelfRef.__PVT__alu_op)))) {
                vlSelfRef.__PVT__branch = (vlSymsp->TOP__top__reg_mod.__PVT__data_rs1 
                                           != vlSymsp->TOP__top__reg_mod.__PVT__data_rs2);
            } else if ((4U == (7U & (IData)(vlSelfRef.__PVT__alu_op)))) {
                vlSelfRef.__PVT__branch = VL_LTS_III(32, vlSymsp->TOP__top__reg_mod.__PVT__data_rs1, vlSymsp->TOP__top__reg_mod.__PVT__data_rs2);
            } else if ((5U == (7U & (IData)(vlSelfRef.__PVT__alu_op)))) {
                vlSelfRef.__PVT__branch = VL_GTES_III(32, vlSymsp->TOP__top__reg_mod.__PVT__data_rs1, vlSymsp->TOP__top__reg_mod.__PVT__data_rs2);
            } else if ((6U == (7U & (IData)(vlSelfRef.__PVT__alu_op)))) {
                vlSelfRef.__PVT__branch = (vlSymsp->TOP__top__reg_mod.__PVT__data_rs1 
                                           < vlSymsp->TOP__top__reg_mod.__PVT__data_rs2);
            } else if ((7U == (7U & (IData)(vlSelfRef.__PVT__alu_op)))) {
                vlSelfRef.__PVT__branch = (vlSymsp->TOP__top__reg_mod.__PVT__data_rs1 
                                           >= vlSymsp->TOP__top__reg_mod.__PVT__data_rs2);
            }
        }
    }
    vlSelfRef.__PVT__alu_mod__DOT__val2 = ((0x00000040U 
                                            & (IData)(vlSelfRef.__PVT__alu_op))
                                            ? vlSelfRef.__PVT__imm
                                            : vlSymsp->TOP__top__reg_mod.__PVT__data_rs2);
    vlSelfRef.__PVT__alu_out = 0U;
    if ((0U == (3U & ((IData)(vlSelfRef.__PVT__alu_op) 
                      >> 4U)))) {
        if (((((((((0U == (7U & (IData)(vlSelfRef.__PVT__alu_op))) 
                   | (1U == (7U & (IData)(vlSelfRef.__PVT__alu_op)))) 
                  | (2U == (7U & (IData)(vlSelfRef.__PVT__alu_op)))) 
                 | (3U == (7U & (IData)(vlSelfRef.__PVT__alu_op)))) 
                | (4U == (7U & (IData)(vlSelfRef.__PVT__alu_op)))) 
               | (5U == (7U & (IData)(vlSelfRef.__PVT__alu_op)))) 
              | (6U == (7U & (IData)(vlSelfRef.__PVT__alu_op)))) 
             | (7U == (7U & (IData)(vlSelfRef.__PVT__alu_op))))) {
            vlSelfRef.__PVT__alu_out = ((0U == (7U 
                                                & (IData)(vlSelfRef.__PVT__alu_op)))
                                         ? ((8U & (IData)(vlSelfRef.__PVT__alu_op))
                                             ? (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                - vlSelfRef.__PVT__alu_mod__DOT__val2)
                                             : (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                + vlSelfRef.__PVT__alu_mod__DOT__val2))
                                         : ((1U == 
                                             (7U & (IData)(vlSelfRef.__PVT__alu_op)))
                                             ? (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                << 
                                                (0x0000001fU 
                                                 & vlSelfRef.__PVT__alu_mod__DOT__val2))
                                             : ((2U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelfRef.__PVT__alu_op)))
                                                 ? 
                                                VL_LTS_III(32, vlSelfRef.__PVT__alu_mod__DOT__val1, vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                 : 
                                                ((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelfRef.__PVT__alu_op)))
                                                  ? 
                                                 (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                  < vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.__PVT__alu_op)))
                                                   ? 
                                                  (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                   ^ vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelfRef.__PVT__alu_op)))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.__PVT__alu_op))
                                                     ? 
                                                    (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                     >> 
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
                                                      & (IData)(vlSelfRef.__PVT__alu_op)))
                                                     ? 
                                                    (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                     | vlSelfRef.__PVT__alu_mod__DOT__val2)
                                                     : 
                                                    (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                                     & vlSelfRef.__PVT__alu_mod__DOT__val2))))))));
        }
    } else if ((1U == (3U & ((IData)(vlSelfRef.__PVT__alu_op) 
                             >> 4U)))) {
        vlSelfRef.__PVT__alu_out = (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                    + vlSelfRef.__PVT__alu_mod__DOT__val2);
    }
    vlSelfRef.__PVT__lsu_out = 0U;
    if (vlSelfRef.__PVT__lsu_we) {
        if (((((((((0U == (IData)(vlSelfRef.__PVT__lsu_oper)) 
                   | (1U == (IData)(vlSelfRef.__PVT__lsu_oper))) 
                  | (2U == (IData)(vlSelfRef.__PVT__lsu_oper))) 
                 | (3U == (IData)(vlSelfRef.__PVT__lsu_oper))) 
                | (4U == (IData)(vlSelfRef.__PVT__lsu_oper))) 
               | (5U == (IData)(vlSelfRef.__PVT__lsu_oper))) 
              | (6U == (IData)(vlSelfRef.__PVT__lsu_oper))) 
             | (7U == (IData)(vlSelfRef.__PVT__lsu_oper)))) {
            if ((0U == (IData)(vlSelfRef.__PVT__lsu_oper))) {
                Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(vlSelfRef.__PVT__alu_out, vlSelfRef.__Vfunc_lsu_mod__DOT__memread__0__Vfuncout);
                vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__0__Vfuncout;
                vlSelfRef.__PVT__lsu_out = (((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.__PVT__lsu_mod__DOT__A 
                                                            >> 7U)))) 
                                             << 8U) 
                                            | (0x000000ffU 
                                               & vlSelfRef.__PVT__lsu_mod__DOT__A));
            } else if ((1U == (IData)(vlSelfRef.__PVT__lsu_oper))) {
                Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(vlSelfRef.__PVT__alu_out, vlSelfRef.__Vfunc_lsu_mod__DOT__memread__1__Vfuncout);
                vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__1__Vfuncout;
                vlSelfRef.__PVT__lsu_out = (((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.__PVT__lsu_mod__DOT__A 
                                                            >> 0x0fU)))) 
                                             << 0x00000010U) 
                                            | (0x0000ffffU 
                                               & vlSelfRef.__PVT__lsu_mod__DOT__A));
            } else if ((2U == (IData)(vlSelfRef.__PVT__lsu_oper))) {
                Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(vlSelfRef.__PVT__alu_out, vlSelfRef.__Vfunc_lsu_mod__DOT__memread__2__Vfuncout);
                vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__2__Vfuncout;
                vlSelfRef.__PVT__lsu_out = vlSelfRef.__PVT__lsu_mod__DOT__A;
            } else if ((3U == (IData)(vlSelfRef.__PVT__lsu_oper))) {
                Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(vlSelfRef.__PVT__alu_out, vlSelfRef.__Vfunc_lsu_mod__DOT__memread__3__Vfuncout);
                vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__3__Vfuncout;
                vlSelfRef.__PVT__lsu_out = (0x000000ffU 
                                            & vlSelfRef.__PVT__lsu_mod__DOT__A);
            } else if ((4U == (IData)(vlSelfRef.__PVT__lsu_oper))) {
                Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(vlSelfRef.__PVT__alu_out, vlSelfRef.__Vfunc_lsu_mod__DOT__memread__4__Vfuncout);
                vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__4__Vfuncout;
                vlSelfRef.__PVT__lsu_out = (0x0000ffffU 
                                            & vlSelfRef.__PVT__lsu_mod__DOT__A);
            } else if ((5U == (IData)(vlSelfRef.__PVT__lsu_oper))) {
                Vtop_top____Vdpiimwrap_lsu_mod__DOT__memwrite_TOP__top(vlSelfRef.__PVT__alu_out, vlSymsp->TOP__top__reg_mod.__PVT__data_rs2, 0U);
            } else if ((6U == (IData)(vlSelfRef.__PVT__lsu_oper))) {
                Vtop_top____Vdpiimwrap_lsu_mod__DOT__memwrite_TOP__top(vlSelfRef.__PVT__alu_out, vlSymsp->TOP__top__reg_mod.__PVT__data_rs2, 1U);
            } else {
                Vtop_top____Vdpiimwrap_lsu_mod__DOT__memwrite_TOP__top(vlSelfRef.__PVT__alu_out, vlSymsp->TOP__top__reg_mod.__PVT__data_rs2, 2U);
            }
        }
    }
    vlSelfRef.__PVT__to_regs = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__mux_select))) {
        vlSelfRef.__PVT__to_regs = vlSelfRef.__PVT__alu_out;
    } else if ((1U == (IData)(vlSelfRef.__PVT__mux_select))) {
        vlSelfRef.__PVT__to_regs = vlSelfRef.__PVT__lsu_out;
    } else if ((2U == (IData)(vlSelfRef.__PVT__mux_select))) {
        vlSelfRef.__PVT__to_regs = ((IData)(4U) + vlSelfRef.__PVT__pc);
    }
}

void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__pc = 0x80000000U;
    } else {
        vlSelfRef.__PVT__pc = vlSelfRef.__PVT__next_pc;
        if (vlSelfRef.__PVT__branch) {
            vlSelfRef.__PVT__pc = vlSelfRef.__PVT__alu_out;
        }
    }
    vlSelfRef.__PVT__next_pc = ((IData)(4U) + vlSelfRef.__PVT__pc);
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
