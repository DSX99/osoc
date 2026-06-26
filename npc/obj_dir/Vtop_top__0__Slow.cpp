// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop_top___eval_initial__TOP__top(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___eval_initial__TOP__top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pc = 0x80000000U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[0U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[1U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[2U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[3U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[4U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[5U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[6U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[7U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[8U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[9U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[10U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[11U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[12U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[13U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[14U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[15U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[16U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[17U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[18U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[19U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[20U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[21U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[22U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[23U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[24U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[25U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[26U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[27U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[28U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[29U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[30U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[31U] = 0U;
    vlSelfRef.__PVT__csr_mod__DOT__regs[2U] = 0x00001800U;
}

VL_ATTR_COLD void Vtop_top___ctor_var_reset(Vtop_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4211327832146562899ull);
    vlSelf->opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17409787017080135397ull);
    vlSelf->reg_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4430225706042301878ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->__PVT__if_id_bus, __VscopeHash, 4165204006372198396ull);
    vlSelf->__PVT__if_id_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2712103756575143212ull);
    VL_SCOPED_RAND_RESET_W(200, vlSelf->__PVT__id_ex_bus_decoded, __VscopeHash, 13052232129216562696ull);
    VL_SCOPED_RAND_RESET_W(142, vlSelf->__PVT__ex_ls_bus_alu, __VscopeHash, 15589358827054334394ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->__PVT__ls_wb_bus, __VscopeHash, 14380409961569952781ull);
    vlSelf->__PVT__csr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15513057494073897048ull);
    vlSelf->__PVT__araddr_lsu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5416967447709139ull);
    vlSelf->__PVT__arvalid_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5374114079387349993ull);
    vlSelf->__PVT__arready_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13628591287412370296ull);
    vlSelf->__PVT__rready_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15443892785955015948ull);
    vlSelf->__PVT__awaddr_lsu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14890680784206275148ull);
    vlSelf->__PVT__wdata_lsu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4165621799402445171ull);
    vlSelf->__PVT__awvalid_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15576964305551330725ull);
    vlSelf->__PVT__wvalid_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10942038539835955859ull);
    vlSelf->__PVT__bready_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 502261188337401444ull);
    vlSelf->__PVT__araddr_ifu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17403733745108566750ull);
    vlSelf->__PVT__arvalid_ifu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6187099397844950305ull);
    vlSelf->__PVT__rready_ifu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7080648654013881954ull);
    vlSelf->__PVT__rdata_arbiter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5937642183362379707ull);
    vlSelf->__PVT__rresp_arbiter = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8705138806693364806ull);
    vlSelf->__PVT__arready_arbiter = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 635676482945031349ull);
    vlSelf->__PVT__rvalid_arbiter = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18033155327291958703ull);
    vlSelf->__PVT__wstrb_arbiter = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1831067032330678427ull);
    vlSelf->__PVT__bresp_arbiter = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13995451824727468739ull);
    vlSelf->__PVT__awready_arbiter = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16730814839631524371ull);
    vlSelf->__PVT__wready_arbiter = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3395782134897872593ull);
    vlSelf->__PVT__bvalid_arbiter = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4083749381198651581ull);
    vlSelf->__PVT__ifu_mod__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9786868741865089741ull);
    vlSelf->__PVT__ifu_mod__DOT__ifu = 0;
    vlSelf->__PVT__decode_mod__DOT__imm_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17728463912631228713ull);
    vlSelf->decode_mod__DOT____VdfgExtracted_h3b2fb429__0 = 0;
    vlSelf->decode_mod__DOT____VdfgRegularize_h901acc23_0_2 = 0;
    VL_SCOPED_RAND_RESET_W(200, vlSelf->__PVT__alu_mod__DOT__bus_in, __VscopeHash, 9512658023472319657ull);
    vlSelf->__PVT__alu_mod__DOT__ready_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11735168189738799635ull);
    vlSelf->__PVT__alu_mod__DOT__val1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3618980885417066799ull);
    vlSelf->__PVT__alu_mod__DOT__val2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5531290321701216620ull);
    vlSelf->__PVT__csr_mod__DOT__data_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12700116229890022093ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__csr_mod__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12209870551186757864ull);
    }
    vlSelf->__PVT__csr_mod__DOT__working_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11201873268134957014ull);
    VL_SCOPED_RAND_RESET_W(142, vlSelf->__PVT__lsu_mod__DOT__bus_in, __VscopeHash, 7939752121783657875ull);
    vlSelf->__PVT__lsu_mod__DOT__valid_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17937545675397858093ull);
    vlSelf->__PVT__lsu_mod__DOT__lsu_r = 0;
    vlSelf->__PVT__lsu_mod__DOT__done_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7759797624961867984ull);
    vlSelf->__PVT__lsu_mod__DOT__done_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16734576510063392104ull);
    vlSelf->__PVT__lsu_mod__DOT__done_aw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7999347421721851315ull);
    vlSelf->__PVT__lsu_mod__DOT__done_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9089321588137706110ull);
    vlSelf->__PVT__lsu_mod__DOT__lsu_w = 0;
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__slave = 0;
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__slave_w = 0;
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__done_aw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9073371225346102364ull);
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__done_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7403064219717101431ull);
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4002819033687668826ull);
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__aw = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10150655162570726797ull);
    vlSelf->__PVT__axi_slave_lsu_mod__DOT__mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6511546567341204472ull);
    vlSelf->__PVT__arbiter_mod__DOT__lsu_transfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11264025650630922834ull);
    vlSelf->__PVT__arbiter_mod__DOT__ifu_transfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3481642720368183497ull);
    VL_ZERO_RESET_W(136, vlSelf->__Vdly__ls_wb_bus);
    VL_ZERO_RESET_W(136, vlSelf->__VdlyMask__ls_wb_bus);
}
