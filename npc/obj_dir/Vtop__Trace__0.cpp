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
        bufp->chgIData(oldp+0,(vlSymsp->TOP__top.__PVT__to_regs),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__top__reg_mod.__PVT__data_rs1),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__top__reg_mod.__PVT__data_rs2),32);
        bufp->chgIData(oldp+3,(vlSymsp->TOP__top.__PVT__alu_out),32);
        bufp->chgIData(oldp+4,(vlSymsp->TOP__top.__PVT__lsu_out),32);
        bufp->chgIData(oldp+5,(vlSymsp->TOP__top.__PVT__imm),32);
        bufp->chgIData(oldp+6,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__data_in),32);
        bufp->chgIData(oldp+7,(vlSymsp->TOP__top.__PVT__csr_out),32);
        bufp->chgIData(oldp+8,(((0U == (IData)(vlSymsp->TOP__top.__PVT__mux_select_pc))
                                 ? vlSymsp->TOP__top.__PVT__alu_out
                                 : ((1U == (IData)(vlSymsp->TOP__top.__PVT__mux_select_pc))
                                     ? vlSymsp->TOP__top.__PVT__csr_out
                                     : vlSymsp->TOP__top.__PVT__alu_out))),32);
        bufp->chgCData(oldp+9,(vlSymsp->TOP__top.__PVT__alu_op),8);
        bufp->chgCData(oldp+10,(vlSymsp->TOP__top.__PVT__rs1),5);
        bufp->chgCData(oldp+11,(vlSymsp->TOP__top.__PVT__rs2),5);
        bufp->chgCData(oldp+12,(vlSymsp->TOP__top.__PVT__rd),5);
        bufp->chgCData(oldp+13,(vlSymsp->TOP__top.__PVT__cause),5);
        bufp->chgCData(oldp+14,(vlSymsp->TOP__top.__PVT__lsu_oper),3);
        bufp->chgCData(oldp+15,(vlSymsp->TOP__top.__PVT__csr_oper),3);
        bufp->chgCData(oldp+16,(vlSymsp->TOP__top.__PVT__mux_select),2);
        bufp->chgCData(oldp+17,(vlSymsp->TOP__top.__PVT__mux_select_pc),2);
        bufp->chgBit(oldp+18,(vlSymsp->TOP__top.__PVT__branch));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__top.__PVT__lsu_we));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__top.__PVT__lsu_le));
        bufp->chgIData(oldp+21,(vlSymsp->TOP__top.__PVT__alu_mod__DOT__val1),32);
        bufp->chgIData(oldp+22,(vlSymsp->TOP__top.__PVT__alu_mod__DOT__val2),32);
        bufp->chgCData(oldp+23,((3U & (IData)(vlSymsp->TOP__top.__PVT__csr_oper))),2);
        bufp->chgSData(oldp+24,((0x00000fffU & vlSymsp->TOP__top.__PVT__imm)),12);
        bufp->chgCData(oldp+25,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__working_reg),5);
        bufp->chgIData(oldp+26,(vlSymsp->TOP__top.__PVT__decode_mod__DOT__imm_i),32);
        bufp->chgIData(oldp+27,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__A),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+28,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[31]),32);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[30]),32);
        bufp->chgIData(oldp+30,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[29]),32);
        bufp->chgIData(oldp+31,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[28]),32);
        bufp->chgIData(oldp+32,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[27]),32);
        bufp->chgIData(oldp+33,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[26]),32);
        bufp->chgIData(oldp+34,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[25]),32);
        bufp->chgIData(oldp+35,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[24]),32);
        bufp->chgIData(oldp+36,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[23]),32);
        bufp->chgIData(oldp+37,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[22]),32);
        bufp->chgIData(oldp+38,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[21]),32);
        bufp->chgIData(oldp+39,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[20]),32);
        bufp->chgIData(oldp+40,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[19]),32);
        bufp->chgIData(oldp+41,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[18]),32);
        bufp->chgIData(oldp+42,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[17]),32);
        bufp->chgIData(oldp+43,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[16]),32);
        bufp->chgIData(oldp+44,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[15]),32);
        bufp->chgIData(oldp+45,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[14]),32);
        bufp->chgIData(oldp+46,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[13]),32);
        bufp->chgIData(oldp+47,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[12]),32);
        bufp->chgIData(oldp+48,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[11]),32);
        bufp->chgIData(oldp+49,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[10]),32);
        bufp->chgIData(oldp+50,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[9]),32);
        bufp->chgIData(oldp+51,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[8]),32);
        bufp->chgIData(oldp+52,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[7]),32);
        bufp->chgIData(oldp+53,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[6]),32);
        bufp->chgIData(oldp+54,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[5]),32);
        bufp->chgIData(oldp+55,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[4]),32);
        bufp->chgIData(oldp+56,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[3]),32);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[2]),32);
        bufp->chgIData(oldp+58,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[1]),32);
        bufp->chgIData(oldp+59,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[0]),32);
    }
    bufp->chgBit(oldp+60,(vlSelfRef.clk));
    bufp->chgBit(oldp+61,(vlSelfRef.rst));
    bufp->chgIData(oldp+62,(vlSymsp->TOP__top.opcode),32);
    bufp->chgIData(oldp+63,(vlSymsp->TOP__top.pc),32);
    bufp->chgIData(oldp+64,(((IData)(4U) + vlSymsp->TOP__top.pc)),32);
    bufp->chgIData(oldp+65,((((- (IData)((vlSymsp->TOP__top.opcode 
                                          >> 0x0000001fU))) 
                              << 0x0000000bU) | ((0x000007e0U 
                                                  & (vlSymsp->TOP__top.opcode 
                                                     >> 0x00000014U)) 
                                                 | (0x0000001fU 
                                                    & (vlSymsp->TOP__top.opcode 
                                                       >> 7U))))),32);
    bufp->chgIData(oldp+66,((((- (IData)((vlSymsp->TOP__top.opcode 
                                          >> 0x0000001fU))) 
                              << 0x0000000cU) | ((0x00000800U 
                                                  & (vlSymsp->TOP__top.opcode 
                                                     << 4U)) 
                                                 | ((0x000007e0U 
                                                     & (vlSymsp->TOP__top.opcode 
                                                        >> 0x00000014U)) 
                                                    | (0x0000001eU 
                                                       & (vlSymsp->TOP__top.opcode 
                                                          >> 7U)))))),32);
    bufp->chgIData(oldp+67,((0xfffff000U & vlSymsp->TOP__top.opcode)),32);
    bufp->chgIData(oldp+68,((((- (IData)((vlSymsp->TOP__top.opcode 
                                          >> 0x0000001fU))) 
                              << 0x00000014U) | (((
                                                   (0x000001feU 
                                                    & (vlSymsp->TOP__top.opcode 
                                                       >> 0x0000000bU)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__top.opcode 
                                                         >> 0x00000014U))) 
                                                  << 0x0000000bU) 
                                                 | (0x000007feU 
                                                    & (vlSymsp->TOP__top.opcode 
                                                       >> 0x00000014U))))),32);
    bufp->chgCData(oldp+69,((vlSymsp->TOP__top.opcode 
                             >> 0x00000019U)),7);
    bufp->chgCData(oldp+70,((0x0000001fU & (vlSymsp->TOP__top.opcode 
                                            >> 0x0000000fU))),5);
    bufp->chgCData(oldp+71,((0x0000001fU & (vlSymsp->TOP__top.opcode 
                                            >> 0x00000014U))),5);
    bufp->chgCData(oldp+72,((0x0000001fU & (vlSymsp->TOP__top.opcode 
                                            >> 7U))),5);
    bufp->chgCData(oldp+73,((7U & (vlSymsp->TOP__top.opcode 
                                   >> 0x0000000cU))),3);
    bufp->chgIData(oldp+74,(vlSymsp->TOP__top__reg_mod.regs[31]),32);
    bufp->chgIData(oldp+75,(vlSymsp->TOP__top__reg_mod.regs[30]),32);
    bufp->chgIData(oldp+76,(vlSymsp->TOP__top__reg_mod.regs[29]),32);
    bufp->chgIData(oldp+77,(vlSymsp->TOP__top__reg_mod.regs[28]),32);
    bufp->chgIData(oldp+78,(vlSymsp->TOP__top__reg_mod.regs[27]),32);
    bufp->chgIData(oldp+79,(vlSymsp->TOP__top__reg_mod.regs[26]),32);
    bufp->chgIData(oldp+80,(vlSymsp->TOP__top__reg_mod.regs[25]),32);
    bufp->chgIData(oldp+81,(vlSymsp->TOP__top__reg_mod.regs[24]),32);
    bufp->chgIData(oldp+82,(vlSymsp->TOP__top__reg_mod.regs[23]),32);
    bufp->chgIData(oldp+83,(vlSymsp->TOP__top__reg_mod.regs[22]),32);
    bufp->chgIData(oldp+84,(vlSymsp->TOP__top__reg_mod.regs[21]),32);
    bufp->chgIData(oldp+85,(vlSymsp->TOP__top__reg_mod.regs[20]),32);
    bufp->chgIData(oldp+86,(vlSymsp->TOP__top__reg_mod.regs[19]),32);
    bufp->chgIData(oldp+87,(vlSymsp->TOP__top__reg_mod.regs[18]),32);
    bufp->chgIData(oldp+88,(vlSymsp->TOP__top__reg_mod.regs[17]),32);
    bufp->chgIData(oldp+89,(vlSymsp->TOP__top__reg_mod.regs[16]),32);
    bufp->chgIData(oldp+90,(vlSymsp->TOP__top__reg_mod.regs[15]),32);
    bufp->chgIData(oldp+91,(vlSymsp->TOP__top__reg_mod.regs[14]),32);
    bufp->chgIData(oldp+92,(vlSymsp->TOP__top__reg_mod.regs[13]),32);
    bufp->chgIData(oldp+93,(vlSymsp->TOP__top__reg_mod.regs[12]),32);
    bufp->chgIData(oldp+94,(vlSymsp->TOP__top__reg_mod.regs[11]),32);
    bufp->chgIData(oldp+95,(vlSymsp->TOP__top__reg_mod.regs[10]),32);
    bufp->chgIData(oldp+96,(vlSymsp->TOP__top__reg_mod.regs[9]),32);
    bufp->chgIData(oldp+97,(vlSymsp->TOP__top__reg_mod.regs[8]),32);
    bufp->chgIData(oldp+98,(vlSymsp->TOP__top__reg_mod.regs[7]),32);
    bufp->chgIData(oldp+99,(vlSymsp->TOP__top__reg_mod.regs[6]),32);
    bufp->chgIData(oldp+100,(vlSymsp->TOP__top__reg_mod.regs[5]),32);
    bufp->chgIData(oldp+101,(vlSymsp->TOP__top__reg_mod.regs[4]),32);
    bufp->chgIData(oldp+102,(vlSymsp->TOP__top__reg_mod.regs[3]),32);
    bufp->chgIData(oldp+103,(vlSymsp->TOP__top__reg_mod.regs[2]),32);
    bufp->chgIData(oldp+104,(vlSymsp->TOP__top__reg_mod.regs[1]),32);
    bufp->chgIData(oldp+105,(vlSymsp->TOP__top__reg_mod.regs[0]),32);
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
