// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_regs___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod__0(VysyxSoCFull_regs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_regs___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlySet__regs__v0;
    __VdlySet__regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__regs__v15;
    __VdlyVal__regs__v15 = 0;
    CData/*3:0*/ __VdlyDim0__regs__v15;
    __VdlyDim0__regs__v15 = 0;
    CData/*0:0*/ __VdlySet__regs__v15;
    __VdlySet__regs__v15 = 0;
    // Body
    if (VL_UNLIKELY((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__finish))) {
        VL_FINISH_MT("vsrc/regs.sv", 42, "");
    }
    __VdlySet__regs__v0 = 0U;
    __VdlySet__regs__v15 = 0U;
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__reset) {
        __VdlySet__regs__v0 = 1U;
    } else if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid) {
        __VdlyVal__regs__v15 = ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select))
                                 ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select))
                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr_out
                                     : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_next_pc)
                                 : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select))
                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_lsu_out
                                     : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_alu_out));
        __VdlyDim0__regs__v15 = (0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd));
        __VdlySet__regs__v15 = 1U;
    }
    if (__VdlySet__regs__v0) {
        vlSelfRef.regs[0U] = 0U;
        vlSelfRef.regs[1U] = 0U;
        vlSelfRef.regs[2U] = 0U;
        vlSelfRef.regs[3U] = 0U;
        vlSelfRef.regs[4U] = 0U;
        vlSelfRef.regs[5U] = 0U;
        vlSelfRef.regs[6U] = 0U;
        vlSelfRef.regs[7U] = 0U;
        vlSelfRef.regs[8U] = 0U;
        vlSelfRef.regs[9U] = 0U;
        vlSelfRef.regs[10U] = 0U;
        vlSelfRef.regs[11U] = 0U;
        vlSelfRef.regs[12U] = 0U;
        vlSelfRef.regs[13U] = 0U;
        vlSelfRef.regs[14U] = 0U;
    }
    if (__VdlySet__regs__v15) {
        vlSelfRef.regs[__VdlyDim0__regs__v15] = __VdlyVal__regs__v15;
        vlSelfRef.regs[0U] = 0U;
    }
}
