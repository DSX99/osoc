// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vosoc_26000003_func.h for the primary calling header

#include "Vosoc_26000003_func__pch.h"

extern "C" int memread(int addr);

void Vosoc_26000003_func_osoc_26000003_func____Vdpiimwrap_axi_slave_lsu_mod__DOT__memread_TOP__osoc_26000003_func(IData/*31:0*/ addr, IData/*31:0*/ &memread__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vosoc_26000003_func_osoc_26000003_func____Vdpiimwrap_axi_slave_lsu_mod__DOT__memread_TOP__osoc_26000003_func\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int memread__Vfuncrtn__Vcvt;
    memread__Vfuncrtn__Vcvt = memread(addr__Vcvt);
    memread__Vfuncrtn = (memread__Vfuncrtn__Vcvt);
}

extern "C" void memwrite(int addr, int data, int idk);

void Vosoc_26000003_func_osoc_26000003_func____Vdpiimwrap_axi_slave_lsu_mod__DOT__memwrite_TOP__osoc_26000003_func(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ idk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vosoc_26000003_func_osoc_26000003_func____Vdpiimwrap_axi_slave_lsu_mod__DOT__memwrite_TOP__osoc_26000003_func\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    data__Vcvt = data;
    int idk__Vcvt;
    idk__Vcvt = idk;
    memwrite(addr__Vcvt, data__Vcvt, idk__Vcvt);
}

void Vosoc_26000003_func_osoc_26000003_func___ico_sequent__TOP__osoc_26000003_func__0(Vosoc_26000003_func_osoc_26000003_func* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vosoc_26000003_func_osoc_26000003_func___ico_sequent__TOP__osoc_26000003_func__0\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__match_aw = (1U & ((0x0200U == 
                                        (vlSymsp->TOP__osoc_26000003_func__core.__PVT__awaddr_lsu 
                                         >> 0x00000010U)) 
                                       | (IData)(vlSelfRef.__PVT__trans)));
    vlSelfRef.__PVT__match_ar = (IData)((((IData)(vlSelfRef.__PVT__trans) 
                                          >> 1U) | 
                                         (0x0200U == 
                                          (vlSymsp->TOP__osoc_26000003_func__core.__PVT__io_master_araddr 
                                           >> 0x00000010U))));
    vlSelfRef.__PVT__io_master_awvalid = ((~ (IData)(vlSelfRef.__PVT__match_aw)) 
                                          & (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__awvalid_lsu));
    vlSelfRef.__PVT__io_master_wvalid = ((~ (IData)(vlSelfRef.__PVT__match_aw)) 
                                         & (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__wvalid_lsu));
    vlSelfRef.__PVT__core_bvalid = ((IData)(vlSelfRef.__PVT__match_aw) 
                                    | (IData)(vlSelfRef.__PVT__io_master_bvalid));
    if (vlSelfRef.__PVT__match_aw) {
        vlSelfRef.__PVT__cawvalid = vlSymsp->TOP__osoc_26000003_func__core.__PVT__awvalid_lsu;
        vlSelfRef.__PVT__core_wready = ((IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__wvalid_lsu) 
                                        & (IData)(vlSelfRef.__PVT__match_aw));
        vlSelfRef.__PVT__core_awready = vlSelfRef.__PVT__cawvalid;
    } else {
        vlSelfRef.__PVT__cawvalid = 0U;
        vlSelfRef.__PVT__core_wready = vlSelfRef.__PVT__io_master_wready;
        vlSelfRef.__PVT__core_awready = vlSelfRef.__PVT__io_master_awready;
    }
    if (vlSelfRef.__PVT__match_ar) {
        vlSelfRef.__PVT__carvalid = vlSymsp->TOP__osoc_26000003_func__core.__PVT__io_master_arvalid;
        vlSelfRef.__PVT__io_master_araddr = 0U;
        vlSelfRef.__PVT__io_master_arlen = 0U;
        vlSelfRef.__PVT__caddr = vlSymsp->TOP__osoc_26000003_func__core.__PVT__io_master_araddr;
        vlSelfRef.__PVT__core_arready = vlSelfRef.__PVT__carvalid;
    } else {
        vlSelfRef.__PVT__carvalid = 0U;
        vlSelfRef.__PVT__io_master_araddr = vlSymsp->TOP__osoc_26000003_func__core.__PVT__io_master_araddr;
        vlSelfRef.__PVT__io_master_arlen = vlSymsp->TOP__osoc_26000003_func__core.__PVT__io_master_arlen;
        vlSelfRef.__PVT__caddr = vlSymsp->TOP__osoc_26000003_func__core.__PVT__awaddr_lsu;
        vlSelfRef.__PVT__core_arready = vlSelfRef.__PVT__io_master_arready;
    }
}

