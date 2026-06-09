// #include "emupp.h"
#include "emupp.cpp"
#include <stdio.h>

sCPU cpu;

int main(){
    uint8_t recv;
    cpu.LoadInstructions();
    cpu.SetPC(0);
    while(recv==0){
        recv = cpu.do_step();
        printf("reg[0]:%d,reg[1]:%d,reg[2]:%d,reg[3]:%d,reg[4]:%d,reg[5]:%d, pc:%d\n",cpu.regs_[0],cpu.regs_[1],cpu.regs_[2],cpu.regs_[3],cpu.regs_[4],cpu.regs_[5],cpu.pc_);
        if(cpu.pc_ > 100) break;
    }
    return 0;
}