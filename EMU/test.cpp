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
        // printf("reg[0]:%x,reg[1]:%x,reg[2]:%x,reg[3]:%x,reg[4]:%x,reg[5]:%x,reg[6]:%x,reg[7]:%x,reg[8]:%x,reg[9]:%x,reg[10]:%x,reg[11]:%x,reg[12]:%x,reg[13]:%x,reg[14]:%x,reg[15]:%x,reg[16]:%x, pc:%x, next pc:%x\n",cpu.regs_[0],cpu.regs_[1],cpu.regs_[2],cpu.regs_[3],cpu.regs_[4],cpu.regs_[5],cpu.regs_[6],cpu.regs_[7],cpu.regs_[8],cpu.regs_[9],cpu.regs_[10],cpu.regs_[11],cpu.regs_[12],cpu.regs_[13],cpu.regs_[14],cpu.regs_[15],cpu.regs_[16],cpu.pc_,cpu.pc_willwrite);
        if(count > 100000000) return 1;
        count++;
        // getchar();
    }
}