// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vosoc_26000003_func.h for the primary calling header

#include "Vosoc_26000003_func__pch.h"

VL_ATTR_COLD void Vosoc_26000003_func_osoc_26000003_core___eval_initial__TOP__osoc_26000003_func__core(Vosoc_26000003_func_osoc_26000003_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vosoc_26000003_func_osoc_26000003_core___eval_initial__TOP__osoc_26000003_func__core\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pc_ifu = 0x80000000U;
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
    vlSelfRef.__PVT__csr_mod__DOT__regs[5U] = 0x20445358U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[6U] = 0x20393920U;
}

VL_ATTR_COLD void Vosoc_26000003_func_osoc_26000003_core___stl_sequent__TOP__osoc_26000003_func__core__0(Vosoc_26000003_func_osoc_26000003_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vosoc_26000003_func_osoc_26000003_core___stl_sequent__TOP__osoc_26000003_func__core__0\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ decode_mod__DOT____VdfgExtracted_h5668a4d3__0;
    decode_mod__DOT____VdfgExtracted_h5668a4d3__0 = 0;
    CData/*0:0*/ decode_mod__DOT____VdfgExtracted_hd3654471__0;
    decode_mod__DOT____VdfgExtracted_hd3654471__0 = 0;
    CData/*0:0*/ decode_mod__DOT____VdfgExtracted_h59968114__0;
    decode_mod__DOT____VdfgExtracted_h59968114__0 = 0;
    CData/*0:0*/ decode_mod__DOT____VdfgExtracted_hd3b4e1d7__0;
    decode_mod__DOT____VdfgExtracted_hd3b4e1d7__0 = 0;
    CData/*0:0*/ decode_mod__DOT____VdfgExtracted_hb614df14__0;
    decode_mod__DOT____VdfgExtracted_hb614df14__0 = 0;
    CData/*0:0*/ decode_mod__DOT____VdfgExtracted_h141bf533__0;
    decode_mod__DOT____VdfgExtracted_h141bf533__0 = 0;
    CData/*3:0*/ decode_mod__DOT____VdfgRegularize_h901acc23_0_3;
    decode_mod__DOT____VdfgRegularize_h901acc23_0_3 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_8;
    __VdfgRegularize_h6e95ff9d_0_8 = 0;
    // Body
    vlSelfRef.__PVT__de_ex_bus_lsu_oper_de = 0U;
    vlSelfRef.__PVT__de_ex_bus_mux_select_de = 0U;
    vlSelfRef.__PVT__de_ex_bus_lsu_re_de = 0U;
    vlSelfRef.__PVT__de_ex_bus_lsu_we_de = 0U;
    vlSelfRef.rst = vlSymsp->TOP.reset;
    vlSelfRef.__PVT__csr_mod__DOT__working_reg_w = 
        ((((0x0300U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr)) 
           | (0x0305U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))) 
          | (((0x0340U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr)) 
              | (0x0341U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))) 
             | ((0x0342U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr)) 
                | ((0x0343U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr)) 
                   | ((0x0f11U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr)) 
                      | (0x0f12U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr)))))))
          ? ((0x0300U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))
              ? 2U : ((0x0305U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))
                       ? 4U : ((0x0340U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))
                                ? 7U : ((0x0341U == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))
                                         ? 1U : ((0x0342U 
                                                  == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))
                                                  ? 3U
                                                  : 
                                                 ((0x0343U 
                                                   == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))
                                                   ? 8U
                                                   : 
                                                  ((0x0f11U 
                                                    == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))
                                                    ? 5U
                                                    : 6U)))))))
          : 0U);
    vlSelfRef.reg_valid_e = vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid;
    vlSelfRef.branch = (1U == (3U & ((IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op) 
                                     >> 4U)));
    vlSelfRef.ls_wb_bus_pc_wb = vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_pc;
    vlSelfRef.branch_taken = vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_branch;
    vlSelfRef.pc_e = vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_diff_pc;
    vlSelfRef.ls_wb_bus_speculate_wb = vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_speculate;
    vlSelfRef.__PVT__de_ex_bus_rd_de = 0U;
    decode_mod__DOT____VdfgRegularize_h901acc23_0_3 
        = ((8U & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                  >> 0x0000001bU)) | (7U & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                            >> 0x0000000cU)));
    vlSelfRef.ls_wb_bus_mcause_wb = vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mcause;
    vlSelfRef.__PVT__decode_mod__DOT__imm_i = (((- (IData)(
                                                           (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                            >> 0x0000001fU))) 
                                                << 0x0000000bU) 
                                               | (0x000007ffU 
                                                  & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                     >> 0x00000014U)));
    decode_mod__DOT____VdfgExtracted_h141bf533__0 = (IData)(
                                                            (0x30200000U 
                                                             == 
                                                             (0xfff00000U 
                                                              & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)));
    decode_mod__DOT____VdfgExtracted_hb614df14__0 = (IData)(
                                                            (0U 
                                                             != 
                                                             (0xfff00000U 
                                                              & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)));
    decode_mod__DOT____VdfgExtracted_h5668a4d3__0 = (IData)(
                                                            ((0x00001000U 
                                                              == 
                                                              (0x00007000U 
                                                               & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) 
                                                             & (0U 
                                                                != 
                                                                (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                                 >> 0x00000019U))));
    decode_mod__DOT____VdfgExtracted_h59968114__0 = (IData)(
                                                            (0x42000000U 
                                                             == 
                                                             (0x42000000U 
                                                              & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)));
    decode_mod__DOT____VdfgExtracted_hd3654471__0 = (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbe000000U 
                                                              & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)));
    decode_mod__DOT____VdfgExtracted_hd3b4e1d7__0 = (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbc000000U 
                                                              & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)));
    vlSelfRef.decode_mod__DOT____VdfgExtracted_h4e467bd8__0 
        = (IData)(((0x00100000U == (0x01f00000U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) 
                   & (~ (0U != (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                >> 0x00000019U)))));
    vlSelfRef.__PVT__reg_in = ((2U & (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select))
                                ? ((1U & (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select))
                                    ? vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr_out
                                    : vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_next_pc)
                                : ((1U & (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select))
                                    ? 0U : vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_alu_out));
    vlSelfRef.__PVT__ifu_mod__DOT__hit_0 = ((vlSelfRef.__PVT__ifu_mod__DOT__block_tag
                                             [(1U & 
                                               (vlSelfRef.__PVT__pc_ifu 
                                                >> 2U))][0U] 
                                             == (vlSelfRef.__PVT__pc_ifu 
                                                 >> 3U)) 
                                            & vlSelfRef.__PVT__ifu_mod__DOT__block_valid
                                            [(1U & 
                                              (vlSelfRef.__PVT__pc_ifu 
                                               >> 2U))][0U]);
    vlSelfRef.__PVT__ifu_mod__DOT__hit_1 = ((vlSelfRef.__PVT__ifu_mod__DOT__block_tag
                                             [(1U & 
                                               (vlSelfRef.__PVT__pc_ifu 
                                                >> 2U))][1U] 
                                             == (vlSelfRef.__PVT__pc_ifu 
                                                 >> 3U)) 
                                            & vlSelfRef.__PVT__ifu_mod__DOT__block_valid
                                            [(1U & 
                                              (vlSelfRef.__PVT__pc_ifu 
                                               >> 2U))][1U]);
    vlSelfRef.__PVT__icache_mod__DOT__burst_addr = 
        ((0xa0000000U <= vlSelfRef.__PVT__pc_ifu) & 
         (0xc0000000U > vlSelfRef.__PVT__pc_ifu));
    vlSelfRef.__PVT__fencei = 0U;
    if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                  >> 6U)))) {
        if ((0x00000020U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
            if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                vlSelfRef.__PVT__de_ex_bus_lsu_oper_de 
                                    = (7U & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                             >> 0x0000000cU));
                                vlSelfRef.__PVT__de_ex_bus_lsu_we_de = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                             >> 4U)))) {
            if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            vlSelfRef.__PVT__de_ex_bus_lsu_oper_de 
                                = (7U & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                         >> 0x0000000cU));
                        }
                    }
                }
            }
        }
        if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                      >> 5U)))) {
            if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                vlSelfRef.__PVT__de_ex_bus_lsu_re_de = 1U;
                            }
                        }
                    }
                }
                if ((8U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                if ((IData)(((0x00001000U 
                                              == (0x00007000U 
                                                  & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) 
                                             & (IData)(vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_valid)))) {
                                    vlSelfRef.__PVT__fencei = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__de_ex_bus_rs1_de = 0U;
    vlSelfRef.__PVT__de_ex_bus_rs2_de = 0U;
    vlSelfRef.__PVT__alu_mod__DOT__val1 = ((0x00000040U 
                                            & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op))
                                            ? vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_pc
                                            : vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1);
    vlSelfRef.__PVT__alu_mod__DOT__val2 = ((0x00000080U 
                                            & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op))
                                            ? vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_imm
                                            : vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs2);
    vlSelfRef.ex_ls_valid_ex = vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_valid;
    vlSelfRef.ex_ls_bus_lsu_we_ls = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_we;
    if (vlSelfRef.__PVT__icache_mod__DOT__trans) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = vlSelfRef.__PVT__icache_mod__DOT__miss_addr;
        vlSelfRef.__PVT__icache_mod__DOT__do_burst 
            = vlSelfRef.__PVT__icache_mod__DOT__burst_reg;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = vlSelfRef.__PVT__pc_ifu;
        vlSelfRef.__PVT__icache_mod__DOT__do_burst 
            = vlSelfRef.__PVT__icache_mod__DOT__burst_addr;
    }
    vlSelfRef.ex_ls_bus_lsu_re_ls = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_re;
    vlSelfRef.ex_ls_valid_ls = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_valid;
    vlSelfRef.ls_wb_bus_exception_wb = vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_exception;
    vlSelfRef.__PVT__rresp_ifu = 0U;
    vlSelfRef.__PVT__rresp_lsu = 0U;
    vlSelfRef.__PVT__rdata_ifu = 0U;
    vlSelfRef.__PVT__rdata_lsu = 0U;
    vlSelfRef.__PVT__rvalid_ifu = 0U;
    vlSelfRef.__PVT__rvalid_lsu = 0U;
    vlSelfRef.__PVT__de_ex_bus_alu_op_de = 0U;
    vlSelfRef.__PVT__de_ex_bus_imm_de = 0U;
    vlSelfRef.__PVT__de_ex_bus_csr_de = 0U;
    vlSelfRef.__PVT__de_ex_bus_exception_de = vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_exception;
    if ((0x00000040U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
        vlSelfRef.__PVT__finish_de = 0U;
        vlSelfRef.__PVT__de_ex_bus_mux_select_pc_de = 0U;
        vlSelfRef.__PVT__de_ex_bus_mcause_de = vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_mcause;
        if ((0x00000020U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
            if ((0x00000010U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                vlSelfRef.__PVT__de_ex_bus_mux_select_de = 3U;
                                vlSelfRef.__PVT__de_ex_bus_rd_de 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                          >> 7U));
                                vlSelfRef.__PVT__de_ex_bus_rs1_de 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                          >> 0x0000000fU));
                                vlSelfRef.__PVT__de_ex_bus_alu_op_de 
                                    = (0x00000030U 
                                       | (7U & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                >> 0x0000000cU)));
                                if ((0U != (7U & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                  >> 0x0000000cU)))) {
                                    vlSelfRef.__PVT__de_ex_bus_alu_op_de 
                                        = (0x00000030U 
                                           | (7U & 
                                              (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                               >> 0x0000000cU)));
                                }
                                vlSelfRef.__PVT__de_ex_bus_csr_de 
                                    = (0x00000fffU 
                                       & vlSelfRef.__PVT__decode_mod__DOT__imm_i);
                                if ((0U == (7U & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                  >> 0x0000000cU)))) {
                                    vlSelfRef.__PVT__de_ex_bus_exception_de = 1U;
                                    if (vlSelfRef.decode_mod__DOT____VdfgExtracted_h4e467bd8__0) {
                                        vlSelfRef.__PVT__finish_de = 1U;
                                        vlSelfRef.__PVT__de_ex_bus_mcause_de = 3U;
                                    } else {
                                        vlSelfRef.__PVT__de_ex_bus_mcause_de 
                                            = ((IData)(decode_mod__DOT____VdfgExtracted_hb614df14__0)
                                                ? ((IData)(decode_mod__DOT____VdfgExtracted_h141bf533__0)
                                                    ? 0x0aU
                                                    : 2U)
                                                : 0x0bU);
                                    }
                                    if ((1U & (~ (IData)(vlSelfRef.decode_mod__DOT____VdfgExtracted_h4e467bd8__0)))) {
                                        if (decode_mod__DOT____VdfgExtracted_hb614df14__0) {
                                            if (decode_mod__DOT____VdfgExtracted_h141bf533__0) {
                                                vlSelfRef.__PVT__de_ex_bus_mux_select_pc_de = 1U;
                                            }
                                        } else {
                                            vlSelfRef.__PVT__de_ex_bus_mux_select_pc_de = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                vlSelfRef.__PVT__de_ex_bus_mux_select_de = 2U;
                                vlSelfRef.__PVT__de_ex_bus_rd_de 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                          >> 7U));
                                vlSelfRef.__PVT__de_ex_bus_alu_op_de = 0xd0U;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            vlSelfRef.__PVT__de_ex_bus_mux_select_de = 2U;
                            vlSelfRef.__PVT__de_ex_bus_rd_de 
                                = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                  >> 7U));
                            vlSelfRef.__PVT__de_ex_bus_alu_op_de = 0x90U;
                        }
                    }
                } else if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        vlSelfRef.__PVT__de_ex_bus_alu_op_de 
                            = (0x000000d0U | (7U & 
                                              (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                               >> 0x0000000cU)));
                    }
                }
                if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                vlSelfRef.__PVT__de_ex_bus_rs1_de 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                          >> 0x0000000fU));
                            }
                        }
                    } else if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            vlSelfRef.__PVT__de_ex_bus_rs1_de 
                                = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                  >> 0x0000000fU));
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                vlSelfRef.__PVT__de_ex_bus_rs2_de 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                          >> 0x0000000fU));
                            }
                        }
                    } else if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            vlSelfRef.__PVT__de_ex_bus_rs2_de 
                                = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                  >> 0x00000014U));
                        }
                    }
                }
                if ((8U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                vlSelfRef.__PVT__de_ex_bus_imm_de 
                                    = (((- (IData)(
                                                   (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                    >> 0x0000001fU))) 
                                        << 0x00000014U) 
                                       | ((((0x000001feU 
                                             & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                >> 0x0000000bU)) 
                                            | (1U & 
                                               (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                >> 0x00000014U))) 
                                           << 0x0000000bU) 
                                          | (0x000007feU 
                                             & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                >> 0x00000014U))));
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            vlSelfRef.__PVT__de_ex_bus_imm_de 
                                = vlSelfRef.__PVT__decode_mod__DOT__imm_i;
                        }
                    }
                } else if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        vlSelfRef.__PVT__de_ex_bus_imm_de 
                            = (((- (IData)((vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                            >> 0x0000001fU))) 
                                << 0x0000000cU) | (
                                                   (0x00000800U 
                                                    & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                       << 4U)) 
                                                   | ((0x000007e0U 
                                                       & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                          >> 0x00000014U)) 
                                                      | (0x0000001eU 
                                                         & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                            >> 7U)))));
                    }
                }
            }
        }
    } else {
        vlSelfRef.__PVT__finish_de = 0U;
        vlSelfRef.__PVT__de_ex_bus_mux_select_pc_de = 0U;
        vlSelfRef.__PVT__de_ex_bus_mcause_de = vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_mcause;
        if ((0x00000020U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
            if ((0x00000010U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                vlSelfRef.__PVT__de_ex_bus_rd_de 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                          >> 7U));
                                vlSelfRef.__PVT__de_ex_bus_alu_op_de = 0x80U;
                                vlSelfRef.__PVT__de_ex_bus_imm_de 
                                    = (0xfffff000U 
                                       & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode);
                            }
                        }
                    } else if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            vlSelfRef.__PVT__de_ex_bus_rd_de 
                                = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                  >> 7U));
                            vlSelfRef.__PVT__de_ex_bus_alu_op_de 
                                = ((0x00000020U & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                   >> 0x00000014U)) 
                                   | (IData)(decode_mod__DOT____VdfgRegularize_h901acc23_0_3));
                        }
                    }
                    if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                                vlSelfRef.__PVT__de_ex_bus_rs1_de 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                          >> 0x0000000fU));
                                vlSelfRef.__PVT__de_ex_bus_rs2_de 
                                    = (0x0000001fU 
                                       & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                          >> 0x00000014U));
                                if (decode_mod__DOT____VdfgExtracted_h59968114__0) {
                                    vlSelfRef.__PVT__de_ex_bus_exception_de = 1U;
                                    vlSelfRef.__PVT__de_ex_bus_mcause_de = 2U;
                                }
                                if (decode_mod__DOT____VdfgExtracted_hd3b4e1d7__0) {
                                    vlSelfRef.__PVT__de_ex_bus_exception_de = 1U;
                                    vlSelfRef.__PVT__de_ex_bus_mcause_de = 2U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            vlSelfRef.__PVT__de_ex_bus_rs1_de 
                                = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                  >> 0x0000000fU));
                            vlSelfRef.__PVT__de_ex_bus_rs2_de 
                                = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                  >> 0x00000014U));
                            vlSelfRef.__PVT__de_ex_bus_alu_op_de = 0x80U;
                            vlSelfRef.__PVT__de_ex_bus_imm_de 
                                = (((- (IData)((vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                >> 0x0000001fU))) 
                                    << 0x0000000bU) 
                                   | ((0x000007e0U 
                                       & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                          >> 0x00000014U)) 
                                      | (0x0000001fU 
                                         & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                            >> 7U))));
                        }
                    }
                }
            }
        } else if ((0x00000010U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
            if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                          >> 3U)))) {
                if ((4U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            vlSelfRef.__PVT__de_ex_bus_rd_de 
                                = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                  >> 7U));
                            vlSelfRef.__PVT__de_ex_bus_alu_op_de = 0xc0U;
                            vlSelfRef.__PVT__de_ex_bus_imm_de 
                                = (0xfffff000U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode);
                        }
                    }
                } else if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        vlSelfRef.__PVT__de_ex_bus_rd_de 
                            = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                              >> 7U));
                        vlSelfRef.__PVT__de_ex_bus_alu_op_de 
                            = ((5U == (7U & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                             >> 0x0000000cU)))
                                ? (0x00000080U | (IData)(decode_mod__DOT____VdfgRegularize_h901acc23_0_3))
                                : (0x00000080U | (7U 
                                                  & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                     >> 0x0000000cU))));
                        vlSelfRef.__PVT__de_ex_bus_imm_de 
                            = vlSelfRef.__PVT__decode_mod__DOT__imm_i;
                    }
                }
                if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                            vlSelfRef.__PVT__de_ex_bus_rs1_de 
                                = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                  >> 0x0000000fU));
                            if (decode_mod__DOT____VdfgExtracted_h5668a4d3__0) {
                                vlSelfRef.__PVT__de_ex_bus_exception_de = 1U;
                                vlSelfRef.__PVT__de_ex_bus_mcause_de = 2U;
                            }
                            if ((5U == (7U & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                              >> 0x0000000cU)))) {
                                if (decode_mod__DOT____VdfgExtracted_hd3654471__0) {
                                    vlSelfRef.__PVT__de_ex_bus_exception_de = 1U;
                                    vlSelfRef.__PVT__de_ex_bus_mcause_de = 2U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                             >> 3U)))) {
            if ((1U & (~ (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                          >> 2U)))) {
                if ((2U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                    if ((1U & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)) {
                        vlSelfRef.__PVT__de_ex_bus_rd_de 
                            = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                              >> 7U));
                        vlSelfRef.__PVT__de_ex_bus_rs1_de 
                            = (0x0000001fU & (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                              >> 0x0000000fU));
                        vlSelfRef.__PVT__de_ex_bus_alu_op_de = 0x80U;
                        vlSelfRef.__PVT__de_ex_bus_imm_de 
                            = vlSelfRef.__PVT__decode_mod__DOT__imm_i;
                    }
                }
            }
        }
    }
    if (vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_exception) {
        vlSelfRef.__PVT__de_ex_bus_rd_de = 0U;
        vlSelfRef.__PVT__de_ex_bus_exception_de = vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_exception;
        vlSelfRef.__PVT__de_ex_bus_mcause_de = vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_mcause;
    }
    vlSelfRef.__PVT__if_de_bus_speculate_if = ((~ (IData)(vlSelfRef.__PVT__fencei)) 
                                               & ((IData)(vlSelfRef.__PVT__ifu_mod__DOT__hit_0) 
                                                  | (IData)(vlSelfRef.__PVT__ifu_mod__DOT__hit_1)));
    vlSelfRef.__PVT__decode_mod__DOT__ex_match_rs1 
        = (((IData)(vlSelfRef.__PVT__de_ex_bus_rs1_de) 
            == (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rd)) 
           & (0U != (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rd)));
    vlSelfRef.__PVT__decode_mod__DOT__ls_match_rs1 
        = (((IData)(vlSelfRef.__PVT__de_ex_bus_rs1_de) 
            == (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_rd)) 
           & (0U != (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_rd)));
    vlSelfRef.__PVT__decode_mod__DOT__wb_match_rs1 
        = (((IData)(vlSelfRef.__PVT__de_ex_bus_rs1_de) 
            == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd)) 
           & (0U != (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd)));
    vlSelfRef.__PVT__decode_mod__DOT__ex_match_rs2 
        = (((IData)(vlSelfRef.__PVT__de_ex_bus_rs2_de) 
            == (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rd)) 
           & (0U != (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rd)));
    vlSelfRef.__PVT__decode_mod__DOT__ls_match_rs2 
        = (((IData)(vlSelfRef.__PVT__de_ex_bus_rs2_de) 
            == (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_rd)) 
           & (0U != (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_rd)));
    vlSelfRef.__PVT__decode_mod__DOT__wb_match_rs2 
        = (((IData)(vlSelfRef.__PVT__de_ex_bus_rs2_de) 
            == (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd)) 
           & (0U != (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd)));
    vlSelfRef.__PVT__ex_ls_bus_alu_out_ex = 0U;
    vlSelfRef.__PVT__alu_mod__DOT__csr_imm = 0U;
    if ((0U == (3U & ((IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op) 
                      >> 4U)))) {
        if (((((((((0U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op))) 
                   | (1U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) 
                  | (2U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) 
                 | (3U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) 
                | (4U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) 
               | (5U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) 
              | (6U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) 
             | (7U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op))))) {
            vlSelfRef.__PVT__ex_ls_bus_alu_out_ex = 
                ((0U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))
                  ? ((8U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op))
                      ? (vlSelfRef.__PVT__alu_mod__DOT__val1 
                         - vlSelfRef.__PVT__alu_mod__DOT__val2)
                      : (vlSelfRef.__PVT__alu_mod__DOT__val1 
                         + vlSelfRef.__PVT__alu_mod__DOT__val2))
                  : ((1U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))
                      ? (vlSelfRef.__PVT__alu_mod__DOT__val1 
                         << (0x0000001fU & vlSelfRef.__PVT__alu_mod__DOT__val2))
                      : ((2U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))
                          ? VL_LTS_III(32, vlSelfRef.__PVT__alu_mod__DOT__val1, vlSelfRef.__PVT__alu_mod__DOT__val2)
                          : ((3U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))
                              ? (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                 < vlSelfRef.__PVT__alu_mod__DOT__val2)
                              : ((4U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))
                                  ? (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                     ^ vlSelfRef.__PVT__alu_mod__DOT__val2)
                                  : ((5U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))
                                      ? ((8U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op))
                                          ? VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__alu_mod__DOT__val1, 
                                                           (0x0000001fU 
                                                            & vlSelfRef.__PVT__alu_mod__DOT__val2))
                                          : (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                             >> (0x0000001fU 
                                                 & vlSelfRef.__PVT__alu_mod__DOT__val2)))
                                      : ((6U == (7U 
                                                 & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))
                                          ? (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                             | vlSelfRef.__PVT__alu_mod__DOT__val2)
                                          : (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                             & vlSelfRef.__PVT__alu_mod__DOT__val2))))))));
        }
    } else if ((1U == (3U & ((IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op) 
                             >> 4U)))) {
        vlSelfRef.__PVT__ex_ls_bus_alu_out_ex = ((IData)(4U) 
                                                 + vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_pc);
    } else if ((3U == (3U & ((IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op) 
                             >> 4U)))) {
        vlSelfRef.__PVT__alu_mod__DOT__csr_imm = ((4U 
                                                   & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op))
                                                   ? (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rs1)
                                                   : vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1);
        if ((0U != (3U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) {
            if ((1U == (3U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) {
                vlSelfRef.__PVT__ex_ls_bus_alu_out_ex 
                    = vlSelfRef.__PVT__alu_mod__DOT__csr_imm;
            } else if ((2U == (3U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) {
                vlSelfRef.__PVT__ex_ls_bus_alu_out_ex 
                    = (vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_csr 
                       | vlSelfRef.__PVT__alu_mod__DOT__csr_imm);
            } else if ((3U == (3U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) {
                vlSelfRef.__PVT__ex_ls_bus_alu_out_ex 
                    = (vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_csr 
                       & (~ vlSelfRef.__PVT__alu_mod__DOT__csr_imm));
            }
        }
    }
    vlSelfRef.__PVT__ex_ls_bus_branch_ex = 0U;
    vlSelfRef.__PVT__ex_branch_addr = 0U;
    if ((0U != (3U & ((IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op) 
                      >> 4U)))) {
        if ((1U == (3U & ((IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op) 
                          >> 4U)))) {
            vlSelfRef.__PVT__ex_branch_addr = (vlSelfRef.__PVT__alu_mod__DOT__val1 
                                               + vlSelfRef.__PVT__alu_mod__DOT__val2);
            if ((0U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) {
                vlSelfRef.__PVT__ex_ls_bus_branch_ex 
                    = (vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1 
                       == vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs2);
            } else if ((1U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) {
                vlSelfRef.__PVT__ex_ls_bus_branch_ex 
                    = (vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1 
                       != vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs2);
            } else if ((4U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) {
                vlSelfRef.__PVT__ex_ls_bus_branch_ex 
                    = VL_LTS_III(32, vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1, vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs2);
            } else if ((5U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) {
                vlSelfRef.__PVT__ex_ls_bus_branch_ex 
                    = VL_GTES_III(32, vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1, vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs2);
            } else if ((6U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) {
                vlSelfRef.__PVT__ex_ls_bus_branch_ex 
                    = (vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1 
                       < vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs2);
            } else if ((7U == (7U & (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op)))) {
                vlSelfRef.__PVT__ex_ls_bus_branch_ex 
                    = (vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1 
                       >= vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs2);
            }
        }
    }
    vlSelfRef.__PVT__ex_ls_bus_diff_pc_ex = ((IData)(vlSelfRef.__PVT__ex_ls_bus_branch_ex)
                                              ? vlSelfRef.__PVT__ex_branch_addr
                                              : ((IData)(4U) 
                                                 + vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_pc));
    vlSelfRef.__PVT__bready_lsu = 0U;
    vlSelfRef.__PVT__icache_mod__DOT__hit_1 = (vlSelfRef.__PVT__icache_mod__DOT__block_valid
                                               [(3U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                    >> 4U))][1U] 
                                               & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                   >> 6U) 
                                                  == vlSelfRef.__PVT__icache_mod__DOT__block_tag
                                                  [
                                                  (3U 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                      >> 4U))][1U]));
    vlSelfRef.__PVT__rready_lsu = 0U;
    vlSelfRef.__PVT__fencei_commit = ((IData)(vlSelfRef.__PVT__fencei) 
                                      & ((~ ((IData)(vlSelfRef.__PVT__lsu_mod__DOT__trans_r) 
                                             | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__trans_w))) 
                                         & ((~ (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_valid)) 
                                            & ((~ (IData)(vlSelfRef.ex_ls_valid_ls)) 
                                               & (~ (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid))))));
    vlSelfRef.__PVT__ls_wb_bus_csr_pc_wb = 0U;
    if (vlSelfRef.ls_wb_bus_exception_wb) {
        vlSelfRef.__PVT__ls_wb_bus_csr_pc_wb = ((0x0aU 
                                                 != (IData)(vlSelfRef.ls_wb_bus_mcause_wb))
                                                 ? vlSelfRef.__PVT__csr_mod__DOT__regs[4U]
                                                 : vlSelfRef.__PVT__csr_mod__DOT__regs[1U]);
        vlSelfRef.flush = 1U;
    } else {
        vlSelfRef.flush = 0U;
    }
    vlSelfRef.__PVT__ls_wb_bus_alu_out_ls = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out;
    vlSelfRef.__PVT__lsu_mod__DOT__done_r = 0U;
    vlSelfRef.__PVT__lsu_mod__DOT__done_w = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (((IData)(vlSelfRef.ex_ls_bus_lsu_we_ls) 
             | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__trans_w))) {
            if ((0U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                if ((1U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                    if ((2U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                        vlSelfRef.__PVT__bready_lsu = 1U;
                    }
                }
            }
        }
        if (((IData)(vlSelfRef.ex_ls_bus_lsu_re_ls) 
             | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__trans_r))) {
            if ((0U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
                if ((1U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
                    if ((2U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
                        vlSelfRef.__PVT__rready_lsu = 1U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.__PVT__arbiter_mod__DOT__read_busy) {
        if (vlSelfRef.__PVT__arbiter_mod__DOT__read_select) {
            vlSelfRef.__PVT__rresp_ifu = vlSymsp->TOP__osoc_26000003_func.__PVT__core_rresp;
            vlSelfRef.__PVT__rdata_ifu = vlSymsp->TOP__osoc_26000003_func.__PVT__core_rdata;
            vlSelfRef.__PVT__rvalid_ifu = vlSymsp->TOP__osoc_26000003_func.__PVT__core_rvalid;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__arbiter_mod__DOT__read_select)))) {
            vlSelfRef.__PVT__rresp_lsu = vlSymsp->TOP__osoc_26000003_func.__PVT__core_rresp;
            vlSelfRef.__PVT__rdata_lsu = vlSymsp->TOP__osoc_26000003_func.__PVT__core_rdata;
            vlSelfRef.__PVT__rvalid_lsu = vlSymsp->TOP__osoc_26000003_func.__PVT__core_rvalid;
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (((IData)(vlSelfRef.ex_ls_bus_lsu_re_ls) 
             | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__trans_r))) {
            if ((0U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
                if ((1U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
                    if ((2U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
                        if (vlSelfRef.__PVT__rvalid_lsu) {
                            if ((0U == (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))) {
                                vlSelfRef.__PVT__ls_wb_bus_alu_out_ls 
                                    = ((2U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)
                                        ? ((1U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)
                                            ? (((- (IData)(
                                                           (vlSelfRef.__PVT__rdata_lsu 
                                                            >> 0x1fU))) 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__rdata_lsu 
                                                  >> 0x18U))
                                            : (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.__PVT__rdata_lsu 
                                                               >> 0x17U)))) 
                                                << 8U) 
                                               | (0x000000ffU 
                                                  & (vlSelfRef.__PVT__rdata_lsu 
                                                     >> 0x10U))))
                                        : ((1U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)
                                            ? (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.__PVT__rdata_lsu 
                                                               >> 0x0fU)))) 
                                                << 8U) 
                                               | (0x000000ffU 
                                                  & (vlSelfRef.__PVT__rdata_lsu 
                                                     >> 8U)))
                                            : (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.__PVT__rdata_lsu 
                                                               >> 7U)))) 
                                                << 8U) 
                                               | (0x000000ffU 
                                                  & vlSelfRef.__PVT__rdata_lsu))));
                            } else if ((1U == (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))) {
                                if ((2U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)) {
                                    if ((2U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)) {
                                        vlSelfRef.__PVT__ls_wb_bus_alu_out_ls 
                                            = (((- (IData)(
                                                           (vlSelfRef.__PVT__rdata_lsu 
                                                            >> 0x1fU))) 
                                                << 0x00000010U) 
                                               | (vlSelfRef.__PVT__rdata_lsu 
                                                  >> 0x10U));
                                    }
                                } else {
                                    vlSelfRef.__PVT__ls_wb_bus_alu_out_ls 
                                        = (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.__PVT__rdata_lsu 
                                                           >> 0x0fU)))) 
                                            << 0x00000010U) 
                                           | (0x0000ffffU 
                                              & vlSelfRef.__PVT__rdata_lsu));
                                }
                            } else if ((2U == (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))) {
                                vlSelfRef.__PVT__ls_wb_bus_alu_out_ls 
                                    = vlSelfRef.__PVT__rdata_lsu;
                            } else if ((4U == (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))) {
                                vlSelfRef.__PVT__ls_wb_bus_alu_out_ls 
                                    = ((2U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)
                                        ? ((1U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)
                                            ? (vlSelfRef.__PVT__rdata_lsu 
                                               >> 0x18U)
                                            : (0x000000ffU 
                                               & (vlSelfRef.__PVT__rdata_lsu 
                                                  >> 0x10U)))
                                        : ((1U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)
                                            ? (0x000000ffU 
                                               & (vlSelfRef.__PVT__rdata_lsu 
                                                  >> 8U))
                                            : (0x000000ffU 
                                               & vlSelfRef.__PVT__rdata_lsu)));
                            } else if ((5U == (IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))) {
                                if ((2U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)) {
                                    if ((2U & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out)) {
                                        vlSelfRef.__PVT__ls_wb_bus_alu_out_ls 
                                            = (vlSelfRef.__PVT__rdata_lsu 
                                               >> 0x10U);
                                    }
                                } else {
                                    vlSelfRef.__PVT__ls_wb_bus_alu_out_ls 
                                        = (0x0000ffffU 
                                           & vlSelfRef.__PVT__rdata_lsu);
                                }
                            }
                            vlSelfRef.__PVT__lsu_mod__DOT__done_r = 1U;
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelfRef.ex_ls_bus_lsu_we_ls) 
             | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__trans_w))) {
            if ((0U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                if ((1U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                    if ((2U != vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                        if ((3U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                            vlSelfRef.__PVT__lsu_mod__DOT__done_w = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__ls_wb_valid_ls = (((IData)(vlSelfRef.ex_ls_valid_ls) 
                                        & ((~ (IData)(vlSelfRef.ex_ls_bus_lsu_re_ls)) 
                                           | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__done_r))) 
                                       & ((~ (IData)(vlSelfRef.ex_ls_bus_lsu_we_ls)) 
                                          | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__done_w)));
    vlSelfRef.ex_ls_ready_ls = (1U & (((~ (IData)(vlSelfRef.ex_ls_bus_lsu_re_ls)) 
                                       | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__done_r)) 
                                      & ((~ (IData)(vlSelfRef.ex_ls_bus_lsu_we_ls)) 
                                         | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__done_w))));
    vlSelfRef.__PVT__csr_mod__DOT__working_reg_r = 
        (((((((((0x0300U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de)) 
                | (0x0305U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))) 
               | (0x0340U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))) 
              | (0x0341U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))) 
             | (0x0342U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))) 
            | (0x0343U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))) 
           | (0x0f11U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))) 
          | (0x0f12U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de)))
          ? ((0x0300U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))
              ? 2U : ((0x0305U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))
                       ? 4U : ((0x0340U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))
                                ? 7U : ((0x0341U == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))
                                         ? 1U : ((0x0342U 
                                                  == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))
                                                  ? 3U
                                                  : 
                                                 ((0x0343U 
                                                   == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))
                                                   ? 8U
                                                   : 
                                                  ((0x0f11U 
                                                    == (IData)(vlSelfRef.__PVT__de_ex_bus_csr_de))
                                                    ? 5U
                                                    : 6U)))))))
          : 0U);
    vlSelfRef.__PVT__de_ex_bus_data_csr_de = vlSelfRef.__PVT__csr_mod__DOT__regs
        [vlSelfRef.__PVT__csr_mod__DOT__working_reg_r];
    vlSelfRef.__PVT__addr_spec = 0U;
    if (vlSelfRef.__PVT__if_de_bus_speculate_if) {
        if (vlSelfRef.__PVT__ifu_mod__DOT__hit_0) {
            vlSelfRef.__PVT__addr_spec = vlSelfRef.__PVT__ifu_mod__DOT__block_offset
                [(1U & (vlSelfRef.__PVT__pc_ifu >> 2U))][0U];
        }
        if (vlSelfRef.__PVT__ifu_mod__DOT__hit_1) {
            vlSelfRef.__PVT__addr_spec = vlSelfRef.__PVT__ifu_mod__DOT__block_offset
                [(1U & (vlSelfRef.__PVT__pc_ifu >> 2U))][1U];
        }
    }
    vlSelfRef.cache_hit = ((vlSelfRef.__PVT__icache_mod__DOT__block_valid
                            [(3U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                    >> 4U))][0U] & 
                            ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                              >> 6U) == vlSelfRef.__PVT__icache_mod__DOT__block_tag
                             [(3U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                     >> 4U))][0U])) 
                           | (IData)(vlSelfRef.__PVT__icache_mod__DOT__hit_1));
    vlSelfRef.__PVT__wdata_lsu = 0U;
    vlSelfRef.__PVT__wvalid_lsu = 0U;
    vlSelfRef.__PVT__awvalid_lsu = 0U;
    vlSelfRef.__PVT__awaddr_lsu = 0U;
    vlSelfRef.__PVT__araddr_lsu = 0U;
    vlSelfRef.__PVT__arvalid_lsu = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (((IData)(vlSelfRef.ex_ls_bus_lsu_we_ls) 
             | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__trans_w))) {
            if ((0U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                if ((((IData)(vlSelfRef.ex_ls_bus_lsu_we_ls) 
                      & (IData)(vlSelfRef.ex_ls_valid_ls)) 
                     & (~ (IData)(vlSelfRef.flush)))) {
                    vlSelfRef.__PVT__wdata_lsu = VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_data_rs2, 
                                                               VL_SHIFTL_III(32,32,32, 
                                                                             (3U 
                                                                              & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out), 3U));
                    vlSelfRef.__PVT__wvalid_lsu = 1U;
                    vlSelfRef.__PVT__awvalid_lsu = 1U;
                    vlSelfRef.__PVT__awaddr_lsu = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out;
                }
            } else if ((1U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_w)) {
                vlSelfRef.__PVT__wdata_lsu = VL_SHIFTL_III(32,32,32, vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_data_rs2, 
                                                           VL_SHIFTL_III(32,32,32, 
                                                                         (3U 
                                                                          & vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out), 3U));
                vlSelfRef.__PVT__wvalid_lsu = 1U;
                vlSelfRef.__PVT__awvalid_lsu = 1U;
                vlSelfRef.__PVT__awaddr_lsu = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out;
            }
        }
        if (((IData)(vlSelfRef.ex_ls_bus_lsu_re_ls) 
             | (IData)(vlSelfRef.__PVT__lsu_mod__DOT__trans_r))) {
            if ((0U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
                if ((((IData)(vlSelfRef.ex_ls_bus_lsu_re_ls) 
                      & (IData)(vlSelfRef.ex_ls_valid_ls)) 
                     & (~ (IData)(vlSelfRef.flush)))) {
                    vlSelfRef.__PVT__araddr_lsu = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out;
                    vlSelfRef.__PVT__arvalid_lsu = 1U;
                }
            } else if ((1U == vlSelfRef.__PVT__lsu_mod__DOT__lsu_r)) {
                vlSelfRef.__PVT__araddr_lsu = vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out;
                vlSelfRef.__PVT__arvalid_lsu = 1U;
            }
        }
    }
    vlSelfRef.__PVT__de_ex_bus_data_rs1_de = vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs
        [(0x0000000fU & (IData)(vlSelfRef.__PVT__de_ex_bus_rs1_de))];
    if (((IData)(vlSelfRef.__PVT__decode_mod__DOT__wb_match_rs1) 
         & (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid))) {
        vlSelfRef.__PVT__de_ex_bus_data_rs1_de = vlSelfRef.__PVT__reg_in;
    }
    if (((IData)(vlSelfRef.__PVT__decode_mod__DOT__ls_match_rs1) 
         & (IData)(vlSelfRef.__PVT__ls_wb_valid_ls))) {
        vlSelfRef.__PVT__de_ex_bus_data_rs1_de = vlSelfRef.__PVT__ls_wb_bus_alu_out_ls;
    }
    if ((((IData)(vlSelfRef.__PVT__decode_mod__DOT__ex_match_rs1) 
          & (IData)(vlSelfRef.ex_ls_valid_ex)) & (~ (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_re)))) {
        vlSelfRef.__PVT__de_ex_bus_data_rs1_de = vlSelfRef.__PVT__ex_ls_bus_alu_out_ex;
    }
    vlSelfRef.__PVT__de_ex_bus_data_rs2_de = vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs
        [(0x0000000fU & (IData)(vlSelfRef.__PVT__de_ex_bus_rs2_de))];
    if (((IData)(vlSelfRef.__PVT__decode_mod__DOT__wb_match_rs2) 
         & (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid))) {
        vlSelfRef.__PVT__de_ex_bus_data_rs2_de = vlSelfRef.__PVT__reg_in;
    }
    if (((IData)(vlSelfRef.__PVT__decode_mod__DOT__ls_match_rs2) 
         & (IData)(vlSelfRef.__PVT__ls_wb_valid_ls))) {
        vlSelfRef.__PVT__de_ex_bus_data_rs2_de = vlSelfRef.__PVT__ls_wb_bus_alu_out_ls;
    }
    if ((((IData)(vlSelfRef.__PVT__decode_mod__DOT__ex_match_rs2) 
          & (IData)(vlSelfRef.ex_ls_valid_ex)) & (~ (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_re)))) {
        vlSelfRef.__PVT__de_ex_bus_data_rs2_de = vlSelfRef.__PVT__ex_ls_bus_alu_out_ex;
    }
    __VdfgRegularize_h6e95ff9d_0_8 = (1U & ((~ ((((IData)(vlSelfRef.__PVT__decode_mod__DOT__ex_match_rs1) 
                                                  | (IData)(vlSelfRef.__PVT__decode_mod__DOT__ex_match_rs2)) 
                                                 & ((~ (IData)(vlSelfRef.ex_ls_valid_ex)) 
                                                    | (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_re))) 
                                                | (((~ (IData)(vlSelfRef.__PVT__ls_wb_valid_ls)) 
                                                    & ((IData)(vlSelfRef.__PVT__decode_mod__DOT__ls_match_rs1) 
                                                       | (IData)(vlSelfRef.__PVT__decode_mod__DOT__ls_match_rs2))) 
                                                   | (((~ (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid)) 
                                                       & ((IData)(vlSelfRef.__PVT__decode_mod__DOT__wb_match_rs1) 
                                                          | (IData)(vlSelfRef.__PVT__decode_mod__DOT__wb_match_rs2))) 
                                                      | (0U 
                                                         != 
                                                         ((IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_csr) 
                                                          | ((IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_csr) 
                                                             | (IData)(vlSelfRef.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr)))))))) 
                                            & (~ ((
                                                   ((IData)(vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_valid) 
                                                    & (0x0000100fU 
                                                       == 
                                                       (0x0000707fU 
                                                        & vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode))) 
                                                   & (~ (IData)(vlSelfRef.__PVT__fencei_commit))) 
                                                  & (IData)(vlSelfRef.__PVT__fencei)))));
    vlSelfRef.__PVT__pc_mod__DOT__ex_valid = ((IData)(vlSelfRef.ex_ls_ready_ls) 
                                              & ((~ 
                                                  ((IData)(vlSelfRef.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_exception) 
                                                   | (IData)(vlSelfRef.ls_wb_bus_exception_wb))) 
                                                 & (IData)(vlSelfRef.ex_ls_valid_ex)));
    vlSelfRef.__PVT__if_de_bus_next_pc_if = (vlSelfRef.__PVT__pc_ifu 
                                             + ((IData)(vlSelfRef.__PVT__if_de_bus_speculate_if)
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.__PVT__addr_spec) 
                                                                 >> 0x0000000bU)))) 
                                                  << 0x0000000dU) 
                                                 | ((IData)(vlSelfRef.__PVT__addr_spec) 
                                                    << 1U))
                                                 : 4U));
    vlSelfRef.__PVT__de_ex_valid_de = ((IData)(vlSelfRef.__PVT__if_de_pipeline_mod__DOT__if_de_valid) 
                                       & (IData)(__VdfgRegularize_h6e95ff9d_0_8));
    vlSelfRef.__PVT__if_de_ready_de = ((IData)(vlSelfRef.ex_ls_ready_ls) 
                                       & (IData)(__VdfgRegularize_h6e95ff9d_0_8));
    vlSelfRef.flush_ex = (((IData)(vlSelfRef.__PVT__ex_ls_bus_branch_ex) 
                           != (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_speculate)) 
                          & (IData)(vlSelfRef.__PVT__pc_mod__DOT__ex_valid));
    vlSelfRef.if_de_ready_if = vlSelfRef.__PVT__if_de_ready_de;
    vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__flush 
        = ((IData)(vlSelfRef.flush) | (IData)(vlSelfRef.flush_ex));
    vlSelfRef.__PVT__if_de_pipeline_mod__DOT__flush 
        = ((IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__flush) 
           | (IData)(vlSelfRef.__PVT__fencei_commit));
    vlSelfRef.cache_miss = 0U;
    vlSelfRef.__PVT__cache_opcode = 0U;
    vlSelfRef.__PVT__cache_ready = 0U;
    vlSelfRef.__PVT__rready_ifu = 0U;
    vlSelfRef.__PVT__arsize_ifu = 0U;
    vlSelfRef.__PVT__arburst_ifu = 0U;
    vlSelfRef.__PVT__arlen_ifu = 0U;
    vlSelfRef.__PVT__arvalid_ifu = 0U;
    vlSelfRef.__PVT__araddr_ifu = 0U;
    if ((1U & (((~ (IData)(vlSelfRef.__PVT__de_ex_pipeline_mod__DOT__flush)) 
                & (~ (IData)(vlSymsp->TOP.reset))) 
               | (IData)(vlSelfRef.__PVT__icache_mod__DOT__trans)))) {
        if ((1U & (~ ((IData)(vlSelfRef.cache_hit) 
                      & (~ (IData)(vlSelfRef.__PVT__icache_mod__DOT__trans)))))) {
            vlSelfRef.cache_miss = 1U;
            if ((0U != vlSelfRef.__PVT__icache_mod__DOT__state)) {
                if ((1U == vlSelfRef.__PVT__icache_mod__DOT__state)) {
                    vlSelfRef.__PVT__rready_ifu = 1U;
                }
            }
            if ((0U == vlSelfRef.__PVT__icache_mod__DOT__state)) {
                if (vlSelfRef.__PVT__icache_mod__DOT__do_burst) {
                    vlSelfRef.__PVT__arsize_ifu = 2U;
                    vlSelfRef.__PVT__arburst_ifu = 1U;
                    vlSelfRef.__PVT__arlen_ifu = 3U;
                }
                vlSelfRef.__PVT__arvalid_ifu = 1U;
                vlSelfRef.__PVT__araddr_ifu = ((0xffffffc0U 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                               | ((0x00000030U 
                                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                  | ((IData)(vlSelfRef.__PVT__icache_mod__DOT__fill_count) 
                                                     << 2U)));
            }
        }
        if (((IData)(vlSelfRef.cache_hit) & (~ (IData)(vlSelfRef.__PVT__icache_mod__DOT__trans)))) {
            vlSelfRef.__PVT__cache_opcode = vlSelfRef.__PVT__icache_mod__DOT__block_cache
                [(3U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                        >> 4U))][(3U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                        >> 2U))][vlSelfRef.__PVT__icache_mod__DOT__hit_1];
            vlSelfRef.__PVT__cache_ready = 1U;
        }
    }
    vlSelfRef.if_de_valid_if = vlSelfRef.__PVT__cache_ready;
    vlSelfRef.__PVT__io_master_rready = 0U;
    vlSelfRef.__PVT__io_master_arsize = 0U;
    vlSelfRef.__PVT__io_master_arburst = 0U;
    vlSelfRef.__PVT__io_master_arlen = 0U;
    if (vlSelfRef.__PVT__arbiter_mod__DOT__read_busy) {
        if (vlSelfRef.__PVT__arbiter_mod__DOT__read_select) {
            vlSelfRef.__PVT__io_master_rready = vlSelfRef.__PVT__rready_ifu;
            vlSelfRef.__PVT__io_master_arsize = vlSelfRef.__PVT__arsize_ifu;
            vlSelfRef.__PVT__io_master_arburst = vlSelfRef.__PVT__arburst_ifu;
            vlSelfRef.__PVT__io_master_arlen = vlSelfRef.__PVT__arlen_ifu;
            vlSelfRef.__PVT__io_master_arvalid = vlSelfRef.__PVT__arvalid_ifu;
            vlSelfRef.__PVT__io_master_araddr = vlSelfRef.__PVT__araddr_ifu;
        } else {
            vlSelfRef.__PVT__io_master_rready = vlSelfRef.__PVT__rready_lsu;
            vlSelfRef.__PVT__io_master_arvalid = vlSelfRef.__PVT__arvalid_lsu;
            vlSelfRef.__PVT__io_master_araddr = vlSelfRef.__PVT__araddr_lsu;
        }
    } else {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__arvalid_lsu)))) {
            vlSelfRef.__PVT__io_master_arsize = vlSelfRef.__PVT__arsize_ifu;
            vlSelfRef.__PVT__io_master_arburst = vlSelfRef.__PVT__arburst_ifu;
            vlSelfRef.__PVT__io_master_arlen = vlSelfRef.__PVT__arlen_ifu;
        }
        if (vlSelfRef.__PVT__arvalid_lsu) {
            vlSelfRef.__PVT__io_master_arvalid = vlSelfRef.__PVT__arvalid_lsu;
            vlSelfRef.__PVT__io_master_araddr = vlSelfRef.__PVT__araddr_lsu;
        } else {
            vlSelfRef.__PVT__io_master_arvalid = vlSelfRef.__PVT__arvalid_ifu;
            vlSelfRef.__PVT__io_master_araddr = vlSelfRef.__PVT__araddr_ifu;
        }
    }
}

