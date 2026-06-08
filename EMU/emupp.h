#include <cstdint>
#include <vector>

#define MEM_SIZE (128 * 1024 * 1024)
#define ROM_OFFSET (0x80000000)

class sCPU{
    public:
    sCPU();

    void LoadInstructions();

    void SetPC(uint32_t pc);

    int do_step();

    uint32_t pc_;
    uint32_t regs_[16];

    uint8_t mem_[MEM_SIZE];
};