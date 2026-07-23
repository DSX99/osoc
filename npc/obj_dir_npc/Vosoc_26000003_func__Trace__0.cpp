// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vosoc_26000003_func__Syms.h"


void Vosoc_26000003_func___024root__trace_chg_0_sub_0(Vosoc_26000003_func___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vosoc_26000003_func___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root__trace_chg_0\n"); );
    // Body
    Vosoc_26000003_func___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vosoc_26000003_func___024root*>(voidSelf);
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vosoc_26000003_func___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vosoc_26000003_func___024root__trace_chg_0_sub_0(Vosoc_26000003_func___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root__trace_chg_0_sub_0\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_4;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__awvalid_lsu));
        bufp->chgIData(oldp+1,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__awaddr_lsu),32);
        bufp->chgBit(oldp+2,(vlSymsp->TOP__osoc_26000003_func.__PVT__core_awready));
        bufp->chgBit(oldp+3,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__wvalid_lsu));
        bufp->chgIData(oldp+4,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__wdata_lsu),32);
        bufp->chgBit(oldp+5,(vlSymsp->TOP__osoc_26000003_func.__PVT__core_wready));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__bready_lsu));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__osoc_26000003_func.__PVT__core_bvalid));
        bufp->chgCData(oldp+8,(((IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__match_aw)
                                 ? 0U : (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__io_master_bresp))),2);
        bufp->chgCData(oldp+9,(((IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__match_aw)
                                 ? 0U : (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__io_master_bid))),4);
        bufp->chgBit(oldp+10,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__io_master_arvalid));
        bufp->chgIData(oldp+11,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__io_master_araddr),32);
        bufp->chgCData(oldp+12,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__io_master_arlen),8);
        bufp->chgCData(oldp+13,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__io_master_arsize),3);
        bufp->chgCData(oldp+14,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__io_master_arburst),2);
        bufp->chgBit(oldp+15,(vlSymsp->TOP__osoc_26000003_func.__PVT__core_arready));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__io_master_rready));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__osoc_26000003_func.__PVT__io_master_awvalid));
        bufp->chgIData(oldp+18,(((IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__match_aw)
                                  ? 0U : vlSymsp->TOP__osoc_26000003_func__core.__PVT__awaddr_lsu)),32);
        bufp->chgBit(oldp+19,(vlSymsp->TOP__osoc_26000003_func.__PVT__io_master_wvalid));
        bufp->chgIData(oldp+20,(((IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__match_aw)
                                  ? 0U : vlSymsp->TOP__osoc_26000003_func__core.__PVT__wdata_lsu)),32);
        bufp->chgCData(oldp+21,(((IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__match_aw)
                                  ? 0U : (0x0000000fU 
                                          & ((0U == (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))
                                              ? ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out))
                                              : ((1U 
                                                  == (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))
                                                  ? 
                                                 ((IData)(3U) 
                                                  << 
                                                  (3U 
                                                   & vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))
                                                   ? 0x0fU
                                                   : 0U)))))),4);
        bufp->chgBit(oldp+22,(((~ (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__match_aw)) 
                               & (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__bready_lsu))));
        bufp->chgBit(oldp+23,(((~ (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__match_ar)) 
                               & (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__io_master_arvalid))));
        bufp->chgIData(oldp+24,(vlSymsp->TOP__osoc_26000003_func.__PVT__io_master_araddr),32);
        bufp->chgCData(oldp+25,(vlSymsp->TOP__osoc_26000003_func.__PVT__io_master_arlen),8);
        bufp->chgCData(oldp+26,(((IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__match_ar)
                                  ? 0U : (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__io_master_arsize))),3);
        bufp->chgCData(oldp+27,(((IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__match_ar)
                                  ? 0U : (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__io_master_arburst))),2);
        bufp->chgBit(oldp+28,(((~ ((IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__trans) 
                                   >> 1U)) & (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__io_master_rready))));
        bufp->chgIData(oldp+29,(vlSymsp->TOP__osoc_26000003_func.__PVT__caddr),32);
        bufp->chgBit(oldp+30,(((IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__wvalid_lsu) 
                               & (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__match_aw))));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__osoc_26000003_func.__PVT__cawvalid));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__osoc_26000003_func.__PVT__carvalid));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__osoc_26000003_func.__PVT__match_aw));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__osoc_26000003_func.__PVT__match_ar));
        bufp->chgBit(oldp+35,(((0U != (vlSymsp->TOP__osoc_26000003_func.__PVT__caddr 
                                       >> 0x00000010U)) 
                               | (0U != vlSymsp->TOP__osoc_26000003_func__core.__PVT__wdata_lsu))));
        bufp->chgIData(oldp+36,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__cache_opcode),32);
        bufp->chgBit(oldp+37,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_ready_de));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__cache_ready));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_valid_de));
        bufp->chgIData(oldp+40,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_bus_data_rs1_de),32);
        bufp->chgIData(oldp+41,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_bus_data_rs2_de),32);
        bufp->chgIData(oldp+42,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_bus_alu_out_ls),32);
        bufp->chgBit(oldp+43,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_valid_ls));
        bufp->chgIData(oldp+44,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_bus_csr_pc_wb),32);
        bufp->chgBit(oldp+45,(((~ (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__fencei_commit)) 
                               & (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__fencei))));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__fencei_commit));
        bufp->chgIData(oldp+47,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__araddr_lsu),32);
        bufp->chgBit(oldp+48,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__arvalid_lsu));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__arready_lsu));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__rready_lsu));
        bufp->chgIData(oldp+51,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__araddr_ifu),32);
        bufp->chgBit(oldp+52,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__arvalid_ifu));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__arready_ifu));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__rready_ifu));
        bufp->chgCData(oldp+55,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__arlen_ifu),8);
        bufp->chgCData(oldp+56,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__arsize_ifu),3);
        bufp->chgCData(oldp+57,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__arburst_ifu),2);
        __Vtemp_4[0U] = 0U;
        __Vtemp_4[1U] = 0U;
        __Vtemp_4[2U] = 0U;
        __Vtemp_4[3U] = 0U;
        __Vtemp_4[4U] = ((((IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__match_aw)
                            ? 0U : (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__io_master_bid)) 
                          << 0x00000011U) | (((2U & (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__trans))
                                               ? 0U
                                               : (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__io_master_rid)) 
                                             << 0x0000000dU));
        bufp->chgWData(oldp+58,(__Vtemp_4),150);
        bufp->chgBit(oldp+63,((1U & (~ (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__arvalid_lsu)))));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__flush));
        bufp->chgBit(oldp+65,((1U & (~ (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__flush)))));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__flush));
        bufp->chgBit(oldp+67,(((0U != (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__rresp_lsu)) 
                               | ((~ (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__match_aw)) 
                                  & (0U != (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__io_master_bresp))))));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__lsu_mod__DOT__done_r));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__lsu_mod__DOT__done_w));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__pc_mod__DOT__ex_valid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+71,((0x0000000fU & ((0U 
                                                 == (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))
                                                 ? 
                                                ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out))
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))
                                                  ? 
                                                 ((IData)(3U) 
                                                  << 
                                                  (3U 
                                                   & vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))
                                                   ? 0x0fU
                                                   : 0U))))),4);
        bufp->chgBit(oldp+72,(vlSymsp->TOP__osoc_26000003_func.__PVT__core_rvalid));
        bufp->chgCData(oldp+73,(vlSymsp->TOP__osoc_26000003_func.__PVT__core_rresp),2);
        bufp->chgIData(oldp+74,(vlSymsp->TOP__osoc_26000003_func.__PVT__core_rdata),32);
        bufp->chgBit(oldp+75,(((1U & ((IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__trans) 
                                      >> 1U)) || (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__io_master_rlast))));
        bufp->chgCData(oldp+76,(((2U & (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__trans))
                                  ? 0U : (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__io_master_rid))),4);
        bufp->chgBit(oldp+77,(vlSymsp->TOP__osoc_26000003_func.__PVT__io_master_awready));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__osoc_26000003_func.__PVT__io_master_wready));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__osoc_26000003_func.__PVT__io_master_bvalid));
        bufp->chgCData(oldp+80,(vlSymsp->TOP__osoc_26000003_func.__PVT__io_master_bresp),2);
        bufp->chgBit(oldp+81,(vlSymsp->TOP__osoc_26000003_func.__PVT__io_master_arready));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__osoc_26000003_func.__PVT__io_master_rvalid));
        bufp->chgCData(oldp+83,(vlSymsp->TOP__osoc_26000003_func.__PVT__io_master_rresp),2);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__osoc_26000003_func.__PVT__io_master_rdata),32);
        bufp->chgBit(oldp+85,(vlSymsp->TOP__osoc_26000003_func.__PVT__io_master_rlast));
        bufp->chgIData(oldp+86,(vlSymsp->TOP__osoc_26000003_func.__PVT__crdata),32);
        bufp->chgBit(oldp+87,(vlSymsp->TOP__osoc_26000003_func.__PVT__crvalid));
        bufp->chgCData(oldp+88,(vlSymsp->TOP__osoc_26000003_func.__PVT__trans),2);
        bufp->chgSData(oldp+89,(vlSymsp->TOP__osoc_26000003_func.__PVT__CLINT_mod__DOT__divisor),12);
        bufp->chgQData(oldp+90,(vlSymsp->TOP__osoc_26000003_func.__PVT__CLINT_mod__DOT__mtime),64);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__osoc_26000003_func.__PVT__CLINT_mod__DOT__buff),32);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__osoc_26000003_func.__PVT__CLINT_mod__DOT__clint_r),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__osoc_26000003_func.__PVT__axi_slave_lsu_mod__DOT__slave),32);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__osoc_26000003_func.__PVT__axi_slave_lsu_mod__DOT__r_addr_reg),32);
        bufp->chgCData(oldp+96,(vlSymsp->TOP__osoc_26000003_func.__PVT__axi_slave_lsu_mod__DOT__r_len_reg),8);
        bufp->chgCData(oldp+97,(vlSymsp->TOP__osoc_26000003_func.__PVT__axi_slave_lsu_mod__DOT__r_size_reg),3);
        bufp->chgIData(oldp+98,(((IData)(1U) << (IData)(vlSymsp->TOP__osoc_26000003_func.__PVT__axi_slave_lsu_mod__DOT__r_size_reg))),32);
        bufp->chgIData(oldp+99,(vlSymsp->TOP__osoc_26000003_func.__PVT__axi_slave_lsu_mod__DOT__slave_w),32);
        bufp->chgBit(oldp+100,(vlSymsp->TOP__osoc_26000003_func.__PVT__axi_slave_lsu_mod__DOT__done_aw));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__osoc_26000003_func.__PVT__axi_slave_lsu_mod__DOT__done_w));
        bufp->chgIData(oldp+102,(vlSymsp->TOP__osoc_26000003_func.__PVT__axi_slave_lsu_mod__DOT__w),32);
        bufp->chgIData(oldp+103,(vlSymsp->TOP__osoc_26000003_func.__PVT__axi_slave_lsu_mod__DOT__aw),32);
        bufp->chgCData(oldp+104,(vlSymsp->TOP__osoc_26000003_func.__PVT__axi_slave_lsu_mod__DOT__mask),4);
        bufp->chgIData(oldp+105,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__opcode),32);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__opcode),32);
        bufp->chgIData(oldp+107,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_pipeline_mod__DOT__opcode),32);
        bufp->chgIData(oldp+108,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__pc_ifu),32);
        bufp->chgIData(oldp+109,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_pc),32);
        bufp->chgIData(oldp+110,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_bus_next_pc_if),32);
        bufp->chgIData(oldp+111,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_next_pc),32);
        bufp->chgIData(oldp+112,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode),32);
        bufp->chgBit(oldp+113,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_valid));
        bufp->chgCData(oldp+114,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_mcause),4);
        bufp->chgBit(oldp+115,((1U & vlSymsp->TOP__osoc_26000003_func__core.__PVT__pc_ifu)));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_exception));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_bus_speculate_if));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_speculate));
        bufp->chgIData(oldp+119,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_bus_imm_de),32);
        bufp->chgIData(oldp+120,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_bus_data_csr_de),32);
        bufp->chgCData(oldp+121,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_bus_alu_op_de),8);
        bufp->chgBit(oldp+122,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_bus_lsu_we_de));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_bus_lsu_re_de));
        bufp->chgCData(oldp+124,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_bus_lsu_oper_de),3);
        bufp->chgCData(oldp+125,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_bus_rd_de),5);
        bufp->chgCData(oldp+126,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_bus_mux_select_de),2);
        bufp->chgBit(oldp+127,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_bus_mux_select_pc_de));
        bufp->chgCData(oldp+128,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_bus_mcause_de),4);
        bufp->chgCData(oldp+129,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_mcause),4);
        bufp->chgBit(oldp+130,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_bus_exception_de));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_exception));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_speculate));
        bufp->chgIData(oldp+133,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_pc),32);
        bufp->chgIData(oldp+134,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_next_pc),32);
        bufp->chgIData(oldp+135,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_imm),32);
        bufp->chgCData(oldp+136,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op),8);
        bufp->chgBit(oldp+137,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_we));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_re));
        bufp->chgCData(oldp+139,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_oper),3);
        bufp->chgCData(oldp+140,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rd),5);
        bufp->chgSData(oldp+141,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_csr),12);
        bufp->chgIData(oldp+142,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_csr),32);
        bufp->chgCData(oldp+143,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_mux_select),2);
        bufp->chgBit(oldp+144,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_mux_select_pc));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_valid));
        bufp->chgCData(oldp+146,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_bus_rs1_de),5);
        bufp->chgCData(oldp+147,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_bus_rs2_de),5);
        bufp->chgSData(oldp+148,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_bus_csr_de),12);
        bufp->chgCData(oldp+149,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_rs1),5);
        bufp->chgIData(oldp+150,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs1),32);
        bufp->chgIData(oldp+151,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_data_rs2),32);
        bufp->chgIData(oldp+152,(((IData)(4U) + vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_pc)),32);
        bufp->chgIData(oldp+153,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_bus_alu_out_ex),32);
        bufp->chgBit(oldp+154,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_bus_branch_ex));
        bufp->chgIData(oldp+155,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_bus_diff_pc_ex),32);
        bufp->chgIData(oldp+156,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_branch_addr),32);
        bufp->chgCData(oldp+157,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mcause),4);
        bufp->chgBit(oldp+158,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_exception));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_speculate));
        bufp->chgIData(oldp+160,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_pc),32);
        bufp->chgIData(oldp+161,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_next_pc),32);
        bufp->chgIData(oldp+162,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out),32);
        bufp->chgIData(oldp+163,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_data_rs2),32);
        bufp->chgIData(oldp+164,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_csr_out),32);
        bufp->chgSData(oldp+165,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_csr),12);
        bufp->chgCData(oldp+166,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper),3);
        bufp->chgCData(oldp+167,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_rd),5);
        bufp->chgCData(oldp+168,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mux_select),2);
        bufp->chgBit(oldp+169,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_mux_select_pc));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_branch));
        bufp->chgIData(oldp+171,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_diff_pc),32);
        bufp->chgIData(oldp+172,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_alu_out),32);
        bufp->chgIData(oldp+173,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_next_pc),32);
        bufp->chgIData(oldp+174,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr_out),32);
        bufp->chgCData(oldp+175,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd),5);
        bufp->chgSData(oldp+176,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr),12);
        bufp->chgCData(oldp+177,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select),2);
        bufp->chgBit(oldp+178,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mux_select_pc));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_branch));
        bufp->chgIData(oldp+180,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_diff_pc),32);
        bufp->chgBit(oldp+181,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__fencei));
        bufp->chgBit(oldp+183,((1U & (~ ((IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__lsu_mod__DOT__trans_r) 
                                         | (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__lsu_mod__DOT__trans_w))))));
        bufp->chgSData(oldp+184,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__addr_spec),12);
        bufp->chgBit(oldp+185,(((IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__lsu_mod__DOT__trans_r) 
                                | (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__lsu_mod__DOT__trans_w))));
        bufp->chgBit(oldp+186,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__finish_de));
        bufp->chgBit(oldp+187,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__finish));
        bufp->chgBit(oldp+188,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__finish));
        bufp->chgBit(oldp+189,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_pipeline_mod__DOT__finish));
        bufp->chgIData(oldp+190,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__reg_in),32);
        bufp->chgIData(oldp+191,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__rdata_lsu),32);
        bufp->chgCData(oldp+192,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__rresp_lsu),2);
        bufp->chgBit(oldp+193,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__rvalid_lsu));
        bufp->chgIData(oldp+194,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__rdata_ifu),32);
        bufp->chgCData(oldp+195,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__rresp_ifu),2);
        bufp->chgBit(oldp+196,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__rvalid_ifu));
        bufp->chgIData(oldp+197,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__alu_mod__DOT__val1),32);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__alu_mod__DOT__val2),32);
        bufp->chgIData(oldp+199,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__alu_mod__DOT__csr_imm),32);
        bufp->chgBit(oldp+200,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__arbiter_mod__DOT__read_select));
        bufp->chgBit(oldp+201,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__arbiter_mod__DOT__read_busy));
        bufp->chgBit(oldp+202,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__arbiter_mod__DOT__write_busy));
        bufp->chgIData(oldp+203,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[0]),32);
        bufp->chgIData(oldp+204,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[1]),32);
        bufp->chgIData(oldp+205,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[2]),32);
        bufp->chgIData(oldp+206,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[3]),32);
        bufp->chgIData(oldp+207,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[4]),32);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[5]),32);
        bufp->chgIData(oldp+209,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[6]),32);
        bufp->chgIData(oldp+210,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[7]),32);
        bufp->chgIData(oldp+211,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[8]),32);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[9]),32);
        bufp->chgIData(oldp+213,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[10]),32);
        bufp->chgIData(oldp+214,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[11]),32);
        bufp->chgIData(oldp+215,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[12]),32);
        bufp->chgIData(oldp+216,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[13]),32);
        bufp->chgIData(oldp+217,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[14]),32);
        bufp->chgIData(oldp+218,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[15]),32);
        bufp->chgIData(oldp+219,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[16]),32);
        bufp->chgIData(oldp+220,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[17]),32);
        bufp->chgIData(oldp+221,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[18]),32);
        bufp->chgIData(oldp+222,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[19]),32);
        bufp->chgIData(oldp+223,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[20]),32);
        bufp->chgIData(oldp+224,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[21]),32);
        bufp->chgIData(oldp+225,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[22]),32);
        bufp->chgIData(oldp+226,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[23]),32);
        bufp->chgIData(oldp+227,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[24]),32);
        bufp->chgIData(oldp+228,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[25]),32);
        bufp->chgIData(oldp+229,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[26]),32);
        bufp->chgIData(oldp+230,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[27]),32);
        bufp->chgIData(oldp+231,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[28]),32);
        bufp->chgIData(oldp+232,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[29]),32);
        bufp->chgIData(oldp+233,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[30]),32);
        bufp->chgIData(oldp+234,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__regs[31]),32);
        bufp->chgCData(oldp+235,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__working_reg_r),5);
        bufp->chgCData(oldp+236,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__csr_mod__DOT__working_reg_w),5);
        bufp->chgIData(oldp+237,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__decode_mod__DOT__imm_i),32);
        bufp->chgIData(oldp+238,((((- (IData)((vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                               >> 0x0000001fU))) 
                                   << 0x0000000bU) 
                                  | ((0x000007e0U & 
                                      (vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                       >> 0x00000014U)) 
                                     | (0x0000001fU 
                                        & (vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                           >> 7U))))),32);
        bufp->chgIData(oldp+239,((((- (IData)((vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                               >> 0x0000001fU))) 
                                   << 0x0000000cU) 
                                  | ((0x00000800U & 
                                      (vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                       << 4U)) | ((0x000007e0U 
                                                   & (vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                        >> 7U)))))),32);
        bufp->chgIData(oldp+240,((0xfffff000U & vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)),32);
        bufp->chgIData(oldp+241,((((- (IData)((vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                               >> 0x0000001fU))) 
                                   << 0x00000014U) 
                                  | ((((0x000001feU 
                                        & (vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                           >> 0x0000000bU)) 
                                       | (1U & (vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                >> 0x00000014U))) 
                                      << 0x0000000bU) 
                                     | (0x000007feU 
                                        & (vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                           >> 0x00000014U))))),32);
        bufp->chgCData(oldp+242,((vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                  >> 0x00000019U)),7);
        bufp->chgCData(oldp+243,((0x0000001fU & (vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+244,((0x0000001fU & (vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                 >> 0x00000014U))),5);
        bufp->chgCData(oldp+245,((0x0000001fU & (vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                                 >> 7U))),5);
        bufp->chgCData(oldp+246,((7U & (vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode 
                                        >> 0x0000000cU))),3);
        bufp->chgBit(oldp+247,(((IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_valid) 
                                & (0x0000100fU == (0x0000707fU 
                                                   & vlSymsp->TOP__osoc_26000003_func__core.__PVT__if_de_pipeline_mod__DOT__if_de_bus_opcode)))));
        bufp->chgBit(oldp+248,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__decode_mod__DOT__ex_match_rs1));
        bufp->chgBit(oldp+249,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__decode_mod__DOT__ex_match_rs2));
        bufp->chgBit(oldp+250,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__decode_mod__DOT__ls_match_rs1));
        bufp->chgBit(oldp+251,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__decode_mod__DOT__ls_match_rs2));
        bufp->chgBit(oldp+252,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__decode_mod__DOT__wb_match_rs1));
        bufp->chgBit(oldp+253,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__decode_mod__DOT__wb_match_rs2));
        bufp->chgBit(oldp+254,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_we));
        bufp->chgBit(oldp+255,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_re));
        bufp->chgBit(oldp+256,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_valid));
        bufp->chgBit(oldp+257,((0U != (3U & (vlSymsp->TOP__osoc_26000003_func__core.__VdfgRegularize_h6e95ff9d_0_0 
                                             | (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__rresp_ifu))))));
        bufp->chgIData(oldp+258,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[0U][0U][0U]),32);
        bufp->chgIData(oldp+259,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[0U][0U][1U]),32);
        bufp->chgIData(oldp+260,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[0U][1U][0U]),32);
        bufp->chgIData(oldp+261,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[0U][1U][1U]),32);
        bufp->chgIData(oldp+262,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[0U][2U][0U]),32);
        bufp->chgIData(oldp+263,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[0U][2U][1U]),32);
        bufp->chgIData(oldp+264,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[0U][3U][0U]),32);
        bufp->chgIData(oldp+265,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[0U][3U][1U]),32);
        bufp->chgIData(oldp+266,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[1U][0U][0U]),32);
        bufp->chgIData(oldp+267,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[1U][0U][1U]),32);
        bufp->chgIData(oldp+268,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[1U][1U][0U]),32);
        bufp->chgIData(oldp+269,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[1U][1U][1U]),32);
        bufp->chgIData(oldp+270,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[1U][2U][0U]),32);
        bufp->chgIData(oldp+271,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[1U][2U][1U]),32);
        bufp->chgIData(oldp+272,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[1U][3U][0U]),32);
        bufp->chgIData(oldp+273,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[1U][3U][1U]),32);
        bufp->chgIData(oldp+274,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[2U][0U][0U]),32);
        bufp->chgIData(oldp+275,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[2U][0U][1U]),32);
        bufp->chgIData(oldp+276,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[2U][1U][0U]),32);
        bufp->chgIData(oldp+277,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[2U][1U][1U]),32);
        bufp->chgIData(oldp+278,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[2U][2U][0U]),32);
        bufp->chgIData(oldp+279,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[2U][2U][1U]),32);
        bufp->chgIData(oldp+280,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[2U][3U][0U]),32);
        bufp->chgIData(oldp+281,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[2U][3U][1U]),32);
        bufp->chgIData(oldp+282,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[3U][0U][0U]),32);
        bufp->chgIData(oldp+283,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[3U][0U][1U]),32);
        bufp->chgIData(oldp+284,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[3U][1U][0U]),32);
        bufp->chgIData(oldp+285,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[3U][1U][1U]),32);
        bufp->chgIData(oldp+286,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[3U][2U][0U]),32);
        bufp->chgIData(oldp+287,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[3U][2U][1U]),32);
        bufp->chgIData(oldp+288,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[3U][3U][0U]),32);
        bufp->chgIData(oldp+289,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_cache[3U][3U][1U]),32);
        bufp->chgBit(oldp+290,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__latest_row));
        bufp->chgIData(oldp+291,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__miss_addr),32);
        bufp->chgBit(oldp+292,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__trans));
        bufp->chgIData(oldp+293,((vlSymsp->TOP__osoc_26000003_func__core.__VdfgRegularize_h6e95ff9d_0_0 
                                  >> 6U)),26);
        bufp->chgCData(oldp+294,((3U & (vlSymsp->TOP__osoc_26000003_func__core.__VdfgRegularize_h6e95ff9d_0_0 
                                        >> 4U))),2);
        bufp->chgCData(oldp+295,((3U & (vlSymsp->TOP__osoc_26000003_func__core.__VdfgRegularize_h6e95ff9d_0_0 
                                        >> 2U))),2);
        bufp->chgCData(oldp+296,((3U & vlSymsp->TOP__osoc_26000003_func__core.__VdfgRegularize_h6e95ff9d_0_0)),2);
        bufp->chgIData(oldp+297,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_tag[0U][0U]),26);
        bufp->chgIData(oldp+298,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_tag[0U][1U]),26);
        bufp->chgIData(oldp+299,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_tag[1U][0U]),26);
        bufp->chgIData(oldp+300,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_tag[1U][1U]),26);
        bufp->chgIData(oldp+301,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_tag[2U][0U]),26);
        bufp->chgIData(oldp+302,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_tag[2U][1U]),26);
        bufp->chgIData(oldp+303,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_tag[3U][0U]),26);
        bufp->chgIData(oldp+304,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_tag[3U][1U]),26);
        bufp->chgBit(oldp+305,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_valid[0U][0U]));
        bufp->chgBit(oldp+306,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_valid[0U][1U]));
        bufp->chgBit(oldp+307,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_valid[1U][0U]));
        bufp->chgBit(oldp+308,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_valid[1U][1U]));
        bufp->chgBit(oldp+309,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_valid[2U][0U]));
        bufp->chgBit(oldp+310,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_valid[2U][1U]));
        bufp->chgBit(oldp+311,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_valid[3U][0U]));
        bufp->chgBit(oldp+312,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_valid[3U][1U]));
        bufp->chgBit(oldp+313,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__do_burst));
        bufp->chgBit(oldp+314,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__burst_reg));
        bufp->chgBit(oldp+315,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__burst_addr));
        bufp->chgIData(oldp+316,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__state),32);
        bufp->chgCData(oldp+317,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__fill_count),2);
        bufp->chgBit(oldp+318,((vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_valid
                                [(3U & (vlSymsp->TOP__osoc_26000003_func__core.__VdfgRegularize_h6e95ff9d_0_0 
                                        >> 4U))][0U] 
                                & ((vlSymsp->TOP__osoc_26000003_func__core.__VdfgRegularize_h6e95ff9d_0_0 
                                    >> 6U) == vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__block_tag
                                   [(3U & (vlSymsp->TOP__osoc_26000003_func__core.__VdfgRegularize_h6e95ff9d_0_0 
                                           >> 4U))][0U]))));
        bufp->chgBit(oldp+319,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__icache_mod__DOT__hit_1));
        bufp->chgSData(oldp+320,((0x00000fffU & (vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_imm 
                                                 >> 1U))),12);
        bufp->chgBit(oldp+321,(((IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_bus_branch_ex) 
                                & ((~ (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_speculate)) 
                                   & (((IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_alu_op) 
                                       >> 6U) & ((~ 
                                                  (0U 
                                                   != 
                                                   (vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_imm 
                                                    >> 0x0000000cU))) 
                                                 | (0x000fffffU 
                                                    == 
                                                    (vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_imm 
                                                     >> 0x0000000cU))))))));
        bufp->chgIData(oldp+322,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ifu_mod__DOT__block_tag[0U][0U]),29);
        bufp->chgIData(oldp+323,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ifu_mod__DOT__block_tag[0U][1U]),29);
        bufp->chgIData(oldp+324,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ifu_mod__DOT__block_tag[1U][0U]),29);
        bufp->chgIData(oldp+325,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ifu_mod__DOT__block_tag[1U][1U]),29);
        bufp->chgSData(oldp+326,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ifu_mod__DOT__block_offset[0U][0U]),12);
        bufp->chgSData(oldp+327,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ifu_mod__DOT__block_offset[0U][1U]),12);
        bufp->chgSData(oldp+328,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ifu_mod__DOT__block_offset[1U][0U]),12);
        bufp->chgSData(oldp+329,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ifu_mod__DOT__block_offset[1U][1U]),12);
        bufp->chgBit(oldp+330,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ifu_mod__DOT__block_valid[0U][0U]));
        bufp->chgBit(oldp+331,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ifu_mod__DOT__block_valid[0U][1U]));
        bufp->chgBit(oldp+332,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ifu_mod__DOT__block_valid[1U][0U]));
        bufp->chgBit(oldp+333,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ifu_mod__DOT__block_valid[1U][1U]));
        bufp->chgBit(oldp+334,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ifu_mod__DOT__latest_row));
        bufp->chgIData(oldp+335,((vlSymsp->TOP__osoc_26000003_func__core.__PVT__pc_ifu 
                                  >> 3U)),29);
        bufp->chgBit(oldp+336,((1U & (vlSymsp->TOP__osoc_26000003_func__core.__PVT__pc_ifu 
                                      >> 2U))));
        bufp->chgCData(oldp+337,((3U & vlSymsp->TOP__osoc_26000003_func__core.__PVT__pc_ifu)),2);
        bufp->chgBit(oldp+338,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ifu_mod__DOT__hit_0));
        bufp->chgBit(oldp+339,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ifu_mod__DOT__hit_1));
        bufp->chgIData(oldp+340,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_pc),32);
        bufp->chgCData(oldp+341,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_mcause),4);
        bufp->chgBit(oldp+342,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_exception));
        bufp->chgBit(oldp+343,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_speculate));
        bufp->chgBit(oldp+344,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__lsu_mod__DOT__trans_r));
        bufp->chgBit(oldp+345,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__lsu_mod__DOT__trans_w));
        bufp->chgIData(oldp+346,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__lsu_mod__DOT__lsu_r),32);
        bufp->chgBit(oldp+347,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__lsu_mod__DOT__done_aw));
        bufp->chgBit(oldp+348,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__lsu_mod__DOT__done_wdata));
        bufp->chgIData(oldp+349,(vlSymsp->TOP__osoc_26000003_func__core.__PVT__lsu_mod__DOT__lsu_w),32);
        bufp->chgBit(oldp+350,((1U & ((((IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_bus_rs1_de) 
                                        | (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_bus_rs2_de)) 
                                       | (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_rd)) 
                                      >> 4U))));
    }
    bufp->chgBit(oldp+351,(vlSelfRef.clock));
    bufp->chgBit(oldp+352,(vlSelfRef.reset));
    bufp->chgIData(oldp+353,(vlSymsp->TOP__osoc_26000003_func__core.pc),32);
    bufp->chgIData(oldp+354,(vlSymsp->TOP__osoc_26000003_func__core.prev_pc),32);
    bufp->chgIData(oldp+355,(vlSymsp->TOP__osoc_26000003_func__core.opcode),32);
    bufp->chgIData(oldp+356,(vlSymsp->TOP__osoc_26000003_func__core.pc_e),32);
    bufp->chgBit(oldp+357,(vlSymsp->TOP__osoc_26000003_func__core.reg_valid));
    bufp->chgBit(oldp+358,(vlSymsp->TOP__osoc_26000003_func__core.reg_valid_e));
    bufp->chgBit(oldp+359,(vlSymsp->TOP__osoc_26000003_func__core.if_de_valid_if));
    bufp->chgBit(oldp+360,(vlSymsp->TOP__osoc_26000003_func__core.if_de_ready_if));
    bufp->chgBit(oldp+361,(vlSymsp->TOP__osoc_26000003_func__core.ex_ls_valid_ls));
    bufp->chgBit(oldp+362,(vlSymsp->TOP__osoc_26000003_func__core.ex_ls_ready_ls));
    bufp->chgBit(oldp+363,(vlSymsp->TOP__osoc_26000003_func__core.branch));
    bufp->chgBit(oldp+364,(vlSymsp->TOP__osoc_26000003_func__core.branch_taken));
    bufp->chgBit(oldp+365,(vlSymsp->TOP__osoc_26000003_func__core.ex_ls_bus_lsu_we_ls));
    bufp->chgBit(oldp+366,(vlSymsp->TOP__osoc_26000003_func__core.ex_ls_bus_lsu_re_ls));
    bufp->chgBit(oldp+367,(vlSymsp->TOP__osoc_26000003_func__core.cache_hit));
    bufp->chgBit(oldp+368,(vlSymsp->TOP__osoc_26000003_func__core.cache_miss));
    bufp->chgBit(oldp+369,(vlSymsp->TOP__osoc_26000003_func__core.rst));
    bufp->chgBit(oldp+370,(vlSymsp->TOP__osoc_26000003_func__core.ex_ls_valid_ex));
    bufp->chgIData(oldp+371,(vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs
                             [(0x0000000fU & (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_bus_rs1_de))]),32);
    bufp->chgIData(oldp+372,(vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs
                             [(0x0000000fU & (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_bus_rs2_de))]),32);
    bufp->chgCData(oldp+373,(vlSymsp->TOP__osoc_26000003_func__core.ls_wb_bus_mcause_wb),4);
    bufp->chgBit(oldp+374,(vlSymsp->TOP__osoc_26000003_func__core.ls_wb_bus_exception_wb));
    bufp->chgBit(oldp+375,(vlSymsp->TOP__osoc_26000003_func__core.ls_wb_bus_speculate_wb));
    bufp->chgIData(oldp+376,(vlSymsp->TOP__osoc_26000003_func__core.ls_wb_bus_pc_wb),32);
    bufp->chgBit(oldp+377,((1U & ((~ (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_valid)) 
                                  & ((~ (IData)(vlSymsp->TOP__osoc_26000003_func__core.ex_ls_valid_ls)) 
                                     & (~ (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid)))))));
    bufp->chgBit(oldp+378,(vlSymsp->TOP__osoc_26000003_func__core.flush));
    bufp->chgBit(oldp+379,(vlSymsp->TOP__osoc_26000003_func__core.flush_ex));
    bufp->chgBit(oldp+380,(((((IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__decode_mod__DOT__ex_match_rs1) 
                              | (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__decode_mod__DOT__ex_match_rs2)) 
                             & ((~ (IData)(vlSymsp->TOP__osoc_26000003_func__core.ex_ls_valid_ex)) 
                                | (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_lsu_re))) 
                            | (((~ (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_valid_ls)) 
                                & ((IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__decode_mod__DOT__ls_match_rs1) 
                                   | (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__decode_mod__DOT__ls_match_rs2))) 
                               | (((~ (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_valid)) 
                                   & ((IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__decode_mod__DOT__wb_match_rs1) 
                                      | (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__decode_mod__DOT__wb_match_rs2))) 
                                  | (0U != ((IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__de_ex_pipeline_mod__DOT__de_ex_bus_csr) 
                                            | ((IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_csr) 
                                               | (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ls_wb_pipeline_mod__DOT__ls_wb_bus_csr)))))))));
    bufp->chgBit(oldp+381,(((IData)(vlSymsp->TOP__osoc_26000003_func__core.if_de_ready_if) 
                            & (IData)(vlSymsp->TOP__osoc_26000003_func__core.if_de_valid_if))));
    bufp->chgIData(oldp+382,(vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs[15]),32);
    bufp->chgIData(oldp+383,(vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs[14]),32);
    bufp->chgIData(oldp+384,(vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs[13]),32);
    bufp->chgIData(oldp+385,(vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs[12]),32);
    bufp->chgIData(oldp+386,(vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs[11]),32);
    bufp->chgIData(oldp+387,(vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs[10]),32);
    bufp->chgIData(oldp+388,(vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs[9]),32);
    bufp->chgIData(oldp+389,(vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs[8]),32);
    bufp->chgIData(oldp+390,(vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs[7]),32);
    bufp->chgIData(oldp+391,(vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs[6]),32);
    bufp->chgIData(oldp+392,(vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs[5]),32);
    bufp->chgIData(oldp+393,(vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs[4]),32);
    bufp->chgIData(oldp+394,(vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs[3]),32);
    bufp->chgIData(oldp+395,(vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs[2]),32);
    bufp->chgIData(oldp+396,(vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs[1]),32);
    bufp->chgIData(oldp+397,(vlSymsp->TOP__osoc_26000003_func__core__reg_mod.regs[0]),32);
}

void Vosoc_26000003_func___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root__trace_cleanup\n"); );
    // Body
    Vosoc_26000003_func___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vosoc_26000003_func___024root*>(voidSelf);
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
