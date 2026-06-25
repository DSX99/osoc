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
    vlSelf->__PVT__pc_mod__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3103581620590096924ull);
    vlSelf->__PVT__lsu_mod__DOT__A = 0;
    vlSelf->__PVT__decode_mod__DOT__imm_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17728463912631228713ull);
    vlSelf->__PVT__alu_mod__DOT__val1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3618980885417066799ull);
    vlSelf->__PVT__alu_mod__DOT__val2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5531290321701216620ull);
    vlSelf->__PVT__csr_mod__DOT__data_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12700116229890022093ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__csr_mod__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12209870551186757864ull);
    }
    vlSelf->__PVT__csr_mod__DOT__working_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11201873268134957014ull);
    vlSelf->__Vfunc_lsu_mod__DOT__memread__0__Vfuncout = 0;
    vlSelf->__Vfunc_lsu_mod__DOT__memread__1__Vfuncout = 0;
    vlSelf->__Vfunc_lsu_mod__DOT__memread__2__Vfuncout = 0;
    vlSelf->__Vfunc_lsu_mod__DOT__memread__3__Vfuncout = 0;
    vlSelf->__Vfunc_lsu_mod__DOT__memread__4__Vfuncout = 0;
    vlSelf->__Vfunc_ifu_mod__DOT__memread__8__Vfuncout = 0;
}
