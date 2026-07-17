// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

VL_ATTR_COLD void VysyxSoCFull_CPU___ctor_var_reset(VysyxSoCFull_CPU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VysyxSoCFull_CPU___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__auto_master_out_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5646246975590507823ull);
    vlSelf->__PVT__auto_master_out_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8112877872945378105ull);
    vlSelf->__PVT__auto_master_out_awid = 0U;
    ;
    vlSelf->__PVT__auto_master_out_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2389034855436791809ull);
    vlSelf->__PVT__auto_master_out_awlen = 0U;
    ;
    vlSelf->__PVT__auto_master_out_awsize = 0U;
    ;
    vlSelf->__PVT__auto_master_out_awburst = 0U;
    ;
    vlSelf->__PVT__auto_master_out_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8497754894382295866ull);
    vlSelf->__PVT__auto_master_out_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16755301369052042709ull);
    vlSelf->__PVT__auto_master_out_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5268373995789541655ull);
    vlSelf->__PVT__auto_master_out_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6054157423902123403ull);
    vlSelf->__PVT__auto_master_out_wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14776513806254054602ull);
    vlSelf->__PVT__auto_master_out_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16799307026511407506ull);
    vlSelf->__PVT__auto_master_out_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3202317681591247351ull);
    vlSelf->__PVT__auto_master_out_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17064140345903643983ull);
    vlSelf->__PVT__auto_master_out_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11107703593734887074ull);
    vlSelf->__PVT__auto_master_out_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3638060452103501487ull);
    vlSelf->__PVT__auto_master_out_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10198388035212014911ull);
    vlSelf->__PVT__auto_master_out_arid = 0U;
    ;
    vlSelf->__PVT__auto_master_out_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5683333912538566443ull);
    vlSelf->__PVT__auto_master_out_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18117923678959968372ull);
    vlSelf->__PVT__auto_master_out_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7893003247154207139ull);
    vlSelf->__PVT__auto_master_out_arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2991130791682750970ull);
    vlSelf->__PVT__auto_master_out_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5014772053013459997ull);
    vlSelf->__PVT__auto_master_out_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13665788691562113666ull);
    vlSelf->__PVT__auto_master_out_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13334335429485213630ull);
    vlSelf->__PVT__auto_master_out_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4676531448004938457ull);
    vlSelf->__PVT__auto_master_out_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3514720317120548304ull);
    vlSelf->__PVT__auto_master_out_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14184671258469373799ull);
}
