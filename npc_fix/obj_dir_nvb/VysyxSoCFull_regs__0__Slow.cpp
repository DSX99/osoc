// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_regs___ctor_var_reset(VysyxSoCFull_regs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_regs___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->__PVT__data_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10574596302020702150ull);
    vlSelf->__PVT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10211807078052224816ull);
    vlSelf->__PVT__rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 392999376545494891ull);
    vlSelf->__PVT__rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10303652599525973633ull);
    vlSelf->__PVT__data_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9932918131208256121ull);
    vlSelf->__PVT__data_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3653411350827021214ull);
    vlSelf->__PVT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    vlSelf->__PVT__ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 898948264233693212ull);
    vlSelf->__PVT__finish = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1244036831691946695ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2303844575473820508ull);
    }
}
