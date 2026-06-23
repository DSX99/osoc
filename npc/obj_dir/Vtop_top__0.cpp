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
    vlSelfRef.__PVT__pc_mod__DOT__next_pc = ((IData)(4U) 
                                             + vlSelfRef.pc);
    Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(vlSelfRef.pc, vlSelfRef.__Vfunc_ifu_mod__DOT__memread__8__Vfuncout);
    vlSelfRef.opcode = vlSelfRef.__Vfunc_ifu_mod__DOT__memread__8__Vfuncout;
    vlSelfRef.__PVT__decode_mod__DOT__imm_i = (((- (IData)(
                                                           (vlSelfRef.opcode 
                                                            >> 0x0000001fU))) 
                                                << 0x0000000bU) 
                                               | (0x000007ffU 
                                                  & (vlSelfRef.opcode 
                                                     >> 0x00000014U)));
    vlSelfRef.__PVT__rs1 = 0U;
    vlSelfRef.__PVT__rs2 = 0U;
    vlSelfRef.__PVT__rd = 0U;
    vlSelfRef.__PVT__lsu_oper = 0U;
    vlSelfRef.__PVT__alu_op = 0U;
    vlSelfRef.__PVT__imm = 0U;
    vlSelfRef.__PVT__lsu_we = 0U;
    vlSelfRef.__PVT__lsu_le = 0U;
    vlSelfRef.__PVT__mux_select = 0U;
    vlSelfRef.__PVT__mux_select_pc = 0U;
    vlSelfRef.__PVT__cause = 0U;
    vlSelfRef.__PVT__csr_oper = 0U;
    if ((0x00000040U & vlSelfRef.opcode)) {
        if ((0x00000020U & vlSelfRef.opcode)) {
            if ((0x00000010U & vlSelfRef.opcode)) {
                if ((1U & (~ (vlSelfRef.opcode >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.opcode)) {
                            if ((1U & vlSelfRef.opcode)) {
                                vlSelfRef.__PVT__rd 
                                    = (0x0000001fU 
                                       & (vlSelfRef.opcode 
                                          >> 7U));
                                vlSelfRef.__PVT__imm 
                                    = vlSelfRef.__PVT__decode_mod__DOT__imm_i;
                                vlSelfRef.__PVT__rs1 
                                    = (0x0000001fU 
                                       & (vlSelfRef.opcode 
                                          >> 0x0000000fU));
                                if ((0U == (7U & (vlSelfRef.opcode 
                                                  >> 0x0000000cU)))) {
                                    if (VL_UNLIKELY(((IData)(
                                                             ((0x00100000U 
                                                               == 
                                                               (0x01f00000U 
                                                                & vlSelfRef.opcode)) 
                                                              & (~ 
                                                                 (0U 
                                                                  != 
                                                                  (vlSelfRef.opcode 
                                                                   >> 0x00000019U)))))))) {
                                        VL_FINISH_MT("vsrc/decode.sv", 126, "");
                                    } else if ((IData)(
                                                       (0U 
                                                        != 
                                                        (0xfff00000U 
                                                         & vlSelfRef.opcode)))) {
                                        vlSelfRef.__PVT__mux_select_pc = 1U;
                                        vlSelfRef.__PVT__alu_op = 0x90U;
                                        vlSelfRef.__PVT__rs1 = 0U;
                                        vlSelfRef.__PVT__rd = 0U;
                                        vlSelfRef.__PVT__csr_oper = 2U;
                                    } else {
                                        vlSelfRef.__PVT__cause = 0x0bU;
                                        vlSelfRef.__PVT__mux_select_pc = 1U;
                                        vlSelfRef.__PVT__alu_op = 0x90U;
                                    }
                                } else {
                                    vlSelfRef.__PVT__csr_oper 
                                        = (7U & (vlSelfRef.opcode 
                                                 >> 0x0000000cU));
                                    vlSelfRef.__PVT__mux_select = 3U;
                                }
                            }
                        }
                    }
                }
            } else if ((8U & vlSelfRef.opcode)) {
                if ((4U & vlSelfRef.opcode)) {
                    if ((2U & vlSelfRef.opcode)) {
                        if ((1U & vlSelfRef.opcode)) {
                            vlSelfRef.__PVT__rd = (0x0000001fU 
                                                   & (vlSelfRef.opcode 
                                                      >> 7U));
                            vlSelfRef.__PVT__imm = 
                                (((- (IData)((vlSelfRef.opcode 
                                              >> 0x0000001fU))) 
                                  << 0x00000014U) | 
                                 ((((0x000001feU & 
                                     (vlSelfRef.opcode 
                                      >> 0x0000000bU)) 
                                    | (1U & (vlSelfRef.opcode 
                                             >> 0x00000014U))) 
                                   << 0x0000000bU) 
                                  | (0x000007feU & 
                                     (vlSelfRef.opcode 
                                      >> 0x00000014U))));
                            vlSelfRef.__PVT__alu_op = 0xd0U;
                            vlSelfRef.__PVT__mux_select = 2U;
                        }
                    }
                }
            } else if ((4U & vlSelfRef.opcode)) {
                if ((2U & vlSelfRef.opcode)) {
                    if ((1U & vlSelfRef.opcode)) {
                        vlSelfRef.__PVT__rd = (0x0000001fU 
                                               & (vlSelfRef.opcode 
                                                  >> 7U));
                        vlSelfRef.__PVT__rs1 = (0x0000001fU 
                                                & (vlSelfRef.opcode 
                                                   >> 0x0000000fU));
                        vlSelfRef.__PVT__rs2 = (0x0000001fU 
                                                & (vlSelfRef.opcode 
                                                   >> 0x0000000fU));
                        vlSelfRef.__PVT__imm = vlSelfRef.__PVT__decode_mod__DOT__imm_i;
                        vlSelfRef.__PVT__alu_op = 0x90U;
                        vlSelfRef.__PVT__mux_select = 2U;
                    }
                }
            } else if ((2U & vlSelfRef.opcode)) {
                if ((1U & vlSelfRef.opcode)) {
                    vlSelfRef.__PVT__rs1 = (0x0000001fU 
                                            & (vlSelfRef.opcode 
                                               >> 0x0000000fU));
                    vlSelfRef.__PVT__rs2 = (0x0000001fU 
                                            & (vlSelfRef.opcode 
                                               >> 0x00000014U));
                    vlSelfRef.__PVT__imm = (((- (IData)(
                                                        (vlSelfRef.opcode 
                                                         >> 0x0000001fU))) 
                                             << 0x0000000cU) 
                                            | ((0x00000800U 
                                                & (vlSelfRef.opcode 
                                                   << 4U)) 
                                               | ((0x000007e0U 
                                                   & (vlSelfRef.opcode 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.opcode 
                                                        >> 7U)))));
                    vlSelfRef.__PVT__alu_op = (0x000000d0U 
                                               | (7U 
                                                  & (vlSelfRef.opcode 
                                                     >> 0x0000000cU)));
                }
            }
        }
    } else if ((0x00000020U & vlSelfRef.opcode)) {
        if ((0x00000010U & vlSelfRef.opcode)) {
            if ((1U & (~ (vlSelfRef.opcode >> 3U)))) {
                if ((4U & vlSelfRef.opcode)) {
                    if ((2U & vlSelfRef.opcode)) {
                        if ((1U & vlSelfRef.opcode)) {
                            vlSelfRef.__PVT__rd = (0x0000001fU 
                                                   & (vlSelfRef.opcode 
                                                      >> 7U));
                            vlSelfRef.__PVT__imm = 
                                (0xfffff000U & vlSelfRef.opcode);
                            vlSelfRef.__PVT__alu_op = 0x80U;
                        }
                    }
                } else if ((2U & vlSelfRef.opcode)) {
                    if ((1U & vlSelfRef.opcode)) {
                        vlSelfRef.__PVT__rd = (0x0000001fU 
                                               & (vlSelfRef.opcode 
                                                  >> 7U));
                        vlSelfRef.__PVT__rs1 = (0x0000001fU 
                                                & (vlSelfRef.opcode 
                                                   >> 0x0000000fU));
                        vlSelfRef.__PVT__rs2 = (0x0000001fU 
                                                & (vlSelfRef.opcode 
                                                   >> 0x00000014U));
                        vlSelfRef.__PVT__alu_op = (
                                                   (0x00000020U 
                                                    & (vlSelfRef.opcode 
                                                       >> 0x00000014U)) 
                                                   | ((8U 
                                                       & (vlSelfRef.opcode 
                                                          >> 0x0000001bU)) 
                                                      | (7U 
                                                         & (vlSelfRef.opcode 
                                                            >> 0x0000000cU))));
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.opcode >> 3U)))) {
            if ((1U & (~ (vlSelfRef.opcode >> 2U)))) {
                if ((2U & vlSelfRef.opcode)) {
                    if ((1U & vlSelfRef.opcode)) {
                        vlSelfRef.__PVT__rs1 = (0x0000001fU 
                                                & (vlSelfRef.opcode 
                                                   >> 0x0000000fU));
                        vlSelfRef.__PVT__rs2 = (0x0000001fU 
                                                & (vlSelfRef.opcode 
                                                   >> 0x00000014U));
                        vlSelfRef.__PVT__imm = (((- (IData)(
                                                            (vlSelfRef.opcode 
                                                             >> 0x0000001fU))) 
                                                 << 0x0000000bU) 
                                                | ((0x000007e0U 
                                                    & (vlSelfRef.opcode 
                                                       >> 0x00000014U)) 
                                                   | (0x0000001fU 
                                                      & (vlSelfRef.opcode 
                                                         >> 7U))));
                        vlSelfRef.__PVT__alu_op = 0x80U;
                        vlSelfRef.__PVT__lsu_oper = 
                            (7U & (vlSelfRef.opcode 
                                   >> 0x0000000cU));
                        vlSelfRef.__PVT__lsu_we = 1U;
                    }
                }
            }
        }
    } else if ((0x00000010U & vlSelfRef.opcode)) {
        if ((1U & (~ (vlSelfRef.opcode >> 3U)))) {
            if ((4U & vlSelfRef.opcode)) {
                if ((2U & vlSelfRef.opcode)) {
                    if ((1U & vlSelfRef.opcode)) {
                        vlSelfRef.__PVT__rd = (0x0000001fU 
                                               & (vlSelfRef.opcode 
                                                  >> 7U));
                        vlSelfRef.__PVT__imm = (0xfffff000U 
                                                & vlSelfRef.opcode);
                        vlSelfRef.__PVT__alu_op = 0xc0U;
                    }
                }
            } else if ((2U & vlSelfRef.opcode)) {
                if ((1U & vlSelfRef.opcode)) {
                    vlSelfRef.__PVT__rd = (0x0000001fU 
                                           & (vlSelfRef.opcode 
                                              >> 7U));
                    vlSelfRef.__PVT__rs1 = (0x0000001fU 
                                            & (vlSelfRef.opcode 
                                               >> 0x0000000fU));
                    vlSelfRef.__PVT__imm = vlSelfRef.__PVT__decode_mod__DOT__imm_i;
                    vlSelfRef.__PVT__alu_op = ((5U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.opcode 
                                                    >> 0x0000000cU)))
                                                ? (0x00000080U 
                                                   | ((8U 
                                                       & (vlSelfRef.opcode 
                                                          >> 0x0000001bU)) 
                                                      | (7U 
                                                         & (vlSelfRef.opcode 
                                                            >> 0x0000000cU))))
                                                : (0x00000080U 
                                                   | (7U 
                                                      & (vlSelfRef.opcode 
                                                         >> 0x0000000cU))));
                }
            }
        }
    } else if ((1U & (~ (vlSelfRef.opcode >> 3U)))) {
        if ((1U & (~ (vlSelfRef.opcode >> 2U)))) {
            if ((2U & vlSelfRef.opcode)) {
                if ((1U & vlSelfRef.opcode)) {
                    vlSelfRef.__PVT__rd = (0x0000001fU 
                                           & (vlSelfRef.opcode 
                                              >> 7U));
                    vlSelfRef.__PVT__rs1 = (0x0000001fU 
                                            & (vlSelfRef.opcode 
                                               >> 0x0000000fU));
                    vlSelfRef.__PVT__imm = vlSelfRef.__PVT__decode_mod__DOT__imm_i;
                    vlSelfRef.__PVT__alu_op = 0x80U;
                    vlSelfRef.__PVT__lsu_oper = (7U 
                                                 & (vlSelfRef.opcode 
                                                    >> 0x0000000cU));
                    vlSelfRef.__PVT__lsu_le = 1U;
                    vlSelfRef.__PVT__mux_select = 1U;
                }
            }
        }
    }
    vlSelfRef.__PVT__csr_mod__DOT__working_reg = ((0x0300U 
                                                   == 
                                                   (0x00000fffU 
                                                    & vlSelfRef.__PVT__imm))
                                                   ? 2U
                                                   : 
                                                  ((0x0305U 
                                                    == 
                                                    (0x00000fffU 
                                                     & vlSelfRef.__PVT__imm))
                                                    ? 4U
                                                    : 
                                                   ((0x0341U 
                                                     == 
                                                     (0x00000fffU 
                                                      & vlSelfRef.__PVT__imm))
                                                     ? 1U
                                                     : 
                                                    ((0x0342U 
                                                      == 
                                                      (0x00000fffU 
                                                       & vlSelfRef.__PVT__imm))
                                                      ? 3U
                                                      : 0U))));
    if ((0U != (IData)(vlSelfRef.__PVT__cause))) {
        vlSelfRef.__PVT__csr_mod__DOT__working_reg = 4U;
    }
    vlSelfRef.__PVT__csr_out = vlSelfRef.__PVT__csr_mod__DOT__regs
        [vlSelfRef.__PVT__csr_mod__DOT__working_reg];
}

