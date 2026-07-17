// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

extern "C" void psram_write(int addr, int data, int half);

void VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_psram__DOT__psram_write_TOP__ysyxSoCFull(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ half) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_psram__DOT__psram_write_TOP__ysyxSoCFull\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    data__Vcvt = data;
    int half__Vcvt;
    half__Vcvt = half;
    psram_write(addr__Vcvt, data__Vcvt, half__Vcvt);
}

extern "C" void psram_read(int addr, int* data);

void VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_psram__DOT__psram_read_TOP__ysyxSoCFull(IData/*31:0*/ addr, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_psram__DOT__psram_read_TOP__ysyxSoCFull\n"); );
    // Body
    data = 0U;
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    psram_read(addr__Vcvt, &data__Vcvt);
    data = (data__Vcvt);
}

extern "C" void sdram_write(int addr, int data, int mask);

void VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_sdram__DOT__sdramsub1__DOT__sdram0__DOT__sdram_write_TOP__ysyxSoCFull(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ mask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_sdram__DOT__sdramsub1__DOT__sdram0__DOT__sdram_write_TOP__ysyxSoCFull\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    data__Vcvt = data;
    int mask__Vcvt;
    mask__Vcvt = mask;
    sdram_write(addr__Vcvt, data__Vcvt, mask__Vcvt);
}

extern "C" void sdram_read(int addr, int* data);

void VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_sdram__DOT__sdramsub1__DOT__sdram0__DOT__sdram_read_TOP__ysyxSoCFull(IData/*31:0*/ addr, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_sdram__DOT__sdramsub1__DOT__sdram0__DOT__sdram_read_TOP__ysyxSoCFull\n"); );
    // Body
    data = 0U;
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    sdram_read(addr__Vcvt, &data__Vcvt);
    data = (data__Vcvt);
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__flash__DOT__counter = vlSelfRef.__PVT__flash__DOT__counter;
    vlSelfRef.__Vdly__flash__DOT__cmd = vlSelfRef.__PVT__flash__DOT__cmd;
    vlSelfRef.__Vdly__flash__DOT__state = vlSelfRef.__PVT__flash__DOT__state;
    vlSelfRef.__Vdly__flash__DOT__data = vlSelfRef.__PVT__flash__DOT__data;
    vlSelfRef.__Vdly__flash__DOT__addr = vlSelfRef.__PVT__flash__DOT__addr;
    if ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))) {
        vlSelfRef.__Vdly__flash__DOT__counter = 0U;
        vlSelfRef.__Vdly__flash__DOT__cmd = 0U;
    } else if ((0U == (IData)(vlSelfRef.__PVT__flash__DOT__state))) {
        vlSelfRef.__Vdly__flash__DOT__counter = (0x000000ffU 
                                                 & ((7U 
                                                     > (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                     : 0U));
        vlSelfRef.__Vdly__flash__DOT__cmd = ((0x000000feU 
                                              & ((IData)(vlSelfRef.__PVT__flash__DOT__cmd) 
                                                 << 1U)) 
                                             | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi));
    } else {
        vlSelfRef.__Vdly__flash__DOT__counter = (0x000000ffU 
                                                 & ((1U 
                                                     == (IData)(vlSelfRef.__PVT__flash__DOT__state))
                                                     ? 
                                                    ((0x17U 
                                                      > (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                      : 0U)
                                                     : 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__flash__DOT__counter))));
    }
    if ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))) {
        vlSelfRef.__Vdly__flash__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelfRef.__PVT__flash__DOT__state))) {
        vlSelfRef.__Vdly__flash__DOT__state = ((7U 
                                                == (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                ? 1U
                                                : (IData)(vlSelfRef.__PVT__flash__DOT__state));
    } else if ((1U == (IData)(vlSelfRef.__PVT__flash__DOT__state))) {
        vlSelfRef.__Vdly__flash__DOT__state = ((3U 
                                                != (IData)(vlSelfRef.__PVT__flash__DOT__cmd))
                                                ? 3U
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                    ? 2U
                                                    : (IData)(vlSelfRef.__PVT__flash__DOT__state)));
    } else if (VL_LIKELY(((2U == (IData)(vlSelfRef.__PVT__flash__DOT__state))))) {
        vlSelfRef.__Vdly__flash__DOT__state = vlSelfRef.__PVT__flash__DOT__state;
    } else {
        vlSelfRef.__Vdly__flash__DOT__state = vlSelfRef.__PVT__flash__DOT__state;
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Unsupported command `%xh`, only support `03h` read command\n",1
                      , '#',8,vlSelfRef.__PVT__flash__DOT__cmd);
        VL_FFLUSH_I(0x80000002U);
        VL_WRITEF_NX("[%0t] %%Fatal: flash.v:44: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.flash", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/flash/flash.v", 44, "", false);
    }
    if ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))) {
        vlSelfRef.__Vdly__flash__DOT__data = 0U;
        vlSelfRef.__Vdly__flash__DOT__addr = 0U;
    } else {
        if ((2U == (IData)(vlSelfRef.__PVT__flash__DOT__state))) {
            vlSelfRef.__Vdly__flash__DOT__data = ((
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__flash__DOT__counter))
                                                    ? vlSelfRef.__PVT__flash__DOT__data_bswap
                                                    : vlSelfRef.__PVT__flash__DOT__data) 
                                                  << 1U);
        }
        if (((1U == (IData)(vlSelfRef.__PVT__flash__DOT__state)) 
             & (0x17U > (IData)(vlSelfRef.__PVT__flash__DOT__counter)))) {
            vlSelfRef.__Vdly__flash__DOT__addr = ((0x00fffffeU 
                                                   & (vlSelfRef.__PVT__flash__DOT__addr 
                                                      << 1U)) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi));
        }
    }
}

