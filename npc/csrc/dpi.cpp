#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <cstring>
#include <chrono>
#include "common.h"

uint64_t curr_time;
extern bool skip_inst;
extern bool fail;
extern bool do_diff;

static const uint32_t img [] = {
  0x00000297,  // auipc t0,0
  0x00028823,  // sb  zero,16(t0)
  0x0102c503,  // lbu a0,16(t0)
  0x00100073,  // ebreak (used as nemu_trap)
  0xdeadbeef,  // some data
};


#ifdef SOC
uint8_t flash[FLASH_SIZE];
uint8_t psram[PSRAM_SIZE];
uint8_t sdram[SDRAM_SIZE];

#define MROM_OFFSET 0x20000000
#define FLASH_OFFSET 0x30000000
#define PSRAM_OFFSET 0x80000000
#define SDRAM_OFFSET 0xa0000000

extern "C" void flash_read(uint32_t addr, uint32_t *data) { addr = addr & 0xfffffffc; *data = ((flash[addr]<<24)|(flash[addr+1]<<16)|(flash[addr+2]<<8)|(flash[addr+3])); }
extern "C" void mrom_read(uint32_t addr, uint32_t *data) { assert(0); }
extern "C" void psram_write(uint32_t addr, uint32_t data, uint32_t half) {
    // printf("Call to write to addr:0x%x ,data:0x%x ,half:%x\n",addr, data, half);
    if(half) psram[addr]=(psram[addr]&0x0f) | ((data <<4) & 0xf0);
    else psram[addr] = (psram[addr]&0xf0) | data & 0x0f;
}
extern "C" void psram_read(uint32_t addr, uint32_t *data) {
    // printf("Call to read from addr:0x%x\n",addr);
    *data=(psram[addr]);
}
extern "C" void sdram_write(uint32_t addr, uint32_t data, uint32_t mask) {
    // printf("Call to write to addr:0x%x ,data:0x%04x ,half:%x\n",addr, data, mask);
    if (!(mask & 0x01)) sdram[addr] = data & 0xFF;
    if (!(mask & 0x02)) sdram[addr + 1] = (data >> 8) & 0xFF;
    
    // for(int i=0;i<8;i++){
        //     printf("i:%d,mem:%02x\n",i,sdram[i]);
        // }
    }
    extern "C" void sdram_read(uint32_t addr, uint32_t *data) {
        // printf("Call to read from addr:0x%x\n",addr);
        *data = sdram[addr] | (sdram[addr + 1] << 8);
    }
    
    
    extern "C" {
        void difftest_memcpy(uint32_t addr, void *buf, size_t n, bool direction);
        void loadmemory(char *img_file, bool batch) {
            if (img_file == NULL) {
                printf("No image is given.\n");
                memcpy(flash, img, sizeof(img));
                if(!batch && do_diff){
                    difftest_memcpy(FLASH_OFFSET, flash, sizeof(img), 1);
                }
                return; // built-in image size
            }
            
            FILE *fp = fopen(img_file, "rb");
            if(!fp){
                printf("Can not open '%s'\n", img_file);
            }
            
            fseek(fp, 0, SEEK_END);
            long size = ftell(fp);
            
            printf("The image is %s, size = %ld\n", img_file, size);
            
            fseek(fp, 0, SEEK_SET);
            int ret = fread(flash, size, 1, fp);
            assert(ret == 1);
            
            fclose(fp);
            
            if(!batch && do_diff){
                difftest_memcpy(FLASH_OFFSET, flash, size, 1);
            }
        }
    }
    
    uint32_t memread(uint32_t addr){
        #ifdef MTRACE
        printf("\n\033[034mCall to read from memory at %08x\033[0m\n", addr);
        #endif
        if(addr>=FLASH_OFFSET && addr<(FLASH_OFFSET + FLASH_SIZE)){
            return ((flash[addr-FLASH_OFFSET+3]<<24)|
            (flash[addr-FLASH_OFFSET+2]<<16)|
            (flash[addr-FLASH_OFFSET+1]<<8)|
            (flash[addr-FLASH_OFFSET]));
        }else if(addr>=PSRAM_OFFSET && addr<(PSRAM_OFFSET + 0x20000000)){
            return ((psram[addr-PSRAM_OFFSET+3]<<24)|
            (psram[addr-PSRAM_OFFSET+2]<<16)|
            (psram[addr-PSRAM_OFFSET+1]<<8)|
            (psram[addr-PSRAM_OFFSET]));    
        }else{
            printf("Illegal memory read access at addr:0x%08x at pc: 0x%08x\n",addr, top->pc);
            fail=1;
        }
        return 0;
    }
    #endif
    
    #ifdef NPC

    #define DEVICE_BASE 0xa0000000

    #define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
    #define KBD_ADDR        (DEVICE_BASE + 0x0000060)
    #define RTC_ADDR        (DEVICE_BASE + 0x0000048)
    #define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)

    #define ROM_OFFSET  0x80000000
    #define MEM_SIZE    0x00100000
    
    extern Vosoc_26000003_func_osoc_26000003_func *top;
    uint8_t mem[MEM_SIZE]; 

    extern "C" {
        void difftest_memcpy(uint32_t addr, void *buf, size_t n, bool direction);
        void loadmemory(char *img_file, bool batch) {
            if (img_file == NULL) {
                printf("No image is given.\n");
                memcpy(mem, img, sizeof(img));
                if(!batch && do_diff){
                    difftest_memcpy(ROM_OFFSET, mem, sizeof(img), 1);
                }
                return; // built-in image size
            }
            
            FILE *fp = fopen(img_file, "rb");
            if(!fp){
                printf("Can not open '%s'\n", img_file);
            }
            
            fseek(fp, 0, SEEK_END);
            long size = ftell(fp);
            
            printf("The image is %s, size = %ld\n", img_file, size);
            
            fseek(fp, 0, SEEK_SET);
            int ret = fread(mem, size, 1, fp);
            assert(ret == 1);
            
            fclose(fp);
            
            if(!batch && do_diff){
                difftest_memcpy(ROM_OFFSET, mem, size, 1);
            }
        }
    }

    extern "C" void memwrite(uint32_t addr, uint32_t data, uint32_t type){
        // printf("\033[034mCall to write to memory at %08x\033[0m\n", addr);
        if(addr>=ROM_OFFSET && addr<(ROM_OFFSET + FLASH_SIZE)){
            int working_addr = (addr - ROM_OFFSET) & (~3);

            if (type & 0x1) mem[working_addr]     = data & 0xFF;
            if (type & 0x2) mem[working_addr + 1] = (data >> 8) & 0xFF;
            if (type & 0x4) mem[working_addr + 2] = (data >> 16) & 0xFF;
            if (type & 0x8) mem[working_addr + 3] = (data >> 24) & 0xFF;
        }else if(addr == SERIAL_PORT){
            skip_inst = 1;
            putchar((uint8_t)data);
            fflush(stdout);
        }else{
            printf("Illegal memory write access at addr:0x%08x at pc: 0x%08x\n",addr, top->pc);
            assert(0);
        }
    }

    extern "C" uint32_t memread(uint32_t addr){
        // printf("\n\033[034mCall to read from memory at %08x\033[0m\n", addr);
        if(addr>=ROM_OFFSET && addr<(ROM_OFFSET + MEM_SIZE)){
            int working_addr = (addr - ROM_OFFSET) & (~3);
            return ((mem[working_addr+3]<<24)|
            (mem[working_addr+2]<<16)|
            (mem[working_addr+1]<<8)|
            (mem[working_addr]));
        }{
            printf("Illegal memory read access at addr:0x%08x at pc: 0x%08x\n",addr, top->pc);
            fail=1;
        }
        return 0;
    }
    #endif