void Vtop_top___ico_sequent__TOP__top__1(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_sequent__TOP__top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alu_mod__DOT__val2 = ((0x00000080U 
                                            & (IData)(vlSelfRef.__PVT__alu_op))
                                            ? vlSelfRef.__PVT__imm
                                            : vlSymsp->TOP__top__reg_mod.__PVT__data_rs2);
    vlSelfRef.__PVT__branch = 0U;
    if ((0U != (3U & ((IData)(vlSelfRef.__PVT__alu_op) 
                      >> 4U)))) {
        if ((1U == (3U & ((IData)(vlSelfRef.__PVT__alu_op) 
                          >> 4U)))) {
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
    vlSelfRef.__PVT__csr_mod__DOT__data_in = ((4U & (IData)(vlSelfRef.__PVT__csr_oper))
                                               ? (IData)(vlSelfRef.__PVT__rs1)
                                               : vlSymsp->TOP__top__reg_mod.__PVT__data_rs1);
    vlSelfRef.__PVT__alu_mod__DOT__val1 = ((0x00000040U 
                                            & (IData)(vlSelfRef.__PVT__alu_op))
                                            ? vlSelfRef.pc
                                            : vlSymsp->TOP__top__reg_mod.__PVT__data_rs1);
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
    if (vlSelfRef.__PVT__lsu_le) {
        if ((0U == (IData)(vlSelfRef.__PVT__lsu_oper))) {
            Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(vlSelfRef.__PVT__alu_out, vlSelfRef.__Vfunc_lsu_mod__DOT__memread__0__Vfuncout);
            vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__0__Vfuncout;
            vlSelfRef.__PVT__lsu_out = (((- (IData)(
                                                    (1U 
                                                     & (vlSelfRef.__PVT__lsu_mod__DOT__A 
                                                        >> 7U)))) 
                                         << 8U) | (0x000000ffU 
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
        } else if ((4U == (IData)(vlSelfRef.__PVT__lsu_oper))) {
            Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(vlSelfRef.__PVT__alu_out, vlSelfRef.__Vfunc_lsu_mod__DOT__memread__3__Vfuncout);
            vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__3__Vfuncout;
            vlSelfRef.__PVT__lsu_out = (0x000000ffU 
                                        & vlSelfRef.__PVT__lsu_mod__DOT__A);
        } else if ((5U == (IData)(vlSelfRef.__PVT__lsu_oper))) {
            Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(vlSelfRef.__PVT__alu_out, vlSelfRef.__Vfunc_lsu_mod__DOT__memread__4__Vfuncout);
            vlSelfRef.__PVT__lsu_mod__DOT__A = vlSelfRef.__Vfunc_lsu_mod__DOT__memread__4__Vfuncout;
            vlSelfRef.__PVT__lsu_out = (0x0000ffffU 
                                        & vlSelfRef.__PVT__lsu_mod__DOT__A);
        }
    }
    vlSelfRef.__PVT__to_regs = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__mux_select))) {
        vlSelfRef.__PVT__to_regs = vlSelfRef.__PVT__alu_out;
    } else if ((1U == (IData)(vlSelfRef.__PVT__mux_select))) {
        vlSelfRef.__PVT__to_regs = vlSelfRef.__PVT__lsu_out;
    } else if ((2U == (IData)(vlSelfRef.__PVT__mux_select))) {
        vlSelfRef.__PVT__to_regs = ((IData)(4U) + vlSelfRef.pc);
    } else if ((3U == (IData)(vlSelfRef.__PVT__mux_select))) {
        vlSelfRef.__PVT__to_regs = vlSelfRef.__PVT__csr_out;
    }
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
    if (vlSelfRef.__PVT__lsu_we) {
        if ((0U == (IData)(vlSelfRef.__PVT__lsu_oper))) {
            Vtop_top____Vdpiimwrap_lsu_mod__DOT__memwrite_TOP__top(vlSelfRef.__PVT__alu_out, vlSymsp->TOP__top__reg_mod.__PVT__data_rs2, 0U);
        } else if ((1U == (IData)(vlSelfRef.__PVT__lsu_oper))) {
            Vtop_top____Vdpiimwrap_lsu_mod__DOT__memwrite_TOP__top(vlSelfRef.__PVT__alu_out, vlSymsp->TOP__top__reg_mod.__PVT__data_rs2, 1U);
        } else if ((2U == (IData)(vlSelfRef.__PVT__lsu_oper))) {
            Vtop_top____Vdpiimwrap_lsu_mod__DOT__memwrite_TOP__top(vlSelfRef.__PVT__alu_out, vlSymsp->TOP__top__reg_mod.__PVT__data_rs2, 2U);
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
        if ((2U & (IData)(vlSelfRef.__PVT__csr_oper))) {
            __VdlyVal__csr_mod__DOT__regs__v33 = ((1U 
                                                   & (IData)(vlSelfRef.__PVT__csr_oper))
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
        } else if ((1U & (IData)(vlSelfRef.__PVT__csr_oper))) {
            __VdlyVal__csr_mod__DOT__regs__v34 = vlSelfRef.__PVT__csr_mod__DOT__data_in;
            __VdlyDim0__csr_mod__DOT__regs__v34 = vlSelfRef.__PVT__csr_mod__DOT__working_reg;
            __VdlySet__csr_mod__DOT__regs__v34 = 1U;
        }
        if ((0U != (IData)(vlSelfRef.__PVT__cause))) {
            __VdlyVal__csr_mod__DOT__regs__v35 = vlSelfRef.pc;
            __VdlySet__csr_mod__DOT__regs__v35 = 1U;
            __VdlyVal__csr_mod__DOT__regs__v36 = vlSelfRef.__PVT__cause;
        }
        vlSelfRef.pc = vlSelfRef.__PVT__pc_mod__DOT__next_pc;
        if (vlSelfRef.__PVT__branch) {
            vlSelfRef.pc = ((0U == (IData)(vlSelfRef.__PVT__mux_select_pc))
                             ? vlSelfRef.__PVT__alu_out
                             : ((1U == (IData)(vlSelfRef.__PVT__mux_select_pc))
                                 ? vlSelfRef.__PVT__csr_out
                                 : vlSelfRef.__PVT__alu_out));
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
    vlSelfRef.__PVT__pc_mod__DOT__next_pc = ((IData)(4U) 
                                             + vlSelfRef.pc);
    Vtop_top____Vdpiimwrap_lsu_mod__DOT__memread_TOP__top(vlSelfRef.pc, vlSelfRef.__Vfunc_ifu_mod__DOT__memread__8__Vfuncout);
    vlSelfRef.opcode = vlSelfRef.__Vfunc_ifu_mod__DOT__memread__8__Vfuncout;
    vlSelfRef.__PVT__decode_mod__DOT__imm_i = (((- (IData)(
                                                           (vlSelfRef.opcode 
                                                            >> 0x0000001fU))) 
                                                << 0x0000000bU) 
                                               | (0x000007ffU 
                                                  & (vlSelfRef.opcode 
                                                     >> 0x00000014U)));
}

void Vtop_top___nba_sequent__TOP__top__1(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rs1 = 0U;
    vlSelfRef.__PVT__rs2 = 0U;
    vlSelfRef.__PVT__rd = 0U;
    vlSelfRef.__PVT__lsu_oper = 0U;
    vlSelfRef.__PVT__alu_op = 0U;
    vlSelfRef.__PVT__imm = 0U;
    vlSelfRef.__PVT__lsu_we = 0U;
    vlSelfRef.__PVT__lsu_le = 0U;
    vlSelfRef.__PVT__mux_select = 0U;
    vlSelfRef.__PVT__mux_select_pc = 0U;
    vlSelfRef.__PVT__cause = 0U;
    vlSelfRef.__PVT__csr_oper = 0U;
    if ((0x00000040U & vlSelfRef.opcode)) {
        if ((0x00000020U & vlSelfRef.opcode)) {
            if ((0x00000010U & vlSelfRef.opcode)) {
                if ((1U & (~ (vlSelfRef.opcode >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.opcode)) {
                            if ((1U & vlSelfRef.opcode)) {
                                vlSelfRef.__PVT__rd 
                                    = (0x0000001fU 
                                       & (vlSelfRef.opcode 
                                          >> 7U));
                                vlSelfRef.__PVT__imm 
                                    = vlSelfRef.__PVT__decode_mod__DOT__imm_i;
                                vlSelfRef.__PVT__rs1 
                                    = (0x0000001fU 
                                       & (vlSelfRef.opcode 
                                          >> 0x0000000fU));
                                if ((0U == (7U & (vlSelfRef.opcode 
                                                  >> 0x0000000cU)))) {
                                    if (VL_UNLIKELY(((IData)(
                                                             ((0x00100000U 
                                                               == 
                                                               (0x01f00000U 
                                                                & vlSelfRef.opcode)) 
                                                              & (~ 
                                                                 (0U 
                                                                  != 
                                                                  (vlSelfRef.opcode 
                                                                   >> 0x00000019U)))))))) {
                                        VL_FINISH_MT("vsrc/decode.sv", 126, "");
                                    } else if ((IData)(
                                                       (0U 
                                                        != 
                                                        (0xfff00000U 
                                                         & vlSelfRef.opcode)))) {
                                        vlSelfRef.__PVT__mux_select_pc = 1U;
                                        vlSelfRef.__PVT__alu_op = 0x90U;
                                        vlSelfRef.__PVT__rs1 = 0U;
                                        vlSelfRef.__PVT__rd = 0U;
                                        vlSelfRef.__PVT__csr_oper = 2U;
                                    } else {
                                        vlSelfRef.__PVT__cause = 0x0bU;
                                        vlSelfRef.__PVT__mux_select_pc = 1U;
                                        vlSelfRef.__PVT__alu_op = 0x90U;
                                    }
                                } else {
                                    vlSelfRef.__PVT__csr_oper 
                                        = (7U & (vlSelfRef.opcode 
                                                 >> 0x0000000cU));
                                    vlSelfRef.__PVT__mux_select = 3U;
                                }
                            }
                        }
                    }
                }
            } else if ((8U & vlSelfRef.opcode)) {
                if ((4U & vlSelfRef.opcode)) {
                    if ((2U & vlSelfRef.opcode)) {
                        if ((1U & vlSelfRef.opcode)) {
                            vlSelfRef.__PVT__rd = (0x0000001fU 
                                                   & (vlSelfRef.opcode 
                                                      >> 7U));
                            vlSelfRef.__PVT__imm = 
                                (((- (IData)((vlSelfRef.opcode 
                                              >> 0x0000001fU))) 
                                  << 0x00000014U) | 
                                 ((((0x000001feU & 
                                     (vlSelfRef.opcode 
                                      >> 0x0000000bU)) 
                                    | (1U & (vlSelfRef.opcode 
                                             >> 0x00000014U))) 
                                   << 0x0000000bU) 
                                  | (0x000007feU & 
                                     (vlSelfRef.opcode 
                                      >> 0x00000014U))));
                            vlSelfRef.__PVT__alu_op = 0xd0U;
                            vlSelfRef.__PVT__mux_select = 2U;
                        }
                    }
                }
            } else if ((4U & vlSelfRef.opcode)) {
                if ((2U & vlSelfRef.opcode)) {
                    if ((1U & vlSelfRef.opcode)) {
                        vlSelfRef.__PVT__rd = (0x0000001fU 
                                               & (vlSelfRef.opcode 
                                                  >> 7U));
                        vlSelfRef.__PVT__rs1 = (0x0000001fU 
                                                & (vlSelfRef.opcode 
                                                   >> 0x0000000fU));
                        vlSelfRef.__PVT__rs2 = (0x0000001fU 
                                                & (vlSelfRef.opcode 
                                                   >> 0x0000000fU));
                        vlSelfRef.__PVT__imm = vlSelfRef.__PVT__decode_mod__DOT__imm_i;
                        vlSelfRef.__PVT__alu_op = 0x90U;
                        vlSelfRef.__PVT__mux_select = 2U;
                    }
                }
            } else if ((2U & vlSelfRef.opcode)) {
                if ((1U & vlSelfRef.opcode)) {
                    vlSelfRef.__PVT__rs1 = (0x0000001fU 
                                            & (vlSelfRef.opcode 
                                               >> 0x0000000fU));
                    vlSelfRef.__PVT__rs2 = (0x0000001fU 
                                            & (vlSelfRef.opcode 
                                               >> 0x00000014U));
                    vlSelfRef.__PVT__imm = (((- (IData)(
                                                        (vlSelfRef.opcode 
                                                         >> 0x0000001fU))) 
                                             << 0x0000000cU) 
                                            | ((0x00000800U 
                                                & (vlSelfRef.opcode 
                                                   << 4U)) 
                                               | ((0x000007e0U 
                                                   & (vlSelfRef.opcode 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.opcode 
                                                        >> 7U)))));
                    vlSelfRef.__PVT__alu_op = (0x000000d0U 
                                               | (7U 
                                                  & (vlSelfRef.opcode 
                                                     >> 0x0000000cU)));
                }
            }
        }
    } else if ((0x00000020U & vlSelfRef.opcode)) {
        if ((0x00000010U & vlSelfRef.opcode)) {
            if ((1U & (~ (vlSelfRef.opcode >> 3U)))) {
                if ((4U & vlSelfRef.opcode)) {
                    if ((2U & vlSelfRef.opcode)) {
                        if ((1U & vlSelfRef.opcode)) {
                            vlSelfRef.__PVT__rd = (0x0000001fU 
                                                   & (vlSelfRef.opcode 
                                                      >> 7U));
                            vlSelfRef.__PVT__imm = 
                                (0xfffff000U & vlSelfRef.opcode);
                            vlSelfRef.__PVT__alu_op = 0x80U;
                        }
                    }
                } else if ((2U & vlSelfRef.opcode)) {
                    if ((1U & vlSelfRef.opcode)) {
                        vlSelfRef.__PVT__rd = (0x0000001fU 
                                               & (vlSelfRef.opcode 
                                                  >> 7U));
                        vlSelfRef.__PVT__rs1 = (0x0000001fU 
                                                & (vlSelfRef.opcode 
                                                   >> 0x0000000fU));
                        vlSelfRef.__PVT__rs2 = (0x0000001fU 
                                                & (vlSelfRef.opcode 
                                                   >> 0x00000014U));
                        vlSelfRef.__PVT__alu_op = (
                                                   (0x00000020U 
                                                    & (vlSelfRef.opcode 
                                                       >> 0x00000014U)) 
                                                   | ((8U 
                                                       & (vlSelfRef.opcode 
                                                          >> 0x0000001bU)) 
                                                      | (7U 
                                                         & (vlSelfRef.opcode 
                                                            >> 0x0000000cU))));
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.opcode >> 3U)))) {
            if ((1U & (~ (vlSelfRef.opcode >> 2U)))) {
                if ((2U & vlSelfRef.opcode)) {
                    if ((1U & vlSelfRef.opcode)) {
                        vlSelfRef.__PVT__rs1 = (0x0000001fU 
                                                & (vlSelfRef.opcode 
                                                   >> 0x0000000fU));
                        vlSelfRef.__PVT__rs2 = (0x0000001fU 
                                                & (vlSelfRef.opcode 
                                                   >> 0x00000014U));
                        vlSelfRef.__PVT__imm = (((- (IData)(
                                                            (vlSelfRef.opcode 
                                                             >> 0x0000001fU))) 
                                                 << 0x0000000bU) 
                                                | ((0x000007e0U 
                                                    & (vlSelfRef.opcode 
                                                       >> 0x00000014U)) 
                                                   | (0x0000001fU 
                                                      & (vlSelfRef.opcode 
                                                         >> 7U))));
                        vlSelfRef.__PVT__alu_op = 0x80U;
                        vlSelfRef.__PVT__lsu_oper = 
                            (7U & (vlSelfRef.opcode 
                                   >> 0x0000000cU));
                        vlSelfRef.__PVT__lsu_we = 1U;
                    }
                }
            }
        }
    } else if ((0x00000010U & vlSelfRef.opcode)) {
        if ((1U & (~ (vlSelfRef.opcode >> 3U)))) {
            if ((4U & vlSelfRef.opcode)) {
                if ((2U & vlSelfRef.opcode)) {
                    if ((1U & vlSelfRef.opcode)) {
                        vlSelfRef.__PVT__rd = (0x0000001fU 
                                               & (vlSelfRef.opcode 
                                                  >> 7U));
                        vlSelfRef.__PVT__imm = (0xfffff000U 
                                                & vlSelfRef.opcode);
                        vlSelfRef.__PVT__alu_op = 0xc0U;
                    }
                }
            } else if ((2U & vlSelfRef.opcode)) {
                if ((1U & vlSelfRef.opcode)) {
                    vlSelfRef.__PVT__rd = (0x0000001fU 
                                           & (vlSelfRef.opcode 
                                              >> 7U));
                    vlSelfRef.__PVT__rs1 = (0x0000001fU 
                                            & (vlSelfRef.opcode 
                                               >> 0x0000000fU));
                    vlSelfRef.__PVT__imm = vlSelfRef.__PVT__decode_mod__DOT__imm_i;
                    vlSelfRef.__PVT__alu_op = ((5U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.opcode 
                                                    >> 0x0000000cU)))
                                                ? (0x00000080U 
                                                   | ((8U 
                                                       & (vlSelfRef.opcode 
                                                          >> 0x0000001bU)) 
                                                      | (7U 
                                                         & (vlSelfRef.opcode 
                                                            >> 0x0000000cU))))
                                                : (0x00000080U 
                                                   | (7U 
                                                      & (vlSelfRef.opcode 
                                                         >> 0x0000000cU))));
                }
            }
        }
    } else if ((1U & (~ (vlSelfRef.opcode >> 3U)))) {
        if ((1U & (~ (vlSelfRef.opcode >> 2U)))) {
            if ((2U & vlSelfRef.opcode)) {
                if ((1U & vlSelfRef.opcode)) {
                    vlSelfRef.__PVT__rd = (0x0000001fU 
                                           & (vlSelfRef.opcode 
                                              >> 7U));
                    vlSelfRef.__PVT__rs1 = (0x0000001fU 
                                            & (vlSelfRef.opcode 
                                               >> 0x0000000fU));
                    vlSelfRef.__PVT__imm = vlSelfRef.__PVT__decode_mod__DOT__imm_i;
                    vlSelfRef.__PVT__alu_op = 0x80U;
                    vlSelfRef.__PVT__lsu_oper = (7U 
                                                 & (vlSelfRef.opcode 
                                                    >> 0x0000000cU));
                    vlSelfRef.__PVT__lsu_le = 1U;
                    vlSelfRef.__PVT__mux_select = 1U;
                }
            }
        }
    }
    vlSelfRef.__PVT__csr_mod__DOT__working_reg = ((0x0300U 
                                                   == 
                                                   (0x00000fffU 
                                                    & vlSelfRef.__PVT__imm))
                                                   ? 2U
                                                   : 
                                                  ((0x0305U 
                                                    == 
                                                    (0x00000fffU 
                                                     & vlSelfRef.__PVT__imm))
                                                    ? 4U
                                                    : 
                                                   ((0x0341U 
                                                     == 
                                                     (0x00000fffU 
                                                      & vlSelfRef.__PVT__imm))
                                                     ? 1U
                                                     : 
                                                    ((0x0342U 
                                                      == 
                                                      (0x00000fffU 
                                                       & vlSelfRef.__PVT__imm))
                                                      ? 3U
                                                      : 0U))));
    if ((0U != (IData)(vlSelfRef.__PVT__cause))) {
        vlSelfRef.__PVT__csr_mod__DOT__working_reg = 4U;
    }
    vlSelfRef.__PVT__csr_out = vlSelfRef.__PVT__csr_mod__DOT__regs
        [vlSelfRef.__PVT__csr_mod__DOT__working_reg];
}