void Vosoc_26000003_func_osoc_26000003_func___nba_sequent__TOP__osoc_26000003_func__0(Vosoc_26000003_func_osoc_26000003_func* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vosoc_26000003_func_osoc_26000003_func___nba_sequent__TOP__osoc_26000003_func__0\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_axi_slave_lsu_mod__DOT__memread__0__Vfuncout;
    __Vfunc_axi_slave_lsu_mod__DOT__memread__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_axi_slave_lsu_mod__DOT__memread__1__Vfuncout;
    __Vfunc_axi_slave_lsu_mod__DOT__memread__1__Vfuncout = 0;
    CData/*1:0*/ __Vdly__trans;
    __Vdly__trans = 0;
    QData/*63:0*/ __Vdly__CLINT_mod__DOT__mtime;
    __Vdly__CLINT_mod__DOT__mtime = 0;
    IData/*31:0*/ __Vdly__CLINT_mod__DOT__clint_r;
    __Vdly__CLINT_mod__DOT__clint_r = 0;
    SData/*11:0*/ __Vdly__CLINT_mod__DOT__divisor;
    __Vdly__CLINT_mod__DOT__divisor = 0;
    CData/*0:0*/ __Vdly__crvalid;
    __Vdly__crvalid = 0;
    IData/*31:0*/ __Vdly__CLINT_mod__DOT__buff;
    __Vdly__CLINT_mod__DOT__buff = 0;
    IData/*31:0*/ __Vdly__axi_slave_lsu_mod__DOT__slave;
    __Vdly__axi_slave_lsu_mod__DOT__slave = 0;
    CData/*0:0*/ __Vdly__io_master_arready;
    __Vdly__io_master_arready = 0;
    CData/*0:0*/ __Vdly__io_master_rvalid;
    __Vdly__io_master_rvalid = 0;
    IData/*31:0*/ __Vdly__axi_slave_lsu_mod__DOT__r_addr_reg;
    __Vdly__axi_slave_lsu_mod__DOT__r_addr_reg = 0;
    CData/*7:0*/ __Vdly__axi_slave_lsu_mod__DOT__r_len_reg;
    __Vdly__axi_slave_lsu_mod__DOT__r_len_reg = 0;
    IData/*31:0*/ __Vdly__axi_slave_lsu_mod__DOT__slave_w;
    __Vdly__axi_slave_lsu_mod__DOT__slave_w = 0;
    IData/*31:0*/ __Vdly__axi_slave_lsu_mod__DOT__aw;
    __Vdly__axi_slave_lsu_mod__DOT__aw = 0;
    IData/*31:0*/ __Vdly__axi_slave_lsu_mod__DOT__w;
    __Vdly__axi_slave_lsu_mod__DOT__w = 0;
    CData/*3:0*/ __Vdly__axi_slave_lsu_mod__DOT__mask;
    __Vdly__axi_slave_lsu_mod__DOT__mask = 0;
    CData/*0:0*/ __Vdly__axi_slave_lsu_mod__DOT__done_aw;
    __Vdly__axi_slave_lsu_mod__DOT__done_aw = 0;
    CData/*0:0*/ __Vdly__axi_slave_lsu_mod__DOT__done_w;
    __Vdly__axi_slave_lsu_mod__DOT__done_w = 0;
    // Body
    __Vdly__CLINT_mod__DOT__mtime = vlSelfRef.__PVT__CLINT_mod__DOT__mtime;
    __Vdly__CLINT_mod__DOT__clint_r = vlSelfRef.__PVT__CLINT_mod__DOT__clint_r;
    __Vdly__CLINT_mod__DOT__divisor = vlSelfRef.__PVT__CLINT_mod__DOT__divisor;
    __Vdly__CLINT_mod__DOT__buff = vlSelfRef.__PVT__CLINT_mod__DOT__buff;
    __Vdly__crvalid = vlSelfRef.__PVT__crvalid;
    __Vdly__axi_slave_lsu_mod__DOT__slave = vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__slave;
    __Vdly__axi_slave_lsu_mod__DOT__r_addr_reg = vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__r_addr_reg;
    __Vdly__axi_slave_lsu_mod__DOT__r_len_reg = vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__r_len_reg;
    __Vdly__io_master_arready = vlSelfRef.__PVT__io_master_arready;
    __Vdly__io_master_rvalid = vlSelfRef.__PVT__io_master_rvalid;
    __Vdly__trans = vlSelfRef.__PVT__trans;
    __Vdly__axi_slave_lsu_mod__DOT__slave_w = vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__slave_w;
    __Vdly__axi_slave_lsu_mod__DOT__aw = vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__aw;
    __Vdly__axi_slave_lsu_mod__DOT__w = vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__w;
    __Vdly__axi_slave_lsu_mod__DOT__mask = vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__mask;
    __Vdly__axi_slave_lsu_mod__DOT__done_aw = vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__done_aw;
    __Vdly__axi_slave_lsu_mod__DOT__done_w = vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__done_w;
    if (vlSymsp->TOP.reset) {
        __Vdly__trans = 0U;
        vlSelfRef.__PVT__crdata = 0U;
        __Vdly__CLINT_mod__DOT__mtime = 0ULL;
        __Vdly__CLINT_mod__DOT__clint_r = 0U;
        __Vdly__CLINT_mod__DOT__divisor = 0U;
        __Vdly__crvalid = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__match_ar) & (IData)(vlSelfRef.__PVT__carvalid))) {
            __Vdly__trans = 2U;
        }
        if (((IData)(vlSelfRef.__PVT__match_aw) & (IData)(vlSelfRef.__PVT__cawvalid))) {
            __Vdly__trans = 1U;
        }
        if (((((IData)(vlSelfRef.__PVT__trans) >> 1U) 
              & (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__io_master_rready)) 
             & (IData)(vlSelfRef.__PVT__crvalid))) {
            __Vdly__trans = 0U;
        }
        if ((((IData)(vlSelfRef.__PVT__trans) & (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__bready_lsu)) 
             & (IData)(vlSelfRef.__PVT__core_bvalid))) {
            __Vdly__trans = 0U;
        }
        if ((1U == (IData)(vlSelfRef.__PVT__CLINT_mod__DOT__divisor))) {
            __Vdly__CLINT_mod__DOT__divisor = 1U;
            __Vdly__CLINT_mod__DOT__mtime = (1ULL + vlSelfRef.__PVT__CLINT_mod__DOT__mtime);
        } else {
            __Vdly__CLINT_mod__DOT__divisor = (0x00000fffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__CLINT_mod__DOT__divisor)));
        }
        if ((0U == vlSelfRef.__PVT__CLINT_mod__DOT__clint_r)) {
            if (vlSelfRef.__PVT__carvalid) {
                __Vdly__CLINT_mod__DOT__clint_r = 1U;
                if ((0xbff8U == (0x0000ffffU & vlSelfRef.__PVT__caddr))) {
                    vlSelfRef.__PVT__crdata = (IData)(vlSelfRef.__PVT__CLINT_mod__DOT__mtime);
                    __Vdly__CLINT_mod__DOT__buff = (IData)(
                                                           (vlSelfRef.__PVT__CLINT_mod__DOT__mtime 
                                                            >> 0x20U));
                } else if ((0xbffcU == (0x0000ffffU 
                                        & vlSelfRef.__PVT__caddr))) {
                    vlSelfRef.__PVT__crdata = vlSelfRef.__PVT__CLINT_mod__DOT__buff;
                }
                __Vdly__crvalid = 1U;
            }
        } else if ((1U == vlSelfRef.__PVT__CLINT_mod__DOT__clint_r)) {
            if (((IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__io_master_rready) 
                 & (IData)(vlSelfRef.__PVT__crvalid))) {
                __Vdly__CLINT_mod__DOT__clint_r = 0U;
                __Vdly__crvalid = 0U;
            }
        }
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__axi_slave_lsu_mod__DOT__slave_w = 0U;
        vlSelfRef.__PVT__io_master_awready = 1U;
        vlSelfRef.__PVT__io_master_wready = 1U;
        __Vdly__axi_slave_lsu_mod__DOT__aw = 0U;
        __Vdly__axi_slave_lsu_mod__DOT__w = 0U;
        __Vdly__axi_slave_lsu_mod__DOT__mask = 0U;
        __Vdly__axi_slave_lsu_mod__DOT__done_aw = 0U;
        __Vdly__axi_slave_lsu_mod__DOT__done_w = 0U;
        vlSelfRef.__PVT__io_master_bvalid = 0U;
        vlSelfRef.__PVT__io_master_bresp = 0U;
    } else if ((0U == vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__slave_w)) {
        if ((((IData)(vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__done_aw) 
              | (IData)(vlSelfRef.__PVT__io_master_awvalid)) 
             & ((IData)(vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__done_w) 
                | (IData)(vlSelfRef.__PVT__io_master_wvalid)))) {
            __Vdly__axi_slave_lsu_mod__DOT__slave_w = 1U;
        }
        if (vlSelfRef.__PVT__io_master_awvalid) {
            __Vdly__axi_slave_lsu_mod__DOT__aw = ((IData)(vlSelfRef.__PVT__match_aw)
                                                   ? 0U
                                                   : vlSymsp->TOP__osoc_26000003_func__core.__PVT__awaddr_lsu);
            __Vdly__axi_slave_lsu_mod__DOT__done_aw = 1U;
        }
        if (vlSelfRef.__PVT__io_master_wvalid) {
            __Vdly__axi_slave_lsu_mod__DOT__w = ((IData)(vlSelfRef.__PVT__match_aw)
                                                  ? 0U
                                                  : vlSymsp->TOP__osoc_26000003_func__core.__PVT__wdata_lsu);
            __Vdly__axi_slave_lsu_mod__DOT__mask = 
                ((IData)(vlSelfRef.__PVT__match_aw)
                  ? 0U : (0x0000000fU & ((0U == (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))
                                          ? ((IData)(1U) 
                                             << (3U 
                                                 & vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out))
                                          : ((1U == (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))
                                              ? ((IData)(3U) 
                                                 << 
                                                 (3U 
                                                  & vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_alu_out))
                                              : ((2U 
                                                  == (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__ex_ls_pipeline_mod__DOT__ex_ls_bus_lsu_oper))
                                                  ? 0x0fU
                                                  : 0U)))));
            __Vdly__axi_slave_lsu_mod__DOT__done_w = 1U;
        }
    } else if ((1U == vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__slave_w)) {
        Vosoc_26000003_func_osoc_26000003_func____Vdpiimwrap_axi_slave_lsu_mod__DOT__memwrite_TOP__osoc_26000003_func(vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__aw, vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__w, (IData)(vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__mask));
        __Vdly__axi_slave_lsu_mod__DOT__done_aw = 0U;
        __Vdly__axi_slave_lsu_mod__DOT__done_w = 0U;
        vlSelfRef.__PVT__io_master_bvalid = 1U;
        __Vdly__axi_slave_lsu_mod__DOT__slave_w = 2U;
    } else if ((2U == vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__slave_w)) {
        if (((~ (IData)(vlSelfRef.__PVT__match_aw)) 
             & (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__bready_lsu))) {
            vlSelfRef.__PVT__io_master_bvalid = 0U;
            vlSelfRef.__PVT__io_master_bresp = 0U;
            __Vdly__axi_slave_lsu_mod__DOT__slave_w = 0U;
        }
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__axi_slave_lsu_mod__DOT__slave = 0U;
        __Vdly__io_master_arready = 1U;
        vlSelfRef.__PVT__io_master_rdata = 0U;
        vlSelfRef.__PVT__io_master_rresp = 0U;
        __Vdly__io_master_rvalid = 0U;
        vlSelfRef.__PVT__io_master_rlast = 0U;
        __Vdly__axi_slave_lsu_mod__DOT__r_addr_reg = 0U;
        __Vdly__axi_slave_lsu_mod__DOT__r_len_reg = 0U;
        vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__r_size_reg = 0U;
    } else if ((0U == vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__slave)) {
        vlSelfRef.__PVT__io_master_rlast = 0U;
        __Vdly__io_master_rvalid = 0U;
        if ((((~ (IData)(vlSelfRef.__PVT__match_ar)) 
              & (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__io_master_arvalid)) 
             & (IData)(vlSelfRef.__PVT__io_master_arready))) {
            Vosoc_26000003_func_osoc_26000003_func____Vdpiimwrap_axi_slave_lsu_mod__DOT__memread_TOP__osoc_26000003_func(vlSelfRef.__PVT__io_master_araddr, __Vfunc_axi_slave_lsu_mod__DOT__memread__0__Vfuncout);
            __Vdly__axi_slave_lsu_mod__DOT__r_addr_reg 
                = vlSelfRef.__PVT__io_master_araddr;
            __Vdly__axi_slave_lsu_mod__DOT__r_len_reg 
                = vlSelfRef.__PVT__io_master_arlen;
            vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__r_size_reg 
                = ((IData)(vlSelfRef.__PVT__match_ar)
                    ? 0U : (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__io_master_arsize));
            vlSelfRef.__PVT__io_master_rdata = __Vfunc_axi_slave_lsu_mod__DOT__memread__0__Vfuncout;
            __Vdly__io_master_rvalid = 1U;
            __Vdly__io_master_arready = 0U;
            if ((0U == (IData)(vlSelfRef.__PVT__io_master_arlen))) {
                vlSelfRef.__PVT__io_master_rlast = 1U;
            }
            __Vdly__axi_slave_lsu_mod__DOT__slave = 1U;
        } else {
            __Vdly__io_master_arready = 1U;
        }
    } else if ((1U == vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__slave)) {
        if (((IData)(vlSelfRef.__PVT__io_master_rvalid) 
             & ((~ ((IData)(vlSelfRef.__PVT__trans) 
                    >> 1U)) & (IData)(vlSymsp->TOP__osoc_26000003_func__core.__PVT__io_master_rready)))) {
            if ((0U == (IData)(vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__r_len_reg))) {
                __Vdly__io_master_rvalid = 0U;
                vlSelfRef.__PVT__io_master_rlast = 0U;
                __Vdly__io_master_arready = 1U;
                __Vdly__axi_slave_lsu_mod__DOT__slave = 0U;
            } else {
                __Vdly__axi_slave_lsu_mod__DOT__r_len_reg 
                    = (0x000000ffU & ((IData)(vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__r_len_reg) 
                                      - (IData)(1U)));
                __Vdly__axi_slave_lsu_mod__DOT__r_addr_reg 
                    = (vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__r_addr_reg 
                       + vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__addr_increment);
                Vosoc_26000003_func_osoc_26000003_func____Vdpiimwrap_axi_slave_lsu_mod__DOT__memread_TOP__osoc_26000003_func(
                                                                                (vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__r_addr_reg 
                                                                                + vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__addr_increment), __Vfunc_axi_slave_lsu_mod__DOT__memread__1__Vfuncout);
                vlSelfRef.__PVT__io_master_rdata = __Vfunc_axi_slave_lsu_mod__DOT__memread__1__Vfuncout;
                __Vdly__io_master_rvalid = 1U;
                if ((1U == (IData)(vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__r_len_reg))) {
                    vlSelfRef.__PVT__io_master_rlast = 1U;
                }
            }
        }
    } else {
        __Vdly__axi_slave_lsu_mod__DOT__slave = 0U;
    }
    vlSelfRef.__PVT__CLINT_mod__DOT__mtime = __Vdly__CLINT_mod__DOT__mtime;
    vlSelfRef.__PVT__CLINT_mod__DOT__clint_r = __Vdly__CLINT_mod__DOT__clint_r;
    vlSelfRef.__PVT__CLINT_mod__DOT__divisor = __Vdly__CLINT_mod__DOT__divisor;
    vlSelfRef.__PVT__CLINT_mod__DOT__buff = __Vdly__CLINT_mod__DOT__buff;
    vlSelfRef.__PVT__crvalid = __Vdly__crvalid;
    vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__slave_w 
        = __Vdly__axi_slave_lsu_mod__DOT__slave_w;
    vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__aw = __Vdly__axi_slave_lsu_mod__DOT__aw;
    vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__w = __Vdly__axi_slave_lsu_mod__DOT__w;
    vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__mask = __Vdly__axi_slave_lsu_mod__DOT__mask;
    vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__done_aw 
        = __Vdly__axi_slave_lsu_mod__DOT__done_aw;
    vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__done_w 
        = __Vdly__axi_slave_lsu_mod__DOT__done_w;
    vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__slave 
        = __Vdly__axi_slave_lsu_mod__DOT__slave;
    vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__r_addr_reg 
        = __Vdly__axi_slave_lsu_mod__DOT__r_addr_reg;
    vlSelfRef.__PVT__axi_slave_lsu_mod__DOT__r_len_reg 
        = __Vdly__axi_slave_lsu_mod__DOT__r_len_reg;
    vlSelfRef.__PVT__io_master_arready = __Vdly__io_master_arready;
    vlSelfRef.__PVT__io_master_rvalid = __Vdly__io_master_rvalid;
    vlSelfRef.__PVT__trans = __Vdly__trans;
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
