#include <stdio.h>
#include <stdint.h>
#include <assert.h>

#define ROM_OFFSET 0x80000000
#define MEM_SIZE 1024*1024
uint8_t mem[MEM_SIZE];

void loadmemory(char *img_file) {
  if (img_file == NULL) {
    printf("No image is given.");
    return; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  if(!fp){
    printf("Can not open '%s'", img_file);
  }

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(mem, size, 1, fp);
  assert(ret == 1);

  fclose(fp);
}

extern "C" {
    void memwrite(uint32_t addr, uint32_t data, uint32_t type){
        if(addr<ROM_OFFSET || addr>(ROM_OFFSET + MEM_SIZE)){
            printf("Illegal memory write access at addr:0x%08x\n",addr);
            return;
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
        if(addr<ROM_OFFSET || addr>(ROM_OFFSET + MEM_SIZE)){
            printf("Illegal memory read access at addr:0x%08x\n",addr);
            return 0;
        }
        return ((mem[addr-ROM_OFFSET+3]<<24)|(mem[addr-ROM_OFFSET+2]<<16)|(mem[addr-ROM_OFFSET+1]<<8)|(mem[addr-ROM_OFFSET]));
    }
}