#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <getopt.h>

#define rows 1
#define lines 16

typedef struct cache_t
{
    uint32_t tag;
    uint32_t valid;
    uint32_t last_used;
}cache_t;


cache_t cache[lines][rows];

static char *path = "";

uint32_t access_count;

uint32_t miss_count;
uint32_t hit_count;


void try_cache(uint32_t addr){
    access_count++;
    uint32_t set_index = (addr >> 2) & 0xF;
    uint32_t tag = addr >> 6;

    uint32_t hit = 0;
    uint32_t change_row = 0;
    uint32_t time_access = -1;

    for (int i = 0; i < rows; i++) {
        if (cache[set_index][i].valid && cache[set_index][i].tag == tag) {
            hit = 1;
            cache[set_index][i].last_used = access_count;
            hit_count++;
            break;
        }
        if(cache[set_index][i].last_used<time_access){
            change_row=i;
            time_access = cache[set_index][i].last_used;
        }
    }



    if (!hit) {
        miss_count++;
        cache[set_index][change_row].tag = tag;
        cache[set_index][change_row].last_used = access_count;
    }
}

int main(){
    uint32_t addr;
    uint32_t tag_1, tag_2;


    FILE *fp = fopen(path, "rb");
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    long point = 0;
    printf("The image is %s, size = %ld", path, size);

    fseek(fp, 0, SEEK_SET);

    while(fp){
        fread(&addr, 4, 1, fp);
        point += 4;
        try_cache(addr);
        if(point>=size) break;
    }

    fclose(fp);
}