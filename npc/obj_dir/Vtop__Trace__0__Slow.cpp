// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__0(Vtop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$rootio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__top__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__reg_mod__0(Vtop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+94,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+0,0,"if_id_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 95,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"if_id_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"if_id_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+4,0,"id_ex_bus_decoded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 198,0);
    VL_TRACE_DECL_WIDE(tracep,c+11,0,"id_ex_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 198,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"id_ex_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"id_ex_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+18,0,"ex_ls_bus_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 140,0);
    VL_TRACE_DECL_WIDE(tracep,c+23,0,"ex_ls_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 140,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"ex_ls_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"ex_ls_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+28,0,"ls_wb_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 134,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"ls_wb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"ls_wb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"csr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"id_ex_ready_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"id_ex_ready_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"ex_ls_valid_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"ex_ls_valid_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"csr_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"reg_data_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"reg_data_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"reg_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "alu_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_WIDE(tracep,c+11,0,"bus_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 198,0);
    VL_TRACE_DECL_WIDE(tracep,c+18,0,"bus_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 140,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"valid_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"ready_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"ready_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"valid_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"val1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"val2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+11,0,"unused_bus_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 198,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "csr_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"oper",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"cause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"valid_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"ready_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"ready_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"valid_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "regs", VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+62+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"working_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "decode_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_WIDE(tracep,c+0,0,"bus_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 95,0);
    VL_TRACE_DECL_WIDE(tracep,c+4,0,"bus_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 198,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"valid_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"ready_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"ready_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"valid_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"imm_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"imm_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"imm_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"imm_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"imm_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"func7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"rs1_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"rs2_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"rd_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "ifu_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+0,0,"bus_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 95,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "lsu_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+23,0,"bus_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 140,0);
    VL_TRACE_DECL_WIDE(tracep,c+28,0,"bus_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 134,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"valid_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"ready_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"ready_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"valid_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"lsu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"unused_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "pc_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "reg_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__top__reg_mod__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__reg_mod__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__reg_mod__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+94,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+60,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"data_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"data_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "regs", VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+98+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+130,(1U));
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullWData(oldp+0,(vlSymsp->TOP__top.__PVT__if_id_bus),96);
    bufp->fullBit(oldp+3,(vlSymsp->TOP__top.__PVT__if_id_valid));
    bufp->fullWData(oldp+4,(vlSymsp->TOP__top.__PVT__id_ex_bus_decoded),199);
    bufp->fullWData(oldp+11,(vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in),199);
    bufp->fullWData(oldp+18,(vlSymsp->TOP__top.__PVT__ex_ls_bus_alu),141);
    bufp->fullWData(oldp+23,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in),141);
    bufp->fullWData(oldp+28,(vlSymsp->TOP__top.__PVT__ls_wb_bus),135);
    bufp->fullIData(oldp+33,(vlSymsp->TOP__top.__PVT__csr_data),32);
    bufp->fullIData(oldp+34,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__data_in),32);
    bufp->fullIData(oldp+35,(vlSymsp->TOP__top__reg_mod.__PVT__data_rs1),32);
    bufp->fullIData(oldp+36,(vlSymsp->TOP__top__reg_mod.__PVT__data_rs2),32);
    bufp->fullIData(oldp+37,(((2U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])
                               ? ((1U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])
                                   ? ((vlSymsp->TOP__top.__PVT__ls_wb_bus[1U] 
                                       << 0x00000019U) 
                                      | (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                         >> 7U)) : 
                                  ((vlSymsp->TOP__top.__PVT__ls_wb_bus[2U] 
                                    << 0x00000019U) 
                                   | (vlSymsp->TOP__top.__PVT__ls_wb_bus[1U] 
                                      >> 7U))) : ((1U 
                                                   & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])
                                                   ? 
                                                  ((vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                                                    << 0x00000019U) 
                                                   | (vlSymsp->TOP__top.__PVT__ls_wb_bus[2U] 
                                                      >> 7U))
                                                   : 
                                                  ((vlSymsp->TOP__top.__PVT__ls_wb_bus[4U] 
                                                    << 0x00000019U) 
                                                   | (vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                                                      >> 7U))))),32);
    bufp->fullIData(oldp+38,(vlSymsp->TOP__top.__PVT__alu_mod__DOT__val1),32);
    bufp->fullIData(oldp+39,(vlSymsp->TOP__top.__PVT__alu_mod__DOT__val2),32);
    bufp->fullCData(oldp+40,((3U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                    >> 0x00000011U))),2);
    bufp->fullCData(oldp+41,((0x0000001fU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                             >> 0x0000000cU))),5);
    bufp->fullSData(oldp+42,((0x00000fffU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[3U] 
                                             >> 7U))),12);
    bufp->fullCData(oldp+43,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__working_reg),5);
    bufp->fullIData(oldp+44,(vlSymsp->TOP__top.__PVT__decode_mod__DOT__imm_i),32);
    bufp->fullIData(oldp+45,((((- (IData)((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                           >> 0x0000001fU))) 
                               << 0x0000000bU) | ((0x000007e0U 
                                                   & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001fU 
                                                     & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                        >> 7U))))),32);
    bufp->fullIData(oldp+46,((((- (IData)((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                           >> 0x0000001fU))) 
                               << 0x0000000cU) | ((0x00000800U 
                                                   & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                      << 4U)) 
                                                  | ((0x000007e0U 
                                                      & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                         >> 0x00000014U)) 
                                                     | (0x0000001eU 
                                                        & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                           >> 7U)))))),32);
    bufp->fullIData(oldp+47,((0xfffff000U & vlSymsp->TOP__top.__PVT__if_id_bus[0U])),32);
    bufp->fullIData(oldp+48,((((- (IData)((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                           >> 0x0000001fU))) 
                               << 0x00000014U) | ((
                                                   ((0x000001feU 
                                                     & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                        >> 0x0000000bU)) 
                                                    | (1U 
                                                       & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                          >> 0x00000014U))) 
                                                   << 0x0000000bU) 
                                                  | (0x000007feU 
                                                     & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                        >> 0x00000014U))))),32);
    bufp->fullCData(oldp+49,((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                              >> 0x00000019U)),7);
    bufp->fullCData(oldp+50,((0x0000001fU & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                             >> 0x0000000fU))),5);
    bufp->fullCData(oldp+51,((0x0000001fU & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                             >> 0x00000014U))),5);
    bufp->fullCData(oldp+52,((0x0000001fU & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                             >> 7U))),5);
    bufp->fullCData(oldp+53,((7U & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                    >> 0x0000000cU))),3);
    bufp->fullIData(oldp+54,(vlSymsp->TOP__top.__PVT__if_id_bus[0U]),32);
    bufp->fullIData(oldp+55,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__A),32);
    bufp->fullIData(oldp+56,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__lsu_out),32);
    bufp->fullBit(oldp+57,((1U & vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U])));
    bufp->fullIData(oldp+58,(((vlSymsp->TOP__top.__PVT__ls_wb_bus[4U] 
                               << 0x00000019U) | (vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                                                  >> 7U))),32);
    bufp->fullCData(oldp+59,((0x0000001fU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U] 
                                             >> 2U))),5);
    bufp->fullCData(oldp+60,((0x0000001fU & ((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U] 
                                              << 3U) 
                                             | (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                                >> 0x0000001dU)))),5);
    bufp->fullCData(oldp+61,((0x0000001fU & (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                             >> 2U))),5);
    bufp->fullIData(oldp+62,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[31]),32);
    bufp->fullIData(oldp+63,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[30]),32);
    bufp->fullIData(oldp+64,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[29]),32);
    bufp->fullIData(oldp+65,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[28]),32);
    bufp->fullIData(oldp+66,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[27]),32);
    bufp->fullIData(oldp+67,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[26]),32);
    bufp->fullIData(oldp+68,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[25]),32);
    bufp->fullIData(oldp+69,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[24]),32);
    bufp->fullIData(oldp+70,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[23]),32);
    bufp->fullIData(oldp+71,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[22]),32);
    bufp->fullIData(oldp+72,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[21]),32);
    bufp->fullIData(oldp+73,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[20]),32);
    bufp->fullIData(oldp+74,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[19]),32);
    bufp->fullIData(oldp+75,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[18]),32);
    bufp->fullIData(oldp+76,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[17]),32);
    bufp->fullIData(oldp+77,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[16]),32);
    bufp->fullIData(oldp+78,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[15]),32);
    bufp->fullIData(oldp+79,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[14]),32);
    bufp->fullIData(oldp+80,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[13]),32);
    bufp->fullIData(oldp+81,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[12]),32);
    bufp->fullIData(oldp+82,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[11]),32);
    bufp->fullIData(oldp+83,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[10]),32);
    bufp->fullIData(oldp+84,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[9]),32);
    bufp->fullIData(oldp+85,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[8]),32);
    bufp->fullIData(oldp+86,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[7]),32);
    bufp->fullIData(oldp+87,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[6]),32);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[5]),32);
    bufp->fullIData(oldp+89,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[4]),32);
    bufp->fullIData(oldp+90,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[3]),32);
    bufp->fullIData(oldp+91,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[2]),32);
    bufp->fullIData(oldp+92,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[1]),32);
    bufp->fullIData(oldp+93,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[0]),32);
    bufp->fullBit(oldp+94,(vlSelfRef.clk));
    bufp->fullBit(oldp+95,(vlSelfRef.rst));
    bufp->fullIData(oldp+96,(vlSymsp->TOP__top.pc),32);
    bufp->fullIData(oldp+97,(((IData)(4U) + vlSymsp->TOP__top.pc)),32);
    bufp->fullIData(oldp+98,(vlSymsp->TOP__top__reg_mod.regs[31]),32);
    bufp->fullIData(oldp+99,(vlSymsp->TOP__top__reg_mod.regs[30]),32);
    bufp->fullIData(oldp+100,(vlSymsp->TOP__top__reg_mod.regs[29]),32);
    bufp->fullIData(oldp+101,(vlSymsp->TOP__top__reg_mod.regs[28]),32);
    bufp->fullIData(oldp+102,(vlSymsp->TOP__top__reg_mod.regs[27]),32);
    bufp->fullIData(oldp+103,(vlSymsp->TOP__top__reg_mod.regs[26]),32);
    bufp->fullIData(oldp+104,(vlSymsp->TOP__top__reg_mod.regs[25]),32);
    bufp->fullIData(oldp+105,(vlSymsp->TOP__top__reg_mod.regs[24]),32);
    bufp->fullIData(oldp+106,(vlSymsp->TOP__top__reg_mod.regs[23]),32);
    bufp->fullIData(oldp+107,(vlSymsp->TOP__top__reg_mod.regs[22]),32);
    bufp->fullIData(oldp+108,(vlSymsp->TOP__top__reg_mod.regs[21]),32);
    bufp->fullIData(oldp+109,(vlSymsp->TOP__top__reg_mod.regs[20]),32);
    bufp->fullIData(oldp+110,(vlSymsp->TOP__top__reg_mod.regs[19]),32);
    bufp->fullIData(oldp+111,(vlSymsp->TOP__top__reg_mod.regs[18]),32);
    bufp->fullIData(oldp+112,(vlSymsp->TOP__top__reg_mod.regs[17]),32);
    bufp->fullIData(oldp+113,(vlSymsp->TOP__top__reg_mod.regs[16]),32);
    bufp->fullIData(oldp+114,(vlSymsp->TOP__top__reg_mod.regs[15]),32);
    bufp->fullIData(oldp+115,(vlSymsp->TOP__top__reg_mod.regs[14]),32);
    bufp->fullIData(oldp+116,(vlSymsp->TOP__top__reg_mod.regs[13]),32);
    bufp->fullIData(oldp+117,(vlSymsp->TOP__top__reg_mod.regs[12]),32);
    bufp->fullIData(oldp+118,(vlSymsp->TOP__top__reg_mod.regs[11]),32);
    bufp->fullIData(oldp+119,(vlSymsp->TOP__top__reg_mod.regs[10]),32);
    bufp->fullIData(oldp+120,(vlSymsp->TOP__top__reg_mod.regs[9]),32);
    bufp->fullIData(oldp+121,(vlSymsp->TOP__top__reg_mod.regs[8]),32);
    bufp->fullIData(oldp+122,(vlSymsp->TOP__top__reg_mod.regs[7]),32);
    bufp->fullIData(oldp+123,(vlSymsp->TOP__top__reg_mod.regs[6]),32);
    bufp->fullIData(oldp+124,(vlSymsp->TOP__top__reg_mod.regs[5]),32);
    bufp->fullIData(oldp+125,(vlSymsp->TOP__top__reg_mod.regs[4]),32);
    bufp->fullIData(oldp+126,(vlSymsp->TOP__top__reg_mod.regs[3]),32);
    bufp->fullIData(oldp+127,(vlSymsp->TOP__top__reg_mod.regs[2]),32);
    bufp->fullIData(oldp+128,(vlSymsp->TOP__top__reg_mod.regs[1]),32);
    bufp->fullIData(oldp+129,(vlSymsp->TOP__top__reg_mod.regs[0]),32);
}
