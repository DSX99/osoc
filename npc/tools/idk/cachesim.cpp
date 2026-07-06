#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <getopt.h>
#include <iostream>

#define ROWS       2  
#define LINES      4  
#define LINE_SIZE  32   

#define LOG2_1(n)  (((n) >= 2) ? 1 : 0)
#define LOG2_2(n)  (((n) >= 4) ? 2 : LOG2_1(n))
#define LOG2_4(n)  (((n) >= 16) ? 4 + LOG2_2((n) >> 4) : LOG2_2(n))
#define LOG2_8(n)  (((n) >= 256) ? 8 + LOG2_4((n) >> 8) : LOG2_4(n))
#define LOG2(n)    (((n) >= 65536) ? 16 + LOG2_8((n) >> 16) : LOG2_8(n))

#define OFFSET_BITS LOG2(LINE_SIZE)
#define INDEX_BITS  LOG2(LINES)

#define INDEX_SHIFT  OFFSET_BITS
#define INDEX_MASK   ((1 << INDEX_BITS) - 1)
#define TAG_SHIFT    (OFFSET_BITS + INDEX_BITS)

typedef struct cache_t
{
    uint32_t tag;
    uint32_t valid;
    uint32_t last_used;
}cache_t;


cache_t cache[LINES][ROWS];

static char *path = "/home/dsx99/osoc/ysyx-workbench/npc/tools/idk/opcodes";

uint32_t access_count[3];
uint32_t miss_count[3];
uint32_t hit_count[3];
uint32_t stage=0;


void try_cache(uint32_t addr){
    if(addr >= 0x0f000000 && addr<0x0fffffff) stage=1;
    if(addr >= 0xa0000000 && addr<0xbfffffff) stage=2;
    access_count[stage]++;
    uint32_t set_index = (addr >> INDEX_SHIFT) & INDEX_MASK;
    uint32_t tag = addr >> TAG_SHIFT;

    uint32_t hit = 0;
    uint32_t change_row = 0;
    uint32_t time_access = -1;

    for (int i = 0; i < ROWS; i++) {
        if (cache[set_index][i].valid && cache[set_index][i].tag == tag) {
            hit = 1;
            cache[set_index][i].last_used = access_count[stage];
            hit_count[stage]++;
            break;
        }
        if(cache[set_index][i].last_used<time_access){
            change_row=i;
            time_access = cache[set_index][i].last_used;
        }
    }

    // printf("%d",change_row);
    // std::cin.get();

    if (!hit) {
        miss_count[stage]++;
        cache[set_index][change_row].tag = tag;
        cache[set_index][change_row].last_used = access_count[stage];
        cache[set_index][change_row].valid = 1;
    }
}

int main(){
    uint32_t addr;
    uint32_t tag_1, tag_2;


    FILE *fp = fopen(path, "rb");
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    long point = 0;
    printf("The image is %s, size = %ld\n", path, size);

    fseek(fp, 0, SEEK_SET);

    while(fp){
        fread(&addr, 4, 1, fp);
        point += 4;
        try_cache(addr);
        if(point>=size) break;
    }

    for(int i=0;i<3;i++){
        printf("Hit %d, miss %d, total access %d\n", hit_count[i], miss_count[i], access_count[i]);
    }

    fclose(fp);
}




/*
=========================================================================================================
 Performance Metric                   | 0: PREBOOT           | 1: BOOT              | 2: PROGRAM           
---------------------------------------------------------------------------------------------------------
 Execution Cycles                     | 1195565              | 15707634             | 13542905             
 Instructions Retired (WB)            | 2537                 | 18926                | 504401               
 Cycles Per Instruction (CPI)         | 471.251              | 829.950              | 26.849               
 Instructions Per Cycle (IPC)         | 0.002                | 0.001                | 0.037                
---------------------------------------------------------------------------------------------------------
 IFU Fetched Instructions             | 22                   | 138                  | 243279               
 IFU Stall Cycles                     | 49908 (4.2%)         | 276 (0.0%)           | 9281607 (68.5%)      
---------------------------------------------------------------------------------------------------------
 Control Branches + Jumps Executed    | 507                  | 1731                 | 123159               
 Branches + Jumps Taken               | 505 (99.6%)          | 1719 (99.3%)         | 82236 (66.8%)        
---------------------------------------------------------------------------------------------------------
 LSU Data Reads (Loads)               | 504                  | 6842                 | 54693                
 LSU Data Writes (Stores)             | 505                  | 6852                 | 42926                
 LSU Stall Cycles                     | 1143110 (95.6%)      | 15688432 (99.9%)     | 3756898 (27.7%)      
---------------------------------------------------------------------------------------------------------
 Cache Hits                           | 2515 (99.1%)         | 18788 (99.3%)        | 261122 (51.8%)       
 Cache Misses                         | 22 (0.9%)            | 138 (0.7%)           | 243279 (48.2%)       
 Cache Miss Penalty Cycles            | 49908                | 276                  | 9281607              
 Avg Cache Miss Latency (cyc)         | 2268.55              | 2.00                 | 38.15                
=========================================================================================================
 AMAT (cycles)                        | 19.7                 | 0.0                  | 18.4                 
=========================================================================================================
*/