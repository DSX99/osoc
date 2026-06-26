// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_regs___ico_sequent__TOP__top__reg_mod__0(Vtop_regs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_regs___ico_sequent__TOP__top__reg_mod__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_rs2 = vlSelfRef.regs[(0x0000001fU 
                                                & ((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U] 
                                                    << 2U) 
                                                   | (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                                      >> 0x0000001eU)))];
    vlSelfRef.__PVT__data_rs1 = vlSelfRef.regs[(0x0000001fU 
                                                & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U] 
                                                   >> 3U))];
}

void Vtop_regs___nba_sequent__TOP__top__reg_mod__0(Vtop_regs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_regs___nba_sequent__TOP__top__reg_mod__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlySet__regs__v0;
    __VdlySet__regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__regs__v32;
    __VdlyVal__regs__v32 = 0;
    CData/*4:0*/ __VdlyDim0__regs__v32;
    __VdlyDim0__regs__v32 = 0;
    CData/*0:0*/ __VdlySet__regs__v32;
    __VdlySet__regs__v32 = 0;
    // Body
    __VdlySet__regs__v0 = 0U;
    __VdlySet__regs__v32 = 0U;
    if (vlSymsp->TOP.rst) {
        __VdlySet__regs__v0 = 1U;
    } else if (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__valid_right) {
        __VdlyVal__regs__v32 = ((4U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])
                                 ? ((2U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])
                                     ? ((vlSymsp->TOP__top.__PVT__ls_wb_bus[1U] 
                                         << 0x00000018U) 
                                        | (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                           >> 8U)) : 
                                    ((vlSymsp->TOP__top.__PVT__ls_wb_bus[2U] 
                                      << 0x00000018U) 
                                     | (vlSymsp->TOP__top.__PVT__ls_wb_bus[1U] 
                                        >> 8U))) : 
                                ((2U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])
                                  ? ((vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                                      << 0x00000018U) 
                                     | (vlSymsp->TOP__top.__PVT__ls_wb_bus[2U] 
                                        >> 8U)) : (
                                                   (vlSymsp->TOP__top.__PVT__ls_wb_bus[4U] 
                                                    << 0x00000018U) 
                                                   | (vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                                                      >> 8U))));
        __VdlyDim0__regs__v32 = (0x0000001fU & (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                                >> 3U));
        __VdlySet__regs__v32 = 1U;
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
        vlSelfRef.regs[15U] = 0U;
        vlSelfRef.regs[16U] = 0U;
        vlSelfRef.regs[17U] = 0U;
        vlSelfRef.regs[18U] = 0U;
        vlSelfRef.regs[19U] = 0U;
        vlSelfRef.regs[20U] = 0U;
        vlSelfRef.regs[21U] = 0U;
        vlSelfRef.regs[22U] = 0U;
        vlSelfRef.regs[23U] = 0U;
        vlSelfRef.regs[24U] = 0U;
        vlSelfRef.regs[25U] = 0U;
        vlSelfRef.regs[26U] = 0U;
        vlSelfRef.regs[27U] = 0U;
        vlSelfRef.regs[28U] = 0U;
        vlSelfRef.regs[29U] = 0U;
        vlSelfRef.regs[30U] = 0U;
        vlSelfRef.regs[31U] = 0U;
    }
    if (__VdlySet__regs__v32) {
        vlSelfRef.regs[__VdlyDim0__regs__v32] = __VdlyVal__regs__v32;
        vlSelfRef.regs[0U] = 0U;
    }
    vlSelfRef.__PVT__data_rs2 = vlSelfRef.regs[(0x0000001fU 
                                                & ((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U] 
                                                    << 2U) 
                                                   | (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                                      >> 0x0000001eU)))];
    vlSelfRef.__PVT__data_rs1 = vlSelfRef.regs[(0x0000001fU 
                                                & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U] 
                                                   >> 3U))];
}
