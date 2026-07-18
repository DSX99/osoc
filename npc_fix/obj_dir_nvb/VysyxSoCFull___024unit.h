// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL___024UNIT_H_
#define VERILATED_VYSYXSOCFULL___024UNIT_H_  // guard

#include "verilated.h"


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull___024unit final {
  public:

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VysyxSoCFull___024unit();
    ~VysyxSoCFull___024unit();
    void ctor(VysyxSoCFull__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VysyxSoCFull___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
