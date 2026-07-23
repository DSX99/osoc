// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vosoc_26000003_func__pch.h"

Vosoc_26000003_func__Syms::Vosoc_26000003_func__Syms(VerilatedContext* contextp, const char* namep, Vosoc_26000003_func* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(638);
    // Setup sub module instances
    TOP__osoc_26000003_func.ctor(this, "osoc_26000003_func");
    TOP__osoc_26000003_func__core.ctor(this, "osoc_26000003_func.core");
    TOP__osoc_26000003_func__core__reg_mod.ctor(this, "osoc_26000003_func.core.reg_mod");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    TOP.osoc_26000003_func = &TOP__osoc_26000003_func;
    TOP__osoc_26000003_func.core = &TOP__osoc_26000003_func__core;
    TOP__osoc_26000003_func__core.reg_mod = &TOP__osoc_26000003_func__core__reg_mod;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__osoc_26000003_func.__Vconfigure(true);
    TOP__osoc_26000003_func__core.__Vconfigure(true);
    TOP__osoc_26000003_func__core__reg_mod.__Vconfigure(true);
    // Setup scopes
    __Vscopep_osoc_26000003_func__core = new VerilatedScope{this, "osoc_26000003_func.core", "core", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_osoc_26000003_func__core__reg_mod = new VerilatedScope{this, "osoc_26000003_func.core.reg_mod", "reg_mod", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_osoc_26000003_func__core->varInsert("branch", &(TOP__osoc_26000003_func__core.branch), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_osoc_26000003_func__core->varInsert("branch_taken", &(TOP__osoc_26000003_func__core.branch_taken), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_osoc_26000003_func__core->varInsert("cache_hit", &(TOP__osoc_26000003_func__core.cache_hit), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_osoc_26000003_func__core->varInsert("cache_miss", &(TOP__osoc_26000003_func__core.cache_miss), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_osoc_26000003_func__core->varInsert("ex_ls_bus_lsu_re_ls", &(TOP__osoc_26000003_func__core.ex_ls_bus_lsu_re_ls), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_osoc_26000003_func__core->varInsert("ex_ls_bus_lsu_we_ls", &(TOP__osoc_26000003_func__core.ex_ls_bus_lsu_we_ls), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_osoc_26000003_func__core->varInsert("ex_ls_ready_ls", &(TOP__osoc_26000003_func__core.ex_ls_ready_ls), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_osoc_26000003_func__core->varInsert("ex_ls_valid_ex", &(TOP__osoc_26000003_func__core.ex_ls_valid_ex), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_osoc_26000003_func__core->varInsert("ex_ls_valid_ls", &(TOP__osoc_26000003_func__core.ex_ls_valid_ls), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_osoc_26000003_func__core->varInsert("flush", &(TOP__osoc_26000003_func__core.flush), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_osoc_26000003_func__core->varInsert("flush_ex", &(TOP__osoc_26000003_func__core.flush_ex), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_osoc_26000003_func__core->varInsert("if_de_ready_if", &(TOP__osoc_26000003_func__core.if_de_ready_if), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_osoc_26000003_func__core->varInsert("if_de_valid_if", &(TOP__osoc_26000003_func__core.if_de_valid_if), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_osoc_26000003_func__core->varInsert("ls_wb_bus_exception_wb", &(TOP__osoc_26000003_func__core.ls_wb_bus_exception_wb), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_osoc_26000003_func__core->varInsert("ls_wb_bus_mcause_wb", &(TOP__osoc_26000003_func__core.ls_wb_bus_mcause_wb), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,3,0);
    __Vscopep_osoc_26000003_func__core->varInsert("ls_wb_bus_pc_wb", &(TOP__osoc_26000003_func__core.ls_wb_bus_pc_wb), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,31,0);
    __Vscopep_osoc_26000003_func__core->varInsert("ls_wb_bus_speculate_wb", &(TOP__osoc_26000003_func__core.ls_wb_bus_speculate_wb), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_osoc_26000003_func__core->varInsert("opcode", &(TOP__osoc_26000003_func__core.opcode), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_osoc_26000003_func__core->varInsert("pc", &(TOP__osoc_26000003_func__core.pc), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_osoc_26000003_func__core->varInsert("pc_e", &(TOP__osoc_26000003_func__core.pc_e), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,31,0);
    __Vscopep_osoc_26000003_func__core->varInsert("prev_pc", &(TOP__osoc_26000003_func__core.prev_pc), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_osoc_26000003_func__core->varInsert("reg_valid", &(TOP__osoc_26000003_func__core.reg_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_osoc_26000003_func__core->varInsert("reg_valid_e", &(TOP__osoc_26000003_func__core.reg_valid_e), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_osoc_26000003_func__core->varInsert("rst", &(TOP__osoc_26000003_func__core.rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_osoc_26000003_func__core__reg_mod->varInsert("regs", &(TOP__osoc_26000003_func__core__reg_mod.regs), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,15,0 ,31,0);
}

Vosoc_26000003_func__Syms::~Vosoc_26000003_func__Syms() {
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_osoc_26000003_func__core, __Vscopep_osoc_26000003_func__core = nullptr);
    VL_DO_CLEAR(delete __Vscopep_osoc_26000003_func__core__reg_mod, __Vscopep_osoc_26000003_func__core__reg_mod = nullptr);
    // Tear down sub module instances
    TOP__osoc_26000003_func__core__reg_mod.dtor();
    TOP__osoc_26000003_func__core.dtor();
    TOP__osoc_26000003_func.dtor();
}
