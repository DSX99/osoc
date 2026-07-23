// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vosoc_26000003_func.h for the primary calling header

#include "Vosoc_26000003_func__pch.h"

VL_ATTR_COLD void Vosoc_26000003_func___024root___eval_static(Vosoc_26000003_func___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___eval_static\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void Vosoc_26000003_func_osoc_26000003_core___eval_initial__TOP__osoc_26000003_func__core(Vosoc_26000003_func_osoc_26000003_core* vlSelf);
VL_ATTR_COLD void Vosoc_26000003_func___024root____Vm_traceActivitySetAll(Vosoc_26000003_func___024root* vlSelf);

VL_ATTR_COLD void Vosoc_26000003_func___024root___eval_initial(Vosoc_26000003_func___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___eval_initial\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vosoc_26000003_func_osoc_26000003_core___eval_initial__TOP__osoc_26000003_func__core((&vlSymsp->TOP__osoc_26000003_func__core));
    Vosoc_26000003_func___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vosoc_26000003_func___024root___eval_final(Vosoc_26000003_func___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___eval_final\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vosoc_26000003_func___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vosoc_26000003_func___024root___eval_phase__stl(Vosoc_26000003_func___024root* vlSelf);

VL_ATTR_COLD void Vosoc_26000003_func___024root___eval_settle(Vosoc_26000003_func___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___eval_settle\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vosoc_26000003_func___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("vsrc/osoc_26000003_func.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vosoc_26000003_func___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vosoc_26000003_func___024root___eval_triggers_vec__stl(Vosoc_26000003_func___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___eval_triggers_vec__stl\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vosoc_26000003_func___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vosoc_26000003_func___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vosoc_26000003_func___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vosoc_26000003_func___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vosoc_26000003_func_osoc_26000003_func___stl_sequent__TOP__osoc_26000003_func__0(Vosoc_26000003_func_osoc_26000003_func* vlSelf);
VL_ATTR_COLD void Vosoc_26000003_func_osoc_26000003_core___stl_sequent__TOP__osoc_26000003_func__core__0(Vosoc_26000003_func_osoc_26000003_core* vlSelf);
void Vosoc_26000003_func_osoc_26000003_func___ico_sequent__TOP__osoc_26000003_func__0(Vosoc_26000003_func_osoc_26000003_func* vlSelf);
void Vosoc_26000003_func_osoc_26000003_core___ico_sequent__TOP__osoc_26000003_func__core__1(Vosoc_26000003_func_osoc_26000003_core* vlSelf);

VL_ATTR_COLD void Vosoc_26000003_func___024root___eval_stl(Vosoc_26000003_func___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___eval_stl\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vosoc_26000003_func_osoc_26000003_func___stl_sequent__TOP__osoc_26000003_func__0((&vlSymsp->TOP__osoc_26000003_func));
        Vosoc_26000003_func___024root____Vm_traceActivitySetAll(vlSelf);
        Vosoc_26000003_func_osoc_26000003_core___stl_sequent__TOP__osoc_26000003_func__core__0((&vlSymsp->TOP__osoc_26000003_func__core));
        Vosoc_26000003_func_osoc_26000003_func___ico_sequent__TOP__osoc_26000003_func__0((&vlSymsp->TOP__osoc_26000003_func));
        Vosoc_26000003_func_osoc_26000003_core___ico_sequent__TOP__osoc_26000003_func__core__1((&vlSymsp->TOP__osoc_26000003_func__core));
    }
}

VL_ATTR_COLD bool Vosoc_26000003_func___024root___eval_phase__stl(Vosoc_26000003_func___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___eval_phase__stl\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vosoc_26000003_func___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vosoc_26000003_func___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vosoc_26000003_func___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vosoc_26000003_func___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vosoc_26000003_func___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vosoc_26000003_func___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vosoc_26000003_func___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vosoc_26000003_func___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vosoc_26000003_func___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vosoc_26000003_func___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vosoc_26000003_func___024root____Vm_traceActivitySetAll(Vosoc_26000003_func___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root____Vm_traceActivitySetAll\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vosoc_26000003_func___024root___ctor_var_reset(Vosoc_26000003_func___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___ctor_var_reset\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