void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data);

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_flash_read__0__data;
    __Vtask_flash_read__0__data = 0;
    // Body
    vlSelfRef.__Vdly__bitrev__DOT__buff = vlSelfRef.__PVT__bitrev__DOT__buff;
    if (((1U == (IData)(vlSelfRef.__PVT__flash__DOT__state)) 
         & (0x17U == (IData)(vlSelfRef.__PVT__flash__DOT__counter)))) {
        if (VL_LIKELY(((3U == (IData)(vlSelfRef.__PVT__flash__DOT__cmd))))) {
            VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(
                                                                           ((0x00fffffeU 
                                                                             & (vlSelfRef.__PVT__flash__DOT__addr 
                                                                                << 1U)) 
                                                                            | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi)), __Vtask_flash_read__0__data);
            vlSelfRef.__PVT__flash__DOT__rdata = __Vtask_flash_read__0__data;
        } else {
            VL_FWRITEF_NX(0x80000002U,"Assertion failed: Unsupport command `%xh`, only support `03h` read command\n",1
                          , '#',8,vlSelfRef.__PVT__flash__DOT__cmd);
            VL_FFLUSH_I(0x80000002U);
            VL_WRITEF_NX("[%0t] %%Fatal: flash.v:98: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"ysyxSoCFull.flash.flash_cmd_i", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/flash/flash.v", 98, "", false);
        }
    }
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__2(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_psram__DOT__psram_read__2__data;
    __Vtask_psram__DOT__psram_read__2__data = 0;
    CData/*7:0*/ __Vdly__psram__DOT__counter;
    __Vdly__psram__DOT__counter = 0;
    CData/*0:0*/ __Vdly__psram__DOT__rw;
    __Vdly__psram__DOT__rw = 0;
    CData/*0:0*/ __Vdly__psram__DOT__set;
    __Vdly__psram__DOT__set = 0;
    IData/*23:0*/ __Vdly__psram__DOT__saddr;
    __Vdly__psram__DOT__saddr = 0;
    // Body
    __Vdly__psram__DOT__set = vlSelfRef.__PVT__psram__DOT__set;
    __Vdly__psram__DOT__saddr = vlSelfRef.__PVT__psram__DOT__saddr;
    __Vdly__psram__DOT__counter = vlSelfRef.__PVT__psram__DOT__counter;
    __Vdly__psram__DOT__rw = vlSelfRef.__PVT__psram__DOT__rw;
    __Vdly__psram__DOT__counter = ((IData)(vlSelfRef.__PVT___asic_psram_ce_n)
                                    ? 0U : (0x000000ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__psram__DOT__counter))));
    if ((2U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) {
        if ((0x38U == (IData)(vlSelfRef.__PVT__psram__DOT__oper))) {
            __Vdly__psram__DOT__rw = 1U;
        }
        if ((0xebU == (IData)(vlSelfRef.__PVT__psram__DOT__oper))) {
            __Vdly__psram__DOT__rw = 0U;
        }
    }
    if ((8U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) {
        if ((0x35U == (IData)(vlSelfRef.__PVT__psram__DOT__oper))) {
            __Vdly__psram__DOT__set = 1U;
        } else if (VL_UNLIKELY((((0x38U != (IData)(vlSelfRef.__PVT__psram__DOT__oper)) 
                                 & (0xebU != (IData)(vlSelfRef.__PVT__psram__DOT__oper)))))) {
            VL_WRITEF_NX("Wrong code for psram %x\n\n",1
                         , '#',8,vlSelfRef.__PVT__psram__DOT__oper);
            Verilated::runFlushCallbacks();
            VL_FINISH_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/psram/psram.v", 31, "");
        }
    }
    if (vlSelfRef.__PVT__psram__DOT__set) {
        if (((((((((0U == (IData)(vlSelfRef.__PVT__psram__DOT__counter)) 
                   | (1U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) 
                  | (2U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) 
                 | (3U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) 
                | (4U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) 
               | (5U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) 
              | (6U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) 
             | (7U == (IData)(vlSelfRef.__PVT__psram__DOT__counter)))) {
            if ((0U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) {
                vlSelfRef.__PVT__psram__DOT__oper = 
                    ((0x0fU & (IData)(vlSelfRef.__PVT__psram__DOT__oper)) 
                     | ((IData)(vlSelfRef.__PVT__psram__DOT__dio) 
                        << 4U));
            } else if ((1U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) {
                vlSelfRef.__PVT__psram__DOT__oper = 
                    ((0xf0U & (IData)(vlSelfRef.__PVT__psram__DOT__oper)) 
                     | (IData)(vlSelfRef.__PVT__psram__DOT__dio));
            } else {
                __Vdly__psram__DOT__saddr = ((2U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                                              ? ((0x000fffffU 
                                                  & __Vdly__psram__DOT__saddr) 
                                                 | ((IData)(vlSelfRef.__PVT__psram__DOT__dio) 
                                                    << 0x00000014U))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                                                  ? 
                                                 ((0x00f0ffffU 
                                                   & __Vdly__psram__DOT__saddr) 
                                                  | ((IData)(vlSelfRef.__PVT__psram__DOT__dio) 
                                                     << 0x00000010U))
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                                                   ? 
                                                  ((0x00ff0fffU 
                                                    & __Vdly__psram__DOT__saddr) 
                                                   | ((IData)(vlSelfRef.__PVT__psram__DOT__dio) 
                                                      << 0x0000000cU))
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                                                    ? 
                                                   ((0x00fff0ffU 
                                                     & __Vdly__psram__DOT__saddr) 
                                                    | ((IData)(vlSelfRef.__PVT__psram__DOT__dio) 
                                                       << 8U))
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                                                     ? 
                                                    ((0x00ffff0fU 
                                                      & __Vdly__psram__DOT__saddr) 
                                                     | ((IData)(vlSelfRef.__PVT__psram__DOT__dio) 
                                                        << 4U))
                                                     : 
                                                    ((0x00fffff0U 
                                                      & __Vdly__psram__DOT__saddr) 
                                                     | (IData)(vlSelfRef.__PVT__psram__DOT__dio)))))));
            }
        } else if (((IData)(vlSelfRef.__PVT__psram__DOT__rw) 
                    & (~ (IData)(vlSelfRef.__PVT___asic_psram_ce_n)))) {
            VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_psram__DOT__psram_write_TOP__ysyxSoCFull(vlSelfRef.__PVT__psram__DOT__saddr, (IData)(vlSelfRef.__PVT__psram__DOT__dio), 
                                                                                (1U 
                                                                                & (IData)(vlSelfRef.__PVT__psram__DOT__counter)));
            if ((1U & (IData)(vlSelfRef.__PVT__psram__DOT__counter))) {
                __Vdly__psram__DOT__saddr = (0x00ffffffU 
                                             & ((IData)(1U) 
                                                + vlSelfRef.__PVT__psram__DOT__saddr));
            }
        } else if ((0x0eU <= (IData)(vlSelfRef.__PVT__psram__DOT__counter))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT___asic_psram_ce_n)))) {
                if ((1U & (IData)(vlSelfRef.__PVT__psram__DOT__counter))) {
                    __Vdly__psram__DOT__saddr = (0x00ffffffU 
                                                 & ((IData)(1U) 
                                                    + vlSelfRef.__PVT__psram__DOT__saddr));
                } else {
                    VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_psram__DOT__psram_read_TOP__ysyxSoCFull(vlSelfRef.__PVT__psram__DOT__saddr, __Vtask_psram__DOT__psram_read__2__data);
                    vlSelfRef.__PVT__psram__DOT__buff 
                        = __Vtask_psram__DOT__psram_read__2__data;
                }
            }
        }
    } else if (((((((((0U == (IData)(vlSelfRef.__PVT__psram__DOT__counter)) 
                      | (1U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) 
                     | (2U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) 
                    | (3U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) 
                   | (4U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) 
                  | (5U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) 
                 | (6U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))) 
                | (7U == (IData)(vlSelfRef.__PVT__psram__DOT__counter)))) {
        vlSelfRef.__PVT__psram__DOT__oper = ((0U == (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                                              ? ((0x7fU 
                                                  & (IData)(vlSelfRef.__PVT__psram__DOT__oper)) 
                                                 | (0x00000080U 
                                                    & ((IData)(vlSelfRef.__PVT__psram__DOT__dio) 
                                                       << 7U)))
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                                                  ? 
                                                 ((0xbfU 
                                                   & (IData)(vlSelfRef.__PVT__psram__DOT__oper)) 
                                                  | (0x00000040U 
                                                     & ((IData)(vlSelfRef.__PVT__psram__DOT__dio) 
                                                        << 6U)))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                                                   ? 
                                                  ((0xdfU 
                                                    & (IData)(vlSelfRef.__PVT__psram__DOT__oper)) 
                                                   | (0x00000020U 
                                                      & ((IData)(vlSelfRef.__PVT__psram__DOT__dio) 
                                                         << 5U)))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                                                    ? 
                                                   ((0xefU 
                                                     & (IData)(vlSelfRef.__PVT__psram__DOT__oper)) 
                                                    | (0x00000010U 
                                                       & ((IData)(vlSelfRef.__PVT__psram__DOT__dio) 
                                                          << 4U)))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                                                     ? 
                                                    ((0xf7U 
                                                      & (IData)(vlSelfRef.__PVT__psram__DOT__oper)) 
                                                     | (8U 
                                                        & ((IData)(vlSelfRef.__PVT__psram__DOT__dio) 
                                                           << 3U)))
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                                                      ? 
                                                     ((0xfbU 
                                                       & (IData)(vlSelfRef.__PVT__psram__DOT__oper)) 
                                                      | (4U 
                                                         & ((IData)(vlSelfRef.__PVT__psram__DOT__dio) 
                                                            << 2U)))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__PVT__psram__DOT__counter))
                                                       ? 
                                                      ((0xfdU 
                                                        & (IData)(vlSelfRef.__PVT__psram__DOT__oper)) 
                                                       | (2U 
                                                          & ((IData)(vlSelfRef.__PVT__psram__DOT__dio) 
                                                             << 1U)))
                                                       : 
                                                      ((0xfeU 
                                                        & (IData)(vlSelfRef.__PVT__psram__DOT__oper)) 
                                                       | (1U 
                                                          & (IData)(vlSelfRef.__PVT__psram__DOT__dio))))))))));
    }
    vlSelfRef.__PVT__psram__DOT__set = __Vdly__psram__DOT__set;
    vlSelfRef.__PVT__psram__DOT__saddr = __Vdly__psram__DOT__saddr;
    vlSelfRef.__PVT__psram__DOT__counter = __Vdly__psram__DOT__counter;
    vlSelfRef.__PVT__psram__DOT__rw = __Vdly__psram__DOT__rw;
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__3(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__count;
    __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__count = 0;
    SData/*9:0*/ __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_len;
    __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_len = 0;
    CData/*2:0*/ __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__cas_lat;
    __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__cas_lat = 0;
    CData/*0:0*/ __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__will_stop_burst;
    __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__will_stop_burst = 0;
    SData/*9:0*/ __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__count;
    __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__count = 0;
    SData/*9:0*/ __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_len;
    __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_len = 0;
    CData/*2:0*/ __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__cas_lat;
    __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__cas_lat = 0;
    CData/*0:0*/ __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__will_stop_burst;
    __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__will_stop_burst = 0;
    SData/*9:0*/ __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__count;
    __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__count = 0;
    SData/*9:0*/ __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_len;
    __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_len = 0;
    CData/*2:0*/ __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__cas_lat;
    __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__cas_lat = 0;
    CData/*0:0*/ __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__will_stop_burst;
    __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__will_stop_burst = 0;
    SData/*9:0*/ __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__count;
    __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__count = 0;
    SData/*9:0*/ __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_len;
    __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_len = 0;
    CData/*2:0*/ __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__cas_lat;
    __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__cas_lat = 0;
    CData/*0:0*/ __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__will_stop_burst;
    __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__will_stop_burst = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows__v0;
    __VdlyVal__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows__v0 = 0;
    CData/*1:0*/ __VdlyDim0__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows__v0;
    __VdlyDim0__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows__v0;
    __VdlySet__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows__v0 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows__v0;
    __VdlyVal__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows__v0 = 0;
    CData/*1:0*/ __VdlyDim0__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows__v0;
    __VdlyDim0__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows__v0;
    __VdlySet__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows__v0 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows__v0;
    __VdlyVal__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows__v0 = 0;
    CData/*1:0*/ __VdlyDim0__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows__v0;
    __VdlyDim0__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows__v0;
    __VdlySet__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows__v0 = 0;
    SData/*12:0*/ __VdlyVal__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows__v0;
    __VdlyVal__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows__v0 = 0;
    CData/*1:0*/ __VdlyDim0__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows__v0;
    __VdlyDim0__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows__v0 = 0;
    CData/*0:0*/ __VdlySet__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows__v0;
    __VdlySet__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows__v0 = 0;
    // Body
    __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_len 
        = vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_len;
    __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__will_stop_burst 
        = vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__will_stop_burst;
    __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_len 
        = vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_len;
    __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__will_stop_burst 
        = vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__will_stop_burst;
    __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_len 
        = vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_len;
    __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__will_stop_burst 
        = vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__will_stop_burst;
    __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_len 
        = vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_len;
    __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__will_stop_burst 
        = vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__will_stop_burst;
    __VdlySet__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows__v0 = 0U;
    __VdlySet__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows__v0 = 0U;
    __VdlySet__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows__v0 = 0U;
    __VdlySet__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows__v0 = 0U;
    __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__count 
        = vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__count;
    __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__cas_lat 
        = vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__cas_lat;
    __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__count 
        = vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__count;
    __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__cas_lat 
        = vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__cas_lat;
    __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__count 
        = vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__count;
    __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__cas_lat 
        = vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__cas_lat;
    __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__count 
        = vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__count;
    __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__cas_lat 
        = vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__cas_lat;
    if ((IData)((3U == (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))))) {
        vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__chose 
            = (((~ ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))) 
                & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__chose)) 
               | (0x0fU & ((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                  >> 0x0dU)) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))));
        vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__chose 
            = (((~ ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))) 
                & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__chose)) 
               | (0x0fU & ((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                  >> 0x0dU)) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))));
    }
    if (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                      >> 3U)))) {
            if ((0U != (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__count))) {
                __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__count 
                    = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__count)));
            }
            if ((1U & (~ (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_read)))) {
                __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__count = 0U;
            }
            if ((4U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__state))) {
                if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__state))))) {
                    VL_WRITEF_NX("strange state\n\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v", 125, "");
                } else if ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__state))) {
                    if ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))) {
                        if (VL_LIKELY(((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))))) {
                            if (VL_LIKELY(((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))))) {
                                __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_len = 0x03ffU;
                            } else {
                                VL_WRITEF_NX("discrepancies in burst_len\n\n",0);
                                Verilated::runFlushCallbacks();
                                VL_FINISH_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v", 110, "");
                            }
                        } else {
                            VL_WRITEF_NX("discrepancies in burst_len\n\n",0);
                            Verilated::runFlushCallbacks();
                            VL_FINISH_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v", 110, "");
                        }
                    } else {
                        __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_len 
                            = ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))
                                ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))
                                    ? 8U : 4U) : ((1U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))
                                                   ? 2U
                                                   : 1U));
                    }
                    if ((1U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                      >> 4U)))) {
                        __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__cas_lat = 1U;
                    } else if ((2U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                             >> 4U)))) {
                        __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__cas_lat = 2U;
                    } else if (VL_LIKELY(((3U == (7U 
                                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                     >> 4U)))))) {
                        __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__cas_lat = 3U;
                    } else {
                        VL_WRITEF_NX("discrepancies in cas_lat\n\n",0);
                        Verilated::runFlushCallbacks();
                        VL_FINISH_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v", 119, "");
                    }
                } else {
                    __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__will_stop_burst = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__state))) {
                    VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_sdram__DOT__sdramsub1__DOT__sdram0__DOT__sdram_write_TOP__ysyxSoCFull(
                                                                                ((vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows
                                                                                [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q] 
                                                                                << 0x0000000dU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q) 
                                                                                << 0x0000000bU) 
                                                                                | (0x000007fcU 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                                                << 2U)))), 
                                                                                (0x0000ffffU 
                                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i), 
                                                                                (3U 
                                                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)));
                    __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__count = 1U;
                } else {
                    vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__addr 
                        = (0x000001ffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_reg 
                        = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                    __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__count = 1U;
                    vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_read = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__state))) {
                __VdlyVal__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows__v0 
                    = (0x00001fffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                __VdlyDim0__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows__v0 
                    = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                __VdlySet__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows__v0 = 1U;
            }
            if (vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__will_stop_burst) {
                vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_read = 0U;
            }
            if (((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__count) 
                 == (((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__cas_lat) 
                      + (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_len)) 
                     - (IData)(1U)))) {
                vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_read = 0U;
            }
        }
    } else {
        __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__count = 0U;
        __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__will_stop_burst = 0U;
        vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_read = 0U;
        __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__cas_lat = 0U;
        __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_len = 0U;
    }
    if (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                      >> 3U)))) {
            if ((0U != (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__count))) {
                __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__count 
                    = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__count)));
            }
            if ((1U & (~ (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_read)))) {
                __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__count = 0U;
            }
            if ((4U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__state))) {
                if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__state))))) {
                    VL_WRITEF_NX("strange state\n\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v", 125, "");
                } else if ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__state))) {
                    if ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))) {
                        if (VL_LIKELY(((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))))) {
                            if (VL_LIKELY(((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))))) {
                                __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_len = 0x03ffU;
                            } else {
                                VL_WRITEF_NX("discrepancies in burst_len\n\n",0);
                                Verilated::runFlushCallbacks();
                                VL_FINISH_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v", 110, "");
                            }
                        } else {
                            VL_WRITEF_NX("discrepancies in burst_len\n\n",0);
                            Verilated::runFlushCallbacks();
                            VL_FINISH_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v", 110, "");
                        }
                    } else {
                        __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_len 
                            = ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))
                                ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))
                                    ? 8U : 4U) : ((1U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))
                                                   ? 2U
                                                   : 1U));
                    }
                    if ((1U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                      >> 4U)))) {
                        __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__cas_lat = 1U;
                    } else if ((2U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                             >> 4U)))) {
                        __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__cas_lat = 2U;
                    } else if (VL_LIKELY(((3U == (7U 
                                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                     >> 4U)))))) {
                        __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__cas_lat = 3U;
                    } else {
                        VL_WRITEF_NX("discrepancies in cas_lat\n\n",0);
                        Verilated::runFlushCallbacks();
                        VL_FINISH_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v", 119, "");
                    }
                } else {
                    __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__will_stop_burst = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__state))) {
                    VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_sdram__DOT__sdramsub1__DOT__sdram0__DOT__sdram_write_TOP__ysyxSoCFull(
                                                                                ((IData)(0x04000000U) 
                                                                                + 
                                                                                ((vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows
                                                                                [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q] 
                                                                                << 0x0000000dU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q) 
                                                                                << 0x0000000bU) 
                                                                                | (0x000007fcU 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                                                << 2U))))), 
                                                                                (0x0000ffffU 
                                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i), 
                                                                                (3U 
                                                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)));
                    __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__count = 1U;
                } else {
                    vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__addr 
                        = (0x000001ffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_reg 
                        = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                    __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__count = 1U;
                    vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_read = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__state))) {
                __VdlyVal__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows__v0 
                    = (0x00001fffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                __VdlyDim0__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows__v0 
                    = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                __VdlySet__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows__v0 = 1U;
            }
            if (vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__will_stop_burst) {
                vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_read = 0U;
            }
            if (((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__count) 
                 == (((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__cas_lat) 
                      + (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_len)) 
                     - (IData)(1U)))) {
                vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_read = 0U;
            }
        }
    } else {
        __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__count = 0U;
        __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__will_stop_burst = 0U;
        vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_read = 0U;
        __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__cas_lat = 0U;
        __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_len = 0U;
    }
    if (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                      >> 3U)))) {
            if ((0U != (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__count))) {
                __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__count 
                    = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__count)));
            }
            if ((1U & (~ (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_read)))) {
                __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__count = 0U;
            }
            if ((4U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__state))) {
                if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__state))))) {
                    VL_WRITEF_NX("strange state\n\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v", 125, "");
                } else if ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__state))) {
                    if ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))) {
                        if (VL_LIKELY(((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))))) {
                            if (VL_LIKELY(((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))))) {
                                __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_len = 0x03ffU;
                            } else {
                                VL_WRITEF_NX("discrepancies in burst_len\n\n",0);
                                Verilated::runFlushCallbacks();
                                VL_FINISH_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v", 110, "");
                            }
                        } else {
                            VL_WRITEF_NX("discrepancies in burst_len\n\n",0);
                            Verilated::runFlushCallbacks();
                            VL_FINISH_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v", 110, "");
                        }
                    } else {
                        __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_len 
                            = ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))
                                ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))
                                    ? 8U : 4U) : ((1U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))
                                                   ? 2U
                                                   : 1U));
                    }
                    if ((1U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                      >> 4U)))) {
                        __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__cas_lat = 1U;
                    } else if ((2U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                             >> 4U)))) {
                        __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__cas_lat = 2U;
                    } else if (VL_LIKELY(((3U == (7U 
                                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                     >> 4U)))))) {
                        __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__cas_lat = 3U;
                    } else {
                        VL_WRITEF_NX("discrepancies in cas_lat\n\n",0);
                        Verilated::runFlushCallbacks();
                        VL_FINISH_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v", 119, "");
                    }
                } else {
                    __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__will_stop_burst = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__state))) {
                    VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_sdram__DOT__sdramsub1__DOT__sdram0__DOT__sdram_write_TOP__ysyxSoCFull(
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                ((vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows
                                                                                [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q] 
                                                                                << 0x0000000dU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q) 
                                                                                << 0x0000000bU) 
                                                                                | (0x000007fcU 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                                                << 2U))))), 
                                                                                (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i 
                                                                                >> 0x00000010U), 
                                                                                (3U 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                                                                >> 2U)));
                    __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__count = 1U;
                } else {
                    vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__addr 
                        = (0x000001ffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_reg 
                        = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                    __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__count = 1U;
                    vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_read = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__state))) {
                __VdlyVal__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows__v0 
                    = (0x00001fffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                __VdlyDim0__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows__v0 
                    = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                __VdlySet__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows__v0 = 1U;
            }
            if (vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__will_stop_burst) {
                vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_read = 0U;
            }
            if (((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__count) 
                 == (((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__cas_lat) 
                      + (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_len)) 
                     - (IData)(1U)))) {
                vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_read = 0U;
            }
        }
    } else {
        __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__count = 0U;
        __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__will_stop_burst = 0U;
        vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_read = 0U;
        __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__cas_lat = 0U;
        __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_len = 0U;
    }
    if (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                      >> 3U)))) {
            if ((0U != (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__count))) {
                __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__count 
                    = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__count)));
            }
            if ((1U & (~ (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_read)))) {
                __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__count = 0U;
            }
            if ((4U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__state))) {
                if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__state))))) {
                    VL_WRITEF_NX("strange state\n\n",0);
                    Verilated::runFlushCallbacks();
                    VL_FINISH_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v", 125, "");
                } else if ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__state))) {
                    if ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))) {
                        if (VL_LIKELY(((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))))) {
                            if (VL_LIKELY(((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))))) {
                                __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_len = 0x03ffU;
                            } else {
                                VL_WRITEF_NX("discrepancies in burst_len\n\n",0);
                                Verilated::runFlushCallbacks();
                                VL_FINISH_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v", 110, "");
                            }
                        } else {
                            VL_WRITEF_NX("discrepancies in burst_len\n\n",0);
                            Verilated::runFlushCallbacks();
                            VL_FINISH_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v", 110, "");
                        }
                    } else {
                        __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_len 
                            = ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))
                                ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))
                                    ? 8U : 4U) : ((1U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))
                                                   ? 2U
                                                   : 1U));
                    }
                    if ((1U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                      >> 4U)))) {
                        __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__cas_lat = 1U;
                    } else if ((2U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                             >> 4U)))) {
                        __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__cas_lat = 2U;
                    } else if (VL_LIKELY(((3U == (7U 
                                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                     >> 4U)))))) {
                        __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__cas_lat = 3U;
                    } else {
                        VL_WRITEF_NX("discrepancies in cas_lat\n\n",0);
                        Verilated::runFlushCallbacks();
                        VL_FINISH_MT("/home/dsx99/osoc/ysyx-workbench/ysyxSoC/perip/sdram/sdram.v", 119, "");
                    }
                } else {
                    __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__will_stop_burst = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__state))) {
                    VysyxSoCFull_ysyxSoCFull____Vdpiimwrap_sdram__DOT__sdramsub1__DOT__sdram0__DOT__sdram_write_TOP__ysyxSoCFull(
                                                                                ((IData)(0x04000002U) 
                                                                                + 
                                                                                ((vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows
                                                                                [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q] 
                                                                                << 0x0000000dU) 
                                                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q) 
                                                                                << 0x0000000bU) 
                                                                                | (0x000007fcU 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                                                << 2U))))), 
                                                                                (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i 
                                                                                >> 0x00000010U), 
                                                                                (3U 
                                                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                                                                >> 2U)));
                    __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__count = 1U;
                } else {
                    vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__addr 
                        = (0x000001ffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_reg 
                        = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                    __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__count = 1U;
                    vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_read = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__state))) {
                __VdlyVal__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows__v0 
                    = (0x00001fffU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                __VdlyDim0__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows__v0 
                    = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                __VdlySet__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows__v0 = 1U;
            }
            if (vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__will_stop_burst) {
                vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_read = 0U;
            }
            if (((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__count) 
                 == (((IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__cas_lat) 
                      + (IData)(vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_len)) 
                     - (IData)(1U)))) {
                vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_read = 0U;
            }
        }
    } else {
        __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__count = 0U;
        __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__will_stop_burst = 0U;
        vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_read = 0U;
        __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__cas_lat = 0U;
        __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_len = 0U;
    }
    vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_len 
        = __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__burst_len;
    vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__will_stop_burst 
        = __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__will_stop_burst;
    if (__VdlySet__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows__v0) {
        vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows[__VdlyDim0__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows__v0] 
            = __VdlyVal__sdram__DOT__sdramsub1__DOT__sdram0__DOT__ba_rows__v0;
    }
    vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__count 
        = __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__count;
    vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram0__DOT__cas_lat 
        = __Vdly__sdram__DOT__sdramsub1__DOT__sdram0__DOT__cas_lat;
    vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_len 
        = __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__burst_len;
    vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__will_stop_burst 
        = __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__will_stop_burst;
    if (__VdlySet__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows__v0) {
        vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows[__VdlyDim0__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows__v0] 
            = __VdlyVal__sdram__DOT__sdramsub1__DOT__sdram1__DOT__ba_rows__v0;
    }
    vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__count 
        = __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__count;
    vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__sdram1__DOT__cas_lat 
        = __Vdly__sdram__DOT__sdramsub1__DOT__sdram1__DOT__cas_lat;
    vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_len 
        = __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__burst_len;
    vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__will_stop_burst 
        = __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__will_stop_burst;
    if (__VdlySet__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows__v0) {
        vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows[__VdlyDim0__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows__v0] 
            = __VdlyVal__sdram__DOT__sdramsub2__DOT__sdram0__DOT__ba_rows__v0;
    }
    vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__count 
        = __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__count;
    vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram0__DOT__cas_lat 
        = __Vdly__sdram__DOT__sdramsub2__DOT__sdram0__DOT__cas_lat;
    vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_len 
        = __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__burst_len;
    vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__will_stop_burst 
        = __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__will_stop_burst;
    if (__VdlySet__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows__v0) {
        vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows[__VdlyDim0__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows__v0] 
            = __VdlyVal__sdram__DOT__sdramsub2__DOT__sdram1__DOT__ba_rows__v0;
    }
    vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__count 
        = __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__count;
    vlSelfRef.__PVT__sdram__DOT__sdramsub2__DOT__sdram1__DOT__cas_lat 
        = __Vdly__sdram__DOT__sdramsub2__DOT__sdram1__DOT__cas_lat;
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
    vlSelfRef.sdram__DOT__dq__en0 = (((IData)(vlSelfRef.sdram__DOT__sdramsub1__DOT__sdram0__DOT____VdfgRegularize_hdef225f1_0_0)
                                       ? 0xffffU : 0U) 
                                     | ((IData)(vlSelfRef.sdram__DOT__sdramsub1__DOT__sdram1__DOT____VdfgRegularize_he2a3456f_0_0)
                                         ? 0xffffU : 0U));
    vlSelfRef.sdram__DOT__dq__en1 = (((IData)(vlSelfRef.sdram__DOT__sdramsub2__DOT__sdram0__DOT____VdfgRegularize_h9fdf6016_0_0)
                                       ? 0xffffU : 0U) 
                                     | ((IData)(vlSelfRef.sdram__DOT__sdramsub2__DOT__sdram1__DOT____VdfgRegularize_h3b7456c3_0_0)
                                         ? 0xffffU : 0U));
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__4(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__4\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__flash__DOT__addr = vlSelfRef.__Vdly__flash__DOT__addr;
    vlSelfRef.__PVT__flash__DOT__cmd = vlSelfRef.__Vdly__flash__DOT__cmd;
    vlSelfRef.__PVT__flash__DOT__data = vlSelfRef.__Vdly__flash__DOT__data;
    vlSelfRef.__PVT__flash__DOT__counter = vlSelfRef.__Vdly__flash__DOT__counter;
    vlSelfRef.__PVT__flash__DOT__state = vlSelfRef.__Vdly__flash__DOT__state;
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__5(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__5\n"); );
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
    vlSelfRef.__PVT___bitrev_miso = 1U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                  >> 7U)))) {
        if ((7U > (IData)(vlSelfRef.__PVT__bitrev__DOT__count))) {
            vlSelfRef.__Vdly__bitrev__DOT__buff = (
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi) 
                                                    << 6U) 
                                                   | (0x0000003fU 
                                                      & ((IData)(vlSelfRef.__PVT__bitrev__DOT__buff) 
                                                         >> 1U)));
        } else if ((7U == (IData)(vlSelfRef.__PVT__bitrev__DOT__count))) {
            vlSelfRef.__PVT___bitrev_miso = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi;
        } else {
            vlSelfRef.__Vdly__bitrev__DOT__buff = (0x0000007eU 
                                                   & ((IData)(vlSelfRef.__PVT__bitrev__DOT__buff) 
                                                      << 1U));
            vlSelfRef.__PVT___bitrev_miso = (1U & ((IData)(vlSelfRef.__PVT__bitrev__DOT__buff) 
                                                   >> 6U));
        }
        vlSelfRef.__PVT__bitrev__DOT__count = (0x0000000fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__bitrev__DOT__count)));
    }
    vlSelfRef.__PVT__bitrev__DOT__buff = vlSelfRef.__Vdly__bitrev__DOT__buff;
}

void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__0(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) {
        vlSelfRef.__PVT___asic_psram_sck = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
        vlSelfRef.__PVT___asic_psram_ce_n = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n;
    } else {
        vlSelfRef.__PVT___asic_psram_sck = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
        vlSelfRef.__PVT___asic_psram_ce_n = vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n;
    }
}

void VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__6(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_sequent__TOP__ysyxSoCFull__6\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sdram__DOT__sdramsub1__DOT__both 
        = (1U & ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                     >> 2U)) & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))));
    vlSelfRef.__VdfgRegularize_hbc52461a_1_0 = (IData)(
                                                       (3U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    vlSelfRef.__PVT__flash__DOT__reset = (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss));
}

void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__1(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

extern const VlUnpacked<CData/*2:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h902074cf_0;

void VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__2(VysyxSoCFull_ysyxSoCFull* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VysyxSoCFull_ysyxSoCFull___nba_comb__TOP__ysyxSoCFull__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
