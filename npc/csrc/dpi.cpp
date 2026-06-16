#include <stdio.h>
#include <stdint.h>

#define ROM_OFFSET 0x80000000
uint8_t mem[65536];

void write(uint32_t addr, uint32_t data, uint32_t type){
    if(type ==0){
        mem[addr-ROM_OFFSET] = data & 0xFF;
    }else if (type ==1){
        mem[addr-ROM_OFFSET] = data & 0xFF;
        mem[addr-ROM_OFFSET+1] = (data>>8) & 0xFF;
    }else if (type ==2){
        mem[addr-ROM_OFFSET] = data & 0xFF;
        mem[addr-ROM_OFFSET+1] = (data>>8) & 0xFF;
        mem[addr-ROM_OFFSET+2] = (data>>16) & 0xFF;
        mem[addr-ROM_OFFSET+3] = (data>>24) & 0xFF;
    }else{
        printf("strange data access addr:%u, data:%u, type:%u\n", addr, data, type);
    }
}

int read(uint32_t addr){
    return ((mem[addr-ROM_OFFSET+3]<<24)|(mem[addr-ROM_OFFSET+2]<<16)|(mem[addr-ROM_OFFSET+1]<<8)|(mem[addr-ROM_OFFSET]));
}
