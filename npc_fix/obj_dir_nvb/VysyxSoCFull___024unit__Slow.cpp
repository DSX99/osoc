// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull___024unit___ctor_var_reset(VysyxSoCFull___024unit* vlSelf);

VysyxSoCFull___024unit::VysyxSoCFull___024unit() = default;
VysyxSoCFull___024unit::~VysyxSoCFull___024unit() = default;

void VysyxSoCFull___024unit::ctor(VysyxSoCFull__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VysyxSoCFull___024unit___ctor_var_reset(this);
}

void VysyxSoCFull___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VysyxSoCFull___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
