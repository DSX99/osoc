#include <cstdint>
#include <vector>

#define MEM_SIZE (128 * 1024 * 1024)
#define ROM_OFFSET (0x80000000)

#pragma once

class sCPU{
    public:
    sCPU();

    uint8_t LoadInstructions();

    void SetPC(uint32_t pc);

    uint8_t do_step();

    uint32_t pc_;
    uint32_t pc_willwrite;
    uint32_t regs_[32];

    uint8_t mem_[MEM_SIZE];

    private:
    void mem_intf(uint8_t lsu_act, uint32_t addr, uint32_t rd);
};