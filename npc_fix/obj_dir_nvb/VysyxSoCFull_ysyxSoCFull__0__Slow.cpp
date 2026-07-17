// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_sdram__DOT__sdramsub1__DOT__sdram0__DOT__sdram_read_TOP__ysyxSoCFull(IData/*31:0*/ addr, IData/*31:0*/ &data);
extern const VlUnpacked<CData/*2:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h902074cf_0;

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__flash__DOT__data_bswap = ((((0x0000ff00U 
                                                  & (vlSelfRef.__PVT__flash__DOT__rdata 
                                                     << 8U)) 
                                                 | (0x000000ffU 
                                                    & (vlSelfRef.__PVT__flash__DOT__rdata 
                                                       >> 8U))) 
                                                << 0x00000010U) 
                                               | ((0x0000ff00U 
                                                   & (vlSelfRef.__PVT__flash__DOT__rdata 
                                                      >> 8U)) 
                                                  | (vlSelfRef.__PVT__flash__DOT__rdata 
                                                     >> 0x00000018U)));
    vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__buff = 0U;
    if ((((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__count) 
          >= (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__cas_lat)) 
         & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_read))) {
        VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_sdram__DOT__sdramsub1__DOT__sdram0__DOT__sdram_read_TOP__ysyxSoCFull(
                                                                                (((vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows
                                                                                [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q] 
                                                                                << 0x0000000dU) 
                                                                                | (((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_reg) 
                                                                                << 0x0000000bU) 
                                                                                | ((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__addr) 
                                                                                << 2U))) 
                                                                                + 
                                                                                VL_SHIFTL_III(32,32,32, 
                                                                                ((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__count) 
                                                                                - (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__cas_lat)), 2U)), vlSelfRef.__Vtask_sdram__DOT__sdramsub1__DOT__sdram0__DOT__sdram_read__4__data);
        vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__buff 
            = vlSelfRef.__Vtask_sdram__DOT__sdramsub1__DOT__sdram0__DOT__sdram_read__4__data;
    }
    vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__buff = 0U;
    if ((((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__count) 
          >= (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__cas_lat)) 
         & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_read))) {
        VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_sdram__DOT__sdramsub1__DOT__sdram0__DOT__sdram_read_TOP__ysyxSoCFull(
                                                                                ((IData)(0x04000000U) 
                                                                                + 
                                                                                (((vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows
                                                                                [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q] 
                                                                                << 0x0000000dU) 
                                                                                | (((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_reg) 
                                                                                << 0x0000000bU) 
                                                                                | ((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__addr) 
                                                                                << 2U))) 
                                                                                + 
                                                                                VL_SHIFTL_III(32,32,32, 
                                                                                ((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__count) 
                                                                                - (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__cas_lat)), 2U))), vlSelfRef.__Vtask_sdram__DOT__sdramsub1__DOT__sdram1__DOT__sdram_read__6__data);
        vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__buff 
            = vlSelfRef.__Vtask_sdram__DOT__sdramsub1__DOT__sdram1__DOT__sdram_read__6__data;
    }
    vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__buff = 0U;
    if ((((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__count) 
          >= (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__cas_lat)) 
         & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_read))) {
        VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_sdram__DOT__sdramsub1__DOT__sdram0__DOT__sdram_read_TOP__ysyxSoCFull(
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (((vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows
                                                                                [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q] 
                                                                                << 0x0000000dU) 
                                                                                | (((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_reg) 
                                                                                << 0x0000000bU) 
                                                                                | ((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__addr) 
                                                                                << 2U))) 
                                                                                + 
                                                                                VL_SHIFTL_III(32,32,32, 
                                                                                ((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__count) 
                                                                                - (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__cas_lat)), 2U))), vlSelfRef.__Vtask_sdram__DOT__sdramsub2__DOT__sdram0__DOT__sdram_read__8__data);
        vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__buff 
            = vlSelfRef.__Vtask_sdram__DOT__sdramsub2__DOT__sdram0__DOT__sdram_read__8__data;
    }
    vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__buff = 0U;
    if ((((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__count) 
          >= (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__cas_lat)) 
         & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_read))) {
        VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_sdram__DOT__sdramsub1__DOT__sdram0__DOT__sdram_read_TOP__ysyxSoCFull(
                                                                                ((IData)(0x04000002U) 
                                                                                + 
                                                                                (((vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows
                                                                                [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q] 
                                                                                << 0x0000000dU) 
                                                                                | (((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_reg) 
                                                                                << 0x0000000bU) 
                                                                                | ((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__addr) 
                                                                                << 2U))) 
                                                                                + 
                                                                                VL_SHIFTL_III(32,32,32, 
                                                                                ((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__count) 
                                                                                - (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__cas_lat)), 2U))), vlSelfRef.__Vtask_sdram__DOT__sdramsub2__DOT__sdram1__DOT__sdram_read__10__data);
        vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__buff 
            = vlSelfRef.__Vtask_sdram__DOT__sdramsub2__DOT__sdram1__DOT__sdram_read__10__data;
    }
    vlSelfRef.sdram__DOT__sdramsub1__DOT__sdram0__DOT____VdfgRegularize_hdef225f1_0_0 
        = (((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__count) 
            >= (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__cas_lat)) 
           & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_read));
    vlSelfRef.sdram__DOT__sdramsub1__DOT__sdram1__DOT____VdfgRegularize_he2a3456f_0_0 
        = (((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__count) 
            >= (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__cas_lat)) 
           & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_read));
    vlSelfRef.sdram__DOT__sdramsub2__DOT__sdram0__DOT____VdfgRegularize_h9fdf6016_0_0 
        = (((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__count) 
            >= (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__cas_lat)) 
           & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_read));
    vlSelfRef.sdram__DOT__sdramsub2__DOT__sdram1__DOT____VdfgRegularize_h3b7456c3_0_0 
        = (((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__count) 
            >= (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__cas_lat)) 
           & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_read));
    vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__both 
        = (1U & ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                     >> 2U)) & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    vlSelfRef.__VdfgRegularize_hbc52461a_1_0 = (IData)(
                                                       (3U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    vlSelfRef.sdram__DOT__dq__en0 = (((IData)(vlSelfRef.sdram__DOT__sdramsub1__DOT__sdram0__DOT____VdfgRegularize_hdef225f1_0_0)
                                       ? 0xffffU : 0U) 
                                     | ((IData)(vlSelfRef.sdram__DOT__sdramsub1__DOT__sdram1__DOT____VdfgRegularize_he2a3456f_0_0)
                                         ? 0xffffU : 0U));
    vlSelfRef.sdram__DOT__dq__out__strong__out2 = (
                                                   (0xffff0000U 
                                                    & vlSelfRef.sdram__DOT__dq__out__strong__out2) 
                                                   | ((((IData)(vlSelfRef.sdram__DOT__sdramsub1__DOT__sdram0__DOT____VdfgRegularize_hdef225f1_0_0)
                                                         ? 0xffffU
                                                         : 0U) 
                                                       & (((IData)(vlSelfRef.sdram__DOT__sdramsub1__DOT__sdram0__DOT____VdfgRegularize_hdef225f1_0_0)
                                                            ? (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__buff)
                                                            : 0U) 
                                                          & ((IData)(vlSelfRef.sdram__DOT__sdramsub1__DOT__sdram0__DOT____VdfgRegularize_hdef225f1_0_0)
                                                              ? 0xffffU
                                                              : 0U))) 
                                                      | (((IData)(vlSelfRef.sdram__DOT__sdramsub1__DOT__sdram1__DOT____VdfgRegularize_he2a3456f_0_0)
                                                           ? 0xffffU
                                                           : 0U) 
                                                         & (((IData)(vlSelfRef.sdram__DOT__sdramsub1__DOT__sdram1__DOT____VdfgRegularize_he2a3456f_0_0)
                                                              ? (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__buff)
                                                              : 0U) 
                                                            & ((IData)(vlSelfRef.sdram__DOT__sdramsub1__DOT__sdram1__DOT____VdfgRegularize_he2a3456f_0_0)
                                                                ? 0xffffU
                                                                : 0U)))));
    vlSelfRef.sdram__DOT__dq__en1 = (((IData)(vlSelfRef.sdram__DOT__sdramsub2__DOT__sdram0__DOT____VdfgRegularize_h9fdf6016_0_0)
                                       ? 0xffffU : 0U) 
                                     | ((IData)(vlSelfRef.sdram__DOT__sdramsub2__DOT__sdram1__DOT____VdfgRegularize_h3b7456c3_0_0)
                                         ? 0xffffU : 0U));
    vlSelfRef.sdram__DOT__dq__out__strong__out3 = (
                                                   (0x0000ffffU 
                                                    & vlSelfRef.sdram__DOT__dq__out__strong__out3) 
                                                   | (((((IData)(vlSelfRef.sdram__DOT__sdramsub2__DOT__sdram0__DOT____VdfgRegularize_h9fdf6016_0_0)
                                                          ? 0xffffU
                                                          : 0U) 
                                                        & (((IData)(vlSelfRef.sdram__DOT__sdramsub2__DOT__sdram0__DOT____VdfgRegularize_h9fdf6016_0_0)
                                                             ? (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__buff)
                                                             : 0U) 
                                                           & ((IData)(vlSelfRef.sdram__DOT__sdramsub2__DOT__sdram0__DOT____VdfgRegularize_h9fdf6016_0_0)
                                                               ? 0xffffU
                                                               : 0U))) 
                                                       | (((IData)(vlSelfRef.sdram__DOT__sdramsub2__DOT__sdram1__DOT____VdfgRegularize_h3b7456c3_0_0)
                                                            ? 0xffffU
                                                            : 0U) 
                                                          & (((IData)(vlSelfRef.sdram__DOT__sdramsub2__DOT__sdram1__DOT____VdfgRegularize_h3b7456c3_0_0)
                                                               ? (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__buff)
                                                               : 0U) 
                                                             & ((IData)(vlSelfRef.sdram__DOT__sdramsub2__DOT__sdram1__DOT____VdfgRegularize_h3b7456c3_0_0)
                                                                 ? 0xffffU
                                                                 : 0U)))) 
                                                      << 0x00000010U));
    if (vlSelfRef.__VdfgRegularize_hbc52461a_1_0) {
        vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__comb_chose 
            = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                     >> 0x0000000dU));
        vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__comb_chose 
            = (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                     >> 0x0000000dU));
    } else {
        vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__comb_chose 
            = (1U & ((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__chose) 
                     >> (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)));
        vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__comb_chose 
            = (1U & ((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__chose) 
                     >> (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)));
    }
    vlSelfRef.sdram__DOT__sdramsub1__DOT____VdfgRegularize_hd87c5a3c_0_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__comb_chose)) 
                    | (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__both))));
    vlSelfRef.sdram__DOT__sdramsub1__DOT____VdfgRegularize_hd87c5a3c_0_2 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__comb_chose) 
                    | (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__both))));
    vlSelfRef.sdram__DOT__sdramsub2__DOT____VdfgRegularize_h0f7387ae_0_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__comb_chose)) 
                    | (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__both))));
    vlSelfRef.sdram__DOT__sdramsub2__DOT____VdfgRegularize_h0f7387ae_0_2 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__comb_chose) 
                    | (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__both))));
    vlSelfRef.__Vtableidx1 = ((((2U & (((IData)(vlSelfRef.sdram__DOT__sdramsub1__DOT____VdfgRegularize_hd87c5a3c_0_1) 
                                        | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelfRef.sdram__DOT__sdramsub1__DOT____VdfgRegularize_hd87c5a3c_0_1) 
                                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                        >> 1U)))) 
                               << 2U) | ((2U & (((IData)(vlSelfRef.sdram__DOT__sdramsub1__DOT____VdfgRegularize_hd87c5a3c_0_1) 
                                                 << 1U) 
                                                | (0x7ffffffeU 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                      >> 1U)))) 
                                         | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                  >> 3U))));
    vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__state 
        = VysyxSoCFull__ConstPool__TABLE_h902074cf_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.__Vtableidx2 = ((((2U & (((IData)(vlSelfRef.sdram__DOT__sdramsub1__DOT____VdfgRegularize_hd87c5a3c_0_2) 
                                        | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelfRef.sdram__DOT__sdramsub1__DOT____VdfgRegularize_hd87c5a3c_0_2) 
                                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                        >> 1U)))) 
                               << 2U) | ((2U & (((IData)(vlSelfRef.sdram__DOT__sdramsub1__DOT____VdfgRegularize_hd87c5a3c_0_2) 
                                                 << 1U) 
                                                | (0x7ffffffeU 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                      >> 1U)))) 
                                         | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                  >> 3U))));
    vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__state 
        = VysyxSoCFull__ConstPool__TABLE_h902074cf_0
        [vlSelfRef.__Vtableidx2];
    vlSelfRef.__Vtableidx3 = ((((2U & (((IData)(vlSelfRef.sdram__DOT__sdramsub2__DOT____VdfgRegularize_h0f7387ae_0_1) 
                                        | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelfRef.sdram__DOT__sdramsub2__DOT____VdfgRegularize_h0f7387ae_0_1) 
                                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                        >> 1U)))) 
                               << 2U) | ((2U & (((IData)(vlSelfRef.sdram__DOT__sdramsub2__DOT____VdfgRegularize_h0f7387ae_0_1) 
                                                 << 1U) 
                                                | (0x7ffffffeU 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                      >> 1U)))) 
                                         | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                  >> 3U))));
    vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__state 
        = VysyxSoCFull__ConstPool__TABLE_h902074cf_0
        [vlSelfRef.__Vtableidx3];
    vlSelfRef.__Vtableidx4 = ((((2U & (((IData)(vlSelfRef.sdram__DOT__sdramsub2__DOT____VdfgRegularize_h0f7387ae_0_2) 
                                        | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelfRef.sdram__DOT__sdramsub2__DOT____VdfgRegularize_h0f7387ae_0_2) 
                                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                        >> 1U)))) 
                               << 2U) | ((2U & (((IData)(vlSelfRef.sdram__DOT__sdramsub2__DOT____VdfgRegularize_h0f7387ae_0_2) 
                                                 << 1U) 
                                                | (0x7ffffffeU 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                      >> 1U)))) 
                                         | (1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                                  >> 3U))));
    vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__state 
        = VysyxSoCFull__ConstPool__TABLE_h902074cf_0
        [vlSelfRef.__Vtableidx4];
}

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___stl_sequent__TOP__ysyxSoCFull__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__flash__DOT__reset = (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss));
    if (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
        vlSelfRef.__PVT___asic_psram_sck = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
        vlSelfRef.__PVT___asic_psram_ce_n = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n;
    } else {
        vlSelfRef.__PVT___asic_psram_sck = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
        vlSelfRef.__PVT___asic_psram_ce_n = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n;
    }
    vlSelfRef.__PVT__psram__DOT__dio = (0x0000000fU 
                                        & ((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                               & ((1U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten))
                                                   ? 1U
                                                   : 0U)) 
                                              | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                                  & (((2U 
                                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten))
                                                       ? 1U
                                                       : 0U) 
                                                     << 1U)) 
                                                 | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out2) 
                                                     & (((4U 
                                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten))
                                                          ? 1U
                                                          : 0U) 
                                                        << 2U)) 
                                                    | (8U 
                                                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out3) 
                                                          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten)))))) 
                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.psram_dio__en)) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.psram_dio__en)) 
                                           | (((0x0eU 
                                                > (IData)(vlSelfRef.__PVT__psram__DOT__counter)) 
                                               | (IData)(vlSelfRef.__PVT__psram__DOT__rw))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                                                   ? (IData)(vlSelfRef.__PVT__psram__DOT__buff)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__psram__DOT__buff) 
                                                   >> 4U)))));
}

VL_ATTR_COLD void VysyxSoCFull_ysyxSoCFull___ctor_var_reset(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->externalPins_gpio_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 822586098003852132ull);
    vlSelf->externalPins_gpio_in = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9685265187411425855ull);
    vlSelf->externalPins_gpio_seg_0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6033921801942580967ull);
    vlSelf->externalPins_gpio_seg_1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15543389452754430714ull);
    vlSelf->externalPins_gpio_seg_2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8772214742636758696ull);
    vlSelf->externalPins_gpio_seg_3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5024408221642847872ull);
    vlSelf->externalPins_gpio_seg_4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10457141804080140056ull);
    vlSelf->externalPins_gpio_seg_5 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1959206588904405241ull);
    vlSelf->externalPins_gpio_seg_6 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16552903033054095957ull);
    vlSelf->externalPins_gpio_seg_7 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3744180331418777232ull);
    vlSelf->externalPins_ps2_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16322331395874519872ull);
    vlSelf->externalPins_ps2_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13568837990582422912ull);
    vlSelf->externalPins_vga_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16669989510370052666ull);
    vlSelf->externalPins_vga_g = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16026913326201140098ull);
    vlSelf->externalPins_vga_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9009997286950620541ull);
    vlSelf->externalPins_vga_hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 399868960241165010ull);
    vlSelf->externalPins_vga_vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15497527002255972198ull);
    vlSelf->externalPins_vga_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12074553774880755048ull);
    vlSelf->externalPins_uart_rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1676035079867404527ull);
    vlSelf->externalPins_uart_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11041353987071012103ull);
    vlSelf->__PVT___bitrev_miso = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1267752862150344715ull);
    vlSelf->__PVT___asic_psram_sck = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14094072321038918006ull);
    vlSelf->__PVT___asic_psram_ce_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9378011390545183188ull);
    vlSelf->__PVT__flash__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11083757627637674981ull);
    vlSelf->__PVT__flash__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17625211534711366913ull);
    vlSelf->__PVT__flash__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11124242782341192905ull);
    vlSelf->__PVT__flash__DOT__cmd = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5750376372595020666ull);
    vlSelf->__PVT__flash__DOT__addr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1834941183407282102ull);
    vlSelf->__PVT__flash__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2639680746379343509ull);
    vlSelf->__PVT__flash__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17258517742643236571ull);
    vlSelf->__PVT__flash__DOT__data_bswap = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13024019485753997655ull);
    vlSelf->__PVT__bitrev__DOT__buff = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18205226275706452721ull);
    vlSelf->__PVT__bitrev__DOT__count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4440977103555328261ull);
    vlSelf->__PVT__psram__DOT__dio = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9983604446140414252ull);
    vlSelf->__PVT__psram__DOT__saddr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16308747883820083350ull);
    vlSelf->__PVT__psram__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11239602773159463372ull);
    vlSelf->__PVT__psram__DOT__oper = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1264679480739071523ull);
    vlSelf->__PVT__psram__DOT__rw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5952819685198173181ull);
    vlSelf->__PVT__psram__DOT__set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5462830806589927444ull);
    vlSelf->__PVT__psram__DOT__buff = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16883610787262776175ull);
    vlSelf->sdram__DOT__dq__en0 = 0;
    vlSelf->sdram__DOT__dq__en1 = 0;
    vlSelf->sdram__DOT__dq__out__strong__out2 = 0;
    vlSelf->sdram__DOT__dq__out__strong__out3 = 0;
    vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__chose = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13357505092328834553ull);
    vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__comb_chose = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14105628978540608105ull);
    vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__both = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2626206372153601310ull);
    vlSelf->sdram__DOT__sdramsub1__DOT____VdfgRegularize_hd87c5a3c_0_1 = 0;
    vlSelf->sdram__DOT__sdramsub1__DOT____VdfgRegularize_hd87c5a3c_0_2 = 0;
    vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12178946455605878164ull);
    vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__count = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13515157068310425174ull);
    vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__buff = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14861323004332016245ull);
    vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__will_stop_burst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1196250773202817861ull);
    vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12429747827478819378ull);
    vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__cas_lat = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10988536473771567135ull);
    vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_len = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2342255464751316830ull);
    vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15054415624981253585ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows[__Vi0] = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7714965713566433713ull);
    }
    vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__addr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15940944631902979699ull);
    vlSelf->sdram__DOT__sdramsub1__DOT__sdram0__DOT____VdfgRegularize_hdef225f1_0_0 = 0;
    vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4059620564377516732ull);
    vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__count = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 295189195796910853ull);
    vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__buff = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13233855535018316245ull);
    vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__will_stop_burst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2875494947752385036ull);
    vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12627825636125775772ull);
    vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__cas_lat = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7860172469990530903ull);
    vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_len = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8176589004285577095ull);
    vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9147651697147079285ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows[__Vi0] = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 1875184392419361802ull);
    }
    vlSelf->__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__addr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14383383325698706985ull);
    vlSelf->sdram__DOT__sdramsub1__DOT__sdram1__DOT____VdfgRegularize_he2a3456f_0_0 = 0;
    vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__chose = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15846966142219997391ull);
    vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__comb_chose = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12676942403253152418ull);
    vlSelf->sdram__DOT__sdramsub2__DOT____VdfgRegularize_h0f7387ae_0_1 = 0;
    vlSelf->sdram__DOT__sdramsub2__DOT____VdfgRegularize_h0f7387ae_0_2 = 0;
    vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11259749837520969298ull);
    vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__count = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12083897000045771441ull);
    vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__buff = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 279442484164569718ull);
    vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__will_stop_burst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18302687678493682608ull);
    vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5588702726154357518ull);
    vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__cas_lat = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3804077892234648244ull);
    vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_len = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3422291418809150419ull);
    vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5040771712062062374ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows[__Vi0] = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11624577925048376231ull);
    }
    vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__addr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11530775132670965311ull);
    vlSelf->sdram__DOT__sdramsub2__DOT__sdram0__DOT____VdfgRegularize_h9fdf6016_0_0 = 0;
    vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2604977078841542482ull);
    vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__count = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16273365062746851309ull);
    vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__buff = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2184127657419434223ull);
    vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__will_stop_burst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14199274740638183070ull);
    vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5736191094435446676ull);
    vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__cas_lat = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6993249106804811616ull);
    vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_len = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16258396696405963694ull);
    vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16122661483011145513ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows[__Vi0] = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 1819652651218348500ull);
    }
    vlSelf->__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__addr = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 575607999235778322ull);
    vlSelf->sdram__DOT__sdramsub2__DOT__sdram1__DOT____VdfgRegularize_h3b7456c3_0_0 = 0;
    vlSelf->__VdfgRegularize_hbc52461a_1_0 = 0;
    vlSelf->__Vtask_sdram__DOT__sdramsub1__DOT__sdram0__DOT__sdram_read__4__data = 0;
    vlSelf->__Vtask_sdram__DOT__sdramsub1__DOT__sdram1__DOT__sdram_read__6__data = 0;
    vlSelf->__Vtask_sdram__DOT__sdramsub2__DOT__sdram0__DOT__sdram_read__8__data = 0;
    vlSelf->__Vtask_sdram__DOT__sdramsub2__DOT__sdram1__DOT__sdram_read__10__data = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx3 = 0;
    vlSelf->__Vtableidx4 = 0;
    vlSelf->__Vdly__flash__DOT__state = 0;
    vlSelf->__Vdly__flash__DOT__counter = 0;
    vlSelf->__Vdly__flash__DOT__cmd = 0;
    vlSelf->__Vdly__flash__DOT__addr = 0;
    vlSelf->__Vdly__flash__DOT__data = 0;
    vlSelf->__Vdly__bitrev__DOT__buff = 0;
}
