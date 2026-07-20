#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WAYS   4
#define MAX_SETS   1024

#define LOG2_1(n)  (((n) >= 2) ? 1 : 0)
#define LOG2_2(n)  (((n) >= 4) ? 2 : LOG2_1(n))
#define LOG2_4(n)  (((n) >= 16) ? 4 + LOG2_2((n) >> 4) : LOG2_2(n))
#define LOG2_8(n)  (((n) >= 256) ? 8 + LOG2_4((n) >> 8) : LOG2_4(n))
#define LOG2(n)    (((n) >= 65536) ? 16 + LOG2_8((n) >> 16) : LOG2_8(n))

typedef struct btb_t {
    uint32_t tag;
    uint32_t target;
    uint32_t valid;
    uint32_t last_used;      // LRU
} btb_t;

btb_t btb[MAX_SETS][MAX_WAYS];

// ---- sweep config: BTB length = sets * ways ----
uint32_t ways_list[] = {1, 2, 4};
uint32_t sets_list[] = {8, 16, 32, 64, 128, 256};
uint32_t align_bytes = 4;

uint32_t curr_ways = 0;
uint32_t index_shift = 0, index_mask = 0, tag_shift = 0;

// ---- per-phase counters ----
uint32_t pred_count[3];   // fetches / lookups
uint32_t taken_count[3];  // dynamic taken transfers
uint32_t mis_cold[3];     // taken, BTB miss  -> predicted fall-through
uint32_t mis_nt[3];       // BTB hit, predicted taken, actually not taken
uint32_t mis_tgt[3];      // BTB hit, taken, wrong target (indirect)
uint32_t stage = 0;

static const char *path = "/home/dsx99/osoc/ysyx-workbench/npc/tools/idk/new_microbench_save";

void try_branch(uint32_t next_pc, uint32_t pc) {
    pred_count[0]++;
    if(next_pc != pc+4) taken_count[0]++;
}

int main(void) {
    FILE *fp = fopen(path, "rb");
    if (!fp) { perror("fopen"); return 1; }
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    printf("trace = %s, size = %ld bytes (%ld addresses)\n\n", path, size, size / 4);

    uint32_t n_ways = sizeof(ways_list) / sizeof(ways_list[0]);
    uint32_t n_sets = sizeof(sets_list) / sizeof(sets_list[0]);

    for (uint32_t iw = 0; iw < 1; iw++) {
        for (uint32_t is = 0; is < 1; is++) {

            memset(pred_count,  0, sizeof(pred_count));
            memset(taken_count, 0, sizeof(taken_count));

            uint32_t pc, next_pc;
            fseek(fp, 0, SEEK_SET);
            if (fread(&pc, 4, 1, fp) != 1) { fclose(fp); return 1; }
            while (fread(&next_pc, 4, 1, fp) == 1) {
                try_branch(next_pc, pc);
                pc = next_pc;
            }
            printf("No branch pred: mispred %u/%u (%.2f%%)\n",taken_count[0],pred_count[0], ((double)taken_count[0])/pred_count[0] * 100);
        }
    }
    fclose(fp);
    return 0;
}