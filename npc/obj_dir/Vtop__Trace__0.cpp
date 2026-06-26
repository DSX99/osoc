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
        bufp->chgBit(oldp+0,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__valid_right));
        bufp->chgIData(oldp+1,(vlSymsp->TOP__top.__PVT__if_id_bus[2U]),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__top.__PVT__if_id_bus[1U]),32);
        bufp->chgIData(oldp+3,(vlSymsp->TOP__top.__PVT__if_id_bus[0U]),32);
        bufp->chgBit(oldp+4,(vlSymsp->TOP__top.__PVT__alu_mod__DOT__ready_right));
        bufp->chgIData(oldp+5,(((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[6U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[5U] 
                                 >> 8U))),32);
        bufp->chgIData(oldp+6,(((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[5U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[4U] 
                                 >> 8U))),32);
        bufp->chgIData(oldp+7,(((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[4U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[3U] 
                                 >> 8U))),32);
        bufp->chgIData(oldp+8,(((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[3U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[2U] 
                                 >> 8U))),32);
        bufp->chgIData(oldp+9,(((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[2U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U] 
                                 >> 8U))),32);
        bufp->chgCData(oldp+10,((0x0000001fU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U] 
                                                >> 3U))),5);
        bufp->chgCData(oldp+11,((0x0000001fU & ((vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[1U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                                   >> 0x0000001eU)))),5);
        bufp->chgCData(oldp+12,((0x000000ffU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                                >> 0x00000016U))),8);
        bufp->chgBit(oldp+13,((1U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                     >> 0x00000015U))));
        bufp->chgCData(oldp+14,((7U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                       >> 0x00000012U))),3);
        bufp->chgCData(oldp+15,((0x0000001fU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                                >> 0x0000000dU))),5);
        bufp->chgBit(oldp+16,((1U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                     >> 0x0000000cU))));
        bufp->chgBit(oldp+17,((1U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                     >> 0x0000000bU))));
        bufp->chgCData(oldp+18,((7U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                       >> 8U))),3);
        bufp->chgCData(oldp+19,((0x0000001fU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                                >> 3U))),5);
        bufp->chgCData(oldp+20,((3U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                       >> 1U))),2);
        bufp->chgBit(oldp+21,((1U & vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U])));
        bufp->chgIData(oldp+22,(((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[6U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[5U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+23,(((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[5U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[4U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+24,(((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[4U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[3U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+25,(((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[3U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[2U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+26,(((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[2U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[1U] 
                                  >> 8U))),32);
        bufp->chgCData(oldp+27,((0x0000001fU & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[1U] 
                                                >> 3U))),5);
        bufp->chgCData(oldp+28,((0x0000001fU & ((vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[1U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                                   >> 0x0000001eU)))),5);
        bufp->chgCData(oldp+29,((0x000000ffU & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                                >> 0x00000016U))),8);
        bufp->chgBit(oldp+30,((1U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                     >> 0x00000015U))));
        bufp->chgCData(oldp+31,((7U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                       >> 0x00000012U))),3);
        bufp->chgCData(oldp+32,((0x0000001fU & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                                >> 0x0000000dU))),5);
        bufp->chgBit(oldp+33,((1U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                     >> 0x0000000cU))));
        bufp->chgBit(oldp+34,((1U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                     >> 0x0000000bU))));
        bufp->chgCData(oldp+35,((7U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                       >> 8U))),3);
        bufp->chgCData(oldp+36,((0x0000001fU & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                                >> 3U))),5);
        bufp->chgCData(oldp+37,((3U & (vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U] 
                                       >> 1U))),2);
        bufp->chgBit(oldp+38,((1U & vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in[0U])));
        bufp->chgIData(oldp+39,(((vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[4U] 
                                  << 0x00000012U) | 
                                 (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[3U] 
                                  >> 0x0000000eU))),32);
        bufp->chgIData(oldp+40,(((vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[3U] 
                                  << 0x00000012U) | 
                                 (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[2U] 
                                  >> 0x0000000eU))),32);
        bufp->chgIData(oldp+41,(((vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[2U] 
                                  << 0x00000012U) | 
                                 (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[1U] 
                                  >> 0x0000000eU))),32);
        bufp->chgIData(oldp+42,(((vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[1U] 
                                  << 0x00000012U) | 
                                 (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                  >> 0x0000000eU))),32);
        bufp->chgBit(oldp+43,((1U & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                     >> 0x0000000dU))));
        bufp->chgBit(oldp+44,((1U & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                     >> 0x0000000cU))));
        bufp->chgCData(oldp+45,((7U & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                       >> 9U))),3);
        bufp->chgCData(oldp+46,((0x0000001fU & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                                >> 4U))),5);
        bufp->chgCData(oldp+47,((3U & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                       >> 2U))),2);
        bufp->chgBit(oldp+48,((1U & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+49,((1U & vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U])));
        bufp->chgIData(oldp+50,(((vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[4U] 
                                  << 0x00000012U) | 
                                 (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[3U] 
                                  >> 0x0000000eU))),32);
        bufp->chgIData(oldp+51,(((vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[3U] 
                                  << 0x00000012U) | 
                                 (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[2U] 
                                  >> 0x0000000eU))),32);
        bufp->chgIData(oldp+52,(((vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[2U] 
                                  << 0x00000012U) | 
                                 (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[1U] 
                                  >> 0x0000000eU))),32);
        bufp->chgIData(oldp+53,(((vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[1U] 
                                  << 0x00000012U) | 
                                 (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                  >> 0x0000000eU))),32);
        bufp->chgBit(oldp+54,((1U & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                     >> 0x0000000dU))));
        bufp->chgBit(oldp+55,((1U & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                     >> 0x0000000cU))));
        bufp->chgCData(oldp+56,((7U & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                       >> 9U))),3);
        bufp->chgCData(oldp+57,((0x0000001fU & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                                >> 4U))),5);
        bufp->chgCData(oldp+58,((3U & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                       >> 2U))),2);
        bufp->chgBit(oldp+59,((1U & (vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+60,((1U & vlSymsp->TOP__top.__PVT__lsu_mod__DOT__bus_in[0U])));
        bufp->chgIData(oldp+61,(((vlSymsp->TOP__top.__PVT__ls_wb_bus[4U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+62,(((vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__top.__PVT__ls_wb_bus[2U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+63,(((vlSymsp->TOP__top.__PVT__ls_wb_bus[2U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__top.__PVT__ls_wb_bus[1U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+64,(((vlSymsp->TOP__top.__PVT__ls_wb_bus[1U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                  >> 8U))),32);
        bufp->chgCData(oldp+65,((0x0000001fU & (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                                >> 3U))),5);
        bufp->chgCData(oldp+66,((3U & (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                       >> 1U))),2);
        bufp->chgBit(oldp+67,((1U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])));
        bufp->chgIData(oldp+68,(vlSymsp->TOP__top.__PVT__csr_data),32);
        bufp->chgIData(oldp+69,(((1U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])
                                  ? ((vlSymsp->TOP__top.__PVT__ls_wb_bus[1U] 
                                      << 0x00000018U) 
                                     | (vlSymsp->TOP__top.__PVT__ls_wb_bus[0U] 
                                        >> 8U)) : (
                                                   (vlSymsp->TOP__top.__PVT__ls_wb_bus[4U] 
                                                    << 0x00000018U) 
                                                   | (vlSymsp->TOP__top.__PVT__ls_wb_bus[3U] 
                                                      >> 8U)))),32);
        bufp->chgIData(oldp+70,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__data_in),32);
        bufp->chgIData(oldp+71,(vlSymsp->TOP__top__reg_mod.__PVT__data_rs1),32);
        bufp->chgIData(oldp+72,(vlSymsp->TOP__top__reg_mod.__PVT__data_rs2),32);
        bufp->chgIData(oldp+73,(((4U & vlSymsp->TOP__top.__PVT__ls_wb_bus[0U])
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
        bufp->chgCData(oldp+74,(((0U == (7U & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                               >> 9U)))
                                  ? 1U : ((1U == (7U 
                                                  & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                                     >> 9U)))
                                           ? 3U : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                                        >> 9U)))
                                                    ? 0x0fU
                                                    : 0U)))),4);
        bufp->chgIData(oldp+75,(vlSymsp->TOP__top.__PVT__alu_mod__DOT__val1),32);
        bufp->chgIData(oldp+76,(vlSymsp->TOP__top.__PVT__alu_mod__DOT__val2),32);
        bufp->chgWData(oldp+77,(vlSymsp->TOP__top.__PVT__alu_mod__DOT__bus_in),200);
        bufp->chgCData(oldp+84,((3U & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[0U] 
                                       >> 0x00000012U))),2);
        bufp->chgSData(oldp+85,((0x00000fffU & (vlSymsp->TOP__top.__PVT__id_ex_bus_decoded[3U] 
                                                >> 8U))),12);
        bufp->chgCData(oldp+86,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__working_reg),5);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__top.__PVT__decode_mod__DOT__imm_i),32);
        bufp->chgIData(oldp+88,((((- (IData)((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                              >> 0x0000001fU))) 
                                  << 0x0000000bU) | 
                                 ((0x000007e0U & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                  >> 0x00000014U)) 
                                  | (0x0000001fU & 
                                     (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                      >> 7U))))),32);
        bufp->chgIData(oldp+89,((((- (IData)((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
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
        bufp->chgIData(oldp+90,((0xfffff000U & vlSymsp->TOP__top.__PVT__if_id_bus[0U])),32);
        bufp->chgIData(oldp+91,((((- (IData)((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
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
        bufp->chgCData(oldp+92,((vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                 >> 0x00000019U)),7);
        bufp->chgCData(oldp+93,((0x0000001fU & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+94,((0x0000001fU & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                >> 0x00000014U))),5);
        bufp->chgCData(oldp+95,((0x0000001fU & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                                >> 7U))),5);
        bufp->chgCData(oldp+96,((7U & (vlSymsp->TOP__top.__PVT__if_id_bus[0U] 
                                       >> 0x0000000cU))),3);
        bufp->chgBit(oldp+97,((1U & (vlSymsp->TOP__top.__PVT__ex_ls_bus_alu[0U] 
                                     | ((0U != (IData)(vlSymsp->TOP__top.__PVT__rresp_arbiter)) 
                                        | (0U != (IData)(vlSymsp->TOP__top.__PVT__bresp_arbiter)))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+98,(vlSymsp->TOP__top.__PVT__if_id_valid));
        bufp->chgIData(oldp+99,(vlSymsp->TOP__top.__PVT__araddr_lsu),32);
        bufp->chgIData(oldp+100,(vlSymsp->TOP__top.__PVT__rdata_arbiter),32);
        bufp->chgCData(oldp+101,(vlSymsp->TOP__top.__PVT__rresp_arbiter),2);
        bufp->chgBit(oldp+102,(vlSymsp->TOP__top.__PVT__arvalid_lsu));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__top.__PVT__rvalid_arbiter));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__top.__PVT__rready_lsu));
        bufp->chgIData(oldp+105,(vlSymsp->TOP__top.__PVT__awaddr_lsu),32);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__top.__PVT__wdata_lsu),32);
        bufp->chgCData(oldp+107,(vlSymsp->TOP__top.__PVT__bresp_arbiter),2);
        bufp->chgBit(oldp+108,(vlSymsp->TOP__top.__PVT__awvalid_lsu));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__top.__PVT__awready_arbiter));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__top.__PVT__wvalid_lsu));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__top.__PVT__wready_arbiter));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__top.__PVT__bvalid_arbiter));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__top.__PVT__bready_lsu));
        bufp->chgIData(oldp+114,(vlSymsp->TOP__top.__PVT__araddr_ifu),32);
        bufp->chgIData(oldp+115,(((IData)(vlSymsp->TOP__top.__PVT__arbiter_mod__DOT__ifu_transfer)
                                   ? vlSymsp->TOP__top.__PVT__rdata_arbiter
                                   : 0U)),32);
        bufp->chgCData(oldp+116,(((IData)(vlSymsp->TOP__top.__PVT__arbiter_mod__DOT__ifu_transfer)
                                   ? (IData)(vlSymsp->TOP__top.__PVT__rresp_arbiter)
                                   : 0U)),2);
        bufp->chgBit(oldp+117,(vlSymsp->TOP__top.__PVT__arvalid_ifu));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__top.__PVT__arready_arbiter));
        bufp->chgBit(oldp+119,(((IData)(vlSymsp->TOP__top.__PVT__arbiter_mod__DOT__ifu_transfer) 
                                & (IData)(vlSymsp->TOP__top.__PVT__rvalid_arbiter))));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__top.__PVT__rready_ifu));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__top.__PVT__arbiter_mod__DOT__lsu_transfer));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__top.__PVT__arbiter_mod__DOT__ifu_transfer));
        bufp->chgIData(oldp+123,(vlSymsp->TOP__top.__PVT__axi_slave_lsu_mod__DOT__slave),32);
        bufp->chgIData(oldp+124,(vlSymsp->TOP__top.__PVT__axi_slave_lsu_mod__DOT__slave_w),32);
        bufp->chgBit(oldp+125,(vlSymsp->TOP__top.__PVT__axi_slave_lsu_mod__DOT__done_aw));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__top.__PVT__axi_slave_lsu_mod__DOT__done_w));
        bufp->chgIData(oldp+127,(vlSymsp->TOP__top.__PVT__axi_slave_lsu_mod__DOT__w),32);
        bufp->chgIData(oldp+128,(vlSymsp->TOP__top.__PVT__axi_slave_lsu_mod__DOT__aw),32);
        bufp->chgCData(oldp+129,(vlSymsp->TOP__top.__PVT__axi_slave_lsu_mod__DOT__mask),4);
        bufp->chgIData(oldp+130,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[31]),32);
        bufp->chgIData(oldp+131,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[30]),32);
        bufp->chgIData(oldp+132,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[29]),32);
        bufp->chgIData(oldp+133,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[28]),32);
        bufp->chgIData(oldp+134,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[27]),32);
        bufp->chgIData(oldp+135,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[26]),32);
        bufp->chgIData(oldp+136,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[25]),32);
        bufp->chgIData(oldp+137,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[24]),32);
        bufp->chgIData(oldp+138,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[23]),32);
        bufp->chgIData(oldp+139,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[22]),32);
        bufp->chgIData(oldp+140,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[21]),32);
        bufp->chgIData(oldp+141,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[20]),32);
        bufp->chgIData(oldp+142,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[19]),32);
        bufp->chgIData(oldp+143,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[18]),32);
        bufp->chgIData(oldp+144,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[17]),32);
        bufp->chgIData(oldp+145,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[16]),32);
        bufp->chgIData(oldp+146,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[15]),32);
        bufp->chgIData(oldp+147,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[14]),32);
        bufp->chgIData(oldp+148,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[13]),32);
        bufp->chgIData(oldp+149,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[12]),32);
        bufp->chgIData(oldp+150,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[11]),32);
        bufp->chgIData(oldp+151,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[10]),32);
        bufp->chgIData(oldp+152,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[9]),32);
        bufp->chgIData(oldp+153,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[8]),32);
        bufp->chgIData(oldp+154,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[7]),32);
        bufp->chgIData(oldp+155,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[6]),32);
        bufp->chgIData(oldp+156,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[5]),32);
        bufp->chgIData(oldp+157,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[4]),32);
        bufp->chgIData(oldp+158,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[3]),32);
        bufp->chgIData(oldp+159,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[2]),32);
        bufp->chgIData(oldp+160,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[1]),32);
        bufp->chgIData(oldp+161,(vlSymsp->TOP__top.__PVT__csr_mod__DOT__regs[0]),32);
        bufp->chgIData(oldp+162,(vlSymsp->TOP__top.__PVT__ifu_mod__DOT__ifu),32);
        bufp->chgBit(oldp+163,(((IData)(vlSymsp->TOP__top.__PVT__arbiter_mod__DOT__ifu_transfer) 
                                & (0U != (IData)(vlSymsp->TOP__top.__PVT__rresp_arbiter)))));
        bufp->chgIData(oldp+164,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__lsu_r),32);
        bufp->chgBit(oldp+165,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__done_r));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__done_w));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__done_aw));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__done_wdata));
        bufp->chgIData(oldp+169,(vlSymsp->TOP__top.__PVT__lsu_mod__DOT__lsu_w),32);
    }
    bufp->chgBit(oldp+170,(vlSelfRef.clk));
    bufp->chgBit(oldp+171,(vlSelfRef.rst));
    bufp->chgIData(oldp+172,(vlSymsp->TOP__top.pc),32);
    bufp->chgIData(oldp+173,(vlSymsp->TOP__top.opcode),32);
    bufp->chgBit(oldp+174,(vlSymsp->TOP__top.reg_valid));
    bufp->chgIData(oldp+175,(((IData)(4U) + vlSymsp->TOP__top.pc)),32);
    bufp->chgIData(oldp+176,(vlSymsp->TOP__top__reg_mod.regs[31]),32);
    bufp->chgIData(oldp+177,(vlSymsp->TOP__top__reg_mod.regs[30]),32);
    bufp->chgIData(oldp+178,(vlSymsp->TOP__top__reg_mod.regs[29]),32);
    bufp->chgIData(oldp+179,(vlSymsp->TOP__top__reg_mod.regs[28]),32);
    bufp->chgIData(oldp+180,(vlSymsp->TOP__top__reg_mod.regs[27]),32);
    bufp->chgIData(oldp+181,(vlSymsp->TOP__top__reg_mod.regs[26]),32);
    bufp->chgIData(oldp+182,(vlSymsp->TOP__top__reg_mod.regs[25]),32);
    bufp->chgIData(oldp+183,(vlSymsp->TOP__top__reg_mod.regs[24]),32);
    bufp->chgIData(oldp+184,(vlSymsp->TOP__top__reg_mod.regs[23]),32);
    bufp->chgIData(oldp+185,(vlSymsp->TOP__top__reg_mod.regs[22]),32);
    bufp->chgIData(oldp+186,(vlSymsp->TOP__top__reg_mod.regs[21]),32);
    bufp->chgIData(oldp+187,(vlSymsp->TOP__top__reg_mod.regs[20]),32);
    bufp->chgIData(oldp+188,(vlSymsp->TOP__top__reg_mod.regs[19]),32);
    bufp->chgIData(oldp+189,(vlSymsp->TOP__top__reg_mod.regs[18]),32);
    bufp->chgIData(oldp+190,(vlSymsp->TOP__top__reg_mod.regs[17]),32);
    bufp->chgIData(oldp+191,(vlSymsp->TOP__top__reg_mod.regs[16]),32);
    bufp->chgIData(oldp+192,(vlSymsp->TOP__top__reg_mod.regs[15]),32);
    bufp->chgIData(oldp+193,(vlSymsp->TOP__top__reg_mod.regs[14]),32);
    bufp->chgIData(oldp+194,(vlSymsp->TOP__top__reg_mod.regs[13]),32);
    bufp->chgIData(oldp+195,(vlSymsp->TOP__top__reg_mod.regs[12]),32);
    bufp->chgIData(oldp+196,(vlSymsp->TOP__top__reg_mod.regs[11]),32);
    bufp->chgIData(oldp+197,(vlSymsp->TOP__top__reg_mod.regs[10]),32);
    bufp->chgIData(oldp+198,(vlSymsp->TOP__top__reg_mod.regs[9]),32);
    bufp->chgIData(oldp+199,(vlSymsp->TOP__top__reg_mod.regs[8]),32);
    bufp->chgIData(oldp+200,(vlSymsp->TOP__top__reg_mod.regs[7]),32);
    bufp->chgIData(oldp+201,(vlSymsp->TOP__top__reg_mod.regs[6]),32);
    bufp->chgIData(oldp+202,(vlSymsp->TOP__top__reg_mod.regs[5]),32);
    bufp->chgIData(oldp+203,(vlSymsp->TOP__top__reg_mod.regs[4]),32);
    bufp->chgIData(oldp+204,(vlSymsp->TOP__top__reg_mod.regs[3]),32);
    bufp->chgIData(oldp+205,(vlSymsp->TOP__top__reg_mod.regs[2]),32);
    bufp->chgIData(oldp+206,(vlSymsp->TOP__top__reg_mod.regs[1]),32);
    bufp->chgIData(oldp+207,(vlSymsp->TOP__top__reg_mod.regs[0]),32);
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
