// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "VysyxSoCFull__Syms.h"


void VysyxSoCFull___024root__trace_chg_0_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VysyxSoCFull___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_0\n"); );
    // Body
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VysyxSoCFull___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VysyxSoCFull___024root__trace_chg_0_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_0_sub_0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_4;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgCData(oldp+0,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb),4);
        bufp->chgCData(oldp+1,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize),3);
        bufp->chgBit(oldp+2,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_3)
                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys)
                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_0)))));
        bufp->chgCData(oldp+3,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arsize),3);
        bufp->chgBit(oldp+4,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready));
        bufp->chgCData(oldp+5,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wstrb),4);
        bufp->chgBit(oldp+6,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rready));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready));
        bufp->chgBit(oldp+8,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awvalid));
        bufp->chgBit(oldp+10,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bready));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arvalid));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rready));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid));
        bufp->chgBit(oldp+15,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_3)
                                   ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys) 
                                      >> 1U) : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_1)))));
        bufp->chgBit(oldp+16,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)))));
        bufp->chgBit(oldp+17,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 1U))));
        bufp->chgBit(oldp+18,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 0x0000000aU))));
        bufp->chgBit(oldp+19,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 0x0000000bU))));
        bufp->chgBit(oldp+20,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 0x0000000cU))));
        bufp->chgBit(oldp+21,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 0x0000000dU))));
        bufp->chgBit(oldp+22,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 0x0000000eU))));
        bufp->chgBit(oldp+23,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 0x0000000fU))));
        bufp->chgBit(oldp+24,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 2U))));
        bufp->chgBit(oldp+25,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 3U))));
        bufp->chgBit(oldp+26,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 4U))));
        bufp->chgBit(oldp+27,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 5U))));
        bufp->chgBit(oldp+28,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 6U))));
        bufp->chgBit(oldp+29,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 7U))));
        bufp->chgBit(oldp+30,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 8U))));
        bufp->chgBit(oldp+31,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                  >> 9U))));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__reset));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__awvalid_lsu));
        bufp->chgIData(oldp+34,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__awaddr_lsu),32);
        bufp->chgBit(oldp+35,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__wvalid_lsu));
        bufp->chgIData(oldp+36,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__wdata_lsu),32);
        bufp->chgBit(oldp+37,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__bready_lsu));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_arvalid));
        bufp->chgIData(oldp+39,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_araddr),32);
        bufp->chgCData(oldp+40,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_arlen),8);
        bufp->chgCData(oldp+41,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_arsize),3);
        bufp->chgCData(oldp+42,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_arburst),2);
        bufp->chgBit(oldp+43,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_rready));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_rvalid));
        bufp->chgCData(oldp+45,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_rresp),2);
        bufp->chgIData(oldp+46,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_rdata),32);
        bufp->chgBit(oldp+47,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__match_ar) 
                               || (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rlast))));
        bufp->chgIData(oldp+48,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__caddr),32);
        bufp->chgBit(oldp+49,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__wvalid_lsu) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__match_aw))));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__cawvalid));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__carvalid));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__match_aw));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__match_ar));
        bufp->chgBit(oldp+54,(((0U != (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__caddr 
                                       >> 0x00000010U)) 
                               | (0U != vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__wdata_lsu))));
        bufp->chgIData(oldp+55,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__cache_opcode),32);
        bufp->chgBit(oldp+56,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_ready_de));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__cache_ready));
        bufp->chgIData(oldp+58,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_bus_lsu_out_ls),32);
        bufp->chgBit(oldp+59,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_valid_ls));
        bufp->chgIData(oldp+60,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__pc_in),32);
        bufp->chgIData(oldp+61,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__araddr_lsu),32);
        bufp->chgIData(oldp+62,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__rdata_lsu),32);
        bufp->chgCData(oldp+63,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__rresp_lsu),2);
        bufp->chgBit(oldp+64,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__arvalid_lsu));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__rvalid_lsu));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__rready_lsu));
        bufp->chgIData(oldp+67,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__araddr_ifu),32);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__rdata_ifu),32);
        bufp->chgCData(oldp+69,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__rresp_ifu),2);
        bufp->chgBit(oldp+70,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__arvalid_ifu));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__rvalid_ifu));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__rready_ifu));
        bufp->chgCData(oldp+73,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__arlen_ifu),8);
        bufp->chgCData(oldp+74,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__arsize_ifu),3);
        bufp->chgCData(oldp+75,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__arburst_ifu),2);
        bufp->chgBit(oldp+76,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__arvalid_lsu)))));
        bufp->chgBit(oldp+77,((0U != (3U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__VdfgRegularize_h6e95ff9d_0_9 
                                            | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__rresp_ifu))))));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__lsu_mod__DOT__done_r));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__lsu_mod__DOT__done_w));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[3U]) 
                      | vlSelfRef.__Vm_traceActivity[8U])))) {
        bufp->chgQData(oldp+80,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  << 0x0000002bU) | 
                                 (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr)) 
                                   << 0x0000000bU) 
                                  | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize))))),47);
        bufp->chgQData(oldp+82,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                  << 0x0000002bU) | 
                                 (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr)) 
                                   << 0x0000000bU) 
                                  | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize))))),47);
        bufp->chgQData(oldp+84,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata)) 
                                  << 4U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb)))),36);
        bufp->chgBit(oldp+86,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                      ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                      : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wvalid)))));
        bufp->chgBit(oldp+87,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)))));
        bufp->chgBit(oldp+88,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 1U))));
        bufp->chgBit(oldp+89,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 0x0000000aU))));
        bufp->chgBit(oldp+90,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 0x0000000bU))));
        bufp->chgBit(oldp+91,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 0x0000000cU))));
        bufp->chgBit(oldp+92,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 0x0000000dU))));
        bufp->chgBit(oldp+93,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 0x0000000eU))));
        bufp->chgBit(oldp+94,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 0x0000000fU))));
        bufp->chgBit(oldp+95,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 2U))));
        bufp->chgBit(oldp+96,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 3U))));
        bufp->chgBit(oldp+97,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 4U))));
        bufp->chgBit(oldp+98,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 5U))));
        bufp->chgBit(oldp+99,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                  >> 6U))));
        bufp->chgBit(oldp+100,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 7U))));
        bufp->chgBit(oldp+101,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 8U))));
        bufp->chgBit(oldp+102,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                   >> 9U))));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[3U]) 
                      | vlSelfRef.__Vm_traceActivity[9U])))) {
        bufp->chgBit(oldp+103,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_4)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys_1)
                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_4_0)))));
        bufp->chgBit(oldp+104,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__ready_w) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_bready))));
        bufp->chgBit(oldp+105,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bready) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_readys_1)
                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_0)))));
        bufp->chgBit(oldp+106,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                & ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)))));
        bufp->chgBit(oldp+107,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)))));
        bufp->chgBit(oldp+108,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 1U))));
        bufp->chgBit(oldp+109,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 1U))));
        bufp->chgBit(oldp+110,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 2U))));
        bufp->chgBit(oldp+111,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 2U))));
        bufp->chgBit(oldp+112,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 3U))));
        bufp->chgBit(oldp+113,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 3U))));
        bufp->chgBit(oldp+114,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 4U))));
        bufp->chgBit(oldp+115,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 4U))));
        bufp->chgBit(oldp+116,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 5U))));
        bufp->chgBit(oldp+117,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 5U))));
        bufp->chgBit(oldp+118,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 6U))));
        bufp->chgBit(oldp+119,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 6U))));
        bufp->chgBit(oldp+120,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 7U))));
        bufp->chgBit(oldp+121,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 7U))));
        bufp->chgBit(oldp+122,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 8U))));
        bufp->chgBit(oldp+123,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 8U))));
        bufp->chgBit(oldp+124,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 9U))));
        bufp->chgBit(oldp+125,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 9U))));
        bufp->chgBit(oldp+126,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 0x0000000aU))));
        bufp->chgBit(oldp+127,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 0x0000000aU))));
        bufp->chgBit(oldp+128,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 0x0000000bU))));
        bufp->chgBit(oldp+129,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 0x0000000bU))));
        bufp->chgBit(oldp+130,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 0x0000000cU))));
        bufp->chgBit(oldp+131,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 0x0000000cU))));
        bufp->chgBit(oldp+132,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 0x0000000dU))));
        bufp->chgBit(oldp+133,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 0x0000000dU))));
        bufp->chgBit(oldp+134,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 0x0000000eU))));
        bufp->chgBit(oldp+135,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 0x0000000eU))));
        bufp->chgBit(oldp+136,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                   >> 0x0000000fU))));
        bufp->chgBit(oldp+137,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                   >> 0x0000000fU))));
        bufp->chgCData(oldp+138,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__match_aw)
                                   ? 0U : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bresp))),2);
        bufp->chgCData(oldp+139,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__match_aw)
                                   ? 0U : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid))),4);
        bufp->chgCData(oldp+140,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__match_ar)
                                   ? 0U : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid))),4);
        __Vtemp_4[0U] = 0U;
        __Vtemp_4[1U] = 0U;
        __Vtemp_4[2U] = 0U;
        __Vtemp_4[3U] = 0U;
        __Vtemp_4[4U] = ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__match_aw)
                            ? 0U : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)) 
                          << 0x00000011U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__match_ar)
                                               ? 0U
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)) 
                                             << 0x0000000dU));
        bufp->chgWData(oldp+141,(__Vtemp_4),150);
        bufp->chgBit(oldp+146,(((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__rresp_lsu)) 
                                | ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__match_aw)) 
                                   & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bresp))))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[8U])))) {
        bufp->chgBit(oldp+147,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestAWIO_0_0))));
        bufp->chgIData(oldp+148,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr),32);
        bufp->chgBit(oldp+149,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits))));
        bufp->chgIData(oldp+150,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata),32);
        bufp->chgBit(oldp+151,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__w_todo))));
        bufp->chgBit(oldp+152,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_0))));
        bufp->chgIData(oldp+153,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr),32);
        bufp->chgCData(oldp+154,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arburst),2);
        bufp->chgBit(oldp+155,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_arvalid));
        bufp->chgIData(oldp+159,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr),32);
        bufp->chgCData(oldp+160,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen),8);
        bufp->chgCData(oldp+161,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arburst),2);
        bufp->chgBit(oldp+162,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_awvalid));
        bufp->chgIData(oldp+163,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr),32);
        bufp->chgBit(oldp+164,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_wvalid));
        bufp->chgIData(oldp+165,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wdata),32);
        bufp->chgBit(oldp+166,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wvalid));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_awvalid));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_wvalid));
        bufp->chgBit(oldp+169,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_arvalid));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_awvalid));
        bufp->chgBit(oldp+171,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid));
        bufp->chgBit(oldp+172,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_arready));
        bufp->chgBit(oldp+173,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_arvalid));
        bufp->chgBit(oldp+174,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__len))))));
        bufp->chgCData(oldp+175,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__len),8);
        bufp->chgIData(oldp+176,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__addr),32);
        bufp->chgIData(oldp+177,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__addr_1),32);
        bufp->chgBit(oldp+178,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__wbeats_valid));
        bufp->chgSData(oldp+179,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__w_todo),9);
        bufp->chgBit(oldp+180,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready));
        bufp->chgIData(oldp+181,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr),32);
        bufp->chgCData(oldp+182,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len),8);
        bufp->chgBit(oldp+183,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__do_enq));
        bufp->chgBit(oldp+184,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
        bufp->chgIData(oldp+185,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr),32);
        bufp->chgBit(oldp+186,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid));
        bufp->chgBit(oldp+187,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid));
        bufp->chgIData(oldp+188,((0x0fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr)),28);
        bufp->chgBit(oldp+189,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                                   >> 2U))));
        bufp->chgBit(oldp+190,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_2))));
        bufp->chgIData(oldp+191,((0x0fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr)),28);
        bufp->chgBit(oldp+192,((0x7800U == (0x00007fffU 
                                            & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                               >> 0x0000000dU)))));
        bufp->chgBit(oldp+193,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_en));
        bufp->chgSData(oldp+194,((0x000007ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                                 >> 2U))),11);
        bufp->chgSData(oldp+195,((0x000007ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                 >> 2U))),11);
        bufp->chgBit(oldp+196,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+197,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_1));
        bufp->chgBit(oldp+198,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+199,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestAWIO_0_1));
        bufp->chgBit(oldp+200,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_arvalid));
        bufp->chgBit(oldp+201,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_awvalid));
        bufp->chgBit(oldp+202,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_wvalid));
        bufp->chgCData(oldp+203,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data),2);
        bufp->chgCData(oldp+204,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits),2);
        bufp->chgBit(oldp+205,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid));
        bufp->chgBit(oldp+206,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arready));
        bufp->chgBit(oldp+207,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid));
        bufp->chgBit(oldp+208,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
                                & (0U == ((6U & (4U 
                                                 ^ 
                                                 (0x0000001eU 
                                                  & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                     >> 0x0000001bU)))) 
                                          | (1U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                   >> 0x00000018U)))))));
        bufp->chgBit(oldp+209,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                                   >> 1U))));
        bufp->chgBit(oldp+210,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_1))));
        bufp->chgIData(oldp+211,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr)),30);
        bufp->chgBit(oldp+212,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+213,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_1));
        bufp->chgBit(oldp+214,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_2));
        bufp->chgBit(oldp+215,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+216,((0U == ((6U & (4U ^ 
                                              (0x0000001eU 
                                               & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                  >> 0x0000001bU)))) 
                                       | (1U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                >> 0x00000018U))))));
        bufp->chgBit(oldp+217,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestAWIO_0_2));
        bufp->chgBit(oldp+218,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_awvalid));
        bufp->chgBit(oldp+219,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid));
        bufp->chgBit(oldp+220,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wvalid));
        bufp->chgCData(oldp+221,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data),3);
        bufp->chgBit(oldp+222,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid));
        bufp->chgCData(oldp+223,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits),3);
        bufp->chgIData(oldp+224,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr)),32);
        bufp->chgBit(oldp+225,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT___nodeIn_rid_T));
        bufp->chgIData(oldp+226,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT___mrom_rdata),32);
        bufp->chgCData(oldp+227,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_awvalid)
                                   ? 0U : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_arvalid)
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen)
                                            : 0U))),8);
        bufp->chgBit(oldp+228,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__reg_we));
        bufp->chgBit(oldp+229,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__reg_re));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[9U])))) {
        bufp->chgBit(oldp+230,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_bready));
        bufp->chgBit(oldp+231,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_awready));
        bufp->chgBit(oldp+232,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wready));
        bufp->chgBit(oldp+233,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bready));
        bufp->chgBit(oldp+234,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_awready));
        bufp->chgBit(oldp+235,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready));
        bufp->chgBit(oldp+236,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq));
        bufp->chgBit(oldp+237,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready));
        bufp->chgBit(oldp+238,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+239,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready));
        bufp->chgBit(oldp+240,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_bready));
        bufp->chgBit(oldp+241,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__W0_en));
        bufp->chgBit(oldp+242,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awready));
        bufp->chgBit(oldp+243,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wready));
        bufp->chgBit(oldp+244,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_awready));
        bufp->chgBit(oldp+245,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready));
        bufp->chgBit(oldp+246,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+247,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+248,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i));
        bufp->chgBit(oldp+249,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
        bufp->chgBit(oldp+250,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
        bufp->chgBit(oldp+251,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__reset_status));
        bufp->chgBit(oldp+252,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
        bufp->chgBit(oldp+253,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
        bufp->chgBit(oldp+254,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
        bufp->chgBit(oldp+255,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
        bufp->chgBit(oldp+256,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
        bufp->chgBit(oldp+257,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_bvalid));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[11U])))) {
        bufp->chgBit(oldp+258,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_arready));
        bufp->chgBit(oldp+259,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_awready));
        bufp->chgBit(oldp+260,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_wready));
        bufp->chgBit(oldp+261,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awready));
        bufp->chgBit(oldp+262,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arready));
        bufp->chgBit(oldp+263,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_wready));
        bufp->chgBit(oldp+264,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_awready));
        bufp->chgBit(oldp+265,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready));
        bufp->chgBit(oldp+266,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+267,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en));
        bufp->chgIData(oldp+268,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i),32);
        bufp->chgCData(oldp+269,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_wr_i),4);
        bufp->chgBit(oldp+270,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
        bufp->chgBit(oldp+271,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
        bufp->chgCData(oldp+272,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
        bufp->chgCData(oldp+273,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
        bufp->chgSData(oldp+274,((0x000001ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                                 >> 2U))),14);
        bufp->chgSData(oldp+275,((0x00003fffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                                 >> 0x0000000dU))),14);
        bufp->chgCData(oldp+276,((3U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                        >> 0x0000000bU))),2);
        bufp->chgCData(oldp+277,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
        bufp->chgBit(oldp+278,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_awready));
        bufp->chgBit(oldp+279,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_wready));
        bufp->chgBit(oldp+280,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__io_master_arready));
        bufp->chgBit(oldp+281,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__arready_lsu));
        bufp->chgBit(oldp+282,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__arready_ifu));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+283,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__saddr),24);
        bufp->chgCData(oldp+284,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__counter),8);
        bufp->chgCData(oldp+285,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__oper),8);
        bufp->chgBit(oldp+286,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__rw));
        bufp->chgBit(oldp+287,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__set));
        bufp->chgCData(oldp+288,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buff),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgSData(oldp+289,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__led),16);
        bufp->chgCData(oldp+290,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__hex[0U]),8);
        bufp->chgCData(oldp+291,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__hex[1U]),8);
        bufp->chgCData(oldp+292,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__hex[2U]),8);
        bufp->chgCData(oldp+293,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__hex[3U]),8);
        bufp->chgCData(oldp+294,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__hex[4U]),8);
        bufp->chgCData(oldp+295,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__hex[5U]),8);
        bufp->chgCData(oldp+296,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__hex[6U]),8);
        bufp->chgCData(oldp+297,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__hex[7U]),8);
        bufp->chgBit(oldp+298,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_psel));
        bufp->chgBit(oldp+299,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))));
        bufp->chgBit(oldp+300,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_pready));
        bufp->chgIData(oldp+301,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_prdata),32);
        bufp->chgBit(oldp+302,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_pslverr));
        bufp->chgBit(oldp+303,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__out_psel));
        bufp->chgBit(oldp+304,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__buff_pready));
        bufp->chgIData(oldp+305,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__buff_prdata),32);
        bufp->chgBit(oldp+306,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__buff_pslverr));
        bufp->chgBit(oldp+307,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__set));
        bufp->chgSData(oldp+308,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__count),10);
        bufp->chgIData(oldp+309,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__delay),20);
        bufp->chgBit(oldp+310,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__out));
        bufp->chgIData(oldp+311,((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3U]) 
                                     << 8U) | vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2U]) 
                                   << 0x00000010U) 
                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1U]) 
                                      << 8U) | vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0U]))),32);
        bufp->chgBit(oldp+312,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_awready));
        bufp->chgBit(oldp+313,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+314,((0x0000000fU & (IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 0x0000002bU)))),4);
        bufp->chgIData(oldp+315,((IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 0x0000000bU))),32);
        bufp->chgCData(oldp+316,((0x000000ffU & (IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 3U)))),8);
        bufp->chgCData(oldp+317,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data))),3);
        bufp->chgBit(oldp+318,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
        bufp->chgIData(oldp+319,((IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 4U))),32);
        bufp->chgCData(oldp+320,((0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data))),4);
        bufp->chgBit(oldp+321,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
        bufp->chgCData(oldp+322,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__bid_reg),4);
        bufp->chgCData(oldp+323,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_bresp),2);
        bufp->chgBit(oldp+324,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_arready));
        bufp->chgBit(oldp+325,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
        bufp->chgCData(oldp+326,((0x0000000fU & (IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 0x0000002bU)))),4);
        bufp->chgIData(oldp+327,((IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 0x0000000bU))),32);
        bufp->chgCData(oldp+328,((0x000000ffU & (IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 3U)))),8);
        bufp->chgCData(oldp+329,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data))),3);
        bufp->chgBit(oldp+330,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
        bufp->chgCData(oldp+331,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__rid_reg),4);
        bufp->chgIData(oldp+332,(((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                   ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_prdata
                                   : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__nodeIn_rdata_r)),32);
        bufp->chgCData(oldp+333,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state),2);
        bufp->chgBit(oldp+334,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__is_write_r));
        bufp->chgIData(oldp+335,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__araddr_reg_r),32);
        bufp->chgIData(oldp+336,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__awaddr_reg_r),32);
        bufp->chgIData(oldp+337,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__wdata_reg_r),32);
        bufp->chgCData(oldp+338,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__wstrb_reg_r),4);
        bufp->chgCData(oldp+339,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_pslverr) 
                                  << 1U)),2);
        bufp->chgCData(oldp+340,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__resp_hold_r),2);
        bufp->chgIData(oldp+341,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__nodeIn_rdata_r),32);
        bufp->chgBit(oldp+342,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
        bufp->chgCData(oldp+343,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid),4);
        bufp->chgCData(oldp+344,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize),3);
        bufp->chgCData(oldp+345,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awburst),2);
        bufp->chgBit(oldp+346,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
        bufp->chgBit(oldp+347,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+348,((0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data) 
                                                 >> 2U))),4);
        bufp->chgCData(oldp+349,((3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data))),2);
        bufp->chgBit(oldp+350,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
        bufp->chgCData(oldp+351,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid),4);
        bufp->chgBit(oldp+352,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+353,((0x0000000fU & (IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 0x00000023U)))),4);
        bufp->chgIData(oldp+354,((IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                          >> 3U))),32);
        bufp->chgCData(oldp+355,((3U & (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+356,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data))));
        bufp->chgBit(oldp+357,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
        bufp->chgBit(oldp+358,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+359,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+360,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+361,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
        bufp->chgBit(oldp+362,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
        bufp->chgCData(oldp+363,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data),6);
        bufp->chgCData(oldp+364,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__bid_reg) 
                                   << 2U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_bresp))),6);
        bufp->chgCData(oldp+365,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
        bufp->chgCData(oldp+366,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
        bufp->chgBit(oldp+367,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
        bufp->chgBit(oldp+368,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+369,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+370,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+371,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
        bufp->chgBit(oldp+372,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
        bufp->chgQData(oldp+373,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data),39);
        bufp->chgQData(oldp+375,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__rid_reg)) 
                                   << 0x00000023U) 
                                  | (((QData)((IData)(
                                                      ((1U 
                                                        == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                                        ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_prdata
                                                        : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__nodeIn_rdata_r))) 
                                      << 3U) | (QData)((IData)(
                                                               (1U 
                                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_bresp) 
                                                                   << 1U))))))),39);
        bufp->chgQData(oldp+377,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
        bufp->chgQData(oldp+379,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
        bufp->chgBit(oldp+381,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
        bufp->chgBit(oldp+382,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+383,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+384,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+385,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
        bufp->chgBit(oldp+386,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
        bufp->chgQData(oldp+387,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data),47);
        bufp->chgQData(oldp+389,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
        bufp->chgQData(oldp+391,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
        bufp->chgBit(oldp+393,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
        bufp->chgBit(oldp+394,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+395,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+396,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+397,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
        bufp->chgBit(oldp+398,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
        bufp->chgQData(oldp+399,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data),47);
        bufp->chgQData(oldp+401,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
        bufp->chgQData(oldp+403,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
        bufp->chgBit(oldp+405,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
        bufp->chgBit(oldp+406,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+407,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+408,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+409,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
        bufp->chgBit(oldp+410,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
        bufp->chgQData(oldp+411,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data),36);
        bufp->chgQData(oldp+413,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
        bufp->chgQData(oldp+415,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
        bufp->chgBit(oldp+417,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid));
        bufp->chgIData(oldp+418,((IData)((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid)
                                            ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__FIFO_r[0U]
                                            : 0ULL) 
                                          >> 1U))),32);
        bufp->chgBit(oldp+419,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___axi4delay_delayer_in_rlast));
        bufp->chgBit(oldp+420,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__set));
        bufp->chgSData(oldp+421,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__count_r),10);
        bufp->chgSData(oldp+422,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__count_w),10);
        bufp->chgIData(oldp+423,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__delay_r),20);
        bufp->chgIData(oldp+424,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__delay_w),20);
        bufp->chgBit(oldp+425,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__ready_w));
        bufp->chgQData(oldp+426,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__FIFO_r[7]),33);
        bufp->chgQData(oldp+428,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__FIFO_r[6]),33);
        bufp->chgQData(oldp+430,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__FIFO_r[5]),33);
        bufp->chgQData(oldp+432,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__FIFO_r[4]),33);
        bufp->chgQData(oldp+434,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__FIFO_r[3]),33);
        bufp->chgQData(oldp+436,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__FIFO_r[2]),33);
        bufp->chgQData(oldp+438,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__FIFO_r[1]),33);
        bufp->chgQData(oldp+440,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__FIFO_r[0]),33);
        bufp->chgCData(oldp+442,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__FIFO_r_count),3);
        bufp->chgBit(oldp+443,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__full)))));
        bufp->chgBit(oldp+444,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
        bufp->chgBit(oldp+445,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid));
        bufp->chgCData(oldp+446,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid),4);
        bufp->chgCData(oldp+447,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp) 
                                        | ((((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_15) 
                                                 << 6U) 
                                                | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_14) 
                                                   << 4U)) 
                                               | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_13) 
                                                   << 2U) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_12))) 
                                              << 0x00000018U) 
                                             | (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_11) 
                                                   << 6U) 
                                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_10) 
                                                     << 4U)) 
                                                 | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_9) 
                                                     << 2U) 
                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_8))) 
                                                << 0x00000010U)) 
                                            | ((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_7) 
                                                   << 6U) 
                                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_6) 
                                                     << 4U)) 
                                                 | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_5) 
                                                     << 2U) 
                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_4))) 
                                                << 8U) 
                                               | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_3) 
                                                    << 6U) 
                                                   | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_2) 
                                                      << 4U)) 
                                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_1) 
                                                      << 2U) 
                                                     | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_0))))) 
                                           >> ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid) 
                                               << 1U))))),2);
        bufp->chgBit(oldp+448,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full)))));
        bufp->chgBit(oldp+449,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid));
        bufp->chgCData(oldp+450,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid),4);
        bufp->chgIData(oldp+451,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                                    ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                               >> 3U))
                                    : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1)
                                               ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rdata_r
                                               : 0U) 
                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((((0x0000ff00U 
                                                    & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                         ? 
                                                        (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                         >> 0x00000018U)
                                                         : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r3)) 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                          >> 0x00000010U)
                                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r2)))) 
                                                  << 0x00000010U) 
                                                 | ((0x0000ff00U 
                                                     & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                          >> 8U)
                                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r1)) 
                                                        << 8U)) 
                                                    | (0x000000ffU 
                                                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                           ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data
                                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r0)))))
                                                 : 0U)))),32);
        bufp->chgCData(oldp+452,((3U & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                                          ? (IData)(
                                                    (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                     >> 1U))
                                          : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_sel1)
                                                     ? 0U
                                                     : 3U)
                                                    : 0U)))),2);
        bufp->chgBit(oldp+453,((((((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                       << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                 << 2U)) 
                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last))) 
                                    << 0x0000000cU) 
                                   | (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                         << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                   << 2U)) 
                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                           << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last))) 
                                      << 8U)) | (((
                                                   (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                     << 3U) 
                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                       << 2U)) 
                                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))) 
                                 >> (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast))));
        bufp->chgBit(oldp+454,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__len_1))))));
        bufp->chgBit(oldp+455,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid));
        bufp->chgCData(oldp+456,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp),2);
        bufp->chgBit(oldp+457,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_becho_real_last));
        bufp->chgBit(oldp+458,((1U & ((((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                            << 3U) 
                                           | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                              << 2U)) 
                                          | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last))) 
                                         << 0x0000000cU) 
                                        | (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                              << 3U) 
                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                << 2U)) 
                                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last))) 
                                           << 8U)) 
                                       | ((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                              << 3U) 
                                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                << 2U)) 
                                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last))) 
                                           << 4U) | 
                                          ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                             << 3U) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                               << 2U)) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))) 
                                      >> (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)))));
        bufp->chgBit(oldp+459,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast));
        bufp->chgBit(oldp+460,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__w_counter))));
        bufp->chgBit(oldp+461,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__busy));
        bufp->chgIData(oldp+462,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__r_addr),32);
        bufp->chgCData(oldp+463,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__r_len),8);
        bufp->chgBit(oldp+464,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__busy_1));
        bufp->chgIData(oldp+465,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__r_addr_1),32);
        bufp->chgCData(oldp+466,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__r_len_1),8);
        bufp->chgCData(oldp+467,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__len_1),8);
        bufp->chgBit(oldp+468,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__wbeats_latched));
        bufp->chgSData(oldp+469,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__w_counter),9);
        bufp->chgCData(oldp+470,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_0),2);
        bufp->chgCData(oldp+471,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_1),2);
        bufp->chgCData(oldp+472,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_2),2);
        bufp->chgCData(oldp+473,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_3),2);
        bufp->chgCData(oldp+474,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_4),2);
        bufp->chgCData(oldp+475,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_5),2);
        bufp->chgCData(oldp+476,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_6),2);
        bufp->chgCData(oldp+477,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_7),2);
        bufp->chgCData(oldp+478,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_8),2);
        bufp->chgCData(oldp+479,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_9),2);
        bufp->chgCData(oldp+480,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_10),2);
        bufp->chgCData(oldp+481,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_11),2);
        bufp->chgCData(oldp+482,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_12),2);
        bufp->chgCData(oldp+483,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_13),2);
        bufp->chgCData(oldp+484,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_14),2);
        bufp->chgCData(oldp+485,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_15),2);
        bufp->chgQData(oldp+486,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__ram),49);
        bufp->chgBit(oldp+488,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full));
        bufp->chgCData(oldp+489,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len),8);
        bufp->chgQData(oldp+490,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__ram),49);
        bufp->chgBit(oldp+492,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__full));
        bufp->chgQData(oldp+493,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
        bufp->chgBit(oldp+495,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full));
        bufp->chgBit(oldp+496,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__w_full));
        bufp->chgCData(oldp+497,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__w_id),4);
        bufp->chgCData(oldp+498,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__w_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+499,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_full));
        bufp->chgCData(oldp+500,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_id),4);
        bufp->chgIData(oldp+501,(((((0x0000ff00U & 
                                     (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                        ? (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                           >> 0x00000018U)
                                        : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r3)) 
                                      << 8U)) | (0x000000ffU 
                                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                     >> 0x00000010U)
                                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r2)))) 
                                   << 0x00000010U) 
                                  | ((0x0000ff00U & 
                                      (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                         ? (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                            >> 8U) : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r1)) 
                                       << 8U)) | (0x000000ffU 
                                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                      ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data
                                                      : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r0)))))),32);
        bufp->chgCData(oldp+502,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+503,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_sel1));
        bufp->chgBit(oldp+504,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__w_sel1));
        bufp->chgBit(oldp+505,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG));
        bufp->chgCData(oldp+506,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r0),8);
        bufp->chgCData(oldp+507,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r1),8);
        bufp->chgCData(oldp+508,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r2),8);
        bufp->chgCData(oldp+509,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r3),8);
        bufp->chgIData(oldp+510,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data),32);
        bufp->chgBit(oldp+511,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rvalid));
        bufp->chgIData(oldp+512,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0)
                                    ? (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                                         ? (IData)(
                                                   (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                    >> 3U))
                                         : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1)
                                                    ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rdata_r
                                                    : 0U) 
                                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                                      ? 
                                                     ((((0x0000ff00U 
                                                         & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                              ? 
                                                             (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                              >> 0x00000018U)
                                                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r3)) 
                                                            << 8U)) 
                                                        | (0x000000ffU 
                                                           & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                               ? 
                                                              (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                               >> 0x00000010U)
                                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r2)))) 
                                                       << 0x00000010U) 
                                                      | ((0x0000ff00U 
                                                          & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                               ? 
                                                              (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                               >> 8U)
                                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r1)) 
                                                             << 8U)) 
                                                         | (0x000000ffU 
                                                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                                ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data
                                                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r0)))))
                                                      : 0U)))
                                    : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1)
                                              ? (IData)(
                                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid)
                                                           ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__FIFO_r[0U]
                                                           : 0ULL) 
                                                         >> 1U))
                                              : 0U))),32);
        bufp->chgCData(oldp+513,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0)
                                   ? (3U & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                                              ? (IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                         >> 1U))
                                              : 0U) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                                ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_sel1)
                                                    ? 0U
                                                    : 3U)
                                                : 0U)))
                                   : 0U)),2);
        bufp->chgBit(oldp+514,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rlast));
        bufp->chgCData(oldp+515,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_0_count),3);
        bufp->chgBit(oldp+516,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_0_last));
        bufp->chgCData(oldp+517,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_0_count),3);
        bufp->chgBit(oldp+518,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_0_last));
        bufp->chgCData(oldp+519,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_1_count),3);
        bufp->chgCData(oldp+520,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_1_count),3);
        bufp->chgCData(oldp+521,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_2_count),3);
        bufp->chgCData(oldp+522,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_2_count),3);
        bufp->chgCData(oldp+523,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_3_count),3);
        bufp->chgCData(oldp+524,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_3_count),3);
        bufp->chgCData(oldp+525,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_4_count),3);
        bufp->chgCData(oldp+526,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_4_count),3);
        bufp->chgCData(oldp+527,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_5_count),3);
        bufp->chgCData(oldp+528,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_5_count),3);
        bufp->chgCData(oldp+529,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_6_count),3);
        bufp->chgCData(oldp+530,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_6_count),3);
        bufp->chgCData(oldp+531,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_7_count),3);
        bufp->chgCData(oldp+532,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_7_count),3);
        bufp->chgCData(oldp+533,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_8_count),3);
        bufp->chgCData(oldp+534,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_8_count),3);
        bufp->chgCData(oldp+535,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_9_count),3);
        bufp->chgCData(oldp+536,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_9_count),3);
        bufp->chgCData(oldp+537,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_10_count),3);
        bufp->chgCData(oldp+538,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_10_count),3);
        bufp->chgCData(oldp+539,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_11_count),3);
        bufp->chgCData(oldp+540,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_11_count),3);
        bufp->chgCData(oldp+541,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_12_count),3);
        bufp->chgCData(oldp+542,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_12_count),3);
        bufp->chgCData(oldp+543,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_13_count),3);
        bufp->chgCData(oldp+544,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_13_count),3);
        bufp->chgCData(oldp+545,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_14_count),3);
        bufp->chgCData(oldp+546,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_14_count),3);
        bufp->chgCData(oldp+547,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_15_count),3);
        bufp->chgCData(oldp+548,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_15_count),3);
        bufp->chgBit(oldp+549,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__latched));
        bufp->chgBit(oldp+550,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_2));
        bufp->chgBit(oldp+551,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__anyValid));
        bufp->chgCData(oldp+552,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_valid),2);
        bufp->chgCData(oldp+553,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_mask),2);
        bufp->chgCData(oldp+554,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_unready),4);
        bufp->chgCData(oldp+555,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_readys),2);
        bufp->chgBit(oldp+556,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__prefixOR_1));
        bufp->chgBit(oldp+557,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__winner_2_1));
        bufp->chgBit(oldp+558,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_2_0));
        bufp->chgBit(oldp+559,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_2_1));
        bufp->chgBit(oldp+560,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0));
        bufp->chgBit(oldp+561,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1));
        bufp->chgBit(oldp+562,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3));
        bufp->chgCData(oldp+563,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_mask_1),2);
        bufp->chgBit(oldp+564,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_0));
        bufp->chgBit(oldp+565,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_1));
        bufp->chgBit(oldp+566,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__full)))));
        bufp->chgBit(oldp+567,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap));
        bufp->chgBit(oldp+568,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
        bufp->chgBit(oldp+569,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
        bufp->chgBit(oldp+570,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
        bufp->chgBit(oldp+571,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__empty));
        bufp->chgBit(oldp+572,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__full));
        bufp->chgCData(oldp+573,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                                 [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
        bufp->chgCData(oldp+574,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
        bufp->chgCData(oldp+575,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
        bufp->chgBit(oldp+576,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__state)))));
        bufp->chgBit(oldp+577,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__state));
        bufp->chgCData(oldp+578,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rid_r),4);
        bufp->chgIData(oldp+579,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rdata_r),32);
        bufp->chgSData(oldp+580,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)))),16);
        bufp->chgSData(oldp+581,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)))),16);
        bufp->chgSData(oldp+582,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)))),16);
        bufp->chgSData(oldp+583,((0x0000ffffU & ((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)))),16);
        bufp->chgBit(oldp+584,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_0_count));
        bufp->chgBit(oldp+585,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_0_count));
        bufp->chgBit(oldp+586,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_1_count));
        bufp->chgBit(oldp+587,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_1_count));
        bufp->chgBit(oldp+588,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_2_count));
        bufp->chgBit(oldp+589,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_2_count));
        bufp->chgBit(oldp+590,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_3_count));
        bufp->chgBit(oldp+591,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_3_count));
        bufp->chgBit(oldp+592,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_4_count));
        bufp->chgBit(oldp+593,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_4_count));
        bufp->chgBit(oldp+594,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_5_count));
        bufp->chgBit(oldp+595,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_5_count));
        bufp->chgBit(oldp+596,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_6_count));
        bufp->chgBit(oldp+597,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_6_count));
        bufp->chgBit(oldp+598,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_7_count));
        bufp->chgBit(oldp+599,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_7_count));
        bufp->chgBit(oldp+600,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_8_count));
        bufp->chgBit(oldp+601,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_8_count));
        bufp->chgBit(oldp+602,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_9_count));
        bufp->chgBit(oldp+603,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_9_count));
        bufp->chgBit(oldp+604,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_10_count));
        bufp->chgBit(oldp+605,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_10_count));
        bufp->chgBit(oldp+606,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_11_count));
        bufp->chgBit(oldp+607,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_11_count));
        bufp->chgBit(oldp+608,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_12_count));
        bufp->chgBit(oldp+609,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_12_count));
        bufp->chgBit(oldp+610,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_13_count));
        bufp->chgBit(oldp+611,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_13_count));
        bufp->chgBit(oldp+612,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_14_count));
        bufp->chgBit(oldp+613,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_14_count));
        bufp->chgBit(oldp+614,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_15_count));
        bufp->chgBit(oldp+615,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_15_count));
        bufp->chgBit(oldp+616,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__latched));
        bufp->chgBit(oldp+617,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_3));
        bufp->chgBit(oldp+618,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__anyValid));
        bufp->chgCData(oldp+619,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_valid),3);
        bufp->chgCData(oldp+620,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_mask),3);
        bufp->chgCData(oldp+621,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_unready),6);
        bufp->chgCData(oldp+622,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys),3);
        bufp->chgBit(oldp+623,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__prefixOR_1));
        bufp->chgBit(oldp+624,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__winner_3_1));
        bufp->chgBit(oldp+625,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__winner_3_2));
        bufp->chgBit(oldp+626,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_0));
        bufp->chgBit(oldp+627,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_1));
        bufp->chgBit(oldp+628,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_2));
        bufp->chgBit(oldp+629,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0));
        bufp->chgBit(oldp+630,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1));
        bufp->chgBit(oldp+631,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2));
        bufp->chgBit(oldp+632,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_4));
        bufp->chgBit(oldp+633,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__anyValid_1));
        bufp->chgCData(oldp+634,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_valid_1),3);
        bufp->chgCData(oldp+635,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_mask_1),3);
        bufp->chgCData(oldp+636,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_unready_1),6);
        bufp->chgCData(oldp+637,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys_1),3);
        bufp->chgBit(oldp+638,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__winner_4_0));
        bufp->chgBit(oldp+639,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__winner_4_2));
        bufp->chgBit(oldp+640,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_4_0));
        bufp->chgBit(oldp+641,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_4_2));
        bufp->chgBit(oldp+642,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_4_0));
        bufp->chgBit(oldp+643,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_4_2));
        bufp->chgBit(oldp+644,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
        bufp->chgBit(oldp+645,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
        bufp->chgBit(oldp+646,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
        bufp->chgBit(oldp+647,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
        bufp->chgBit(oldp+648,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
        bufp->chgBit(oldp+649,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty));
        bufp->chgBit(oldp+650,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full));
        bufp->chgCData(oldp+651,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                                 [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
        bufp->chgCData(oldp+652,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
        bufp->chgCData(oldp+653,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
        bufp->chgBit(oldp+654,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
        bufp->chgBit(oldp+655,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
        bufp->chgBit(oldp+656,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
        bufp->chgBit(oldp+657,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
        bufp->chgBit(oldp+658,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
        bufp->chgBit(oldp+659,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
        bufp->chgBit(oldp+660,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
        bufp->chgBit(oldp+661,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
        bufp->chgBit(oldp+662,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
        bufp->chgBit(oldp+663,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
        bufp->chgBit(oldp+664,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
        bufp->chgBit(oldp+665,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
        bufp->chgBit(oldp+666,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
        bufp->chgBit(oldp+667,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
        bufp->chgBit(oldp+668,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
        bufp->chgBit(oldp+669,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
        bufp->chgBit(oldp+670,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
        bufp->chgBit(oldp+671,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
        bufp->chgBit(oldp+672,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
        bufp->chgBit(oldp+673,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
        bufp->chgBit(oldp+674,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
        bufp->chgBit(oldp+675,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
        bufp->chgBit(oldp+676,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
        bufp->chgBit(oldp+677,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
        bufp->chgBit(oldp+678,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
        bufp->chgBit(oldp+679,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
        bufp->chgBit(oldp+680,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
        bufp->chgBit(oldp+681,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
        bufp->chgBit(oldp+682,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
        bufp->chgBit(oldp+683,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
        bufp->chgBit(oldp+684,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
        bufp->chgBit(oldp+685,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
        bufp->chgBit(oldp+686,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
        bufp->chgBit(oldp+687,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
        bufp->chgBit(oldp+688,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
        bufp->chgBit(oldp+689,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
        bufp->chgBit(oldp+690,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
        bufp->chgBit(oldp+691,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
        bufp->chgBit(oldp+692,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
        bufp->chgBit(oldp+693,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
        bufp->chgBit(oldp+694,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
        bufp->chgBit(oldp+695,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
        bufp->chgBit(oldp+696,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
        bufp->chgBit(oldp+697,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
        bufp->chgBit(oldp+698,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
        bufp->chgBit(oldp+699,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
        bufp->chgBit(oldp+700,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
        bufp->chgBit(oldp+701,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
        bufp->chgBit(oldp+702,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
        bufp->chgBit(oldp+703,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
        bufp->chgBit(oldp+704,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
        bufp->chgBit(oldp+705,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
        bufp->chgBit(oldp+706,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
        bufp->chgBit(oldp+707,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
        bufp->chgBit(oldp+708,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
        bufp->chgBit(oldp+709,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
        bufp->chgBit(oldp+710,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
        bufp->chgBit(oldp+711,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
        bufp->chgBit(oldp+712,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
        bufp->chgBit(oldp+713,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
        bufp->chgBit(oldp+714,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
        bufp->chgBit(oldp+715,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
        bufp->chgBit(oldp+716,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
        bufp->chgBit(oldp+717,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
        bufp->chgBit(oldp+718,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
        bufp->chgBit(oldp+719,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
        bufp->chgBit(oldp+720,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
        bufp->chgBit(oldp+721,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
        bufp->chgBit(oldp+722,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
        bufp->chgBit(oldp+723,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
        bufp->chgBit(oldp+724,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
        bufp->chgBit(oldp+725,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
        bufp->chgBit(oldp+726,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
        bufp->chgBit(oldp+727,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
        bufp->chgBit(oldp+728,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
        bufp->chgBit(oldp+729,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
        bufp->chgBit(oldp+730,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
        bufp->chgBit(oldp+731,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
        bufp->chgBit(oldp+732,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
        bufp->chgBit(oldp+733,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
        bufp->chgBit(oldp+734,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
        bufp->chgBit(oldp+735,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
        bufp->chgBit(oldp+736,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
        bufp->chgBit(oldp+737,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
        bufp->chgBit(oldp+738,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
        bufp->chgBit(oldp+739,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
        bufp->chgBit(oldp+740,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
        bufp->chgBit(oldp+741,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
        bufp->chgBit(oldp+742,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
        bufp->chgBit(oldp+743,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
        bufp->chgBit(oldp+744,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
        bufp->chgBit(oldp+745,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
        bufp->chgBit(oldp+746,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
        bufp->chgBit(oldp+747,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
        bufp->chgBit(oldp+748,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
        bufp->chgBit(oldp+749,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
        bufp->chgBit(oldp+750,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+751,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+752,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+753,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
        bufp->chgBit(oldp+754,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
        bufp->chgBit(oldp+755,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
        bufp->chgBit(oldp+756,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
        bufp->chgBit(oldp+757,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
        bufp->chgBit(oldp+758,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
        bufp->chgBit(oldp+759,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
        bufp->chgCData(oldp+760,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__hex[7]),8);
        bufp->chgCData(oldp+761,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__hex[6]),8);
        bufp->chgCData(oldp+762,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__hex[5]),8);
        bufp->chgCData(oldp+763,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__hex[4]),8);
        bufp->chgCData(oldp+764,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__hex[3]),8);
        bufp->chgCData(oldp+765,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__hex[2]),8);
        bufp->chgCData(oldp+766,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__hex[1]),8);
        bufp->chgCData(oldp+767,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__hex[0]),8);
        bufp->chgSData(oldp+768,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__buffer),10);
        bufp->chgCData(oldp+769,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__count),4);
        bufp->chgBit(oldp+770,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__prev));
        bufp->chgCData(oldp+771,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__out),8);
        bufp->chgCData(oldp+772,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
        bufp->chgCData(oldp+773,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
        bufp->chgCData(oldp+774,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
        bufp->chgCData(oldp+775,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
        bufp->chgCData(oldp+776,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
        bufp->chgCData(oldp+777,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        bufp->chgCData(oldp+778,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+779,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+780,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+781,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+782,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+783,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+784,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+785,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+786,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+787,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+788,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+789,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+790,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+791,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+792,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+793,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
        bufp->chgCData(oldp+794,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+795,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+796,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+797,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+798,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+799,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+800,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+801,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+802,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+803,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+804,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+805,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+806,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+807,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+808,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+809,((0x0000000fU & ((0U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))
                                                  ? 
                                                 ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))
                                                   ? 
                                                  ((IData)(3U) 
                                                   << 
                                                   (3U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))
                                                    ? 0x0fU
                                                    : 0U))))),4);
        bufp->chgIData(oldp+810,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__crdata),32);
        bufp->chgBit(oldp+811,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__crvalid));
        bufp->chgCData(oldp+812,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__trans),2);
        bufp->chgSData(oldp+813,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__CLINT_mod__DOT__divisor),12);
        bufp->chgQData(oldp+814,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__CLINT_mod__DOT__mtime),64);
        bufp->chgIData(oldp+816,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__CLINT_mod__DOT__buff),32);
        bufp->chgIData(oldp+817,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__CLINT_mod__DOT__clint_r),32);
        bufp->chgIData(oldp+818,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__opcode),32);
        bufp->chgIData(oldp+819,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__opcode),32);
        bufp->chgIData(oldp+820,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__opcode),32);
        bufp->chgIData(oldp+821,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__pc_ifu),32);
        bufp->chgIData(oldp+822,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_pc),32);
        bufp->chgIData(oldp+823,(((IData)(4U) + vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__pc_ifu)),32);
        bufp->chgIData(oldp+824,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_next_pc),32);
        bufp->chgIData(oldp+825,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode),32);
        bufp->chgBit(oldp+826,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_valid));
        bufp->chgCData(oldp+827,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_mcause),4);
        bufp->chgBit(oldp+828,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_exception));
        bufp->chgBit(oldp+829,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_speculate));
        bufp->chgIData(oldp+830,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_imm_de),32);
        bufp->chgIData(oldp+831,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_data_csr_de),32);
        bufp->chgCData(oldp+832,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_alu_op_de),8);
        bufp->chgBit(oldp+833,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_lsu_we_de));
        bufp->chgBit(oldp+834,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_lsu_re_de));
        bufp->chgCData(oldp+835,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_lsu_oper_de),3);
        bufp->chgCData(oldp+836,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_rd_de),5);
        bufp->chgCData(oldp+837,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_mux_select_de),2);
        bufp->chgBit(oldp+838,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_mux_select_pc_de));
        bufp->chgBit(oldp+839,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_valid_de));
        bufp->chgCData(oldp+840,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_mcause_de),4);
        bufp->chgCData(oldp+841,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_mcause),4);
        bufp->chgBit(oldp+842,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_exception));
        bufp->chgBit(oldp+843,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_speculate));
        bufp->chgIData(oldp+844,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_pc),32);
        bufp->chgIData(oldp+845,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_next_pc),32);
        bufp->chgIData(oldp+846,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_imm),32);
        bufp->chgCData(oldp+847,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op),8);
        bufp->chgBit(oldp+848,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_we));
        bufp->chgBit(oldp+849,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_re));
        bufp->chgCData(oldp+850,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_oper),3);
        bufp->chgCData(oldp+851,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rd),5);
        bufp->chgSData(oldp+852,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_csr),12);
        bufp->chgIData(oldp+853,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_csr),32);
        bufp->chgCData(oldp+854,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_mux_select),2);
        bufp->chgBit(oldp+855,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_mux_select_pc));
        bufp->chgBit(oldp+856,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_valid));
        bufp->chgCData(oldp+857,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_rs1_de),5);
        bufp->chgCData(oldp+858,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_rs2_de),5);
        bufp->chgSData(oldp+859,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_csr_de),12);
        bufp->chgCData(oldp+860,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rs1),5);
        bufp->chgIData(oldp+861,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1),32);
        bufp->chgIData(oldp+862,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs2),32);
        bufp->chgIData(oldp+863,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_bus_alu_out_ex),32);
        bufp->chgBit(oldp+864,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_bus_branch_ex));
        bufp->chgCData(oldp+865,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mcause),4);
        bufp->chgBit(oldp+866,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_exception));
        bufp->chgBit(oldp+867,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_speculate));
        bufp->chgIData(oldp+868,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_pc),32);
        bufp->chgIData(oldp+869,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_next_pc),32);
        bufp->chgIData(oldp+870,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out),32);
        bufp->chgIData(oldp+871,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_data_rs2),32);
        bufp->chgIData(oldp+872,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_csr_out),32);
        bufp->chgSData(oldp+873,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_csr),12);
        bufp->chgCData(oldp+874,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper),3);
        bufp->chgCData(oldp+875,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_rd),5);
        bufp->chgCData(oldp+876,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mux_select),2);
        bufp->chgBit(oldp+877,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mux_select_pc));
        bufp->chgBit(oldp+878,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_branch));
        bufp->chgIData(oldp+879,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_alu_out),32);
        bufp->chgIData(oldp+880,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_lsu_out),32);
        bufp->chgIData(oldp+881,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_next_pc),32);
        bufp->chgIData(oldp+882,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr_out),32);
        bufp->chgCData(oldp+883,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd),5);
        bufp->chgSData(oldp+884,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr),12);
        bufp->chgCData(oldp+885,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select),2);
        bufp->chgBit(oldp+886,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select_pc));
        bufp->chgBit(oldp+887,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_branch));
        bufp->chgBit(oldp+888,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid));
        bufp->chgBit(oldp+889,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__finish_de));
        bufp->chgBit(oldp+890,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__finish));
        bufp->chgBit(oldp+891,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__finish));
        bufp->chgBit(oldp+892,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__finish));
        bufp->chgIData(oldp+893,(((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select))
                                   ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select))
                                       ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr_out
                                       : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_next_pc)
                                   : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select))
                                       ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_lsu_out
                                       : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_alu_out))),32);
        bufp->chgIData(oldp+894,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__alu_mod__DOT__val1),32);
        bufp->chgIData(oldp+895,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__alu_mod__DOT__val2),32);
        bufp->chgIData(oldp+896,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__alu_mod__DOT__csr_imm),32);
        bufp->chgBit(oldp+897,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__arbiter_mod__DOT__read_select));
        bufp->chgBit(oldp+898,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__arbiter_mod__DOT__read_busy));
        bufp->chgBit(oldp+899,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__arbiter_mod__DOT__write_busy));
        bufp->chgIData(oldp+900,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__csr_mod__DOT__regs[7]),32);
        bufp->chgIData(oldp+901,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__csr_mod__DOT__regs[6]),32);
        bufp->chgIData(oldp+902,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__csr_mod__DOT__regs[5]),32);
        bufp->chgIData(oldp+903,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__csr_mod__DOT__regs[4]),32);
        bufp->chgIData(oldp+904,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__csr_mod__DOT__regs[3]),32);
        bufp->chgIData(oldp+905,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__csr_mod__DOT__regs[2]),32);
        bufp->chgIData(oldp+906,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__csr_mod__DOT__regs[1]),32);
        bufp->chgIData(oldp+907,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__csr_mod__DOT__regs[0]),32);
        bufp->chgCData(oldp+908,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__csr_mod__DOT__working_reg_r),3);
        bufp->chgCData(oldp+909,(((0x0300U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))
                                   ? 2U : ((0x0305U 
                                            == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))
                                            ? 4U : 
                                           ((0x0341U 
                                             == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))
                                             ? 1U : 
                                            ((0x0342U 
                                              == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))
                                              ? 3U : 
                                             ((0x0f11U 
                                               == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))
                                               ? 5U
                                               : ((0x0f12U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr))
                                                   ? 6U
                                                   : 0U))))))),3);
        bufp->chgIData(oldp+910,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__decode_mod__DOT__imm_i),32);
        bufp->chgIData(oldp+911,((((- (IData)((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                               >> 0x0000001fU))) 
                                   << 0x0000000bU) 
                                  | ((0x000007e0U & 
                                      (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                       >> 0x00000014U)) 
                                     | (0x0000001fU 
                                        & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                           >> 7U))))),32);
        bufp->chgIData(oldp+912,((((- (IData)((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                               >> 0x0000001fU))) 
                                   << 0x0000000cU) 
                                  | ((0x00000800U & 
                                      (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                       << 4U)) | ((0x000007e0U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                        >> 7U)))))),32);
        bufp->chgIData(oldp+913,((0xfffff000U & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)),32);
        bufp->chgIData(oldp+914,((((- (IData)((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                               >> 0x0000001fU))) 
                                   << 0x00000014U) 
                                  | ((((0x000001feU 
                                        & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                           >> 0x0000000bU)) 
                                       | (1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                >> 0x00000014U))) 
                                      << 0x0000000bU) 
                                     | (0x000007feU 
                                        & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                           >> 0x00000014U))))),32);
        bufp->chgCData(oldp+915,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                  >> 0x00000019U)),7);
        bufp->chgCData(oldp+916,((0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+917,((0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                 >> 0x00000014U))),5);
        bufp->chgCData(oldp+918,((0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                 >> 7U))),5);
        bufp->chgCData(oldp+919,((7U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                        >> 0x0000000cU))),3);
        bufp->chgBit(oldp+920,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_rs1_de) 
                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rd)) 
                                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_rs2_de) 
                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rd))) 
                                & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rd)))));
        bufp->chgBit(oldp+921,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_rs1_de) 
                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_rd)) 
                                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_rs2_de) 
                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_rd))) 
                                & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_rd)))));
        bufp->chgBit(oldp+922,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_rs1_de) 
                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd)) 
                                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_rs2_de) 
                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd))) 
                                & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd)))));
        bufp->chgBit(oldp+923,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__decode_mod__DOT__reg_match));
        bufp->chgBit(oldp+924,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_we));
        bufp->chgBit(oldp+925,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_re));
        bufp->chgBit(oldp+926,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_valid));
        bufp->chgBit(oldp+927,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_branch)))));
        bufp->chgIData(oldp+928,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__block_cache[0U][0U]),32);
        bufp->chgIData(oldp+929,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__block_cache[0U][1U]),32);
        bufp->chgIData(oldp+930,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__block_cache[0U][2U]),32);
        bufp->chgIData(oldp+931,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__block_cache[0U][3U]),32);
        bufp->chgIData(oldp+932,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__block_cache[0U][4U]),32);
        bufp->chgIData(oldp+933,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__block_cache[0U][5U]),32);
        bufp->chgIData(oldp+934,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__block_cache[0U][6U]),32);
        bufp->chgIData(oldp+935,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__block_cache[0U][7U]),32);
        bufp->chgIData(oldp+936,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__block_cache[1U][0U]),32);
        bufp->chgIData(oldp+937,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__block_cache[1U][1U]),32);
        bufp->chgIData(oldp+938,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__block_cache[1U][2U]),32);
        bufp->chgIData(oldp+939,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__block_cache[1U][3U]),32);
        bufp->chgIData(oldp+940,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__block_cache[1U][4U]),32);
        bufp->chgIData(oldp+941,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__block_cache[1U][5U]),32);
        bufp->chgIData(oldp+942,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__block_cache[1U][6U]),32);
        bufp->chgIData(oldp+943,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__block_cache[1U][7U]),32);
        bufp->chgIData(oldp+944,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__miss_addr),32);
        bufp->chgBit(oldp+945,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__trans));
        bufp->chgIData(oldp+946,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__VdfgRegularize_h6e95ff9d_0_9 
                                  >> 6U)),26);
        bufp->chgBit(oldp+947,((1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__VdfgRegularize_h6e95ff9d_0_9 
                                      >> 5U))));
        bufp->chgCData(oldp+948,((7U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__VdfgRegularize_h6e95ff9d_0_9 
                                        >> 2U))),3);
        bufp->chgCData(oldp+949,((3U & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__VdfgRegularize_h6e95ff9d_0_9)),2);
        bufp->chgIData(oldp+950,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__block_tag[0]),26);
        bufp->chgIData(oldp+951,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__block_tag[1]),26);
        bufp->chgBit(oldp+952,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__block_valid[0]));
        bufp->chgBit(oldp+953,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__block_valid[1]));
        bufp->chgBit(oldp+954,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__do_burst));
        bufp->chgBit(oldp+955,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__burst_reg));
        bufp->chgBit(oldp+956,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__burst_addr));
        bufp->chgIData(oldp+957,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__state),32);
        bufp->chgCData(oldp+958,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__icache_mod__DOT__fill_count),3);
        bufp->chgIData(oldp+959,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_pc),32);
        bufp->chgCData(oldp+960,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mcause),4);
        bufp->chgBit(oldp+961,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_exception));
        bufp->chgBit(oldp+962,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_speculate));
        bufp->chgBit(oldp+963,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__lsu_mod__DOT__trans_r));
        bufp->chgBit(oldp+964,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__lsu_mod__DOT__trans_w));
        bufp->chgIData(oldp+965,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__lsu_mod__DOT__lsu_r),32);
        bufp->chgBit(oldp+966,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__lsu_mod__DOT__done_aw));
        bufp->chgBit(oldp+967,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__lsu_mod__DOT__done_wdata));
        bufp->chgIData(oldp+968,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__lsu_mod__DOT__lsu_w),32);
        bufp->chgBit(oldp+969,((1U & ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_rs1_de) 
                                        | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_rs2_de)) 
                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd)) 
                                      >> 4U))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[8U])))) {
        bufp->chgBit(oldp+970,((IData)(((0x20000000U 
                                         == (0x30000000U 
                                             & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__out_psel)))));
        bufp->chgBit(oldp+971,((IData)(((0x20000000U 
                                         == (0x30000000U 
                                             & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)) 
                                        & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))))));
        bufp->chgBit(oldp+972,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__out_psel))));
        bufp->chgBit(oldp+973,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4) 
                                & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)))));
        bufp->chgBit(oldp+974,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4) 
                                 & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__out_psel))));
        bufp->chgIData(oldp+975,(((0U == (0x0000000fU 
                                          & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__out)
                                   : 0U)),32);
        bufp->chgBit(oldp+976,((IData)(((0U == (0x30000000U 
                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)) 
                                        & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+977,((IData)((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                         >> 4U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_pad_o)))));
        bufp->chgCData(oldp+978,((0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
        bufp->chgBit(oldp+979,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rvalid));
        bufp->chgIData(oldp+980,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                                 [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
        bufp->chgBit(oldp+981,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                      >> 4U))));
        bufp->chgBit(oldp+982,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_bvalid));
        bufp->chgBit(oldp+983,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
        bufp->chgBit(oldp+984,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
        bufp->chgCData(oldp+985,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                   ? 0x0000000eU : 
                                  ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                    ? 0x0000000bU : 
                                   (0x0000000fU & (
                                                   (2U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x00000014U)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 0x00000010U)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 0x0000000cU)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? 
                                                      (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                       >> 8U)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                        ? 
                                                       (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                        >> 4U)
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                         ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                         : 0U)))))))))),4);
        bufp->chgBit(oldp+986,((8U > (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgBit(oldp+987,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
        bufp->chgBit(oldp+988,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
        bufp->chgBit(oldp+989,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
        bufp->chgBit(oldp+990,((0x16U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
        bufp->chgBit(oldp+991,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
        bufp->chgBit(oldp+992,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
        bufp->chgCData(oldp+993,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
        bufp->chgIData(oldp+994,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
        bufp->chgCData(oldp+995,((3U & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                         >> 1U) - (IData)(3U)))),2);
        bufp->chgBit(oldp+996,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__set));
        bufp->chgCData(oldp+997,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state),2);
        bufp->chgCData(oldp+998,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
        bufp->chgIData(oldp+999,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
        bufp->chgBit(oldp+1000,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
        bufp->chgIData(oldp+1001,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
        bufp->chgIData(oldp+1002,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
        bufp->chgBit(oldp+1003,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
        bufp->chgIData(oldp+1004,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
        bufp->chgCData(oldp+1005,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
        bufp->chgIData(oldp+1006,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
        bufp->chgBit(oldp+1007,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
        bufp->chgBit(oldp+1008,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
        bufp->chgCData(oldp+1009,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
        bufp->chgCData(oldp+1010,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
        bufp->chgCData(oldp+1011,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
        bufp->chgBit(oldp+1012,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
        bufp->chgBit(oldp+1013,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
        bufp->chgBit(oldp+1014,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
        bufp->chgBit(oldp+1015,((4U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgBit(oldp+1016,((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgCData(oldp+1017,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
        bufp->chgBit(oldp+1018,(((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                     >> 5U)) & (0U 
                                                != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
        bufp->chgBit(oldp+1019,(((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                                 & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                    >> 5U))));
        bufp->chgBit(oldp+1020,((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgBit(oldp+1021,((((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
        bufp->chgBit(oldp+1022,((1U & ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
        bufp->chgCData(oldp+1023,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
        bufp->chgCData(oldp+1024,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
        bufp->chgCData(oldp+1025,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
        bufp->chgCData(oldp+1026,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
        bufp->chgCData(oldp+1027,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
        bufp->chgCData(oldp+1028,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
        bufp->chgCData(oldp+1029,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
        bufp->chgBit(oldp+1030,((4U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgIData(oldp+1031,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
        bufp->chgIData(oldp+1032,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
        bufp->chgIData(oldp+1033,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
        bufp->chgIData(oldp+1034,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
        bufp->chgCData(oldp+1035,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
        bufp->chgCData(oldp+1036,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
        bufp->chgCData(oldp+1037,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
        bufp->chgBit(oldp+1038,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
        bufp->chgBit(oldp+1039,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
        bufp->chgCData(oldp+1040,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
        bufp->chgSData(oldp+1041,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),14);
        bufp->chgSData(oldp+1042,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),14);
        bufp->chgSData(oldp+1043,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),14);
        bufp->chgSData(oldp+1044,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),14);
        bufp->chgCData(oldp+1045,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
        bufp->chgCData(oldp+1046,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
        bufp->chgCData(oldp+1047,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
        bufp->chgIData(oldp+1048,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
        bufp->chgIData(oldp+1049,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
        bufp->chgCData(oldp+1050,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),2);
        bufp->chgBit(oldp+1051,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
        bufp->chgBit(oldp+1052,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                          >> 1U)))));
        bufp->chgBit(oldp+1053,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
        bufp->chgBit(oldp+1054,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__interrupt));
        bufp->chgBit(oldp+1055,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 1U))));
        bufp->chgBit(oldp+1056,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__enable));
        bufp->chgBit(oldp+1057,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
        bufp->chgCData(oldp+1058,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
        bufp->chgCData(oldp+1059,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
        bufp->chgCData(oldp+1060,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
        bufp->chgCData(oldp+1061,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
        bufp->chgCData(oldp+1062,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
        bufp->chgCData(oldp+1063,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
        bufp->chgSData(oldp+1064,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
        bufp->chgCData(oldp+1065,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
        bufp->chgBit(oldp+1066,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
        bufp->chgBit(oldp+1067,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
        bufp->chgBit(oldp+1068,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
        bufp->chgSData(oldp+1069,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
        bufp->chgCData(oldp+1070,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
        bufp->chgBit(oldp+1071,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
        bufp->chgBit(oldp+1072,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
        bufp->chgBit(oldp+1073,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                       >> 7U))));
        bufp->chgBit(oldp+1074,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 4U))));
        bufp->chgBit(oldp+1075,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__VdfgRegularize_h6e95ff9d_0_0) 
                                       >> 3U))));
        bufp->chgBit(oldp+1076,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__VdfgRegularize_h6e95ff9d_0_0) 
                                       >> 2U))));
        bufp->chgBit(oldp+1077,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__VdfgRegularize_h6e95ff9d_0_0) 
                                       >> 1U))));
        bufp->chgBit(oldp+1078,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__VdfgRegularize_h6e95ff9d_0_0))));
        bufp->chgCData(oldp+1079,(((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                       << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                 << 2U)) 
                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                    << 4U) | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                  << 2U)) 
                                              | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))),8);
        bufp->chgBit(oldp+1080,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
        bufp->chgBit(oldp+1081,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
        bufp->chgBit(oldp+1082,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2));
        bufp->chgBit(oldp+1083,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3));
        bufp->chgBit(oldp+1084,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4));
        bufp->chgBit(oldp+1085,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
        bufp->chgBit(oldp+1086,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
        bufp->chgBit(oldp+1087,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
        bufp->chgBit(oldp+1088,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
        bufp->chgBit(oldp+1089,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
        bufp->chgBit(oldp+1090,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
        bufp->chgBit(oldp+1091,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
        bufp->chgBit(oldp+1092,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
        bufp->chgBit(oldp+1093,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
        bufp->chgBit(oldp+1094,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
        bufp->chgBit(oldp+1095,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
        bufp->chgBit(oldp+1096,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
        bufp->chgBit(oldp+1097,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
        bufp->chgBit(oldp+1098,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
        bufp->chgBit(oldp+1099,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
        bufp->chgBit(oldp+1100,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
        bufp->chgBit(oldp+1101,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
        bufp->chgBit(oldp+1102,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
        bufp->chgBit(oldp+1103,((0U != (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] 
                                        | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] 
                                           | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] 
                                              | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] 
                                                 | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] 
                                                    | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] 
                                                       | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] 
                                                          | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] 
                                                             | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] 
                                                                | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] 
                                                                   | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10U] 
                                                                      | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11U] 
                                                                         | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12U] 
                                                                            | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13U] 
                                                                               | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14U] 
                                                                                | vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15U]))))))))))))))))));
        bufp->chgBit(oldp+1104,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we));
        bufp->chgCData(oldp+1105,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
        bufp->chgCData(oldp+1106,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
        bufp->chgCData(oldp+1107,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
        bufp->chgCData(oldp+1108,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
        bufp->chgSData(oldp+1109,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
        bufp->chgBit(oldp+1110,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt))))));
        bufp->chgCData(oldp+1111,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
        bufp->chgCData(oldp+1112,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
        bufp->chgBit(oldp+1113,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_pad_o));
        bufp->chgBit(oldp+1114,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
        bufp->chgCData(oldp+1115,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
        bufp->chgBit(oldp+1116,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
        bufp->chgBit(oldp+1117,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
        bufp->chgBit(oldp+1118,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
        bufp->chgBit(oldp+1119,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
        bufp->chgBit(oldp+1120,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
        bufp->chgBit(oldp+1121,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
        bufp->chgBit(oldp+1122,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
        bufp->chgBit(oldp+1123,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
        bufp->chgBit(oldp+1124,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
        bufp->chgBit(oldp+1125,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
        bufp->chgBit(oldp+1126,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
        bufp->chgBit(oldp+1127,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
        bufp->chgBit(oldp+1128,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
        bufp->chgBit(oldp+1129,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
        bufp->chgBit(oldp+1130,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
        bufp->chgBit(oldp+1131,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
        bufp->chgBit(oldp+1132,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
        bufp->chgBit(oldp+1133,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
        bufp->chgBit(oldp+1134,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+1135,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+1136,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+1137,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+1138,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
        bufp->chgBit(oldp+1139,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgCData(oldp+1140,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+1141,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+1142,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+1143,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
        bufp->chgBit(oldp+1144,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+1145,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+1146,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+1147,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+1148,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
        bufp->chgBit(oldp+1149,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
        bufp->chgSData(oldp+1150,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+1151,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+1152,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+1153,((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+1154,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+1155,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+1156,((0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                                  - (IData)(1U)))),4);
        bufp->chgSData(oldp+1157,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+1158,((0x000000ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                                  >> 2U))),8);
        bufp->chgCData(oldp+1159,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+1160,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+1161,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+1162,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+1163,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+1164,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+1165,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+1166,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+1167,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+1168,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+1169,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+1170,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+1171,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+1172,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+1173,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+1174,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+1175,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+1176,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+1177,((0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+1178,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U]),3);
        bufp->chgCData(oldp+1179,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U]),3);
        bufp->chgCData(oldp+1180,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U]),3);
        bufp->chgCData(oldp+1181,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U]),3);
        bufp->chgCData(oldp+1182,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U]),3);
        bufp->chgCData(oldp+1183,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U]),3);
        bufp->chgCData(oldp+1184,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U]),3);
        bufp->chgCData(oldp+1185,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U]),3);
        bufp->chgCData(oldp+1186,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U]),3);
        bufp->chgCData(oldp+1187,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U]),3);
        bufp->chgCData(oldp+1188,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10U]),3);
        bufp->chgCData(oldp+1189,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11U]),3);
        bufp->chgCData(oldp+1190,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12U]),3);
        bufp->chgCData(oldp+1191,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13U]),3);
        bufp->chgCData(oldp+1192,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14U]),3);
        bufp->chgCData(oldp+1193,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15U]),3);
        bufp->chgCData(oldp+1194,((0x000000ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                                  >> 3U))),8);
        bufp->chgCData(oldp+1195,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+1196,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+1197,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+1198,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+1199,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+1200,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+1201,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
        bufp->chgBit(oldp+1202,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
        bufp->chgCData(oldp+1203,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+1204,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+1205,((0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+1206,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__chose),4);
        bufp->chgSData(oldp+1207,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__count),10);
        bufp->chgBit(oldp+1208,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__will_stop_burst));
        bufp->chgBit(oldp+1209,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_read));
        bufp->chgCData(oldp+1210,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__cas_lat),3);
        bufp->chgSData(oldp+1211,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_len),10);
        bufp->chgCData(oldp+1212,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_reg),2);
        bufp->chgSData(oldp+1213,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows[3]),13);
        bufp->chgSData(oldp+1214,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows[2]),13);
        bufp->chgSData(oldp+1215,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows[1]),13);
        bufp->chgSData(oldp+1216,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows[0]),13);
        bufp->chgSData(oldp+1217,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__addr),9);
        bufp->chgSData(oldp+1218,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__count),10);
        bufp->chgBit(oldp+1219,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__will_stop_burst));
        bufp->chgBit(oldp+1220,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_read));
        bufp->chgCData(oldp+1221,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__cas_lat),3);
        bufp->chgSData(oldp+1222,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_len),10);
        bufp->chgCData(oldp+1223,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_reg),2);
        bufp->chgSData(oldp+1224,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows[3]),13);
        bufp->chgSData(oldp+1225,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows[2]),13);
        bufp->chgSData(oldp+1226,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows[1]),13);
        bufp->chgSData(oldp+1227,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows[0]),13);
        bufp->chgSData(oldp+1228,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__addr),9);
        bufp->chgCData(oldp+1229,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__chose),4);
        bufp->chgSData(oldp+1230,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__count),10);
        bufp->chgBit(oldp+1231,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__will_stop_burst));
        bufp->chgBit(oldp+1232,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_read));
        bufp->chgCData(oldp+1233,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__cas_lat),3);
        bufp->chgSData(oldp+1234,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_len),10);
        bufp->chgCData(oldp+1235,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_reg),2);
        bufp->chgSData(oldp+1236,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows[3]),13);
        bufp->chgSData(oldp+1237,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows[2]),13);
        bufp->chgSData(oldp+1238,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows[1]),13);
        bufp->chgSData(oldp+1239,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows[0]),13);
        bufp->chgSData(oldp+1240,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__addr),9);
        bufp->chgSData(oldp+1241,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__count),10);
        bufp->chgBit(oldp+1242,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__will_stop_burst));
        bufp->chgBit(oldp+1243,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_read));
        bufp->chgCData(oldp+1244,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__cas_lat),3);
        bufp->chgSData(oldp+1245,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_len),10);
        bufp->chgCData(oldp+1246,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_reg),2);
        bufp->chgSData(oldp+1247,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows[3]),13);
        bufp->chgSData(oldp+1248,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows[2]),13);
        bufp->chgSData(oldp+1249,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows[1]),13);
        bufp->chgSData(oldp+1250,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows[0]),13);
        bufp->chgSData(oldp+1251,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__addr),9);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgCData(oldp+1252,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state),3);
        bufp->chgCData(oldp+1253,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter),8);
        bufp->chgCData(oldp+1254,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__cmd),8);
        bufp->chgIData(oldp+1255,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__addr),24);
        bufp->chgIData(oldp+1256,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data),32);
        bufp->chgBit(oldp+1257,(((1U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                 & (0x17U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+1258,(vlSymsp->TOP__ysyxSoCFull.__PVT___bitrev_miso));
        bufp->chgCData(oldp+1259,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__buff),7);
        bufp->chgCData(oldp+1260,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__count),4);
        bufp->chgIData(oldp+1261,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data_bswap),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgIData(oldp+1262,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i),32);
        bufp->chgBit(oldp+1263,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__in_pwrite));
        bufp->chgIData(oldp+1264,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata),32);
        bufp->chgCData(oldp+1265,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__in_pstrb),4);
        bufp->chgBit(oldp+1266,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_0) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__pslverr)) 
                                 | (IData)(((0x20000000U 
                                             == (0x30000000U 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___lvga_auto_in_pslverr))))));
        bufp->chgIData(oldp+1267,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),30);
        bufp->chgIData(oldp+1268,((0x1fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),29);
        bufp->chgBit(oldp+1269,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__in_psel));
        bufp->chgBit(oldp+1270,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__in_penable));
        bufp->chgBit(oldp+1271,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__in_penable) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__in_psel))));
        bufp->chgBit(oldp+1272,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i));
        bufp->chgBit(oldp+1273,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__in_psel));
        bufp->chgBit(oldp+1274,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__in_penable));
        bufp->chgBit(oldp+1275,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__in_penable) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__in_psel))));
        bufp->chgBit(oldp+1276,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__in_psel));
        bufp->chgBit(oldp+1277,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__in_penable));
        bufp->chgBit(oldp+1278,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__pready));
        bufp->chgBit(oldp+1279,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__pslverr));
        bufp->chgIData(oldp+1280,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__prdata),32);
        bufp->chgBit(oldp+1281,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_0));
        bufp->chgBit(oldp+1282,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_1));
        bufp->chgBit(oldp+1283,((0U == (3U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                              >> 0x0000001cU)))));
        bufp->chgBit(oldp+1284,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_3));
        bufp->chgBit(oldp+1285,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4));
        bufp->chgBit(oldp+1286,((2U == (3U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                              >> 0x0000001cU)))));
        bufp->chgBit(oldp+1287,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_bvalid));
        bufp->chgBit(oldp+1288,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_rvalid));
        bufp->chgBit(oldp+1289,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgBit(oldp+1290,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en));
        bufp->chgIData(oldp+1291,((0x1fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),32);
        bufp->chgBit(oldp+1292,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
        bufp->chgBit(oldp+1293,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
        bufp->chgCData(oldp+1294,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
        bufp->chgCData(oldp+1295,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
        bufp->chgCData(oldp+1296,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
        bufp->chgCData(oldp+1297,((0x000000ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
                                                  >> 0x00000010U))),8);
        bufp->chgCData(oldp+1298,((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata 
                                   >> 0x00000018U)),8);
        bufp->chgIData(oldp+1299,(((0xffff0000U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__in_pwdata) 
                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                       << 8U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
        bufp->chgIData(oldp+1300,((0x00fffffcU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),24);
        bufp->chgIData(oldp+1301,((0x00ffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),24);
        bufp->chgCData(oldp+1302,((0x000000ffU & ((IData)(7U) 
                                                  + 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))),8);
        bufp->chgIData(oldp+1303,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),32);
        bufp->chgBit(oldp+1304,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__psel));
        bufp->chgBit(oldp+1305,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__penable));
        bufp->chgCData(oldp+1306,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__fsm_state),3);
        bufp->chgBit(oldp+1307,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__set));
        bufp->chgCData(oldp+1308,((7U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),3);
        bufp->chgCData(oldp+1309,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__reg_dat8_w),8);
        bufp->chgCData(oldp+1310,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_in),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+1311,(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n));
        bufp->chgBit(oldp+1312,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__out_pready));
        bufp->chgBit(oldp+1313,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_bvalid));
        bufp->chgBit(oldp+1314,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bvalid));
        bufp->chgCData(oldp+1315,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid),4);
        bufp->chgCData(oldp+1316,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bresp),2);
        bufp->chgCData(oldp+1317,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid),4);
        bufp->chgSData(oldp+1318,((0x0000ffffU & ((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_rid)))),16);
        bufp->chgSData(oldp+1319,((0x0000ffffU & ((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_bid)))),16);
        bufp->chgBit(oldp+1320,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__anyValid_1));
        bufp->chgCData(oldp+1321,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_valid_1),2);
        bufp->chgCData(oldp+1322,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_unready_1),4);
        bufp->chgCData(oldp+1323,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_readys_1),2);
        bufp->chgBit(oldp+1324,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__winner_3_0));
        bufp->chgBit(oldp+1325,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__winner_3_1));
        bufp->chgBit(oldp+1326,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_3_0));
        bufp->chgBit(oldp+1327,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_3_1));
        bufp->chgCData(oldp+1328,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout),4);
        bufp->chgCData(oldp+1329,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten),4);
        bufp->chgCData(oldp+1330,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
        bufp->chgBit(oldp+1331,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
        bufp->chgBit(oldp+1332,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
        bufp->chgBit(oldp+1333,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
        bufp->chgCData(oldp+1334,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__data_out),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[10U]))) {
        bufp->chgBit(oldp+1335,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_sck));
        bufp->chgBit(oldp+1336,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                       >> 7U))));
        bufp->chgBit(oldp+1337,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi));
        bufp->chgBit(oldp+1338,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))));
        bufp->chgBit(oldp+1339,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
        bufp->chgBit(oldp+1340,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 3U))));
        bufp->chgBit(oldp+1341,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 2U))));
        bufp->chgBit(oldp+1342,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                       >> 1U))));
        bufp->chgBit(oldp+1343,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
        bufp->chgSData(oldp+1344,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),14);
        bufp->chgCData(oldp+1345,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
        bufp->chgCData(oldp+1346,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
        bufp->chgCData(oldp+1347,((3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
        bufp->chgBit(oldp+1348,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__both));
        bufp->chgSData(oldp+1349,((0x00001fffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),13);
        bufp->chgCData(oldp+1350,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                         >> 2U))),2);
        bufp->chgCData(oldp+1351,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss),8);
        bufp->chgBit(oldp+1352,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o));
        bufp->chgCData(oldp+1353,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
        bufp->chgCData(oldp+1354,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
        bufp->chgIData(oldp+1355,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
        bufp->chgWData(oldp+1356,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
        bufp->chgBit(oldp+1359,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_irq_out));
        bufp->chgBit(oldp+1360,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__out_pready));
        bufp->chgIData(oldp+1361,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__out_prdata),32);
        bufp->chgSData(oldp+1362,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
        bufp->chgSData(oldp+1363,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
        bufp->chgCData(oldp+1364,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
        bufp->chgWData(oldp+1365,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
        bufp->chgBit(oldp+1369,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 9U))));
        bufp->chgBit(oldp+1370,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+1371,((0x0000007fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
        bufp->chgBit(oldp+1372,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 8U))));
        bufp->chgBit(oldp+1373,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0x0000000bU))));
        bufp->chgBit(oldp+1374,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0x0000000cU))));
        bufp->chgBit(oldp+1375,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0x0000000dU))));
        bufp->chgBit(oldp+1376,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
        bufp->chgBit(oldp+1377,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
        bufp->chgBit(oldp+1378,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))));
        bufp->chgSData(oldp+1379,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
        bufp->chgBit(oldp+1380,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgBit(oldp+1381,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgCData(oldp+1382,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
        bufp->chgCData(oldp+1383,((0x000000ffU & ((0x00000800U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                                                   - (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                   - (IData)(1U))))),8);
        bufp->chgCData(oldp+1384,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[10U] 
                      | vlSelfRef.__Vm_traceActivity[12U])))) {
        bufp->chgBit(oldp+1385,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.sdram__DOT__sdramsub1__DOT____VdfgRegularize_hd87c5a3c_0_1) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                          >> 2U)))));
        bufp->chgBit(oldp+1386,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.sdram__DOT__sdramsub1__DOT____VdfgRegularize_hd87c5a3c_0_2) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                          >> 2U)))));
        bufp->chgBit(oldp+1387,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.sdram__DOT__sdramsub1__DOT____VdfgRegularize_hd87c5a3c_0_1) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                          >> 1U)))));
        bufp->chgBit(oldp+1388,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.sdram__DOT__sdramsub1__DOT____VdfgRegularize_hd87c5a3c_0_2) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                          >> 1U)))));
        bufp->chgBit(oldp+1389,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.sdram__DOT__sdramsub1__DOT____VdfgRegularize_hd87c5a3c_0_1) 
                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
        bufp->chgBit(oldp+1390,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.sdram__DOT__sdramsub1__DOT____VdfgRegularize_hd87c5a3c_0_2) 
                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
        bufp->chgBit(oldp+1391,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.sdram__DOT__sdramsub2__DOT____VdfgRegularize_h0f7387ae_0_1) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                          >> 2U)))));
        bufp->chgBit(oldp+1392,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.sdram__DOT__sdramsub2__DOT____VdfgRegularize_h0f7387ae_0_2) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                          >> 2U)))));
        bufp->chgBit(oldp+1393,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.sdram__DOT__sdramsub2__DOT____VdfgRegularize_h0f7387ae_0_1) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                          >> 1U)))));
        bufp->chgBit(oldp+1394,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.sdram__DOT__sdramsub2__DOT____VdfgRegularize_h0f7387ae_0_2) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                          >> 1U)))));
        bufp->chgBit(oldp+1395,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.sdram__DOT__sdramsub2__DOT____VdfgRegularize_h0f7387ae_0_1) 
                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
        bufp->chgBit(oldp+1396,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.sdram__DOT__sdramsub2__DOT____VdfgRegularize_h0f7387ae_0_2) 
                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[12U]))) {
        bufp->chgIData(oldp+1397,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i),32);
        bufp->chgSData(oldp+1398,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i)),16);
        bufp->chgBit(oldp+1399,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__comb_chose));
        bufp->chgCData(oldp+1400,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__state),3);
        bufp->chgSData(oldp+1401,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__buff),16);
        bufp->chgCData(oldp+1402,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__state),3);
        bufp->chgSData(oldp+1403,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__buff),16);
        bufp->chgSData(oldp+1404,((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i 
                                   >> 0x00000010U)),16);
        bufp->chgBit(oldp+1405,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__comb_chose));
        bufp->chgCData(oldp+1406,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__state),3);
        bufp->chgSData(oldp+1407,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__buff),16);
        bufp->chgCData(oldp+1408,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__state),3);
        bufp->chgSData(oldp+1409,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__buff),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[13U]))) {
        bufp->chgIData(oldp+1410,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__paddr),32);
        bufp->chgBit(oldp+1411,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__pwrite));
        bufp->chgIData(oldp+1412,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__pwdata),32);
        bufp->chgCData(oldp+1413,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__pstrb),4);
        bufp->chgCData(oldp+1414,((0x0000001fU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__paddr)),5);
        bufp->chgBit(oldp+1415,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                 & (0x00000014U == 
                                    (0x0000001cU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__paddr)))));
        bufp->chgBit(oldp+1416,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                 & (0x00000010U == 
                                    (0x0000001cU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__paddr)))));
        bufp->chgCData(oldp+1417,((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                      & (0x0000000cU 
                                         == (0x0000001cU 
                                             & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__paddr))) 
                                     << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                                & (8U 
                                                   == 
                                                   (0x0000001cU 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__paddr))) 
                                               << 2U)) 
                                   | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                        & (4U == (0x0000001cU 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__paddr))) 
                                       << 1U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                                 & (0U 
                                                    == 
                                                    (0x0000001cU 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__paddr)))))),4);
        bufp->chgBit(oldp+1418,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                                 & (0x00000018U == 
                                    (0x0000001cU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__paddr)))));
        bufp->chgCData(oldp+1419,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch),4);
    }
    bufp->chgBit(oldp+1420,(vlSelfRef.clock));
    bufp->chgBit(oldp+1421,(vlSelfRef.reset));
    bufp->chgSData(oldp+1422,(vlSelfRef.externalPins_gpio_out),16);
    bufp->chgSData(oldp+1423,(vlSelfRef.externalPins_gpio_in),16);
    bufp->chgCData(oldp+1424,(vlSelfRef.externalPins_gpio_seg_0),8);
    bufp->chgCData(oldp+1425,(vlSelfRef.externalPins_gpio_seg_1),8);
    bufp->chgCData(oldp+1426,(vlSelfRef.externalPins_gpio_seg_2),8);
    bufp->chgCData(oldp+1427,(vlSelfRef.externalPins_gpio_seg_3),8);
    bufp->chgCData(oldp+1428,(vlSelfRef.externalPins_gpio_seg_4),8);
    bufp->chgCData(oldp+1429,(vlSelfRef.externalPins_gpio_seg_5),8);
    bufp->chgCData(oldp+1430,(vlSelfRef.externalPins_gpio_seg_6),8);
    bufp->chgCData(oldp+1431,(vlSelfRef.externalPins_gpio_seg_7),8);
    bufp->chgBit(oldp+1432,(vlSelfRef.externalPins_ps2_clk));
    bufp->chgBit(oldp+1433,(vlSelfRef.externalPins_ps2_data));
    bufp->chgCData(oldp+1434,(vlSelfRef.externalPins_vga_r),8);
    bufp->chgCData(oldp+1435,(vlSelfRef.externalPins_vga_g),8);
    bufp->chgCData(oldp+1436,(vlSelfRef.externalPins_vga_b),8);
    bufp->chgBit(oldp+1437,(vlSelfRef.externalPins_vga_hsync));
    bufp->chgBit(oldp+1438,(vlSelfRef.externalPins_vga_vsync));
    bufp->chgBit(oldp+1439,(vlSelfRef.externalPins_vga_valid));
    bufp->chgBit(oldp+1440,(vlSelfRef.externalPins_uart_rx));
    bufp->chgBit(oldp+1441,(vlSelfRef.externalPins_uart_tx));
    bufp->chgBit(oldp+1442,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                   | ((((2U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))
                                        ? vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data_bswap
                                        : vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data) 
                                      >> 0x0000001fU)))));
    bufp->chgIData(oldp+1443,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata),32);
    bufp->chgIData(oldp+1444,(((0x00fffffeU & (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__addr 
                                               << 1U)) 
                               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi))),32);
    bufp->chgBit(oldp+1445,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->chgCData(oldp+1446,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__dio),4);
    bufp->chgBit(oldp+1447,((1U & (~ (IData)(vlSelfRef.clock)))));
    bufp->chgBit(oldp+1448,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___bitrev_miso) 
                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                | ((((2U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                     & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))
                                     ? vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data_bswap
                                     : vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data) 
                                   >> 0x0000001fU)))));
    bufp->chgIData(oldp+1449,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_0)
                                 ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__prdata
                                 : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_1)
                                            ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__in_psel)
                                                ? (
                                                   (((4U 
                                                      & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                      ? 
                                                     ((2U 
                                                       & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                        : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                       : 
                                                      ((1U 
                                                        & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                        ? 
                                                       ((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                            << 3U) 
                                                           | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                              << 2U)) 
                                                          | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                         << 4U) 
                                                        | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                             << 3U) 
                                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                               << 2U)) 
                                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                               << 1U) 
                                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                        : 0U))
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                        ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                        : 
                                                       (0x000000c0U 
                                                        | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                       : 
                                                      ((1U 
                                                        & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                        ? 
                                                       ((0x00000080U 
                                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                         ? 
                                                        ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                         >> 8U)
                                                         : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                        : 
                                                       ((0x00000080U 
                                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                         ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                         : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                        [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                                    << 0x00000018U) 
                                                   | ((0x00ff0000U 
                                                       & (((4U 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                            ? 
                                                           ((2U 
                                                             & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                             ? 
                                                            ((1U 
                                                              & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                             : 
                                                            ((1U 
                                                              & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? 
                                                             ((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                                  << 3U) 
                                                                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                                    << 2U)) 
                                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                                    << 1U) 
                                                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                               << 4U) 
                                                              | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                                   << 3U) 
                                                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                                     << 2U)) 
                                                                 | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                                     << 1U) 
                                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                              : 0U))
                                                            : 
                                                           ((2U 
                                                             & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                             ? 
                                                            ((1U 
                                                              & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                              : 
                                                             (0x000000c0U 
                                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                             : 
                                                            ((1U 
                                                              & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? 
                                                             ((0x00000080U 
                                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                               ? 
                                                              ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                               >> 8U)
                                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                              : 
                                                             ((0x00000080U 
                                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                               : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                              [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                                          << 0x00000010U)) 
                                                      | ((0x0000ff00U 
                                                          & (((4U 
                                                               & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                               ? 
                                                              ((2U 
                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                ? 
                                                               ((1U 
                                                                 & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                 : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                : 
                                                               ((1U 
                                                                 & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                 ? 
                                                                ((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                                     << 3U) 
                                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                                       << 2U)) 
                                                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                                       << 1U) 
                                                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                                  << 4U) 
                                                                 | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                                      << 3U) 
                                                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                                        << 2U)) 
                                                                    | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                                        << 1U) 
                                                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                                 : 0U))
                                                               : 
                                                              ((2U 
                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                ? 
                                                               ((1U 
                                                                 & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                 : 
                                                                (0x000000c0U 
                                                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                : 
                                                               ((1U 
                                                                 & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                 ? 
                                                                ((0x00000080U 
                                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                  ? 
                                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                  >> 8U)
                                                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                 : 
                                                                ((0x00000080U 
                                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                  : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                                 [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                                             << 8U)) 
                                                         | (0x000000ffU 
                                                            & ((4U 
                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                ? 
                                                               ((2U 
                                                                 & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                 ? 
                                                                ((1U 
                                                                  & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                 : 
                                                                ((1U 
                                                                  & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                  ? 
                                                                 ((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                                      << 3U) 
                                                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                                        << 2U)) 
                                                                    | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                                        << 1U) 
                                                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                                   << 4U) 
                                                                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                                       << 3U) 
                                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                                         << 2U)) 
                                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                                         << 1U) 
                                                                        | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                                  : 0U))
                                                                : 
                                                               ((2U 
                                                                 & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                 ? 
                                                                ((1U 
                                                                  & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                  : 
                                                                 (0x000000c0U 
                                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                 : 
                                                                ((1U 
                                                                  & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                  ? 
                                                                 ((0x00000080U 
                                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                   ? 
                                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                   >> 8U)
                                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                  : 
                                                                 ((0x00000080U 
                                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                   : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                                  [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]))))))))
                                                : 0U)
                                            : 0U) | 
                                          (((0U == 
                                             (3U & 
                                              (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                               >> 0x0000001cU)))
                                             ? (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3U]) 
                                                   << 8U) 
                                                  | vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2U]) 
                                                 << 0x00000010U) 
                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1U]) 
                                                    << 8U) 
                                                   | vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0U]))
                                             : 0U) 
                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_3)
                                                ? (
                                                   (4U 
                                                    == 
                                                    (0x0000000fU 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))
                                                    ? (IData)(vlSelfRef.externalPins_gpio_in)
                                                    : 0U)
                                                : 0U) 
                                              | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (0x0000000fU 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__out)
                                                    : 0U)
                                                   : 0U) 
                                                 | ((2U 
                                                     == 
                                                     (3U 
                                                      & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                         >> 0x0000001cU)))
                                                     ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT___lvga_auto_in_prdata
                                                     : 0U))))))),32);
    bufp->chgIData(oldp+1450,(((4U == (0x0000000fU 
                                       & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))
                                ? (IData)(vlSelfRef.externalPins_gpio_in)
                                : 0U)),32);
    bufp->chgBit(oldp+1451,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i))));
    bufp->chgIData(oldp+1452,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__in_psel)
                                ? ((((4U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                      ? ((2U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                          ? ((1U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                          : ((1U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                              ? (((
                                                   (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                     << 3U) 
                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                       << 2U)) 
                                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                              : 0U))
                                      : ((2U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                          ? ((1U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                              : (0x000000c0U 
                                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                          : ((1U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                              ? ((0x00000080U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                  >> 8U)
                                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                              : ((0x00000080U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                  : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                 [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                    << 0x00000018U) 
                                   | ((0x00ff0000U 
                                       & (((4U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                            ? ((2U 
                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                ? (
                                                   (1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                : (
                                                   (1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                        << 3U) 
                                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                          << 2U)) 
                                                      | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                         << 3U) 
                                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                           << 2U)) 
                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                    : 0U))
                                            : ((2U 
                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                ? (
                                                   (1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                    : 
                                                   (0x000000c0U 
                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                : (
                                                   (1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((0x00000080U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                     >> 8U)
                                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                    : 
                                                   ((0x00000080U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                     : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                    [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                          << 0x00000010U)) 
                                      | ((0x0000ff00U 
                                          & (((4U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                               ? ((2U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                   : 
                                                  ((1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                        << 3U) 
                                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                          << 2U)) 
                                                      | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                         << 3U) 
                                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                           << 2U)) 
                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                    : 0U))
                                               : ((2U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                    : 
                                                   (0x000000c0U 
                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                   : 
                                                  ((1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((0x00000080U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                     >> 8U)
                                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                    : 
                                                   ((0x00000080U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                     : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                    [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                             << 8U)) 
                                         | (0x000000ffU 
                                            & ((4U 
                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                ? (
                                                   (2U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? 
                                                    ((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                         << 3U) 
                                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                           << 2U)) 
                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                           << 1U) 
                                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                          << 3U) 
                                                         | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                            << 2U)) 
                                                        | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                            << 1U) 
                                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                     : 0U))
                                                : (
                                                   (2U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                     : 
                                                    (0x000000c0U 
                                                     | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? 
                                                    ((0x00000080U 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                      >> 8U)
                                                      : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                     : 
                                                    ((0x00000080U 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                      ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                      : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                     [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]))))))))
                                : 0U)),32);
    bufp->chgBit(oldp+1453,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.axi4ram__DOT____VdfgRegularize_h9fc36335_0_0))));
    bufp->chgBit(oldp+1454,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_wready) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid))));
    bufp->chgBit(oldp+1455,((((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_0)) 
                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_1) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_arready)))));
    bufp->chgBit(oldp+1456,(((~ (IData)(vlSelfRef.externalPins_ps2_clk)) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__prev))));
    bufp->chgBit(oldp+1457,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                              : (0x16U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->chgBit(oldp+1458,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)
                                    ? (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                                          | ((0x16U 
                                              == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re))))
                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i)))));
    bufp->chgBit(oldp+1459,((1U & (~ (IData)(vlSelfRef.reset)))));
    bufp->chgBit(oldp+1460,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)
                              ? (0x16U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                              : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd))));
    bufp->chgCData(oldp+1461,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))
                                ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr)
                                    ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__set)
                                        ? 1U : 2U) : 0U)
                                : ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))
                                    ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                        ? 0U : 1U) : 
                                   ((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                         ? 0U : 2U)
                                     : 0U)))),2);
    bufp->chgCData(oldp+1462,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_arvalid) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_arready))
                                ? (0x00000020U | ((0U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen)) 
                                                  << 4U))
                                : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_awvalid) 
                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_awready))
                                    ? 0x10U : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i) 
                                                << 5U) 
                                               | (((0U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                   << 4U) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->chgBit(oldp+1463,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_wvalid))));
    bufp->chgIData(oldp+1464,(((0U == (7U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__paddr 
                                             >> 2U)))
                                ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
                                : ((1U == (7U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__paddr 
                                                 >> 2U)))
                                    ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                                    : ((2U == (7U & 
                                               (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__paddr 
                                                >> 2U)))
                                        ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                                        : ((3U == (7U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__paddr 
                                                      >> 2U)))
                                            ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__paddr 
                                                    >> 2U)))
                                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__paddr 
                                                        >> 2U)))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__paddr 
                                                         >> 2U)))
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                                     : 0U)))))))),32);
    bufp->chgBit(oldp+1465,((((0x00000200U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
                             & ((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_sck)))));
    bufp->chgBit(oldp+1466,(((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                             & ((0x00000400U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                 : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)))));
    bufp->chgCData(oldp+1467,((0x000000ffU & ((4U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                               ? ((2U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                   : 
                                                  ((1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                        << 3U) 
                                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                                          << 2U)) 
                                                      | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                         << 3U) 
                                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                           << 2U)) 
                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))
                                                    : 0U))
                                               : ((2U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                    : 
                                                   (0x000000c0U 
                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                   : 
                                                  ((1U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((0x00000080U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                     >> 8U)
                                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                    : 
                                                   ((0x00000080U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                     : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                    [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))))),8);
    bufp->chgSData(oldp+1468,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                        [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]) 
                                << 3U) | vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])),11);
    bufp->chgCData(oldp+1469,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                              [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->chgIData(oldp+1470,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.pc),32);
    bufp->chgIData(oldp+1471,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.prev_pc),32);
    bufp->chgIData(oldp+1472,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.opcode),32);
    bufp->chgIData(oldp+1473,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.pc_e),32);
    bufp->chgBit(oldp+1474,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.reg_valid));
    bufp->chgBit(oldp+1475,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.reg_valid_e));
    bufp->chgBit(oldp+1476,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.if_de_valid_if));
    bufp->chgBit(oldp+1477,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.if_de_ready_if));
    bufp->chgBit(oldp+1478,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.ex_ls_valid_ls));
    bufp->chgBit(oldp+1479,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.ex_ls_ready_ls));
    bufp->chgBit(oldp+1480,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.branch));
    bufp->chgBit(oldp+1481,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.branch_taken));
    bufp->chgBit(oldp+1482,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.ex_ls_bus_lsu_we_ls));
    bufp->chgBit(oldp+1483,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.ex_ls_bus_lsu_re_ls));
    bufp->chgBit(oldp+1484,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.cache_hit));
    bufp->chgBit(oldp+1485,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.cache_miss));
    bufp->chgBit(oldp+1486,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.rst));
    bufp->chgBit(oldp+1487,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.ex_ls_valid_ex));
    bufp->chgIData(oldp+1488,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.regs
                              [(0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_rs1_de))]),32);
    bufp->chgIData(oldp+1489,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.regs
                              [(0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__de_ex_bus_rs2_de))]),32);
    bufp->chgIData(oldp+1490,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.ex_ls_valid_ls)
                                ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_pc
                                : 0U)),32);
    bufp->chgIData(oldp+1491,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.ex_ls_valid_ls)
                                ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out
                                : 0U)),32);
    bufp->chgIData(oldp+1492,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.ex_ls_valid_ls)
                                ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_next_pc
                                : 0U)),32);
    bufp->chgIData(oldp+1493,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.ex_ls_valid_ls)
                                ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_csr_out
                                : 0U)),32);
    bufp->chgCData(oldp+1494,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.ex_ls_valid_ls)
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_rd)
                                : 0U)),5);
    bufp->chgCData(oldp+1495,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.ex_ls_valid_ls)
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mux_select)
                                : 0U)),2);
    bufp->chgBit(oldp+1496,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mux_select_pc) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.ex_ls_valid_ls))));
    bufp->chgBit(oldp+1497,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_branch) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.ex_ls_valid_ls))));
    bufp->chgCData(oldp+1498,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.ex_ls_valid_ls)
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mcause)
                                : 0U)),4);
    bufp->chgBit(oldp+1499,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_exception) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.ex_ls_valid_ls))));
    bufp->chgBit(oldp+1500,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_speculate) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.ex_ls_valid_ls))));
    bufp->chgCData(oldp+1501,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.ls_wb_bus_mcause_wb),4);
    bufp->chgBit(oldp+1502,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.ls_wb_bus_exception_wb));
    bufp->chgBit(oldp+1503,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.ls_wb_bus_speculate_wb));
    bufp->chgIData(oldp+1504,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.ls_wb_bus_pc_wb),32);
    bufp->chgIData(oldp+1505,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.ls_wb_bus_exception_wb)
                                ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__csr_mod__DOT__regs[4U]
                                : vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.__PVT__csr_mod__DOT__regs[1U])),32);
    bufp->chgBit(oldp+1506,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.flush));
    bufp->chgBit(oldp+1507,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.if_de_ready_if) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core.if_de_valid_if))));
    bufp->chgIData(oldp+1508,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.regs[15]),32);
    bufp->chgIData(oldp+1509,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.regs[14]),32);
    bufp->chgIData(oldp+1510,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.regs[13]),32);
    bufp->chgIData(oldp+1511,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.regs[12]),32);
    bufp->chgIData(oldp+1512,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.regs[11]),32);
    bufp->chgIData(oldp+1513,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.regs[10]),32);
    bufp->chgIData(oldp+1514,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.regs[9]),32);
    bufp->chgIData(oldp+1515,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.regs[8]),32);
    bufp->chgIData(oldp+1516,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.regs[7]),32);
    bufp->chgIData(oldp+1517,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.regs[6]),32);
    bufp->chgIData(oldp+1518,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.regs[5]),32);
    bufp->chgIData(oldp+1519,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.regs[4]),32);
    bufp->chgIData(oldp+1520,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.regs[3]),32);
    bufp->chgIData(oldp+1521,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.regs[2]),32);
    bufp->chgIData(oldp+1522,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.regs[1]),32);
    bufp->chgIData(oldp+1523,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.regs[0]),32);
}

void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_cleanup\n"); );
    // Body
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[13U] = 0U;
}
