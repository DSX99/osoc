// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull_ysyxSoCASIC___ctor_var_reset(VysyxSoCFull_ysyxSoCASIC* vlSelf);

VysyxSoCFull_ysyxSoCASIC::VysyxSoCFull_ysyxSoCASIC() = default;
VysyxSoCFull_ysyxSoCASIC::~VysyxSoCFull_ysyxSoCASIC() = default;

void VysyxSoCFull_ysyxSoCASIC::ctor(VysyxSoCFull__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VysyxSoCFull_ysyxSoCASIC___ctor_var_reset(this);
}

void VysyxSoCFull_ysyxSoCASIC::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VysyxSoCFull_ysyxSoCASIC::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
