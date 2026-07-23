// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vosoc_26000003_func.h for the primary calling header

#include "Vosoc_26000003_func__pch.h"

void Vosoc_26000003_func_osoc_26000003_core___ctor_var_reset(Vosoc_26000003_func_osoc_26000003_core* vlSelf);

Vosoc_26000003_func_osoc_26000003_core::Vosoc_26000003_func_osoc_26000003_core() = default;
Vosoc_26000003_func_osoc_26000003_core::~Vosoc_26000003_func_osoc_26000003_core() = default;

void Vosoc_26000003_func_osoc_26000003_core::ctor(Vosoc_26000003_func__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vosoc_26000003_func_osoc_26000003_core___ctor_var_reset(this);
}

void Vosoc_26000003_func_osoc_26000003_core::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vosoc_26000003_func_osoc_26000003_core::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
