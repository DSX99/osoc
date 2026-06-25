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

extern const VlUnpacked<CData/*3:0*/, 8> Vtop__ConstPool__TABLE_hf9f0be4a_0;

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__0(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___stl_sequent__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__pc_mod__DOT__next_pc = ((IData)(4U) 
                                             + vlSelfRef.pc);
    vlSelfRef.__PVT__slave_mod__DOT__arvalid = ((IData)(vlSelfRef.__PVT__arvalid_ifu) 
                                                | (IData)(vlSelfRef.__PVT__arvalid_lsu));
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
                                vlSelfRef.__PVT__rs1 
                                    = (0x0000001fU 
                                       & (vlSelfRef.opcode 
                                          >> 0x0000000fU));
                                vlSelfRef.__PVT__imm 
                                    = vlSelfRef.__PVT__decode_mod__DOT__imm_i;
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
                                        vlSelfRef.__PVT__csr_oper = 1U;
                                        vlSelfRef.__PVT__imm = 0x00000341U;
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
    __Vtableidx1 = vlSelfRef.__PVT__lsu_oper;
    vlSelfRef.__PVT__wstrb_lsu = Vtop__ConstPool__TABLE_hf9f0be4a_0
        [__Vtableidx1];
    vlSelfRef.__PVT__ifu_mod__DOT__lsu_stall = ((IData)(vlSelfRef.__PVT__lsu_mod__DOT__ff_stall) 
                                                | (((~ (IData)(vlSelfRef.__PVT__lsu_mod__DOT__prev_we)) 
                                                    & (IData)(vlSelfRef.__PVT__lsu_we)) 
                                                   | ((~ (IData)(vlSelfRef.__PVT__lsu_mod__DOT__prev_le)) 
                                                      & (IData)(vlSelfRef.__PVT__lsu_le))));
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
    vlSelfRef.external_stall = ((IData)(vlSelfRef.__PVT__ifu_stall) 
                                | (IData)(vlSelfRef.__PVT__ifu_mod__DOT__lsu_stall));
}

VL_ATTR_COLD void Vtop_top___ctor_var_reset(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17409787017080135397ull);
    vlSelf->pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4211327832146562899ull);
    vlSelf->external_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2871934794811161235ull);
    vlSelf->__PVT__araddr_ifu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17403733745108566750ull);
    vlSelf->__PVT__arvalid_ifu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6187099397844950305ull);
    vlSelf->__PVT__rready_ifu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7080648654013881954ull);
    vlSelf->__PVT__araddr_lsu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5416967447709139ull);
    vlSelf->__PVT__awaddr_lsu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14890680784206275148ull);
    vlSelf->__PVT__wdata_lsu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4165621799402445171ull);
    vlSelf->__PVT__arvalid_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5374114079387349993ull);
    vlSelf->__PVT__awvalid_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15576964305551330725ull);
    vlSelf->__PVT__wvalid_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10942038539835955859ull);
    vlSelf->__PVT__wstrb_lsu = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5713321147166666674ull);
    vlSelf->__PVT__to_regs = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15888220903761676845ull);
    vlSelf->__PVT__alu_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6029336550601928105ull);
    vlSelf->__PVT__lsu_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9985522375493406559ull);
    vlSelf->__PVT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17436245599429385641ull);
    vlSelf->__PVT__csr_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17270084115202130473ull);
    vlSelf->__PVT__alu_op = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8715831498092569784ull);
    vlSelf->__PVT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10211807078052224816ull);
    vlSelf->__PVT__rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 392999376545494891ull);
    vlSelf->__PVT__rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10303652599525973633ull);
    vlSelf->__PVT__cause = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3613435021776060419ull);
    vlSelf->__PVT__lsu_oper = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18387852698334561910ull);
    vlSelf->__PVT__csr_oper = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18056796697299121600ull);
    vlSelf->__PVT__mux_select = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17308776668031719110ull);
    vlSelf->__PVT__mux_select_pc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6153553215125588302ull);
    vlSelf->__PVT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16985980692193088871ull);
    vlSelf->__PVT__lsu_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14626365765754585692ull);
    vlSelf->__PVT__lsu_le = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3851020032965099929ull);
    vlSelf->__PVT__ifu_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13998222303260242712ull);
    vlSelf->__PVT__arb_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1680289899656006799ull);
    vlSelf->__PVT__arb_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11911765733314370540ull);
    vlSelf->__PVT__arb_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6800096078308315140ull);
    vlSelf->__PVT__arb_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17362420493246550151ull);
    vlSelf->__PVT__arb_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5833954663830060830ull);
    vlSelf->__PVT__arb_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8164879084404364685ull);
    vlSelf->__PVT__arb_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1020592276924299105ull);
    vlSelf->__PVT__pc_mod__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3103581620590096924ull);
    vlSelf->__PVT__lsu_mod__DOT__idk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 472813843629311722ull);
    vlSelf->__PVT__lsu_mod__DOT__ff_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6052672636032029626ull);
    vlSelf->__PVT__lsu_mod__DOT__prev_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4933764160699790127ull);
    vlSelf->__PVT__lsu_mod__DOT__prev_le = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8179215459852384519ull);
    vlSelf->__PVT__lsu_mod__DOT__aw_sent = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4493167164071238834ull);
    vlSelf->__PVT__lsu_mod__DOT__aw_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14110570884852838737ull);
    vlSelf->__PVT__lsu_mod__DOT__w_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12310510971420858226ull);
    vlSelf->__PVT__decode_mod__DOT__imm_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17728463912631228713ull);
    vlSelf->__PVT__alu_mod__DOT__val1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3618980885417066799ull);
    vlSelf->__PVT__alu_mod__DOT__val2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5531290321701216620ull);
    vlSelf->__PVT__ifu_mod__DOT__lsu_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9488322534828500004ull);
    vlSelf->__PVT__ifu_mod__DOT__idk_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13597526410532356314ull);
    vlSelf->__PVT__ifu_mod__DOT__ar_sent = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13374932517632482836ull);
    vlSelf->__PVT__csr_mod__DOT__data_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12700116229890022093ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__csr_mod__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12209870551186757864ull);
    }
    vlSelf->__PVT__csr_mod__DOT__working_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11201873268134957014ull);
    vlSelf->__PVT__slave_mod__DOT__arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6797084214586093595ull);
    vlSelf->__PVT__slave_mod__DOT__aw = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14911593086297919951ull);
    vlSelf->__PVT__slave_mod__DOT__aw_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9302009304647165941ull);
    vlSelf->__PVT__slave_mod__DOT__aw_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16785331223480926159ull);
}
