// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vosoc_26000003_func.h for the primary calling header

#include "Vosoc_26000003_func__pch.h"

void Vosoc_26000003_func___024root___ctor_var_reset(Vosoc_26000003_func___024root* vlSelf);

Vosoc_26000003_func___024root::Vosoc_26000003_func___024root(Vosoc_26000003_func__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vosoc_26000003_func___024root___ctor_var_reset(this);
}

void Vosoc_26000003_func___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vosoc_26000003_func___024root::~Vosoc_26000003_func___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