VL_ATTR_COLD void Vosoc_26000003_func_osoc_26000003_core___ctor_var_reset(Vosoc_26000003_func_osoc_26000003_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vosoc_26000003_func_osoc_26000003_core___ctor_var_reset\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__io_interrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 408515240381666009ull);
    vlSelf->__PVT__io_master_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15918341228068111945ull);
    vlSelf->__PVT__io_master_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1254038570903178483ull);
    vlSelf->__PVT__io_master_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5100000641368617149ull);
    vlSelf->__PVT__io_master_awid = 0U;
    ;
    vlSelf->__PVT__io_master_awlen = 0U;
    ;
    vlSelf->__PVT__io_master_awsize = 0U;
    ;
    vlSelf->__PVT__io_master_awburst = 0U;
    ;
    vlSelf->__PVT__io_master_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10619170216674498609ull);
    vlSelf->__PVT__io_master_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1901748201038864800ull);
    vlSelf->__PVT__io_master_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4508192480944508561ull);
    vlSelf->__PVT__io_master_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4103275223239596405ull);
    vlSelf->__PVT__io_master_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3571525934430669283ull);
    vlSelf->__PVT__io_master_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5636029676147399511ull);
    vlSelf->__PVT__io_master_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14479403608764655851ull);
    vlSelf->__PVT__io_master_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 252024972192926592ull);
    vlSelf->__PVT__io_master_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1062445100397978765ull);
    vlSelf->__PVT__io_master_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 189821581177370283ull);
    vlSelf->__PVT__io_master_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17696505626772089272ull);
    vlSelf->__PVT__io_master_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7705699152724094327ull);
    vlSelf->__PVT__io_master_arid = 0U;
    ;
    vlSelf->__PVT__io_master_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12197991585860830104ull);
    vlSelf->__PVT__io_master_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2926577748560128850ull);
    vlSelf->__PVT__io_master_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5406036630392025300ull);
    vlSelf->__PVT__io_master_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14835472978164275174ull);
    vlSelf->__PVT__io_master_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4643816389357758479ull);
    vlSelf->__PVT__io_master_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17575739218363420612ull);
    vlSelf->__PVT__io_master_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13565575050082382344ull);
    vlSelf->__PVT__io_master_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18248460336661176801ull);
    vlSelf->__PVT__io_master_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10731670764913458081ull);
    vlSelf->__PVT__io_slave_awready = 0U;
    ;
    vlSelf->__PVT__io_slave_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5334601523648441864ull);
    vlSelf->__PVT__io_slave_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2745451994456866424ull);
    vlSelf->__PVT__io_slave_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12914048876469032452ull);
    vlSelf->__PVT__io_slave_awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8315638325092922864ull);
    vlSelf->__PVT__io_slave_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16399205572355175556ull);
    vlSelf->__PVT__io_slave_awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5360184287951858800ull);
    vlSelf->__PVT__io_slave_wready = 0U;
    ;
    vlSelf->__PVT__io_slave_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13353078287730269036ull);
    vlSelf->__PVT__io_slave_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13100422519405067609ull);
    vlSelf->__PVT__io_slave_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1200568031881101223ull);
    vlSelf->__PVT__io_slave_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11119378898008568253ull);
    vlSelf->__PVT__io_slave_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5991839402217458983ull);
    vlSelf->__PVT__io_slave_bvalid = 0U;
    ;
    vlSelf->__PVT__io_slave_bresp = 0U;
    ;
    vlSelf->__PVT__io_slave_bid = 0U;
    ;
    vlSelf->__PVT__io_slave_arready = 0U;
    ;
    vlSelf->__PVT__io_slave_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9295917410590269615ull);
    vlSelf->__PVT__io_slave_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8494381812203753726ull);
    vlSelf->__PVT__io_slave_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4271623300114428176ull);
    vlSelf->__PVT__io_slave_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15287740914422975644ull);
    vlSelf->__PVT__io_slave_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4321564869539443489ull);
    vlSelf->__PVT__io_slave_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13405440217435810056ull);
    vlSelf->__PVT__io_slave_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13430075741762723373ull);
    vlSelf->__PVT__io_slave_rvalid = 0U;
    ;
    vlSelf->__PVT__io_slave_rresp = 0U;
    ;
    vlSelf->__PVT__io_slave_rdata = 0U;
    ;
    vlSelf->__PVT__io_slave_rlast = 0U;
    ;
    vlSelf->__PVT__io_slave_rid = 0U;
    ;
    vlSelf->pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4211327832146562899ull);
    vlSelf->prev_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12924587517633256460ull);
    vlSelf->opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17409787017080135397ull);
    vlSelf->pc_e = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9146955422444635922ull);
    vlSelf->reg_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4430225706042301878ull);
    vlSelf->reg_valid_e = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6645668847962932086ull);
    vlSelf->if_de_valid_if = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17151763834328238912ull);
    vlSelf->if_de_ready_if = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9700727559434447595ull);
    vlSelf->ex_ls_valid_ls = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17057413494168820046ull);
    vlSelf->ex_ls_ready_ls = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8886037338207981883ull);
    vlSelf->branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16985980692193088871ull);
    vlSelf->branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9741308562845961313ull);
    vlSelf->ex_ls_bus_lsu_we_ls = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3417054655984006166ull);
    vlSelf->ex_ls_bus_lsu_re_ls = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 340196596270469365ull);
    vlSelf->cache_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17255008709395737556ull);
    vlSelf->cache_miss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12724482402881841698ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->ex_ls_valid_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18067986369542588320ull);
    vlSelf->__PVT__if_de_bus_next_pc_if = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8165021894884534420ull);
    vlSelf->__PVT__if_de_ready_de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7921684496466366586ull);
    vlSelf->__PVT__if_de_bus_speculate_if = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17371120156229529341ull);
    vlSelf->__PVT__cache_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9681645960413080556ull);
    vlSelf->__PVT__cache_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2594211190826387941ull);
    vlSelf->__PVT__de_ex_bus_imm_de = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17576545872836479833ull);
    vlSelf->__PVT__de_ex_bus_data_csr_de = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10187345917859985403ull);
    vlSelf->__PVT__de_ex_bus_alu_op_de = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5116175625878018098ull);
    vlSelf->__PVT__de_ex_bus_lsu_we_de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10261759369830992092ull);
    vlSelf->__PVT__de_ex_bus_lsu_re_de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17638258412099170330ull);
    vlSelf->__PVT__de_ex_bus_lsu_oper_de = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14743347030258358923ull);
    vlSelf->__PVT__de_ex_bus_rd_de = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18178161490164733189ull);
    vlSelf->__PVT__de_ex_bus_mux_select_de = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12221935066368588568ull);
    vlSelf->__PVT__de_ex_bus_mux_select_pc_de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1112757545737507674ull);
    vlSelf->__PVT__de_ex_valid_de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12622392354681499088ull);
    vlSelf->__PVT__de_ex_bus_mcause_de = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11882886662337413260ull);
    vlSelf->__PVT__de_ex_bus_exception_de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8631107683028964562ull);
    vlSelf->__PVT__de_ex_bus_rs1_de = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16790028327027132215ull);
    vlSelf->__PVT__de_ex_bus_rs2_de = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17265378358916144403ull);
    vlSelf->__PVT__de_ex_bus_csr_de = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13892461058505997947ull);
    vlSelf->__PVT__de_ex_bus_data_rs1_de = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2094580885472345631ull);
    vlSelf->__PVT__de_ex_bus_data_rs2_de = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13998608857498031720ull);
    vlSelf->__PVT__ex_ls_bus_alu_out_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4062273081092381431ull);
    vlSelf->__PVT__ex_ls_bus_branch_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11679805346955742424ull);
    vlSelf->__PVT__ex_ls_bus_diff_pc_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17111810133212281934ull);
    vlSelf->__PVT__ex_branch_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15966222639215451721ull);
    vlSelf->__PVT__ls_wb_bus_alu_out_ls = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6650582740072509987ull);
    vlSelf->__PVT__ls_wb_valid_ls = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15694999130016454148ull);
    vlSelf->ls_wb_bus_mcause_wb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10067611322246349791ull);
    vlSelf->ls_wb_bus_exception_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18006616091933328283ull);
    vlSelf->ls_wb_bus_speculate_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3191042372065088761ull);
    vlSelf->ls_wb_bus_pc_wb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3765228508650248287ull);
    vlSelf->__PVT__ls_wb_bus_csr_pc_wb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 243951805140232837ull);
    vlSelf->__PVT__fencei = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928539165604904974ull);
    vlSelf->__PVT__fencei_commit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14270189930794542596ull);
    vlSelf->flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8361382489806169962ull);
    vlSelf->flush_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9950867260751966189ull);
    vlSelf->__PVT__pc_ifu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2361123546274126082ull);
    vlSelf->__PVT__addr_spec = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12281838294911468819ull);
    vlSelf->__PVT__finish_de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6004410757903299874ull);
    vlSelf->__PVT__reg_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2625540829531450431ull);
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
    vlSelf->__PVT__arlen_ifu = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4817509498094730544ull);
    vlSelf->__PVT__arsize_ifu = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11107433436458024776ull);
    vlSelf->__PVT__arburst_ifu = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6301670539892746832ull);
    vlSelf->__PVT__pc_mod__DOT__ex_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7629115568127385108ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->__PVT__ifu_mod__DOT__block_tag[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 1029472350097917291ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->__PVT__ifu_mod__DOT__block_offset[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4166247990610853285ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->__PVT__ifu_mod__DOT__block_valid[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9365009574130842365ull);
        }
    }
    vlSelf->__PVT__ifu_mod__DOT__latest_row = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3672550290713835185ull);
    vlSelf->__PVT__ifu_mod__DOT__hit_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5513993247845854069ull);
    vlSelf->__PVT__ifu_mod__DOT__hit_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3396374811242362ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
                vlSelf->__PVT__icache_mod__DOT__block_cache[__Vi0][__Vi1][__Vi2] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8861546975226832612ull);
            }
        }
    }
    vlSelf->__PVT__icache_mod__DOT__latest_row = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17456332926064755677ull);
    vlSelf->__PVT__icache_mod__DOT__miss_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18214518110679701523ull);
    vlSelf->__PVT__icache_mod__DOT__trans = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11940426996473699993ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->__PVT__icache_mod__DOT__block_tag[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 6437289713756369686ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->__PVT__icache_mod__DOT__block_valid[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16124468881779209910ull);
        }
    }
    vlSelf->__PVT__icache_mod__DOT__do_burst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6610752356143082565ull);
    vlSelf->__PVT__icache_mod__DOT__burst_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18137546050603378062ull);
    vlSelf->__PVT__icache_mod__DOT__burst_addr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15794423434024582630ull);
    vlSelf->__PVT__icache_mod__DOT__state = 0;
    vlSelf->__PVT__icache_mod__DOT__fill_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15184481696474815659ull);
    vlSelf->__PVT__icache_mod__DOT__hit_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1524298792376583937ull);
    vlSelf->__PVT__if_de_pipeline_mod__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7842163735032315330ull);
    vlSelf->__PVT__if_de_pipeline_mod__DOT__if_de_bus_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2456669545552670388ull);
    vlSelf->__PVT__if_de_pipeline_mod__DOT__if_de_bus_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12153952023718732093ull);
    vlSelf->__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9365614825807303374ull);
    vlSelf->__PVT__if_de_pipeline_mod__DOT__if_de_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17604611950366528339ull);
    vlSelf->__PVT__if_de_pipeline_mod__DOT__if_de_bus_mcause = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10855583745543681237ull);
    vlSelf->__PVT__if_de_pipeline_mod__DOT__if_de_bus_exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5759612914725470701ull);
    vlSelf->__PVT__if_de_pipeline_mod__DOT__if_de_bus_speculate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15899141638994661378ull);
    vlSelf->__PVT__decode_mod__DOT__imm_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17728463912631228713ull);
    vlSelf->__PVT__decode_mod__DOT__ex_match_rs1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1909889194232398444ull);
    vlSelf->__PVT__decode_mod__DOT__ex_match_rs2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12170233636869580730ull);
    vlSelf->__PVT__decode_mod__DOT__ls_match_rs1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13926088428323175925ull);
    vlSelf->__PVT__decode_mod__DOT__ls_match_rs2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17154898563661955977ull);
    vlSelf->__PVT__decode_mod__DOT__wb_match_rs1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7493017038666493173ull);
    vlSelf->__PVT__decode_mod__DOT__wb_match_rs2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16724503956981412264ull);
    vlSelf->decode_mod__DOT____VdfgExtracted_h4e467bd8__0 = 0;
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14136551510039121065ull);
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 552812029351010529ull);
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11531077982812605786ull);
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1208084716488567851ull);
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6931214283450929617ull);
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6634146930990191721ull);
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_csr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7148551758708683728ull);
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9990534957025167519ull);
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10024528885442881063ull);
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8584247954665255645ull);
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_oper = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12119649564000952127ull);
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11611696226489413505ull);
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9151672319023814050ull);
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_csr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 450444331259435734ull);
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_mux_select = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14974084596269179510ull);
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_mux_select_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7200886750033105356ull);
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__de_ex_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14052073121862080425ull);
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__finish = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1423344612573482822ull);
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6738447926440155321ull);
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_mcause = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9378374663885264733ull);
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16652348094858765204ull);
    vlSelf->__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_speculate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4954464380067818746ull);
    vlSelf->__PVT__alu_mod__DOT__val1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3618980885417066799ull);
    vlSelf->__PVT__alu_mod__DOT__val2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5531290321701216620ull);
    vlSelf->__PVT__alu_mod__DOT__csr_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10826680948858873122ull);
    vlSelf->__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16568773842471907298ull);
    vlSelf->__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1963925173832307852ull);
    vlSelf->__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13130780950861577534ull);
    vlSelf->__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_data_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3295741664470652903ull);
    vlSelf->__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_csr_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4646599615048308004ull);
    vlSelf->__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7416656538740225021ull);
    vlSelf->__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5897533104545530940ull);
    vlSelf->__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13243338346312700988ull);
    vlSelf->__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2521380972664340869ull);
    vlSelf->__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_csr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15919665143433782154ull);
    vlSelf->__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mux_select = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10766453436039486103ull);
    vlSelf->__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mux_select_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 583612315764591728ull);
    vlSelf->__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18314466581056051322ull);
    vlSelf->__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_diff_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8115323466679488396ull);
    vlSelf->__PVT__ex_ls_pipeline_mod__DOT__ex_ls_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12600356607840901120ull);
    vlSelf->__PVT__ex_ls_pipeline_mod__DOT__finish = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14241310311910801179ull);
    vlSelf->__PVT__ex_ls_pipeline_mod__DOT__opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6208083185786875204ull);
    vlSelf->__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mcause = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13774938631577203545ull);
    vlSelf->__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1843044092018902568ull);
    vlSelf->__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_speculate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 751727875852394427ull);
    vlSelf->__PVT__lsu_mod__DOT__done_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7759797624961867984ull);
    vlSelf->__PVT__lsu_mod__DOT__done_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16734576510063392104ull);
    vlSelf->__PVT__lsu_mod__DOT__trans_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6030449364252951771ull);
    vlSelf->__PVT__lsu_mod__DOT__trans_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18095301150129531267ull);
    vlSelf->__PVT__lsu_mod__DOT__lsu_r = 0;
    vlSelf->__PVT__lsu_mod__DOT__done_aw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7999347421721851315ull);
    vlSelf->__PVT__lsu_mod__DOT__done_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9089321588137706110ull);
    vlSelf->__PVT__lsu_mod__DOT__lsu_w = 0;
    vlSelf->__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2769648753122199504ull);
    vlSelf->__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_alu_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18436279122304604761ull);
    vlSelf->__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15877892387504623319ull);
    vlSelf->__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7730927470462373597ull);
    vlSelf->__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7097113630705485455ull);
    vlSelf->__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9471281718458338245ull);
    vlSelf->__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15717918307466231533ull);
    vlSelf->__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18098123074605415926ull);
    vlSelf->__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3750399211216763561ull);
    vlSelf->__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_diff_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8850493174644293056ull);
    vlSelf->__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6774158755237456974ull);
    vlSelf->__PVT__ls_wb_pipeline_mod__DOT__finish = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8980037283535062954ull);
    vlSelf->__PVT__ls_wb_pipeline_mod__DOT__opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1224269743035504667ull);
    vlSelf->__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mcause = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10798405727289855727ull);
    vlSelf->__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11991642484118659942ull);
    vlSelf->__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_speculate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 467054127360573367ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__csr_mod__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12209870551186757864ull);
    }
    vlSelf->__PVT__csr_mod__DOT__working_reg_r = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13806022113254851159ull);
    vlSelf->__PVT__csr_mod__DOT__working_reg_w = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1209472104103101372ull);
    vlSelf->__PVT__arbiter_mod__DOT__read_select = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12286091134216689364ull);
    vlSelf->__PVT__arbiter_mod__DOT__read_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8262791110782432784ull);
    vlSelf->__PVT__arbiter_mod__DOT__write_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 140027711000962280ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
}
