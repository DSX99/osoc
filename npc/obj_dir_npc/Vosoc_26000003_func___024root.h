// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vosoc_26000003_func.h for the primary calling header

#ifndef VERILATED_VOSOC_26000003_FUNC___024ROOT_H_
#define VERILATED_VOSOC_26000003_FUNC___024ROOT_H_  // guard

#include "verilated.h"
class Vosoc_26000003_func_osoc_26000003_func;


class Vosoc_26000003_func__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vosoc_26000003_func___024root final {
  public:
    // CELLS
    Vosoc_26000003_func_osoc_26000003_func* osoc_26000003_func;

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vosoc_26000003_func__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vosoc_26000003_func___024root(Vosoc_26000003_func__Syms* symsp, const char* namep);
    ~Vosoc_26000003_func___024root();
    VL_UNCOPYABLE(Vosoc_26000003_func___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
