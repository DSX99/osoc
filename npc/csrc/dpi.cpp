#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <cstring>
#include <chrono>
#include "common.h"


uint8_t mem[MEM_SIZE];
uint64_t curr_time;
extern bool skip_inst;
extern bool fail;
extern VysyxSoCFull_osoc_26000003 *top;
extern bool do_diff;

#define ROM_OFFSET  0x80000000
#define MROM_OFFSET 0x20000000
#define FLASH_OFFSET 0x30000000


#define DEVICE_BASE 0xa0000000

#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)


static const uint32_t img [] = {
  0x00000297,  // auipc t0,0
  0x00028823,  // sb  zero,16(t0)
  0x0102c503,  // lbu a0,16(t0)
  0x00100073,  // ebreak (used as nemu_trap)
  0xdeadbeef,  // some data
};

uint8_t flash[] = {
    0x37,0x07,0x00,0x10,
    0x93,0x07,0x10,0x04,
    0x23,0x00,0xf7,0x00,
    0x23,0x00,0xf7,0x00,
    0x23,0x00,0xf7,0x00
};

extern "C" void flash_read(uint32_t addr, uint32_t *data) { addr = addr & 0xfffffffc; *data = ((flash[addr+3])|(flash[addr+2]<<8)|(flash[addr+1]<<16)|(flash[addr]<<24)); }
extern "C" void mrom_read(uint32_t addr, uint32_t *data) { addr = addr & 0xfffffffc; *data = ((mem[addr-MROM_OFFSET+3]<<24)|(mem[addr-MROM_OFFSET+2]<<16)|(mem[addr-MROM_OFFSET+1]<<8)|(mem[addr-MROM_OFFSET])); }

extern "C" {
    void difftest_memcpy(uint32_t addr, void *buf, size_t n, bool direction);
    void loadmemory(char *img_file, bool batch) {
        if (img_file == NULL) {
            printf("No image is given.\n");
            memcpy(mem, img, sizeof(img));
            if(!batch && do_diff){
                difftest_memcpy(MROM_OFFSET, mem, sizeof(img), 1);
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
            difftest_memcpy(MROM_OFFSET, mem, size, 1);
        }
    }

    //deprecated, works for npc, not SoC
    void memwrite(uint32_t addr, uint32_t data, uint32_t type){
        #ifdef MTRACE
        printf("\033[034mCall to write to memory at %08x\033[0m\n", addr);
        #endif
        if(addr>=ROM_OFFSET && addr<(ROM_OFFSET + MEM_SIZE)){
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
        }else if(addr == SERIAL_PORT){
            skip_inst = 1;
            putchar((uint8_t)data);
            fflush(stdout);
        }else{
            printf("Illegal memory write access at addr:0x%08x at pc: 0x%08x\n",addr, top->pc);
            assert(0);
        }
    }

    //deprecated, works for npc, not SoC
    uint32_t memread(uint32_t addr){
        #ifdef MTRACE
        printf("\n\033[034mCall to read from memory at %08x\033[0m\n", addr);
        #endif
        if(addr>=ROM_OFFSET && addr<(ROM_OFFSET + MEM_SIZE)){
            return ((mem[addr-ROM_OFFSET+3]<<24)|
                    (mem[addr-ROM_OFFSET+2]<<16)|
                    (mem[addr-ROM_OFFSET+1]<<8)|
                    (mem[addr-ROM_OFFSET]));
        }else if(addr == RTC_ADDR || addr == RTC_ADDR + 4){
            skip_inst = 1;
            if(addr == RTC_ADDR + 4){
                auto now = std::chrono::system_clock::now().time_since_epoch();
                curr_time = std::chrono::duration_cast<std::chrono::microseconds>(now).count();
                return curr_time>>32;
            }
            if(addr == RTC_ADDR) return (uint32_t)curr_time;
        }else{
            printf("Illegal memory read access at addr:0x%08x at pc: 0x%08x\n",addr, top->pc);
            fail=1;
        }
        return 0;
    }
}