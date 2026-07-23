// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vosoc_26000003_func__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vosoc_26000003_func::Vosoc_26000003_func(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vosoc_26000003_func__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , osoc_26000003_func{vlSymsp->TOP.osoc_26000003_func}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vosoc_26000003_func::Vosoc_26000003_func(const char* _vcname__)
    : Vosoc_26000003_func(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vosoc_26000003_func::~Vosoc_26000003_func() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vosoc_26000003_func___024root___eval_debug_assertions(Vosoc_26000003_func___024root* vlSelf);
#endif  // VL_DEBUG
void Vosoc_26000003_func___024root___eval_static(Vosoc_26000003_func___024root* vlSelf);
void Vosoc_26000003_func___024root___eval_initial(Vosoc_26000003_func___024root* vlSelf);
void Vosoc_26000003_func___024root___eval_settle(Vosoc_26000003_func___024root* vlSelf);
void Vosoc_26000003_func___024root___eval(Vosoc_26000003_func___024root* vlSelf);

void Vosoc_26000003_func::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vosoc_26000003_func::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vosoc_26000003_func___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vosoc_26000003_func___024root___eval_static(&(vlSymsp->TOP));
        Vosoc_26000003_func___024root___eval_initial(&(vlSymsp->TOP));
        Vosoc_26000003_func___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vosoc_26000003_func___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vosoc_26000003_func::eventsPending() { return false; }

uint64_t Vosoc_26000003_func::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vosoc_26000003_func::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vosoc_26000003_func___024root___eval_final(Vosoc_26000003_func___024root* vlSelf);

VL_ATTR_COLD void Vosoc_26000003_func::final() {
    contextp()->executingFinal(true);
    Vosoc_26000003_func___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vosoc_26000003_func::hierName() const { return vlSymsp->name(); }
const char* Vosoc_26000003_func::modelName() const { return "Vosoc_26000003_func"; }
unsigned Vosoc_26000003_func::threads() const { return 1; }
void Vosoc_26000003_func::prepareClone() const { contextp()->prepareClone(); }
void Vosoc_26000003_func::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vosoc_26000003_func::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vosoc_26000003_func___024root__trace_decl_types(VerilatedFst* tracep);

void Vosoc_26000003_func___024root__trace_init_top(Vosoc_26000003_func___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vosoc_26000003_func___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vosoc_26000003_func___024root*>(voidSelf);
    Vosoc_26000003_func__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vosoc_26000003_func___024root__trace_decl_types(tracep);
    Vosoc_26000003_func___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vosoc_26000003_func___024root__trace_register(Vosoc_26000003_func___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vosoc_26000003_func::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vosoc_26000003_func::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 408);
    Vosoc_26000003_func___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
