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
    // Locals
    VlWide<7>/*223:0*/ __Vtemp_4;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((((vlSelfRef.__Vm_traceActivity[1U] 
                        | vlSelfRef.__Vm_traceActivity[2U]) 
                       | vlSelfRef.__Vm_traceActivity[3U]) 
                      | vlSelfRef.__Vm_traceActivity[4U])))) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__top.__PVT__if_id_bus[2U]),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__top.__PVT__if_id_bus[1U]),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__top.__PVT__if_id_bus[0U]),32);
        bufp->chgIData(oldp+3,((((- (IData)((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                             >> 0x0000001fU))) 
                                 << 0x0000000bU) | 
                                ((0x000007e0U & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                 >> 0x00000014U)) 
                                 | (0x0000001fU & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                   >> 7U))))),32);
        bufp->chgIData(oldp+4,((((- (IData)((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
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
        bufp->chgIData(oldp+5,((0xfffff000U & vlSymsp->TOP__top.__PVT__if_id_bus[0U])),32);
        bufp->chgIData(oldp+6,((((- (IData)((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                             >> 0x0000001fU))) 
                                 << 0x00000014U) | 
                                ((((0x000001feU & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                   >> 0x0000000bU)) 
                                   | (1U & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                            >> 0x00000014U))) 
                                  << 0x0000000bU) | 
                                 (0x000007feU & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                 >> 0x00000014U))))),32);
        bufp->chgCData(oldp+7,((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                >> 0x00000019U)),7);
        bufp->chgCData(oldp+8,((0x0000001fU & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                               >> 0x0000000fU))),5);
        bufp->chgCData(oldp+9,((0x0000001fU & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                               >> 0x00000014U))),5);
        bufp->chgCData(oldp+10,((0x0000001fU & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                >> 7U))),5);
        bufp->chgCData(oldp+11,((7U & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                       >> 0x0000000cU))),3);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[2U]) 
                      | vlSelfRef.__Vm_traceActivity[4U])))) {
        bufp->chgIData(oldp+12,(vlSymsp->TOP__top.__PVT__ifu_mod__DOT__next_pc),32);
        bufp->chgIData(oldp+13,(((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[6U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[5U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+14,(((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[5U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[4U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+15,(((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[4U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[3U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+16,(((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[3U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[2U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+17,(((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[2U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U] 
                                  >> 8U))),32);
        bufp->chgCData(oldp+18,((0x0000001fU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U] 
                                                >> 3U))),5);
        bufp->chgCData(oldp+19,((0x0000001fU & ((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                                   >> 0x0000001eU)))),5);
        bufp->chgCData(oldp+20,((0x000000ffU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                                >> 0x00000016U))),8);
        bufp->chgBit(oldp+21,((1U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                     >> 0x00000015U))));
        bufp->chgCData(oldp+22,((7U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                       >> 0x00000012U))),3);
        bufp->chgCData(oldp+23,((0x0000001fU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                                >> 0x0000000dU))),5);
        bufp->chgBit(oldp+24,((1U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                     >> 0x0000000cU))));
        bufp->chgBit(oldp+25,((1U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                     >> 0x0000000bU))));
        bufp->chgCData(oldp+26,((7U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                       >> 8U))),3);
        bufp->chgCData(oldp+27,((0x0000001fU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                                >> 3U))),5);
        bufp->chgCData(oldp+28,((3U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                       >> 1U))),2);
        bufp->chgBit(oldp+29,((1U & vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U])));
        bufp->chgIData(oldp+30,(vlSymsp->TOP__top__reg_mod.__PVT__data_rs1),32);
        bufp->chgIData(oldp+31,(vlSymsp->TOP__top__reg_mod.__PVT__data_rs2),32);
        bufp->chgIData(oldp+32,(((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_out[4U] 
                                  << 0x00000012U) | 
                                 (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_out[3U] 
                                  >> 0x0000000eU))),32);
        bufp->chgIData(oldp+33,(((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_out[3U] 
                                  << 0x00000012U) | 
                                 (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_out[2U] 
                                  >> 0x0000000eU))),32);
        bufp->chgIData(oldp+34,(((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_out[2U] 
                                  << 0x00000012U) | 
                                 (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_out[1U] 
                                  >> 0x0000000eU))),32);
        bufp->chgIData(oldp+35,(((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_out[1U] 
                                  << 0x00000012U) | 
                                 (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_out[0U] 
                                  >> 0x0000000eU))),32);
        bufp->chgBit(oldp+36,((1U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_out[0U] 
                                     >> 0x0000000dU))));
        bufp->chgBit(oldp+37,((1U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_out[0U] 
                                     >> 0x0000000cU))));
        bufp->chgCData(oldp+38,((7U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_out[0U] 
                                       >> 9U))),3);
        bufp->chgCData(oldp+39,((0x0000001fU & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_out[0U] 
                                                >> 4U))),5);
        bufp->chgCData(oldp+40,((3U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_out[0U] 
                                       >> 2U))),2);
        bufp->chgBit(oldp+41,((1U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_out[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+42,((1U & vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_out[0U])));
        bufp->chgIData(oldp+43,(((vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[4U] 
                                  << 0x00000012U) | 
                                 (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[3U] 
                                  >> 0x0000000eU))),32);
        bufp->chgIData(oldp+44,(((vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[3U] 
                                  << 0x00000012U) | 
                                 (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[2U] 
                                  >> 0x0000000eU))),32);
        bufp->chgIData(oldp+45,(((vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[2U] 
                                  << 0x00000012U) | 
                                 (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[1U] 
                                  >> 0x0000000eU))),32);
        bufp->chgIData(oldp+46,(((vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[1U] 
                                  << 0x00000012U) | 
                                 (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                  >> 0x0000000eU))),32);
        bufp->chgBit(oldp+47,((1U & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                     >> 0x0000000dU))));
        bufp->chgBit(oldp+48,((1U & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                     >> 0x0000000cU))));
        bufp->chgCData(oldp+49,((7U & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                       >> 9U))),3);
        bufp->chgCData(oldp+50,((0x0000001fU & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                >> 4U))),5);
        bufp->chgCData(oldp+51,((3U & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                       >> 2U))),2);
        bufp->chgBit(oldp+52,((1U & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+53,((1U & vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U])));
        bufp->chgIData(oldp+54,(((vlSymsp->TOP__top.__PVT__ls_wb_bus[4U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+55,(((vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__top.__PVT__ls_wb_bus[2U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+56,(((vlSymsp->TOP__top.__PVT__ls_wb_bus[2U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__top.__PVT__ls_wb_bus[1U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+57,(((vlSymsp->TOP__top.__PVT__ls_wb_bus[1U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                  >> 8U))),32);
        bufp->chgCData(oldp+58,((0x0000001fU & (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                                >> 3U))),5);
        bufp->chgCData(oldp+59,((3U & (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                       >> 1U))),2);
        bufp->chgBit(oldp+60,((1U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])));
        bufp->chgIData(oldp+61,(vlSymsp->TOP__top.__PVT__csr_data),32);
        bufp->chgIData(oldp+62,(vlSymsp->TOP__top.__PVT__pc_mod__DOT__data_in),32);
        bufp->chgIData(oldp+63,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__data_in),32);
        bufp->chgIData(oldp+64,(((4U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])
                                  ? ((2U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])
                                      ? ((vlSymsp->TOP__top.__PVT__ls_wb_bus[1U] 
                                          << 0x00000018U) 
                                         | (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                            >> 8U))
                                      : ((vlSymsp->TOP__top.__PVT__ls_wb_bus[2U] 
                                          << 0x00000018U) 
                                         | (vlSymsp->TOP__top.__PVT__ls_wb_bus[1U] 
                                            >> 8U)))
                                  : ((2U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])
                                      ? ((vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                                          << 0x00000018U) 
                                         | (vlSymsp->TOP__top.__PVT__ls_wb_bus[2U] 
                                            >> 8U))
                                      : ((vlSymsp->TOP__top.__PVT__ls_wb_bus[4U] 
                                          << 0x00000018U) 
                                         | (vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                                            >> 8U))))),32);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__top.__PVT__alu_mod__DOT__val1),32);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__top.__PVT__alu_mod__DOT__val2),32);
        __Vtemp_4[0U] = (IData)((0x000000ffffffffffULL 
                                 & (((QData)((IData)(vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U])))));
        __Vtemp_4[1U] = ((vlSymsp->TOP__top__reg_mod.__PVT__data_rs2 
                          << 8U) | (IData)(((0x000000ffffffffffULL 
                                             & (((QData)((IData)(vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U])))) 
                                            >> 0x00000020U)));
        __Vtemp_4[2U] = ((vlSymsp->TOP__top__reg_mod.__PVT__data_rs2 
                          >> 0x00000018U) | (vlSymsp->TOP__top__reg_mod.__PVT__data_rs1 
                                             << 8U));
        __Vtemp_4[3U] = ((vlSymsp->TOP__top__reg_mod.__PVT__data_rs1 
                          >> 0x00000018U) | (0xffffff00U 
                                             & vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[3U]));
        __Vtemp_4[4U] = ((0x000000ffU & vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[4U]) 
                         | (0xffffff00U & vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[4U]));
        __Vtemp_4[5U] = ((0x000000ffU & vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[5U]) 
                         | (0xffffff00U & vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[5U]));
        __Vtemp_4[6U] = (0x000000ffU & vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[6U]);
        bufp->chgWData(oldp+67,(__Vtemp_4),200);
        bufp->chgCData(oldp+74,((3U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                       >> 0x00000012U))),2);
        bufp->chgSData(oldp+75,((0x00000fffU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[3U] 
                                                >> 8U))),12);
        bufp->chgCData(oldp+76,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__working_reg),5);
        bufp->chgIData(oldp+77,(vlSymsp->TOP__top.__PVT__decode_mod__DOT__imm_i),32);
        bufp->chgIData(oldp+78,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__A),32);
        bufp->chgIData(oldp+79,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__lsu_out),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+80,(vlSymsp->TOP__top.__PVT__if_id_valid));
        bufp->chgIData(oldp+81,(vlSymsp->TOP__top.__PVT__araddr_ifu),32);
        bufp->chgIData(oldp+82,(vlSymsp->TOP__top.__PVT__rdata_ifu),32);
        bufp->chgCData(oldp+83,(vlSymsp->TOP__top.__PVT__rresp_ifu),2);
        bufp->chgBit(oldp+84,(vlSymsp->TOP__top.__PVT__arvalid_ifu));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__top.__PVT__arready_ifu));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__top.__PVT__rvalid_ifu));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__top.__PVT__rready_ifu));
        bufp->chgIData(oldp+88,(vlSymsp->TOP__top.__PVT__axi_slave_mod__DOT__slave),32);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[31]),32);
        bufp->chgIData(oldp+90,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[30]),32);
        bufp->chgIData(oldp+91,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[29]),32);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[28]),32);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[27]),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[26]),32);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[25]),32);
        bufp->chgIData(oldp+96,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[24]),32);
        bufp->chgIData(oldp+97,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[23]),32);
        bufp->chgIData(oldp+98,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[22]),32);
        bufp->chgIData(oldp+99,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[21]),32);
        bufp->chgIData(oldp+100,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[20]),32);
        bufp->chgIData(oldp+101,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[19]),32);
        bufp->chgIData(oldp+102,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[18]),32);
        bufp->chgIData(oldp+103,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[17]),32);
        bufp->chgIData(oldp+104,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[16]),32);
        bufp->chgIData(oldp+105,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[15]),32);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[14]),32);
        bufp->chgIData(oldp+107,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[13]),32);
        bufp->chgIData(oldp+108,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[12]),32);
        bufp->chgIData(oldp+109,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[11]),32);
        bufp->chgIData(oldp+110,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[10]),32);
        bufp->chgIData(oldp+111,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[9]),32);
        bufp->chgIData(oldp+112,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[8]),32);
        bufp->chgIData(oldp+113,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[7]),32);
        bufp->chgIData(oldp+114,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[6]),32);
        bufp->chgIData(oldp+115,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[5]),32);
        bufp->chgIData(oldp+116,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[4]),32);
        bufp->chgIData(oldp+117,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[3]),32);
        bufp->chgIData(oldp+118,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[2]),32);
        bufp->chgIData(oldp+119,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[1]),32);
        bufp->chgIData(oldp+120,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[0]),32);
        bufp->chgIData(oldp+121,(vlSymsp->TOP__top.__PVT__ifu_mod__DOT__ifu),32);
        bufp->chgBit(oldp+122,((0U != (IData)(vlSymsp->TOP__top.__PVT__rresp_ifu))));
    }
    bufp->chgBit(oldp+123,(vlSelfRef.clk));
    bufp->chgBit(oldp+124,(vlSelfRef.rst));
    bufp->chgIData(oldp+125,(vlSymsp->TOP__top.pc),32);
    bufp->chgIData(oldp+126,(vlSymsp->TOP__top.opcode),32);
    bufp->chgBit(oldp+127,(vlSymsp->TOP__top.reg_valid));
    bufp->chgIData(oldp+128,(((IData)(4U) + vlSymsp->TOP__top.pc)),32);
    bufp->chgIData(oldp+129,(vlSymsp->TOP__top__reg_mod.regs[31]),32);
    bufp->chgIData(oldp+130,(vlSymsp->TOP__top__reg_mod.regs[30]),32);
    bufp->chgIData(oldp+131,(vlSymsp->TOP__top__reg_mod.regs[29]),32);
    bufp->chgIData(oldp+132,(vlSymsp->TOP__top__reg_mod.regs[28]),32);
    bufp->chgIData(oldp+133,(vlSymsp->TOP__top__reg_mod.regs[27]),32);
    bufp->chgIData(oldp+134,(vlSymsp->TOP__top__reg_mod.regs[26]),32);
    bufp->chgIData(oldp+135,(vlSymsp->TOP__top__reg_mod.regs[25]),32);
    bufp->chgIData(oldp+136,(vlSymsp->TOP__top__reg_mod.regs[24]),32);
    bufp->chgIData(oldp+137,(vlSymsp->TOP__top__reg_mod.regs[23]),32);
    bufp->chgIData(oldp+138,(vlSymsp->TOP__top__reg_mod.regs[22]),32);
    bufp->chgIData(oldp+139,(vlSymsp->TOP__top__reg_mod.regs[21]),32);
    bufp->chgIData(oldp+140,(vlSymsp->TOP__top__reg_mod.regs[20]),32);
    bufp->chgIData(oldp+141,(vlSymsp->TOP__top__reg_mod.regs[19]),32);
    bufp->chgIData(oldp+142,(vlSymsp->TOP__top__reg_mod.regs[18]),32);
    bufp->chgIData(oldp+143,(vlSymsp->TOP__top__reg_mod.regs[17]),32);
    bufp->chgIData(oldp+144,(vlSymsp->TOP__top__reg_mod.regs[16]),32);
    bufp->chgIData(oldp+145,(vlSymsp->TOP__top__reg_mod.regs[15]),32);
    bufp->chgIData(oldp+146,(vlSymsp->TOP__top__reg_mod.regs[14]),32);
    bufp->chgIData(oldp+147,(vlSymsp->TOP__top__reg_mod.regs[13]),32);
    bufp->chgIData(oldp+148,(vlSymsp->TOP__top__reg_mod.regs[12]),32);
    bufp->chgIData(oldp+149,(vlSymsp->TOP__top__reg_mod.regs[11]),32);
    bufp->chgIData(oldp+150,(vlSymsp->TOP__top__reg_mod.regs[10]),32);
    bufp->chgIData(oldp+151,(vlSymsp->TOP__top__reg_mod.regs[9]),32);
    bufp->chgIData(oldp+152,(vlSymsp->TOP__top__reg_mod.regs[8]),32);
    bufp->chgIData(oldp+153,(vlSymsp->TOP__top__reg_mod.regs[7]),32);
    bufp->chgIData(oldp+154,(vlSymsp->TOP__top__reg_mod.regs[6]),32);
    bufp->chgIData(oldp+155,(vlSymsp->TOP__top__reg_mod.regs[5]),32);
    bufp->chgIData(oldp+156,(vlSymsp->TOP__top__reg_mod.regs[4]),32);
    bufp->chgIData(oldp+157,(vlSymsp->TOP__top__reg_mod.regs[3]),32);
    bufp->chgIData(oldp+158,(vlSymsp->TOP__top__reg_mod.regs[2]),32);
    bufp->chgIData(oldp+159,(vlSymsp->TOP__top__reg_mod.regs[1]),32);
    bufp->chgIData(oldp+160,(vlSymsp->TOP__top__reg_mod.regs[0]),32);
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
