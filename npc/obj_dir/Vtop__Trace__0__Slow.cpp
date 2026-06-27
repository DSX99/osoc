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
    VL_TRACE_DECL_BIT(tracep,c+189,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
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
    VL_TRACE_DECL_BIT(tracep,c+189,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+192,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"reg_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"reg_valid_e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+194,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "if_id_bus", VerilatedTracePrefixType::STRUCT_PACKED, 3, 0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+98,0,"if_id_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"if_id_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "id_ex_bus_decoded", VerilatedTracePrefixType::STRUCT_PACKED, 17, 0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"data_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"data_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"branch_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"csr_oper",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"lsu_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"lsu_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"lsu_oper",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"mux_select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+21,0,"mux_select_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "id_ex_bus", VerilatedTracePrefixType::STRUCT_PACKED, 17, 0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"data_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"data_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"branch_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"csr_oper",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"lsu_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"lsu_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"lsu_oper",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"mux_select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"mux_select_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+98,0,"id_ex_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"id_ex_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "ex_ls_bus_alu", VerilatedTracePrefixType::STRUCT_PACKED, 11, 0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"data_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"csr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+43,0,"lsu_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+44,0,"lsu_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"lsu_oper",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"mux_select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+48,0,"mux_select_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "ex_ls_bus", VerilatedTracePrefixType::STRUCT_PACKED, 11, 0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"data_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"csr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"lsu_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+55,0,"lsu_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"lsu_oper",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"mux_select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+59,0,"mux_select_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+98,0,"ex_ls_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"ex_ls_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "ls_wb_bus", VerilatedTracePrefixType::STRUCT_PACKED, 7, 0);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"lsu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"csr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"mux_select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"mux_select_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"ls_wb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+227,0,"ls_wb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"csr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"pc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"id_ex_ready_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"id_ex_ready_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+98,0,"ex_ls_valid_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+98,0,"ex_ls_valid_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"csr_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"reg_data_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"reg_data_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"reg_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"araddr_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"rdata_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"rresp_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+102,0,"arvalid_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+103,0,"arready_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+104,0,"rvalid_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+105,0,"rready_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+106,0,"awaddr_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"wdata_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"wstrb_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+108,0,"bresp_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+109,0,"awvalid_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+110,0,"awready_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+111,0,"wvalid_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+112,0,"wready_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+113,0,"bvalid_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+114,0,"bready_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+115,0,"araddr_ifu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+116,0,"rdata_ifu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+117,0,"rresp_ifu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+118,0,"arvalid_ifu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+119,0,"arready_ifu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+120,0,"rvalid_ifu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+121,0,"rready_ifu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+122,0,"araddr_arbiter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+123,0,"rdata_arbiter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+124,0,"rresp_arbiter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+125,0,"arvalid_arbiter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"arready_arbiter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"rvalid_arbiter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+128,0,"rready_arbiter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+106,0,"awaddr_arbiter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"wdata_arbiter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"wstrb_arbiter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+108,0,"bresp_arbiter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+109,0,"awvalid_arbiter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+110,0,"awready_arbiter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+111,0,"wvalid_arbiter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+112,0,"wready_arbiter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+113,0,"bvalid_arbiter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+114,0,"bready_arbiter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+129,0,"cwdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+130,0,"crdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+131,0,"caddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+132,0,"cwvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+133,0,"crvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+134,0,"cready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "CLINT_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+131,0,"caddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+129,0,"cwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+130,0,"crdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+133,0,"crvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+132,0,"cwvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+134,0,"cready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+135,0,"mtime",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+137,0,"timecp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+138,0,"unused_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "alu_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "bus_in", VerilatedTracePrefixType::STRUCT_PACKED, 17, 0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"data_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"data_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"branch_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"csr_oper",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"cause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"lsu_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"lsu_re",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"lsu_oper",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"mux_select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"mux_select_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "bus_out", VerilatedTracePrefixType::STRUCT_PACKED, 11, 0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"alu_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"data_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"csr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+43,0,"lsu_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+44,0,"lsu_re",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"lsu_oper",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"mux_select",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+48,0,"mux_select_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+98,0,"valid_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"ready_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"ready_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+98,0,"valid_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+75,0,"val1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"val2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+77,0,"unused_bus_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 199,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "arbiter_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"araddr_lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+102,0,"arvalid_lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+103,0,"arready_lsu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"rdata_lsu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"rresp_lsu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+104,0,"rvalid_lsu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+105,0,"rready_lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+106,0,"awaddr_lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+109,0,"awvalid_lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+110,0,"awready_lsu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"wdata_lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"wstrb_lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+111,0,"wvalid_lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+112,0,"wready_lsu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+108,0,"bresp_lsu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+113,0,"bvalid_lsu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+114,0,"bready_lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+115,0,"araddr_ifu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+118,0,"arvalid_ifu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+119,0,"arready_ifu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+116,0,"rdata_ifu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+117,0,"rresp_ifu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+120,0,"rvalid_ifu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+121,0,"rready_ifu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+122,0,"araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+125,0,"arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+123,0,"rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+124,0,"rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+128,0,"rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+106,0,"awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+109,0,"awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+110,0,"awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+111,0,"wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+112,0,"wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+108,0,"bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+113,0,"bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+114,0,"bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+139,0,"chose",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+140,0,"lsu_transfer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+141,0,"ifu_transfer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "axi_slave_lsu_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+122,0,"araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+125,0,"arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+123,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+124,0,"rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+128,0,"rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+106,0,"awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+109,0,"awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+110,0,"awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+111,0,"wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+112,0,"wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+108,0,"bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+113,0,"bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+114,0,"bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+142,0,"slave",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+143,0,"slave_w",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+144,0,"done_aw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+145,0,"done_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+146,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+147,0,"aw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "csr_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"oper",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"cause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+98,0,"valid_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"ready_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"ready_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+98,0,"valid_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "regs", VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+149+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"working_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "decode_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "bus_in", VerilatedTracePrefixType::STRUCT_PACKED, 3, 0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "bus_out", VerilatedTracePrefixType::STRUCT_PACKED, 17, 0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"data_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"data_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"branch_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"csr_oper",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"cause",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"lsu_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"lsu_re",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"lsu_oper",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"mux_select",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+21,0,"mux_select_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+98,0,"valid_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"ready_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"ready_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+98,0,"valid_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"imm_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"imm_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"imm_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"imm_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"imm_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"func7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"rs1_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"rs2_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"rd_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "ifu_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+194,0,"next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "bus_out", VerilatedTracePrefixType::STRUCT_PACKED, 3, 0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+98,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+115,0,"araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+118,0,"arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+119,0,"arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+116,0,"rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+117,0,"rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+120,0,"rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+121,0,"rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+181,0,"ifu",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+182,0,"unused_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "lsu_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "bus_in", VerilatedTracePrefixType::STRUCT_PACKED, 11, 0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"alu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"data_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"csr_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"lsu_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+55,0,"lsu_re",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"lsu_oper",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"mux_select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+59,0,"mux_select_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "bus_out", VerilatedTracePrefixType::STRUCT_PACKED, 7, 0);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"alu_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"lsu_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"csr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"mux_select",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"mux_select_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+98,0,"valid_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+227,0,"ready_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"ready_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"valid_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+102,0,"arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+103,0,"arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+104,0,"rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+105,0,"rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+106,0,"awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+109,0,"awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+110,0,"awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+111,0,"wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+112,0,"wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+108,0,"bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+113,0,"bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+114,0,"bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+130,0,"crdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+133,0,"crvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+129,0,"cwdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+132,0,"cwvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+134,0,"cready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+131,0,"caddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+183,0,"lsu_r",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+97,0,"unused_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+184,0,"done_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+185,0,"done_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+186,0,"done_aw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+187,0,"done_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+188,0,"lsu_w",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "pc_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+194,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
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
    VL_TRACE_DECL_BIT(tracep,c+189,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"data_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"data_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+227,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "regs", VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+195+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 31,0);
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
    bufp->fullBit(oldp+227,(1U));
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
    bufp->fullBit(oldp+0,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__valid_right));
    bufp->fullIData(oldp+1,(vlSymsp->TOP__top.__PVT__if_id_bus[2U]),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__top.__PVT__if_id_bus[1U]),32);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__top.__PVT__if_id_bus[0U]),32);
    bufp->fullBit(oldp+4,(vlSymsp->TOP__top.__PVT__alu_mod__DOT__ready_right));
    bufp->fullIData(oldp+5,(((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[6U] 
                              << 0x00000018U) | (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[5U] 
                                                 >> 8U))),32);
    bufp->fullIData(oldp+6,(((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[5U] 
                              << 0x00000018U) | (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[4U] 
                                                 >> 8U))),32);
    bufp->fullIData(oldp+7,(((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[4U] 
                              << 0x00000018U) | (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[3U] 
                                                 >> 8U))),32);
    bufp->fullIData(oldp+8,(((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[3U] 
                              << 0x00000018U) | (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[2U] 
                                                 >> 8U))),32);
    bufp->fullIData(oldp+9,(((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[2U] 
                              << 0x00000018U) | (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U] 
                                                 >> 8U))),32);
    bufp->fullCData(oldp+10,((0x0000001fU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U] 
                                             >> 3U))),5);
    bufp->fullCData(oldp+11,((0x0000001fU & ((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                                >> 0x0000001eU)))),5);
    bufp->fullCData(oldp+12,((0x000000ffU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                             >> 0x00000016U))),8);
    bufp->fullBit(oldp+13,((1U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                  >> 0x00000015U))));
    bufp->fullCData(oldp+14,((7U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                    >> 0x00000012U))),3);
    bufp->fullCData(oldp+15,((0x0000001fU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                             >> 0x0000000dU))),5);
    bufp->fullBit(oldp+16,((1U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                  >> 0x0000000cU))));
    bufp->fullBit(oldp+17,((1U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                  >> 0x0000000bU))));
    bufp->fullCData(oldp+18,((7U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                    >> 8U))),3);
    bufp->fullCData(oldp+19,((0x0000001fU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                             >> 3U))),5);
    bufp->fullCData(oldp+20,((3U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                    >> 1U))),2);
    bufp->fullBit(oldp+21,((1U & vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U])));
    bufp->fullIData(oldp+22,(((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[6U] 
                               << 0x00000018U) | (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[5U] 
                                                  >> 8U))),32);
    bufp->fullIData(oldp+23,(((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[5U] 
                               << 0x00000018U) | (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[4U] 
                                                  >> 8U))),32);
    bufp->fullIData(oldp+24,(((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[4U] 
                               << 0x00000018U) | (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[3U] 
                                                  >> 8U))),32);
    bufp->fullIData(oldp+25,(((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[3U] 
                               << 0x00000018U) | (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[2U] 
                                                  >> 8U))),32);
    bufp->fullIData(oldp+26,(((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[2U] 
                               << 0x00000018U) | (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[1U] 
                                                  >> 8U))),32);
    bufp->fullCData(oldp+27,((0x0000001fU & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[1U] 
                                             >> 3U))),5);
    bufp->fullCData(oldp+28,((0x0000001fU & ((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[1U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                                >> 0x0000001eU)))),5);
    bufp->fullCData(oldp+29,((0x000000ffU & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                             >> 0x00000016U))),8);
    bufp->fullBit(oldp+30,((1U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                  >> 0x00000015U))));
    bufp->fullCData(oldp+31,((7U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                    >> 0x00000012U))),3);
    bufp->fullCData(oldp+32,((0x0000001fU & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                             >> 0x0000000dU))),5);
    bufp->fullBit(oldp+33,((1U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                  >> 0x0000000cU))));
    bufp->fullBit(oldp+34,((1U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                  >> 0x0000000bU))));
    bufp->fullCData(oldp+35,((7U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                    >> 8U))),3);
    bufp->fullCData(oldp+36,((0x0000001fU & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                             >> 3U))),5);
    bufp->fullCData(oldp+37,((3U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                    >> 1U))),2);
    bufp->fullBit(oldp+38,((1U & vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U])));
    bufp->fullIData(oldp+39,(((vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[4U] 
                               << 0x00000012U) | (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[3U] 
                                                  >> 0x0000000eU))),32);
    bufp->fullIData(oldp+40,(((vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[3U] 
                               << 0x00000012U) | (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[2U] 
                                                  >> 0x0000000eU))),32);
    bufp->fullIData(oldp+41,(((vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[2U] 
                               << 0x00000012U) | (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[1U] 
                                                  >> 0x0000000eU))),32);
    bufp->fullIData(oldp+42,(((vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[1U] 
                               << 0x00000012U) | (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                                  >> 0x0000000eU))),32);
    bufp->fullBit(oldp+43,((1U & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                  >> 0x0000000dU))));
    bufp->fullBit(oldp+44,((1U & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                  >> 0x0000000cU))));
    bufp->fullCData(oldp+45,((7U & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                    >> 9U))),3);
    bufp->fullCData(oldp+46,((0x0000001fU & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                             >> 4U))),5);
    bufp->fullCData(oldp+47,((3U & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                    >> 2U))),2);
    bufp->fullBit(oldp+48,((1U & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+49,((1U & vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U])));
    bufp->fullIData(oldp+50,(((vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[4U] 
                               << 0x00000012U) | (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                  >> 0x0000000eU))),32);
    bufp->fullIData(oldp+51,(((vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[3U] 
                               << 0x00000012U) | (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                  >> 0x0000000eU))),32);
    bufp->fullIData(oldp+52,(((vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[2U] 
                               << 0x00000012U) | (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                  >> 0x0000000eU))),32);
    bufp->fullIData(oldp+53,(((vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[1U] 
                               << 0x00000012U) | (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                  >> 0x0000000eU))),32);
    bufp->fullBit(oldp+54,((1U & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                  >> 0x0000000dU))));
    bufp->fullBit(oldp+55,((1U & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                  >> 0x0000000cU))));
    bufp->fullCData(oldp+56,((7U & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                    >> 9U))),3);
    bufp->fullCData(oldp+57,((0x0000001fU & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                             >> 4U))),5);
    bufp->fullCData(oldp+58,((3U & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                    >> 2U))),2);
    bufp->fullBit(oldp+59,((1U & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+60,((1U & vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U])));
    bufp->fullIData(oldp+61,(((vlSymsp->TOP__top.__PVT__ls_wb_bus[4U] 
                               << 0x00000018U) | (vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                                                  >> 8U))),32);
    bufp->fullIData(oldp+62,(((vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                               << 0x00000018U) | (vlSymsp->TOP__top.__PVT__ls_wb_bus[2U] 
                                                  >> 8U))),32);
    bufp->fullIData(oldp+63,(((vlSymsp->TOP__top.__PVT__ls_wb_bus[2U] 
                               << 0x00000018U) | (vlSymsp->TOP__top.__PVT__ls_wb_bus[1U] 
                                                  >> 8U))),32);
    bufp->fullIData(oldp+64,(((vlSymsp->TOP__top.__PVT__ls_wb_bus[1U] 
                               << 0x00000018U) | (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                                  >> 8U))),32);
    bufp->fullCData(oldp+65,((0x0000001fU & (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                             >> 3U))),5);
    bufp->fullCData(oldp+66,((3U & (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                    >> 1U))),2);
    bufp->fullBit(oldp+67,((1U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])));
    bufp->fullIData(oldp+68,(vlSymsp->TOP__top.__PVT__csr_data),32);
    bufp->fullIData(oldp+69,(((1U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])
                               ? ((vlSymsp->TOP__top.__PVT__ls_wb_bus[1U] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                     >> 8U)) : ((vlSymsp->TOP__top.__PVT__ls_wb_bus[4U] 
                                                 << 0x00000018U) 
                                                | (vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                                                   >> 8U)))),32);
    bufp->fullIData(oldp+70,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__data_in),32);
    bufp->fullIData(oldp+71,(vlSymsp->TOP__top__reg_mod.__PVT__data_rs1),32);
    bufp->fullIData(oldp+72,(vlSymsp->TOP__top__reg_mod.__PVT__data_rs2),32);
    bufp->fullIData(oldp+73,(((4U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])
                               ? ((2U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])
                                   ? ((vlSymsp->TOP__top.__PVT__ls_wb_bus[1U] 
                                       << 0x00000018U) 
                                      | (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                         >> 8U)) : 
                                  ((vlSymsp->TOP__top.__PVT__ls_wb_bus[2U] 
                                    << 0x00000018U) 
                                   | (vlSymsp->TOP__top.__PVT__ls_wb_bus[1U] 
                                      >> 8U))) : ((2U 
                                                   & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])
                                                   ? 
                                                  ((vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                                                    << 0x00000018U) 
                                                   | (vlSymsp->TOP__top.__PVT__ls_wb_bus[2U] 
                                                      >> 8U))
                                                   : 
                                                  ((vlSymsp->TOP__top.__PVT__ls_wb_bus[4U] 
                                                    << 0x00000018U) 
                                                   | (vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                                                      >> 8U))))),32);
    bufp->fullCData(oldp+74,(((0U == (7U & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                            >> 9U)))
                               ? 1U : ((1U == (7U & 
                                               (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                                >> 9U)))
                                        ? 3U : ((2U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                                     >> 9U)))
                                                 ? 0x0fU
                                                 : 0U)))),4);
    bufp->fullIData(oldp+75,(vlSymsp->TOP__top.__PVT__alu_mod__DOT__val1),32);
    bufp->fullIData(oldp+76,(vlSymsp->TOP__top.__PVT__alu_mod__DOT__val2),32);
    bufp->fullWData(oldp+77,(vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in),200);
    bufp->fullCData(oldp+84,((3U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                    >> 0x00000012U))),2);
    bufp->fullSData(oldp+85,((0x00000fffU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[3U] 
                                             >> 8U))),12);
    bufp->fullCData(oldp+86,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__working_reg),5);
    bufp->fullIData(oldp+87,(vlSymsp->TOP__top.__PVT__decode_mod__DOT__imm_i),32);
    bufp->fullIData(oldp+88,((((- (IData)((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                           >> 0x0000001fU))) 
                               << 0x0000000bU) | ((0x000007e0U 
                                                   & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001fU 
                                                     & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                        >> 7U))))),32);
    bufp->fullIData(oldp+89,((((- (IData)((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
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
    bufp->fullIData(oldp+90,((0xfffff000U & vlSymsp->TOP__top.__PVT__if_id_bus[0U])),32);
    bufp->fullIData(oldp+91,((((- (IData)((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
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
    bufp->fullCData(oldp+92,((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                              >> 0x00000019U)),7);
    bufp->fullCData(oldp+93,((0x0000001fU & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                             >> 0x0000000fU))),5);
    bufp->fullCData(oldp+94,((0x0000001fU & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                             >> 0x00000014U))),5);
    bufp->fullCData(oldp+95,((0x0000001fU & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                             >> 7U))),5);
    bufp->fullCData(oldp+96,((7U & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                    >> 0x0000000cU))),3);
    bufp->fullBit(oldp+97,((1U & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                  | ((0U != (IData)(vlSymsp->TOP__top.__PVT__rresp_lsu)) 
                                     | (0U != (IData)(vlSymsp->TOP__top.__PVT__bresp_arbiter)))))));
    bufp->fullBit(oldp+98,(vlSymsp->TOP__top.__PVT__if_id_valid));
    bufp->fullIData(oldp+99,(vlSymsp->TOP__top.__PVT__araddr_lsu),32);
    bufp->fullIData(oldp+100,(vlSymsp->TOP__top.__PVT__rdata_lsu),32);
    bufp->fullCData(oldp+101,(vlSymsp->TOP__top.__PVT__rresp_lsu),2);
    bufp->fullBit(oldp+102,(vlSymsp->TOP__top.__PVT__arvalid_lsu));
    bufp->fullBit(oldp+103,(vlSymsp->TOP__top.__PVT__arready_lsu));
    bufp->fullBit(oldp+104,(vlSymsp->TOP__top.__PVT__rvalid_lsu));
    bufp->fullBit(oldp+105,(vlSymsp->TOP__top.__PVT__rready_lsu));
    bufp->fullIData(oldp+106,(vlSymsp->TOP__top.__PVT__awaddr_lsu),32);
    bufp->fullIData(oldp+107,(vlSymsp->TOP__top.__PVT__wdata_lsu),32);
    bufp->fullCData(oldp+108,(vlSymsp->TOP__top.__PVT__bresp_arbiter),2);
    bufp->fullBit(oldp+109,(vlSymsp->TOP__top.__PVT__awvalid_lsu));
    bufp->fullBit(oldp+110,(vlSymsp->TOP__top.__PVT__awready_arbiter));
    bufp->fullBit(oldp+111,(vlSymsp->TOP__top.__PVT__wvalid_lsu));
    bufp->fullBit(oldp+112,(vlSymsp->TOP__top.__PVT__wready_arbiter));
    bufp->fullBit(oldp+113,(vlSymsp->TOP__top.__PVT__bvalid_arbiter));
    bufp->fullBit(oldp+114,(vlSymsp->TOP__top.__PVT__bready_lsu));
    bufp->fullIData(oldp+115,(vlSymsp->TOP__top.__PVT__araddr_ifu),32);
    bufp->fullIData(oldp+116,(vlSymsp->TOP__top.__PVT__rdata_ifu),32);
    bufp->fullCData(oldp+117,(vlSymsp->TOP__top.__PVT__rresp_ifu),2);
    bufp->fullBit(oldp+118,(vlSymsp->TOP__top.__PVT__arvalid_ifu));
    bufp->fullBit(oldp+119,(vlSymsp->TOP__top.__PVT__arready_ifu));
    bufp->fullBit(oldp+120,(vlSymsp->TOP__top.__PVT__rvalid_ifu));
    bufp->fullBit(oldp+121,(vlSymsp->TOP__top.__PVT__rready_ifu));
    bufp->fullIData(oldp+122,(vlSymsp->TOP__top.__PVT__araddr_arbiter),32);
    bufp->fullIData(oldp+123,(vlSymsp->TOP__top.__PVT__rdata_arbiter),32);
    bufp->fullCData(oldp+124,(vlSymsp->TOP__top.__PVT__rresp_arbiter),2);
    bufp->fullBit(oldp+125,(vlSymsp->TOP__top.__PVT__arvalid_arbiter));
    bufp->fullBit(oldp+126,(vlSymsp->TOP__top.__PVT__arready_arbiter));
    bufp->fullBit(oldp+127,(vlSymsp->TOP__top.__PVT__rvalid_arbiter));
    bufp->fullBit(oldp+128,(vlSymsp->TOP__top.__PVT__rready_arbiter));
    bufp->fullIData(oldp+129,(vlSymsp->TOP__top.__PVT__cwdata),32);
    bufp->fullIData(oldp+130,(vlSymsp->TOP__top.__PVT__crdata),32);
    bufp->fullIData(oldp+131,(vlSymsp->TOP__top.__PVT__caddr),32);
    bufp->fullBit(oldp+132,(vlSymsp->TOP__top.__PVT__cwvalid));
    bufp->fullBit(oldp+133,(vlSymsp->TOP__top.__PVT__crvalid));
    bufp->fullBit(oldp+134,(vlSymsp->TOP__top.__PVT__cready));
    bufp->fullQData(oldp+135,(vlSymsp->TOP__top.__PVT__CLINT_mod__DOT__mtime),64);
    bufp->fullIData(oldp+137,(vlSymsp->TOP__top.__PVT__CLINT_mod__DOT__timecp),32);
    bufp->fullBit(oldp+138,((0U != (vlSymsp->TOP__top.__PVT__caddr 
                                    >> 0x00000010U))));
    bufp->fullBit(oldp+139,(vlSymsp->TOP__top.__PVT__arbiter_mod__DOT__chose));
    bufp->fullBit(oldp+140,(vlSymsp->TOP__top.__PVT__arbiter_mod__DOT__lsu_transfer));
    bufp->fullBit(oldp+141,(vlSymsp->TOP__top.__PVT__arbiter_mod__DOT__ifu_transfer));
    bufp->fullIData(oldp+142,(vlSymsp->TOP__top.__PVT__axi_slave_lsu_mod__DOT__slave),32);
    bufp->fullIData(oldp+143,(vlSymsp->TOP__top.__PVT__axi_slave_lsu_mod__DOT__slave_w),32);
    bufp->fullBit(oldp+144,(vlSymsp->TOP__top.__PVT__axi_slave_lsu_mod__DOT__done_aw));
    bufp->fullBit(oldp+145,(vlSymsp->TOP__top.__PVT__axi_slave_lsu_mod__DOT__done_w));
    bufp->fullIData(oldp+146,(vlSymsp->TOP__top.__PVT__axi_slave_lsu_mod__DOT__w),32);
    bufp->fullIData(oldp+147,(vlSymsp->TOP__top.__PVT__axi_slave_lsu_mod__DOT__aw),32);
    bufp->fullCData(oldp+148,(vlSymsp->TOP__top.__PVT__axi_slave_lsu_mod__DOT__mask),4);
    bufp->fullIData(oldp+149,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[31]),32);
    bufp->fullIData(oldp+150,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[30]),32);
    bufp->fullIData(oldp+151,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[29]),32);
    bufp->fullIData(oldp+152,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[28]),32);
    bufp->fullIData(oldp+153,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[27]),32);
    bufp->fullIData(oldp+154,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[26]),32);
    bufp->fullIData(oldp+155,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[25]),32);
    bufp->fullIData(oldp+156,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[24]),32);
    bufp->fullIData(oldp+157,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[23]),32);
    bufp->fullIData(oldp+158,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[22]),32);
    bufp->fullIData(oldp+159,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[21]),32);
    bufp->fullIData(oldp+160,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[20]),32);
    bufp->fullIData(oldp+161,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[19]),32);
    bufp->fullIData(oldp+162,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[18]),32);
    bufp->fullIData(oldp+163,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[17]),32);
    bufp->fullIData(oldp+164,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[16]),32);
    bufp->fullIData(oldp+165,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[15]),32);
    bufp->fullIData(oldp+166,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[14]),32);
    bufp->fullIData(oldp+167,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[13]),32);
    bufp->fullIData(oldp+168,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[12]),32);
    bufp->fullIData(oldp+169,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[11]),32);
    bufp->fullIData(oldp+170,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[10]),32);
    bufp->fullIData(oldp+171,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[9]),32);
    bufp->fullIData(oldp+172,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[8]),32);
    bufp->fullIData(oldp+173,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[7]),32);
    bufp->fullIData(oldp+174,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[6]),32);
    bufp->fullIData(oldp+175,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[5]),32);
    bufp->fullIData(oldp+176,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[4]),32);
    bufp->fullIData(oldp+177,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[3]),32);
    bufp->fullIData(oldp+178,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[2]),32);
    bufp->fullIData(oldp+179,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[1]),32);
    bufp->fullIData(oldp+180,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[0]),32);
    bufp->fullIData(oldp+181,(vlSymsp->TOP__top.__PVT__ifu_mod__DOT__ifu),32);
    bufp->fullBit(oldp+182,((0U != (IData)(vlSymsp->TOP__top.__PVT__rresp_ifu))));
    bufp->fullIData(oldp+183,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__lsu_r),32);
    bufp->fullBit(oldp+184,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__done_r));
    bufp->fullBit(oldp+185,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__done_w));
    bufp->fullBit(oldp+186,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__done_aw));
    bufp->fullBit(oldp+187,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__done_wdata));
    bufp->fullIData(oldp+188,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__lsu_w),32);
    bufp->fullBit(oldp+189,(vlSelfRef.clk));
    bufp->fullBit(oldp+190,(vlSelfRef.rst));
    bufp->fullIData(oldp+191,(vlSymsp->TOP__top.pc),32);
    bufp->fullIData(oldp+192,(vlSymsp->TOP__top.opcode),32);
    bufp->fullBit(oldp+193,(vlSymsp->TOP__top.reg_valid));
    bufp->fullIData(oldp+194,(((IData)(4U) + vlSymsp->TOP__top.pc)),32);
    bufp->fullIData(oldp+195,(vlSymsp->TOP__top__reg_mod.regs[31]),32);
    bufp->fullIData(oldp+196,(vlSymsp->TOP__top__reg_mod.regs[30]),32);
    bufp->fullIData(oldp+197,(vlSymsp->TOP__top__reg_mod.regs[29]),32);
    bufp->fullIData(oldp+198,(vlSymsp->TOP__top__reg_mod.regs[28]),32);
    bufp->fullIData(oldp+199,(vlSymsp->TOP__top__reg_mod.regs[27]),32);
    bufp->fullIData(oldp+200,(vlSymsp->TOP__top__reg_mod.regs[26]),32);
    bufp->fullIData(oldp+201,(vlSymsp->TOP__top__reg_mod.regs[25]),32);
    bufp->fullIData(oldp+202,(vlSymsp->TOP__top__reg_mod.regs[24]),32);
    bufp->fullIData(oldp+203,(vlSymsp->TOP__top__reg_mod.regs[23]),32);
    bufp->fullIData(oldp+204,(vlSymsp->TOP__top__reg_mod.regs[22]),32);
    bufp->fullIData(oldp+205,(vlSymsp->TOP__top__reg_mod.regs[21]),32);
    bufp->fullIData(oldp+206,(vlSymsp->TOP__top__reg_mod.regs[20]),32);
    bufp->fullIData(oldp+207,(vlSymsp->TOP__top__reg_mod.regs[19]),32);
    bufp->fullIData(oldp+208,(vlSymsp->TOP__top__reg_mod.regs[18]),32);
    bufp->fullIData(oldp+209,(vlSymsp->TOP__top__reg_mod.regs[17]),32);
    bufp->fullIData(oldp+210,(vlSymsp->TOP__top__reg_mod.regs[16]),32);
    bufp->fullIData(oldp+211,(vlSymsp->TOP__top__reg_mod.regs[15]),32);
    bufp->fullIData(oldp+212,(vlSymsp->TOP__top__reg_mod.regs[14]),32);
    bufp->fullIData(oldp+213,(vlSymsp->TOP__top__reg_mod.regs[13]),32);
    bufp->fullIData(oldp+214,(vlSymsp->TOP__top__reg_mod.regs[12]),32);
    bufp->fullIData(oldp+215,(vlSymsp->TOP__top__reg_mod.regs[11]),32);
    bufp->fullIData(oldp+216,(vlSymsp->TOP__top__reg_mod.regs[10]),32);
    bufp->fullIData(oldp+217,(vlSymsp->TOP__top__reg_mod.regs[9]),32);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__top__reg_mod.regs[8]),32);
    bufp->fullIData(oldp+219,(vlSymsp->TOP__top__reg_mod.regs[7]),32);
    bufp->fullIData(oldp+220,(vlSymsp->TOP__top__reg_mod.regs[6]),32);
    bufp->fullIData(oldp+221,(vlSymsp->TOP__top__reg_mod.regs[5]),32);
    bufp->fullIData(oldp+222,(vlSymsp->TOP__top__reg_mod.regs[4]),32);
    bufp->fullIData(oldp+223,(vlSymsp->TOP__top__reg_mod.regs[3]),32);
    bufp->fullIData(oldp+224,(vlSymsp->TOP__top__reg_mod.regs[2]),32);
    bufp->fullIData(oldp+225,(vlSymsp->TOP__top__reg_mod.regs[1]),32);
    bufp->fullIData(oldp+226,(vlSymsp->TOP__top__reg_mod.regs[0]),32);
}
