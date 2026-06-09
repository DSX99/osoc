// #include "emupp.h"
#include "emupp.cpp"
#include <stdio.h>

sCPU cpu;

int main(){
    uint8_t recv=0;
    uint64_t count=0;
    printf("Starting EMU\n");
    recv = cpu.LoadInstructions();
    if(recv) return 1;
    printf("Loaded codes\n");
    cpu.SetPC(ROM_OFFSET);
    printf("Starting executing\n");
    while(true){
        recv = cpu.do_step();
        if(recv == 0){
            printf("error\n");
            return 1;
        }else if(recv == 2){
            printf("finished good\n");
            return 0;
        }
        // printf("reg[0]:%d,reg[1]:%d,reg[2]:%d,reg[3]:%d,reg[4]:%d,reg[5]:%d,reg[6]:%d,reg[7]:%d,reg[8]:%d,reg[9]:%d,reg[10]:%d,reg[11]:%d, pc:%u, next pc:%u\n",cpu.regs_[0],cpu.regs_[1],cpu.regs_[2],cpu.regs_[3],cpu.regs_[4],cpu.regs_[5],cpu.regs_[6],cpu.regs_[7],cpu.regs_[8],cpu.regs_[9],cpu.regs_[10],cpu.regs_[11],cpu.pc_,cpu.pc_willwrite);
        if(count > 100000000) return 1;
        count++;
        // getchar();
    }
}