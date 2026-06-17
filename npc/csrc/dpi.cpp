#include <stdio.h>
#include <stdint.h>
#include <assert.h>

#define ROM_OFFSET 0x80000000
uint8_t mem[65536];

void loadmemory();

void memwrite(uint32_t addr, uint32_t data, uint32_t type){
    if(addr>ROM_OFFSET){
        printf("Illegal memory write access at addr:0x%08x\n",addr);
        assert(0);
    }
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

int memread(uint32_t addr){
    if(addr>ROM_OFFSET){
        printf("Illegal memory read access at addr:0x%08x\n",addr);
        assert(0);
    }
    return ((mem[addr-ROM_OFFSET+3]<<24)|(mem[addr-ROM_OFFSET+2]<<16)|(mem[addr-ROM_OFFSET+1]<<8)|(mem[addr-ROM_OFFSET]));
}
