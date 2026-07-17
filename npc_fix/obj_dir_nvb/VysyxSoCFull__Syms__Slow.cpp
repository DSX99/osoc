// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VysyxSoCFull__pch.h"

VysyxSoCFull__Syms::VysyxSoCFull__Syms(VerilatedContext* contextp, const char* namep, VysyxSoCFull* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(1996);
    // Setup sub module instances
    TOP____024unit.ctor(this, "$unit");
    TOP__ysyxSoCFull.ctor(this, "ysyxSoCFull");
    TOP__ysyxSoCFull__asic.ctor(this, "ysyxSoCFull.asic");
    TOP__ysyxSoCFull__asic__cpu.ctor(this, "ysyxSoCFull.asic.cpu");
    TOP__ysyxSoCFull__asic__cpu__cpu.ctor(this, "ysyxSoCFull.asic.cpu.cpu");
    TOP__ysyxSoCFull__asic__cpu__cpu__core.ctor(this, "ysyxSoCFull.asic.cpu.cpu.core");
    TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.ctor(this, "ysyxSoCFull.asic.cpu.cpu.core.reg_mod");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.ysyxSoCFull = &TOP__ysyxSoCFull;
    TOP__ysyxSoCFull.asic = &TOP__ysyxSoCFull__asic;
    TOP__ysyxSoCFull__asic.cpu = &TOP__ysyxSoCFull__asic__cpu;
    TOP__ysyxSoCFull__asic__cpu.cpu = &TOP__ysyxSoCFull__asic__cpu__cpu;
    TOP__ysyxSoCFull__asic__cpu__cpu.core = &TOP__ysyxSoCFull__asic__cpu__cpu__core;
    TOP__ysyxSoCFull__asic__cpu__cpu__core.reg_mod = &TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__ysyxSoCFull.__Vconfigure(true);
    TOP__ysyxSoCFull__asic.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu__cpu.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu__cpu__core.__Vconfigure(true);
    TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.__Vconfigure(true);
    // Setup scopes
    __Vscopep_ysyxSoCFull__asic__axi42apb = new VerilatedScope{this, "ysyxSoCFull.asic.axi42apb", "axi42apb", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_ysyxSoCFull__asic__axi4frag = new VerilatedScope{this, "ysyxSoCFull.asic.axi4frag", "axi4frag", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_ysyxSoCFull__asic__axi4xbar = new VerilatedScope{this, "ysyxSoCFull.asic.axi4xbar", "axi4xbar", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_ysyxSoCFull__asic__axi4xbar_1 = new VerilatedScope{this, "ysyxSoCFull.asic.axi4xbar_1", "axi4xbar_1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_ysyxSoCFull__asic__axi4yank = new VerilatedScope{this, "ysyxSoCFull.asic.axi4yank", "axi4yank", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_ysyxSoCFull__asic__axi4yank__unnamedblk1 = new VerilatedScope{this, "ysyxSoCFull.asic.axi4yank.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core = new VerilatedScope{this, "ysyxSoCFull.asic.cpu.cpu.core", "core", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core__reg_mod = new VerilatedScope{this, "ysyxSoCFull.asic.cpu.cpu.core.reg_mod", "reg_mod", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_ysyxSoCFull__asic__lmrom = new VerilatedScope{this, "ysyxSoCFull.asic.lmrom", "lmrom", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_ysyxSoCFull__flash = new VerilatedScope{this, "ysyxSoCFull.flash", "flash", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    __Vscopep_ysyxSoCFull__flash__flash_cmd_i = new VerilatedScope{this, "ysyxSoCFull.flash.flash_cmd_i", "flash_cmd_i", "<null>", -9, VerilatedScope::SCOPE_OTHER};
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("branch", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.branch), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("branch_taken", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.branch_taken), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("cache_hit", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.cache_hit), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("cache_miss", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.cache_miss), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("ex_ls_bus_lsu_re_ls", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.ex_ls_bus_lsu_re_ls), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("ex_ls_bus_lsu_we_ls", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.ex_ls_bus_lsu_we_ls), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("ex_ls_ready_ls", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.ex_ls_ready_ls), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("ex_ls_valid_ex", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.ex_ls_valid_ex), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("ex_ls_valid_ls", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.ex_ls_valid_ls), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("flush", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.flush), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("if_de_ready_if", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.if_de_ready_if), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("if_de_valid_if", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.if_de_valid_if), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("ls_wb_bus_exception_wb", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.ls_wb_bus_exception_wb), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("ls_wb_bus_mcause_wb", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.ls_wb_bus_mcause_wb), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,3,0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("ls_wb_bus_pc_wb", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.ls_wb_bus_pc_wb), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,31,0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("ls_wb_bus_speculate_wb", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.ls_wb_bus_speculate_wb), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("opcode", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.opcode), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("pc", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.pc), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("pc_e", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.pc_e), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 1 ,31,0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("prev_pc", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.prev_pc), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,31,0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("reg_valid", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.reg_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("reg_valid_e", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.reg_valid_e), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core->varInsert("rst", &(TOP__ysyxSoCFull__asic__cpu__cpu__core.rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY, 0, 0);
    __Vscopep_ysyxSoCFull__asic__cpu__cpu__core__reg_mod->varInsert("regs", &(TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.regs), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW, 1, 1 ,15,0 ,31,0);
}

VysyxSoCFull__Syms::~VysyxSoCFull__Syms() {
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_ysyxSoCFull__asic__axi42apb, __Vscopep_ysyxSoCFull__asic__axi42apb = nullptr);
    VL_DO_CLEAR(delete __Vscopep_ysyxSoCFull__asic__axi4frag, __Vscopep_ysyxSoCFull__asic__axi4frag = nullptr);
    VL_DO_CLEAR(delete __Vscopep_ysyxSoCFull__asic__axi4xbar, __Vscopep_ysyxSoCFull__asic__axi4xbar = nullptr);
    VL_DO_CLEAR(delete __Vscopep_ysyxSoCFull__asic__axi4xbar_1, __Vscopep_ysyxSoCFull__asic__axi4xbar_1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_ysyxSoCFull__asic__axi4yank, __Vscopep_ysyxSoCFull__asic__axi4yank = nullptr);
    VL_DO_CLEAR(delete __Vscopep_ysyxSoCFull__asic__axi4yank__unnamedblk1, __Vscopep_ysyxSoCFull__asic__axi4yank__unnamedblk1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_ysyxSoCFull__asic__cpu__cpu__core, __Vscopep_ysyxSoCFull__asic__cpu__cpu__core = nullptr);
    VL_DO_CLEAR(delete __Vscopep_ysyxSoCFull__asic__cpu__cpu__core__reg_mod, __Vscopep_ysyxSoCFull__asic__cpu__cpu__core__reg_mod = nullptr);
    VL_DO_CLEAR(delete __Vscopep_ysyxSoCFull__asic__lmrom, __Vscopep_ysyxSoCFull__asic__lmrom = nullptr);
    VL_DO_CLEAR(delete __Vscopep_ysyxSoCFull__flash, __Vscopep_ysyxSoCFull__flash = nullptr);
    VL_DO_CLEAR(delete __Vscopep_ysyxSoCFull__flash__flash_cmd_i, __Vscopep_ysyxSoCFull__flash__flash_cmd_i = nullptr);
    // Tear down sub module instances
    TOP__ysyxSoCFull__asic__cpu__cpu__core__reg_mod.dtor();
    TOP__ysyxSoCFull__asic__cpu__cpu__core.dtor();
    TOP__ysyxSoCFull__asic__cpu__cpu.dtor();
    TOP__ysyxSoCFull__asic__cpu.dtor();
    TOP__ysyxSoCFull__asic.dtor();
    TOP__ysyxSoCFull.dtor();
    TOP____024unit.dtor();
}
