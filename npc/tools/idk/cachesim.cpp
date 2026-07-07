#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <getopt.h>
#include <iostream>
#include <cstring>
#include <cmath>

#define MAX_ROWS   2  
#define MAX_LINES  16

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

typedef struct cache_t{
    uint32_t tag;
    uint32_t valid;
    uint32_t last_used;
}cache_t;

typedef struct result_t{
    uint32_t size;
    double AMAT;
    uint32_t row;
    uint32_t line;
    uint32_t line_size;
} result_t;


cache_t cache[MAX_LINES][MAX_ROWS];
result_t results[40];
uint32_t count=0;

double latency[3] = {2268.55, 2.00, 38.91};

uint32_t rows[2] = {1,2};
uint32_t curr_row=0;
uint32_t lines[5] = {1,2,4,8,16};
uint32_t line_size[4] = {4,8,16,32};
uint32_t index_shift=0;
uint32_t index_mask=0;
uint32_t tag_shift=0;

static char *path = "/home/dsx99/osoc/ysyx-workbench/npc/tools/idk/opcodes";

uint32_t access_count[3];
uint32_t miss_count[3];
uint32_t hit_count[3];
uint32_t stage=0;


void try_cache(uint32_t addr){
    if(stage == 0 && addr >= 0x0f000000 && addr<0x10000000) stage=1;
    if(stage == 1 && addr >= 0xa0000000 && addr<0xc0000000) stage=2;
    access_count[stage]++;
    uint32_t set_index = (addr >> index_shift) & index_mask;
    uint32_t tag = addr >> tag_shift;

    uint32_t hit = 0;
    uint32_t change_row = 0;
    uint32_t time_access = -1;

    for (int f = 0; f < curr_row; f++) {
        if (cache[set_index][f].valid && cache[set_index][f].tag == tag) {
            hit = 1;
            cache[set_index][f].last_used = access_count[stage];
            hit_count[stage]++;
            break;
        }
        if(cache[set_index][f].last_used<time_access){
            change_row=f;
            time_access = cache[set_index][f].last_used;
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


    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            for(int k=0;k<4;k++){

                fseek(fp, 0, SEEK_SET);
                long point = 0;
                stage=0;
                memset(cache, 0, sizeof(cache));
                memset(access_count, 0, sizeof(access_count));
                memset(miss_count, 0, sizeof(miss_count));
                memset(hit_count, 0, sizeof(hit_count));

                index_shift = LOG2(line_size[k]);
                index_mask = (1<<(LOG2(lines[j]))) - 1;
                tag_shift = index_shift + LOG2(lines[j]);
                curr_row = rows[i];

                while(fp){
                    fread(&addr, 4, 1, fp);
                    point += 4;
                    try_cache(addr);
                    if(point>=size) break;
                }

                printf("rows: %d, lines: %d, line length: %d byte requires:%d byte \n", rows[i], lines[j], line_size[k], rows[i]*lines[j]*line_size[k]);
                for(int i=0;i<3;i++){
                    printf("Hit %d, miss %d, total access %d (hit chance: %3.1f%%), \033[31mAMAT:%3.1f\033[0m\n", hit_count[i], miss_count[i], access_count[i], (double)hit_count[i]*100/access_count[i], (double)miss_count[i]/access_count[i] * latency[i]);
                }
                printf("\n");

                results[count].size = rows[i]*lines[j]*line_size[k];
                results[count].AMAT = (double)miss_count[2]/access_count[2] * latency[2];
                results[count].row = rows[i];
                results[count].line = lines[j];
                results[count].line_size = line_size[k];
                count++;
            }
        }
    }

    result_t best_result[9];

    for(int i=0;i<9;i++){
        best_result[i].size = pow(2,i+2);
        best_result[i].AMAT = (double)100000;
    }


    for(int i=0;i<count;i++){
        for(int j=0;j<9;j++){
            if(results[i].size == best_result[j].size && results[i].AMAT < best_result[j].AMAT){
                best_result[j] = results[i];
            }
        }
    }

    printf("Best results by size:\n");
    for(int i=0;i<9;i++){
        printf("Size:%d, AMAT:%3.1f, rows:%d, lines:%d, line_size:%d\n", best_result[i].size, best_result[i].AMAT, best_result[i].row, best_result[i].line, best_result[i].line_size);
    }

    fclose(fp);
}



/*
=========================================================================================================
 Performance Metric                   | 0: PREBOOT           | 1: BOOT              | 2: PROGRAM           
---------------------------------------------------------------------------------------------------------
 Execution Cycles                     | 1195565              | 15707634             | 2530730300           
 Instructions Retired (WB)            | 2537                 | 18926                | 186490014            
 Cycles Per Instruction (CPI)         | 471.251              | 829.950              | 13.570               
 Instructions Per Cycle (IPC)         | 0.002                | 0.001                | 0.074                
---------------------------------------------------------------------------------------------------------
 IFU Fetched Instructions             | 22                   | 138                  | 43273313             
 IFU Stall Cycles                     | 49908 (4.2%)         | 276 (0.0%)           | 1683625036 (66.5%)   
---------------------------------------------------------------------------------------------------------
 Control Branches + Jumps Executed    | 507                  | 1731                 | 56779278             
 Branches + Jumps Taken               | 505 (99.6%)          | 1719 (99.3%)         | 42757793 (75.3%)     
---------------------------------------------------------------------------------------------------------
 LSU Data Reads (Loads)               | 504                  | 6842                 | 10725002             
 LSU Data Writes (Stores)             | 505                  | 6852                 | 4841881              
 LSU Stall Cycles                     | 1143110 (95.6%)      | 15688432 (99.9%)     | 660615251 (26.1%)    
---------------------------------------------------------------------------------------------------------
 Cache Hits                           | 2515 (99.1%)         | 18788 (99.3%)        | 143216701 (76.8%)    
 Cache Misses                         | 22 (0.9%)            | 138 (0.7%)           | 43273313 (23.2%)     
 Cache Miss Penalty Cycles            | 49908                | 276                  | 1683625036           
 Avg Cache Miss Latency (cyc)         | 2268.55              | 2.00                 | 38.91                
=========================================================================================================
 AMAT (cycles)                        | 19.7                 | 0.0                  | 9.0                  
=========================================================================================================
*/