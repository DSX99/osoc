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
    VL_TRACE_DECL_BIT(tracep,c+139,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+140,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
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
    VL_TRACE_DECL_BIT(tracep,c+139,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+140,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+141,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+142,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+143,0,"reg_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"reg_valid_e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+144,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "if_id_bus", VerilatedTracePrefixType::STRUCT_PACKED, 3, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"if_id_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"if_id_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "id_ex_bus_decoded", VerilatedTracePrefixType::STRUCT_PACKED, 17, 0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"data_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"data_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"branch_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"csr_oper",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"lsu_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+15,0,"lsu_le",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"lsu_oper",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"mux_select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+19,0,"mux_select_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "id_ex_bus", VerilatedTracePrefixType::STRUCT_PACKED, 17, 0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"data_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"data_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"branch_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"csr_oper",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"lsu_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"lsu_le",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"lsu_oper",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"mux_select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+36,0,"mux_select_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"id_ex_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"id_ex_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "ex_ls_bus_alu", VerilatedTracePrefixType::STRUCT_PACKED, 11, 0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"data_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"csr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"lsu_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+42,0,"lsu_le",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"lsu_oper",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"mux_select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+46,0,"mux_select_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+47,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "ex_ls_bus", VerilatedTracePrefixType::STRUCT_PACKED, 11, 0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"data_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"csr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+52,0,"lsu_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"lsu_le",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"lsu_oper",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"mux_select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"mux_select_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"ex_ls_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"ex_ls_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "ls_wb_bus", VerilatedTracePrefixType::STRUCT_PACKED, 7, 0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+60,0,"lsu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"csr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"mux_select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"mux_select_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"ls_wb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"ls_wb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"csr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"pc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"id_ex_ready_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"id_ex_ready_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"ex_ls_valid_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"ex_ls_valid_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"csr_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"reg_data_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"reg_data_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"reg_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"araddr_ifu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"rdata_ifu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"rresp_ifu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+100,0,"arvalid_ifu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+101,0,"arready_ifu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+102,0,"rvalid_ifu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+103,0,"rready_ifu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "alu_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "bus_in", VerilatedTracePrefixType::STRUCT_PACKED, 17, 0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"data_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"data_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"branch_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"csr_oper",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"cause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"lsu_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"lsu_le",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"lsu_oper",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"mux_select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+36,0,"mux_select_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "bus_out", VerilatedTracePrefixType::STRUCT_PACKED, 11, 0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"alu_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"data_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"csr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"lsu_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+42,0,"lsu_le",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"lsu_oper",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"mux_select",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+46,0,"mux_select_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+47,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"valid_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"ready_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"ready_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"valid_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"val1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"val2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+74,0,"unused_bus_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 199,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "axi_slave_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+139,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+140,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+100,0,"arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+101,0,"arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+102,0,"rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+103,0,"rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+104,0,"slave",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "csr_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+139,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+140,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"oper",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"cause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+141,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"valid_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"ready_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"ready_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"valid_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "regs", VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+105+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"working_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "decode_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "bus_in", VerilatedTracePrefixType::STRUCT_PACKED, 3, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "bus_out", VerilatedTracePrefixType::STRUCT_PACKED, 17, 0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"data_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"data_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"branch_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"csr_oper",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"cause",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"lsu_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+15,0,"lsu_le",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"lsu_oper",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"mux_select",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+19,0,"mux_select_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"valid_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"ready_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"ready_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"valid_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"imm_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"imm_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"imm_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"imm_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"imm_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"func7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"rs1_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"rs2_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"rd_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "ifu_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+139,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+140,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+141,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+144,0,"next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "bus_out", VerilatedTracePrefixType::STRUCT_PACKED, 3, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+100,0,"arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+101,0,"arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+102,0,"rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+103,0,"rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+137,0,"ifu",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+138,0,"unused_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "lsu_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+139,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "bus_in", VerilatedTracePrefixType::STRUCT_PACKED, 11, 0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"alu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"data_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"csr_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+52,0,"lsu_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"lsu_le",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"lsu_oper",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"mux_select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"mux_select_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "bus_out", VerilatedTracePrefixType::STRUCT_PACKED, 7, 0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"alu_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+60,0,"lsu_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"csr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"mux_select",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"mux_select_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"valid_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"ready_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"ready_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"valid_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"lsu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+47,0,"unused_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "pc_mod", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+139,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+140,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+47,0,"branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+141,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+144,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
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
    VL_TRACE_DECL_BIT(tracep,c+139,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+140,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"data_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"data_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "regs", VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+145+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 31,0);
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
    bufp->fullBit(oldp+177,(1U));
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
    bufp->fullIData(oldp+0,(vlSymsp->TOP__top.__PVT__if_id_bus[2U]),32);
    bufp->fullIData(oldp+1,(vlSymsp->TOP__top.__PVT__if_id_bus[1U]),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__top.__PVT__if_id_bus[0U]),32);
    bufp->fullIData(oldp+3,(((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[6U] 
                              << 0x00000018U) | (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[5U] 
                                                 >> 8U))),32);
    bufp->fullIData(oldp+4,(((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[5U] 
                              << 0x00000018U) | (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[4U] 
                                                 >> 8U))),32);
    bufp->fullIData(oldp+5,(((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[4U] 
                              << 0x00000018U) | (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[3U] 
                                                 >> 8U))),32);
    bufp->fullIData(oldp+6,(((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[3U] 
                              << 0x00000018U) | (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[2U] 
                                                 >> 8U))),32);
    bufp->fullIData(oldp+7,(((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[2U] 
                              << 0x00000018U) | (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U] 
                                                 >> 8U))),32);
    bufp->fullCData(oldp+8,((0x0000001fU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U] 
                                            >> 3U))),5);
    bufp->fullCData(oldp+9,((0x0000001fU & ((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U] 
                                             << 2U) 
                                            | (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                               >> 0x0000001eU)))),5);
    bufp->fullCData(oldp+10,((0x000000ffU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                             >> 0x00000016U))),8);
    bufp->fullBit(oldp+11,((1U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                  >> 0x00000015U))));
    bufp->fullCData(oldp+12,((7U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                    >> 0x00000012U))),3);
    bufp->fullCData(oldp+13,((0x0000001fU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                             >> 0x0000000dU))),5);
    bufp->fullBit(oldp+14,((1U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                  >> 0x0000000cU))));
    bufp->fullBit(oldp+15,((1U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                  >> 0x0000000bU))));
    bufp->fullCData(oldp+16,((7U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                    >> 8U))),3);
    bufp->fullCData(oldp+17,((0x0000001fU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                             >> 3U))),5);
    bufp->fullCData(oldp+18,((3U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                    >> 1U))),2);
    bufp->fullBit(oldp+19,((1U & vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U])));
    bufp->fullIData(oldp+20,(((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[6U] 
                               << 0x00000018U) | (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[5U] 
                                                  >> 8U))),32);
    bufp->fullIData(oldp+21,(((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[5U] 
                               << 0x00000018U) | (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[4U] 
                                                  >> 8U))),32);
    bufp->fullIData(oldp+22,(((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[4U] 
                               << 0x00000018U) | (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[3U] 
                                                  >> 8U))),32);
    bufp->fullIData(oldp+23,(((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[3U] 
                               << 0x00000018U) | (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[2U] 
                                                  >> 8U))),32);
    bufp->fullIData(oldp+24,(((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[2U] 
                               << 0x00000018U) | (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[1U] 
                                                  >> 8U))),32);
    bufp->fullCData(oldp+25,((0x0000001fU & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[1U] 
                                             >> 3U))),5);
    bufp->fullCData(oldp+26,((0x0000001fU & ((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[1U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                                >> 0x0000001eU)))),5);
    bufp->fullCData(oldp+27,((0x000000ffU & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                             >> 0x00000016U))),8);
    bufp->fullBit(oldp+28,((1U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                  >> 0x00000015U))));
    bufp->fullCData(oldp+29,((7U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                    >> 0x00000012U))),3);
    bufp->fullCData(oldp+30,((0x0000001fU & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                             >> 0x0000000dU))),5);
    bufp->fullBit(oldp+31,((1U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                  >> 0x0000000cU))));
    bufp->fullBit(oldp+32,((1U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                  >> 0x0000000bU))));
    bufp->fullCData(oldp+33,((7U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                    >> 8U))),3);
    bufp->fullCData(oldp+34,((0x0000001fU & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                             >> 3U))),5);
    bufp->fullCData(oldp+35,((3U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                    >> 1U))),2);
    bufp->fullBit(oldp+36,((1U & vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U])));
    bufp->fullIData(oldp+37,(((vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[4U] 
                               << 0x00000012U) | (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[3U] 
                                                  >> 0x0000000eU))),32);
    bufp->fullIData(oldp+38,(((vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[3U] 
                               << 0x00000012U) | (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[2U] 
                                                  >> 0x0000000eU))),32);
    bufp->fullIData(oldp+39,(((vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[2U] 
                               << 0x00000012U) | (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[1U] 
                                                  >> 0x0000000eU))),32);
    bufp->fullIData(oldp+40,(((vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[1U] 
                               << 0x00000012U) | (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                                  >> 0x0000000eU))),32);
    bufp->fullBit(oldp+41,((1U & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                  >> 0x0000000dU))));
    bufp->fullBit(oldp+42,((1U & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                  >> 0x0000000cU))));
    bufp->fullCData(oldp+43,((7U & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                    >> 9U))),3);
    bufp->fullCData(oldp+44,((0x0000001fU & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                             >> 4U))),5);
    bufp->fullCData(oldp+45,((3U & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                    >> 2U))),2);
    bufp->fullBit(oldp+46,((1U & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+47,((1U & vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U])));
    bufp->fullIData(oldp+48,(((vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[4U] 
                               << 0x00000012U) | (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[3U] 
                                                  >> 0x0000000eU))),32);
    bufp->fullIData(oldp+49,(((vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[3U] 
                               << 0x00000012U) | (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[2U] 
                                                  >> 0x0000000eU))),32);
    bufp->fullIData(oldp+50,(((vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[2U] 
                               << 0x00000012U) | (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[1U] 
                                                  >> 0x0000000eU))),32);
    bufp->fullIData(oldp+51,(((vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[1U] 
                               << 0x00000012U) | (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                  >> 0x0000000eU))),32);
    bufp->fullBit(oldp+52,((1U & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                  >> 0x0000000dU))));
    bufp->fullBit(oldp+53,((1U & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                  >> 0x0000000cU))));
    bufp->fullCData(oldp+54,((7U & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                    >> 9U))),3);
    bufp->fullCData(oldp+55,((0x0000001fU & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                             >> 4U))),5);
    bufp->fullCData(oldp+56,((3U & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                    >> 2U))),2);
    bufp->fullBit(oldp+57,((1U & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+58,((1U & vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U])));
    bufp->fullIData(oldp+59,(((vlSymsp->TOP__top.__PVT__ls_wb_bus[4U] 
                               << 0x00000018U) | (vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                                                  >> 8U))),32);
    bufp->fullIData(oldp+60,(((vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                               << 0x00000018U) | (vlSymsp->TOP__top.__PVT__ls_wb_bus[2U] 
                                                  >> 8U))),32);
    bufp->fullIData(oldp+61,(((vlSymsp->TOP__top.__PVT__ls_wb_bus[2U] 
                               << 0x00000018U) | (vlSymsp->TOP__top.__PVT__ls_wb_bus[1U] 
                                                  >> 8U))),32);
    bufp->fullIData(oldp+62,(((vlSymsp->TOP__top.__PVT__ls_wb_bus[1U] 
                               << 0x00000018U) | (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                                  >> 8U))),32);
    bufp->fullCData(oldp+63,((0x0000001fU & (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                             >> 3U))),5);
    bufp->fullCData(oldp+64,((3U & (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                    >> 1U))),2);
    bufp->fullBit(oldp+65,((1U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])));
    bufp->fullIData(oldp+66,(vlSymsp->TOP__top.__PVT__csr_data),32);
    bufp->fullIData(oldp+67,(((1U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])
                               ? ((vlSymsp->TOP__top.__PVT__ls_wb_bus[1U] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                     >> 8U)) : ((vlSymsp->TOP__top.__PVT__ls_wb_bus[4U] 
                                                 << 0x00000018U) 
                                                | (vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                                                   >> 8U)))),32);
    bufp->fullIData(oldp+68,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__data_in),32);
    bufp->fullIData(oldp+69,(vlSymsp->TOP__top__reg_mod.__PVT__data_rs1),32);
    bufp->fullIData(oldp+70,(vlSymsp->TOP__top__reg_mod.__PVT__data_rs2),32);
    bufp->fullIData(oldp+71,(((4U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])
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
    bufp->fullIData(oldp+72,(vlSymsp->TOP__top.__PVT__alu_mod__DOT__val1),32);
    bufp->fullIData(oldp+73,(vlSymsp->TOP__top.__PVT__alu_mod__DOT__val2),32);
    bufp->fullWData(oldp+74,(vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in),200);
    bufp->fullCData(oldp+81,((3U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                    >> 0x00000012U))),2);
    bufp->fullSData(oldp+82,((0x00000fffU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[3U] 
                                             >> 8U))),12);
    bufp->fullCData(oldp+83,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__working_reg),5);
    bufp->fullIData(oldp+84,(vlSymsp->TOP__top.__PVT__decode_mod__DOT__imm_i),32);
    bufp->fullIData(oldp+85,((((- (IData)((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                           >> 0x0000001fU))) 
                               << 0x0000000bU) | ((0x000007e0U 
                                                   & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001fU 
                                                     & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                        >> 7U))))),32);
    bufp->fullIData(oldp+86,((((- (IData)((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
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
    bufp->fullIData(oldp+87,((0xfffff000U & vlSymsp->TOP__top.__PVT__if_id_bus[0U])),32);
    bufp->fullIData(oldp+88,((((- (IData)((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
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
    bufp->fullCData(oldp+89,((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                              >> 0x00000019U)),7);
    bufp->fullCData(oldp+90,((0x0000001fU & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                             >> 0x0000000fU))),5);
    bufp->fullCData(oldp+91,((0x0000001fU & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                             >> 0x00000014U))),5);
    bufp->fullCData(oldp+92,((0x0000001fU & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                             >> 7U))),5);
    bufp->fullCData(oldp+93,((7U & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                    >> 0x0000000cU))),3);
    bufp->fullIData(oldp+94,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__A),32);
    bufp->fullIData(oldp+95,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__lsu_out),32);
    bufp->fullBit(oldp+96,(vlSymsp->TOP__top.__PVT__if_id_valid));
    bufp->fullIData(oldp+97,(vlSymsp->TOP__top.__PVT__araddr_ifu),32);
    bufp->fullIData(oldp+98,(vlSymsp->TOP__top.__PVT__rdata_ifu),32);
    bufp->fullCData(oldp+99,(vlSymsp->TOP__top.__PVT__rresp_ifu),2);
    bufp->fullBit(oldp+100,(vlSymsp->TOP__top.__PVT__arvalid_ifu));
    bufp->fullBit(oldp+101,(vlSymsp->TOP__top.__PVT__arready_ifu));
    bufp->fullBit(oldp+102,(vlSymsp->TOP__top.__PVT__rvalid_ifu));
    bufp->fullBit(oldp+103,(vlSymsp->TOP__top.__PVT__rready_ifu));
    bufp->fullIData(oldp+104,(vlSymsp->TOP__top.__PVT__axi_slave_mod__DOT__slave),32);
    bufp->fullIData(oldp+105,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[31]),32);
    bufp->fullIData(oldp+106,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[30]),32);
    bufp->fullIData(oldp+107,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[29]),32);
    bufp->fullIData(oldp+108,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[28]),32);
    bufp->fullIData(oldp+109,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[27]),32);
    bufp->fullIData(oldp+110,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[26]),32);
    bufp->fullIData(oldp+111,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[25]),32);
    bufp->fullIData(oldp+112,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[24]),32);
    bufp->fullIData(oldp+113,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[23]),32);
    bufp->fullIData(oldp+114,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[22]),32);
    bufp->fullIData(oldp+115,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[21]),32);
    bufp->fullIData(oldp+116,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[20]),32);
    bufp->fullIData(oldp+117,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[19]),32);
    bufp->fullIData(oldp+118,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[18]),32);
    bufp->fullIData(oldp+119,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[17]),32);
    bufp->fullIData(oldp+120,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[16]),32);
    bufp->fullIData(oldp+121,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[15]),32);
    bufp->fullIData(oldp+122,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[14]),32);
    bufp->fullIData(oldp+123,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[13]),32);
    bufp->fullIData(oldp+124,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[12]),32);
    bufp->fullIData(oldp+125,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[11]),32);
    bufp->fullIData(oldp+126,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[10]),32);
    bufp->fullIData(oldp+127,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[9]),32);
    bufp->fullIData(oldp+128,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[8]),32);
    bufp->fullIData(oldp+129,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[7]),32);
    bufp->fullIData(oldp+130,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[6]),32);
    bufp->fullIData(oldp+131,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[5]),32);
    bufp->fullIData(oldp+132,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[4]),32);
    bufp->fullIData(oldp+133,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[3]),32);
    bufp->fullIData(oldp+134,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[2]),32);
    bufp->fullIData(oldp+135,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[1]),32);
    bufp->fullIData(oldp+136,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[0]),32);
    bufp->fullIData(oldp+137,(vlSymsp->TOP__top.__PVT__ifu_mod__DOT__ifu),32);
    bufp->fullBit(oldp+138,((0U != (IData)(vlSymsp->TOP__top.__PVT__rresp_ifu))));
    bufp->fullBit(oldp+139,(vlSelfRef.clk));
    bufp->fullBit(oldp+140,(vlSelfRef.rst));
    bufp->fullIData(oldp+141,(vlSymsp->TOP__top.pc),32);
    bufp->fullIData(oldp+142,(vlSymsp->TOP__top.opcode),32);
    bufp->fullBit(oldp+143,(vlSymsp->TOP__top.reg_valid));
    bufp->fullIData(oldp+144,(((IData)(4U) + vlSymsp->TOP__top.pc)),32);
    bufp->fullIData(oldp+145,(vlSymsp->TOP__top__reg_mod.regs[31]),32);
    bufp->fullIData(oldp+146,(vlSymsp->TOP__top__reg_mod.regs[30]),32);
    bufp->fullIData(oldp+147,(vlSymsp->TOP__top__reg_mod.regs[29]),32);
    bufp->fullIData(oldp+148,(vlSymsp->TOP__top__reg_mod.regs[28]),32);
    bufp->fullIData(oldp+149,(vlSymsp->TOP__top__reg_mod.regs[27]),32);
    bufp->fullIData(oldp+150,(vlSymsp->TOP__top__reg_mod.regs[26]),32);
    bufp->fullIData(oldp+151,(vlSymsp->TOP__top__reg_mod.regs[25]),32);
    bufp->fullIData(oldp+152,(vlSymsp->TOP__top__reg_mod.regs[24]),32);
    bufp->fullIData(oldp+153,(vlSymsp->TOP__top__reg_mod.regs[23]),32);
    bufp->fullIData(oldp+154,(vlSymsp->TOP__top__reg_mod.regs[22]),32);
    bufp->fullIData(oldp+155,(vlSymsp->TOP__top__reg_mod.regs[21]),32);
    bufp->fullIData(oldp+156,(vlSymsp->TOP__top__reg_mod.regs[20]),32);
    bufp->fullIData(oldp+157,(vlSymsp->TOP__top__reg_mod.regs[19]),32);
    bufp->fullIData(oldp+158,(vlSymsp->TOP__top__reg_mod.regs[18]),32);
    bufp->fullIData(oldp+159,(vlSymsp->TOP__top__reg_mod.regs[17]),32);
    bufp->fullIData(oldp+160,(vlSymsp->TOP__top__reg_mod.regs[16]),32);
    bufp->fullIData(oldp+161,(vlSymsp->TOP__top__reg_mod.regs[15]),32);
    bufp->fullIData(oldp+162,(vlSymsp->TOP__top__reg_mod.regs[14]),32);
    bufp->fullIData(oldp+163,(vlSymsp->TOP__top__reg_mod.regs[13]),32);
    bufp->fullIData(oldp+164,(vlSymsp->TOP__top__reg_mod.regs[12]),32);
    bufp->fullIData(oldp+165,(vlSymsp->TOP__top__reg_mod.regs[11]),32);
    bufp->fullIData(oldp+166,(vlSymsp->TOP__top__reg_mod.regs[10]),32);
    bufp->fullIData(oldp+167,(vlSymsp->TOP__top__reg_mod.regs[9]),32);
    bufp->fullIData(oldp+168,(vlSymsp->TOP__top__reg_mod.regs[8]),32);
    bufp->fullIData(oldp+169,(vlSymsp->TOP__top__reg_mod.regs[7]),32);
    bufp->fullIData(oldp+170,(vlSymsp->TOP__top__reg_mod.regs[6]),32);
    bufp->fullIData(oldp+171,(vlSymsp->TOP__top__reg_mod.regs[5]),32);
    bufp->fullIData(oldp+172,(vlSymsp->TOP__top__reg_mod.regs[4]),32);
    bufp->fullIData(oldp+173,(vlSymsp->TOP__top__reg_mod.regs[3]),32);
    bufp->fullIData(oldp+174,(vlSymsp->TOP__top__reg_mod.regs[2]),32);
    bufp->fullIData(oldp+175,(vlSymsp->TOP__top__reg_mod.regs[1]),32);
    bufp->fullIData(oldp+176,(vlSymsp->TOP__top__reg_mod.regs[0]),32);
}
