// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vosoc_26000003_func.h for the primary calling header

#include "Vosoc_26000003_func__pch.h"

void Vosoc_26000003_func___024root___eval_triggers_vec__ico(Vosoc_26000003_func___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___eval_triggers_vec__ico\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vosoc_26000003_func___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___trigger_anySet__ico\n"); );
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

void Vosoc_26000003_func_osoc_26000003_core___ico_sequent__TOP__osoc_26000003_func__core__0(Vosoc_26000003_func_osoc_26000003_core* vlSelf);
void Vosoc_26000003_func_osoc_26000003_func___ico_sequent__TOP__osoc_26000003_func__0(Vosoc_26000003_func_osoc_26000003_func* vlSelf);
void Vosoc_26000003_func_osoc_26000003_core___ico_sequent__TOP__osoc_26000003_func__core__1(Vosoc_26000003_func_osoc_26000003_core* vlSelf);

void Vosoc_26000003_func___024root___eval_ico(Vosoc_26000003_func___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___eval_ico\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vosoc_26000003_func_osoc_26000003_core___ico_sequent__TOP__osoc_26000003_func__core__0((&vlSymsp->TOP__osoc_26000003_func__core));
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        Vosoc_26000003_func_osoc_26000003_func___ico_sequent__TOP__osoc_26000003_func__0((&vlSymsp->TOP__osoc_26000003_func));
        Vosoc_26000003_func_osoc_26000003_core___ico_sequent__TOP__osoc_26000003_func__core__1((&vlSymsp->TOP__osoc_26000003_func__core));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vosoc_26000003_func___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vosoc_26000003_func___024root___eval_phase__ico(Vosoc_26000003_func___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___eval_phase__ico\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vosoc_26000003_func___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vosoc_26000003_func___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vosoc_26000003_func___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vosoc_26000003_func___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vosoc_26000003_func___024root___eval_triggers_vec__act(Vosoc_26000003_func___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___eval_triggers_vec__act\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clock) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

bool Vosoc_26000003_func___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___trigger_anySet__act\n"); );
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

void Vosoc_26000003_func_osoc_26000003_core___nba_sequent__TOP__osoc_26000003_func__core__0(Vosoc_26000003_func_osoc_26000003_core* vlSelf);
void Vosoc_26000003_func_osoc_26000003_func___nba_sequent__TOP__osoc_26000003_func__0(Vosoc_26000003_func_osoc_26000003_func* vlSelf);
void Vosoc_26000003_func_regs___nba_sequent__TOP__osoc_26000003_func__core__reg_mod__0(Vosoc_26000003_func_regs* vlSelf);
void Vosoc_26000003_func_osoc_26000003_core___nba_sequent__TOP__osoc_26000003_func__core__1(Vosoc_26000003_func_osoc_26000003_core* vlSelf);

void Vosoc_26000003_func___024root___eval_nba(Vosoc_26000003_func___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___eval_nba\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vosoc_26000003_func_osoc_26000003_core___nba_sequent__TOP__osoc_26000003_func__core__0((&vlSymsp->TOP__osoc_26000003_func__core));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vosoc_26000003_func_osoc_26000003_func___nba_sequent__TOP__osoc_26000003_func__0((&vlSymsp->TOP__osoc_26000003_func));
        Vosoc_26000003_func_regs___nba_sequent__TOP__osoc_26000003_func__core__reg_mod__0((&vlSymsp->TOP__osoc_26000003_func__core__reg_mod));
        Vosoc_26000003_func_osoc_26000003_core___nba_sequent__TOP__osoc_26000003_func__core__1((&vlSymsp->TOP__osoc_26000003_func__core));
        Vosoc_26000003_func_osoc_26000003_func___ico_sequent__TOP__osoc_26000003_func__0((&vlSymsp->TOP__osoc_26000003_func));
        Vosoc_26000003_func_osoc_26000003_core___ico_sequent__TOP__osoc_26000003_func__core__1((&vlSymsp->TOP__osoc_26000003_func__core));
    }
}

void Vosoc_26000003_func___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vosoc_26000003_func___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vosoc_26000003_func___024root___eval_phase__act(Vosoc_26000003_func___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___eval_phase__act\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vosoc_26000003_func___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vosoc_26000003_func___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vosoc_26000003_func___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vosoc_26000003_func___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vosoc_26000003_func___024root___eval_phase__nba(Vosoc_26000003_func___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___eval_phase__nba\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vosoc_26000003_func___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vosoc_26000003_func___024root___eval_nba(vlSelf);
        Vosoc_26000003_func___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vosoc_26000003_func___024root___eval(Vosoc_26000003_func___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___eval\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vosoc_26000003_func___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("vsrc/osoc_26000003_func.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vosoc_26000003_func___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vosoc_26000003_func___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("vsrc/osoc_26000003_func.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vosoc_26000003_func___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("vsrc/osoc_26000003_func.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vosoc_26000003_func___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vosoc_26000003_func___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vosoc_26000003_func___024root___eval_debug_assertions(Vosoc_26000003_func___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vosoc_26000003_func___024root___eval_debug_assertions\n"); );
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
}
#endif  // VL_DEBUG
