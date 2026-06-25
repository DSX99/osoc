// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgWData(oldp+0,(vlSymsp->TOP__top.__PVT__if_id_bus),96);
        bufp->chgBit(oldp+3,(vlSymsp->TOP__top.__PVT__if_id_valid));
        bufp->chgWData(oldp+4,(vlSymsp->TOP__top.__PVT__id_ex_bus_decoded),199);
        bufp->chgWData(oldp+11,(vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in),199);
        bufp->chgWData(oldp+18,(vlSymsp->TOP__top.__PVT__ex_ls_bus_alu),141);
        bufp->chgWData(oldp+23,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in),141);
        bufp->chgWData(oldp+28,(vlSymsp->TOP__top.__PVT__ls_wb_bus),135);
        bufp->chgIData(oldp+33,(vlSymsp->TOP__top.__PVT__csr_data),32);
        bufp->chgIData(oldp+34,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__data_in),32);
        bufp->chgIData(oldp+35,(vlSymsp->TOP__top__reg_mod.__PVT__data_rs1),32);
        bufp->chgIData(oldp+36,(vlSymsp->TOP__top__reg_mod.__PVT__data_rs2),32);
        bufp->chgIData(oldp+37,(((2U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])
                                  ? ((1U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])
                                      ? ((vlSymsp->TOP__top.__PVT__ls_wb_bus[1U] 
                                          << 0x00000019U) 
                                         | (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                            >> 7U))
                                      : ((vlSymsp->TOP__top.__PVT__ls_wb_bus[2U] 
                                          << 0x00000019U) 
                                         | (vlSymsp->TOP__top.__PVT__ls_wb_bus[1U] 
                                            >> 7U)))
                                  : ((1U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])
                                      ? ((vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                                          << 0x00000019U) 
                                         | (vlSymsp->TOP__top.__PVT__ls_wb_bus[2U] 
                                            >> 7U))
                                      : ((vlSymsp->TOP__top.__PVT__ls_wb_bus[4U] 
                                          << 0x00000019U) 
                                         | (vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                                            >> 7U))))),32);
        bufp->chgIData(oldp+38,(vlSymsp->TOP__top.__PVT__alu_mod__DOT__val1),32);
        bufp->chgIData(oldp+39,(vlSymsp->TOP__top.__PVT__alu_mod__DOT__val2),32);
        bufp->chgCData(oldp+40,((3U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                       >> 0x00000011U))),2);
        bufp->chgCData(oldp+41,((0x0000001fU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                                >> 0x0000000cU))),5);
        bufp->chgSData(oldp+42,((0x00000fffU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[3U] 
                                                >> 7U))),12);
        bufp->chgCData(oldp+43,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__working_reg),5);
        bufp->chgIData(oldp+44,(vlSymsp->TOP__top.__PVT__decode_mod__DOT__imm_i),32);
        bufp->chgIData(oldp+45,((((- (IData)((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                              >> 0x0000001fU))) 
                                  << 0x0000000bU) | 
                                 ((0x000007e0U & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                  >> 0x00000014U)) 
                                  | (0x0000001fU & 
                                     (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                      >> 7U))))),32);
        bufp->chgIData(oldp+46,((((- (IData)((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                              >> 0x0000001fU))) 
                                  << 0x0000000cU) | 
                                 ((0x00000800U & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                  << 4U)) 
                                  | ((0x000007e0U & 
                                      (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                       >> 0x00000014U)) 
                                     | (0x0000001eU 
                                        & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                           >> 7U)))))),32);
        bufp->chgIData(oldp+47,((0xfffff000U & vlSymsp->TOP__top.__PVT__if_id_bus[0U])),32);
        bufp->chgIData(oldp+48,((((- (IData)((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                              >> 0x0000001fU))) 
                                  << 0x00000014U) | 
                                 ((((0x000001feU & 
                                     (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                      >> 0x0000000bU)) 
                                    | (1U & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                             >> 0x00000014U))) 
                                   << 0x0000000bU) 
                                  | (0x000007feU & 
                                     (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                      >> 0x00000014U))))),32);
        bufp->chgCData(oldp+49,((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                 >> 0x00000019U)),7);
        bufp->chgCData(oldp+50,((0x0000001fU & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+51,((0x0000001fU & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                >> 0x00000014U))),5);
        bufp->chgCData(oldp+52,((0x0000001fU & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                >> 7U))),5);
        bufp->chgCData(oldp+53,((7U & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                       >> 0x0000000cU))),3);
        bufp->chgIData(oldp+54,(vlSymsp->TOP__top.__PVT__if_id_bus[0U]),32);
        bufp->chgIData(oldp+55,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__A),32);
        bufp->chgIData(oldp+56,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__lsu_out),32);
        bufp->chgBit(oldp+57,((1U & vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U])));
        bufp->chgIData(oldp+58,(((vlSymsp->TOP__top.__PVT__ls_wb_bus[4U] 
                                  << 0x00000019U) | 
                                 (vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                                  >> 7U))),32);
        bufp->chgCData(oldp+59,((0x0000001fU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U] 
                                                >> 2U))),5);
        bufp->chgCData(oldp+60,((0x0000001fU & ((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U] 
                                                 << 3U) 
                                                | (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                                   >> 0x0000001dU)))),5);
        bufp->chgCData(oldp+61,((0x0000001fU & (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                                >> 2U))),5);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+62,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[31]),32);
        bufp->chgIData(oldp+63,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[30]),32);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[29]),32);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[28]),32);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[27]),32);
        bufp->chgIData(oldp+67,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[26]),32);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[25]),32);
        bufp->chgIData(oldp+69,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[24]),32);
        bufp->chgIData(oldp+70,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[23]),32);
        bufp->chgIData(oldp+71,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[22]),32);
        bufp->chgIData(oldp+72,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[21]),32);
        bufp->chgIData(oldp+73,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[20]),32);
        bufp->chgIData(oldp+74,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[19]),32);
        bufp->chgIData(oldp+75,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[18]),32);
        bufp->chgIData(oldp+76,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[17]),32);
        bufp->chgIData(oldp+77,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[16]),32);
        bufp->chgIData(oldp+78,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[15]),32);
        bufp->chgIData(oldp+79,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[14]),32);
        bufp->chgIData(oldp+80,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[13]),32);
        bufp->chgIData(oldp+81,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[12]),32);
        bufp->chgIData(oldp+82,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[11]),32);
        bufp->chgIData(oldp+83,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[10]),32);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[9]),32);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[8]),32);
        bufp->chgIData(oldp+86,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[7]),32);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[6]),32);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[5]),32);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[4]),32);
        bufp->chgIData(oldp+90,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[3]),32);
        bufp->chgIData(oldp+91,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[2]),32);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[1]),32);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[0]),32);
    }
    bufp->chgBit(oldp+94,(vlSelfRef.clk));
    bufp->chgBit(oldp+95,(vlSelfRef.rst));
    bufp->chgIData(oldp+96,(vlSymsp->TOP__top.pc),32);
    bufp->chgIData(oldp+97,(vlSymsp->TOP__top.opcode),32);
    bufp->chgIData(oldp+98,(((IData)(4U) + vlSymsp->TOP__top.pc)),32);
    bufp->chgIData(oldp+99,(vlSymsp->TOP__top__reg_mod.regs[31]),32);
    bufp->chgIData(oldp+100,(vlSymsp->TOP__top__reg_mod.regs[30]),32);
    bufp->chgIData(oldp+101,(vlSymsp->TOP__top__reg_mod.regs[29]),32);
    bufp->chgIData(oldp+102,(vlSymsp->TOP__top__reg_mod.regs[28]),32);
    bufp->chgIData(oldp+103,(vlSymsp->TOP__top__reg_mod.regs[27]),32);
    bufp->chgIData(oldp+104,(vlSymsp->TOP__top__reg_mod.regs[26]),32);
    bufp->chgIData(oldp+105,(vlSymsp->TOP__top__reg_mod.regs[25]),32);
    bufp->chgIData(oldp+106,(vlSymsp->TOP__top__reg_mod.regs[24]),32);
    bufp->chgIData(oldp+107,(vlSymsp->TOP__top__reg_mod.regs[23]),32);
    bufp->chgIData(oldp+108,(vlSymsp->TOP__top__reg_mod.regs[22]),32);
    bufp->chgIData(oldp+109,(vlSymsp->TOP__top__reg_mod.regs[21]),32);
    bufp->chgIData(oldp+110,(vlSymsp->TOP__top__reg_mod.regs[20]),32);
    bufp->chgIData(oldp+111,(vlSymsp->TOP__top__reg_mod.regs[19]),32);
    bufp->chgIData(oldp+112,(vlSymsp->TOP__top__reg_mod.regs[18]),32);
    bufp->chgIData(oldp+113,(vlSymsp->TOP__top__reg_mod.regs[17]),32);
    bufp->chgIData(oldp+114,(vlSymsp->TOP__top__reg_mod.regs[16]),32);
    bufp->chgIData(oldp+115,(vlSymsp->TOP__top__reg_mod.regs[15]),32);
    bufp->chgIData(oldp+116,(vlSymsp->TOP__top__reg_mod.regs[14]),32);
    bufp->chgIData(oldp+117,(vlSymsp->TOP__top__reg_mod.regs[13]),32);
    bufp->chgIData(oldp+118,(vlSymsp->TOP__top__reg_mod.regs[12]),32);
    bufp->chgIData(oldp+119,(vlSymsp->TOP__top__reg_mod.regs[11]),32);
    bufp->chgIData(oldp+120,(vlSymsp->TOP__top__reg_mod.regs[10]),32);
    bufp->chgIData(oldp+121,(vlSymsp->TOP__top__reg_mod.regs[9]),32);
    bufp->chgIData(oldp+122,(vlSymsp->TOP__top__reg_mod.regs[8]),32);
    bufp->chgIData(oldp+123,(vlSymsp->TOP__top__reg_mod.regs[7]),32);
    bufp->chgIData(oldp+124,(vlSymsp->TOP__top__reg_mod.regs[6]),32);
    bufp->chgIData(oldp+125,(vlSymsp->TOP__top__reg_mod.regs[5]),32);
    bufp->chgIData(oldp+126,(vlSymsp->TOP__top__reg_mod.regs[4]),32);
    bufp->chgIData(oldp+127,(vlSymsp->TOP__top__reg_mod.regs[3]),32);
    bufp->chgIData(oldp+128,(vlSymsp->TOP__top__reg_mod.regs[2]),32);
    bufp->chgIData(oldp+129,(vlSymsp->TOP__top__reg_mod.regs[1]),32);
    bufp->chgIData(oldp+130,(vlSymsp->TOP__top__reg_mod.regs[0]),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
