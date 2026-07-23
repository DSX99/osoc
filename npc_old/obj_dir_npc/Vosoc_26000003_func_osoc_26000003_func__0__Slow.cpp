// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vosoc_26000003_func.h for the primary calling header

#include "Vosoc_26000003_func__pch.h"

VL_ATTR_COLD void Vosoc_26000003_func_osoc_26000003_func___stl_sequent__TOP__osoc_26000003_func__0(Vosoc_26000003_func_osoc_26000003_func* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vosoc_26000003_func_osoc_26000003_func___stl_sequent__TOP__osoc_26000003_func__0\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__addr_increment 
        = ((IData)(1U) << (IData)(vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__r_size_reg));
    if ((2U & (IData)(vlSelfRef.__PVT__trans))) {
        vlSelfRef.__PVT__core_rresp = 0U;
        vlSelfRef.__PVT__core_rdata = vlSelfRef.__PVT__crdata;
        vlSelfRef.__PVT__core_rvalid = vlSelfRef.__PVT__crvalid;
    } else {
        vlSelfRef.__PVT__core_rresp = vlSelfRef.__PVT__io_master_rresp;
        vlSelfRef.__PVT__core_rdata = vlSelfRef.__PVT__io_master_rdata;
        vlSelfRef.__PVT__core_rvalid = vlSelfRef.__PVT__io_master_rvalid;
    }
}

VL_ATTR_COLD void Vosoc_26000003_func_osoc_26000003_func___ctor_var_reset(Vosoc_26000003_func_osoc_26000003_func* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vosoc_26000003_func_osoc_26000003_func___ctor_var_reset\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__core_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18080118302408125851ull);
    vlSelf->__PVT__core_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10619207881057690763ull);
    vlSelf->__PVT__core_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4437828354700778466ull);
    vlSelf->__PVT__core_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11577828483750751981ull);
    vlSelf->__PVT__core_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7465139579405556872ull);
    vlSelf->__PVT__core_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11268348716863338339ull);
    vlSelf->__PVT__core_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17770432059969278983ull);
    vlSelf->__PVT__io_master_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1254038570903178483ull);
    vlSelf->__PVT__io_master_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15918341228068111945ull);
    vlSelf->__PVT__io_master_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1901748201038864800ull);
    vlSelf->__PVT__io_master_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10619170216674498609ull);
    vlSelf->__PVT__io_master_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14479403608764655851ull);
    vlSelf->__PVT__io_master_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 252024972192926592ull);
    vlSelf->__PVT__io_master_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1062445100397978765ull);
    vlSelf->__PVT__io_master_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7705699152724094327ull);
    vlSelf->__PVT__io_master_arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12197991585860830104ull);
    vlSelf->__PVT__io_master_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 189821581177370283ull);
    vlSelf->__PVT__io_master_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4643816389357758479ull);
    vlSelf->__PVT__io_master_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17575739218363420612ull);
    vlSelf->__PVT__io_master_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13565575050082382344ull);
    vlSelf->__PVT__io_master_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18248460336661176801ull);
    vlSelf->__PVT__io_master_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10731670764913458081ull);
    vlSelf->__PVT__crdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17927932929912555336ull);
    vlSelf->__PVT__caddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1130972979955015548ull);
    vlSelf->__PVT__crvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 847591021498092698ull);
    vlSelf->__PVT__cawvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6622422924559443519ull);
    vlSelf->__PVT__carvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9608625259224865541ull);
    vlSelf->__PVT__match_aw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1788252777389368285ull);
    vlSelf->__PVT__match_ar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6325071766536394058ull);
    vlSelf->__PVT__trans = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1909746036518947576ull);
    vlSelf->__PVT__CLINT_mod__DOT__divisor = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6588282828465286366ull);
    vlSelf->__PVT__CLINT_mod__DOT__mtime = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18248436977652874710ull);
    vlSelf->__PVT__CLINT_mod__DOT__buff = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5723302894740306796ull);
    vlSelf->__PVT__CLINT_mod__DOT__clint_r = 0;
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__slave = 0;
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__r_addr_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17940635981788234312ull);
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__r_len_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11525570640863253347ull);
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__r_size_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13603339320521055303ull);
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__addr_increment = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13562045441042680760ull);
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__slave_w = 0;
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__done_aw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9073371225346102364ull);
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__done_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7403064219717101431ull);
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4002819033687668826ull);
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__aw = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10150655162570726797ull);
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6511546567341204472ull);
}
