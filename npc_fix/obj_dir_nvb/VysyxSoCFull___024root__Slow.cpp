// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull___024root___ctor_var_reset(VysyxSoCFull___024root* vlSelf);

VysyxSoCFull___024root::VysyxSoCFull___024root(VysyxSoCFull__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VysyxSoCFull___024root___ctor_var_reset(this);
}

void VysyxSoCFull___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VysyxSoCFull___024root::~VysyxSoCFull___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
