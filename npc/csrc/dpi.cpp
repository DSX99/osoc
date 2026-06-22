#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <cstring>
#include <time.h>

#define ROM_OFFSET 0x80000000
#define MEM_SIZE 1024*1024
uint8_t mem[MEM_SIZE];
time_t curr_time;

#define DEVICE_BASE 0x00000000 // <- all zeros

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

extern "C" {
    void difftest_memcpy(uint32_t addr, void *buf, size_t n, bool direction);
    void loadmemory(char *img_file, bool batch) {
        if (img_file == NULL) {
            printf("No image is given.\n");
            memcpy(mem, img, sizeof(img));
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

        if(!batch){
            difftest_memcpy(0x80000000, mem, size, 1);
        }
    }

    void memwrite(uint32_t addr, uint32_t data, uint32_t type){
        if(addr>ROM_OFFSET || addr<(ROM_OFFSET + MEM_SIZE)){
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
            putchar((uint8_t)data);
        }else{
            printf("Illegal memory write access at addr:0x%08x\n",addr);
            assert(0);
        }
    }

    uint32_t memread(uint32_t addr){
        if(addr>ROM_OFFSET || addr<(ROM_OFFSET + MEM_SIZE)){
            return ((mem[addr-ROM_OFFSET+3]<<24)|
                    (mem[addr-ROM_OFFSET+2]<<16)|
                    (mem[addr-ROM_OFFSET+1]<<8)|
                    (mem[addr-ROM_OFFSET]));
        }else if(addr == RTC_ADDR || addr == RTC_ADDR + 4){
            if(addr == RTC_ADDR + 4){
                time(&curr_time);
                return curr_time>>32;
            }
            if(addr == RTC_ADDR) return (uint32_t)curr_time;
        }else{
            printf("Illegal memory read access at addr:0x%08x\n",addr);
            assert(0);
        }
    }
}