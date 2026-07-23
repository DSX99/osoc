#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WAYS   4
#define MAX_SETS   1024
#define BHT_MAX    4096

#define LOG2_1(n)  (((n) >= 2) ? 1 : 0)
#define LOG2_2(n)  (((n) >= 4) ? 2 : LOG2_1(n))
#define LOG2_4(n)  (((n) >= 16) ? 4 + LOG2_2((n) >> 4) : LOG2_2(n))
#define LOG2_8(n)  (((n) >= 256) ? 8 + LOG2_4((n) >> 8) : LOG2_4(n))
#define LOG2(n)    (((n) >= 65536) ? 16 + LOG2_8((n) >> 16) : LOG2_8(n))

typedef struct btb_t {          // TARGETS ONLY now — no direction bits
    uint32_t tag;
    uint32_t target;
    uint32_t valid;
    uint32_t last_used;
} btb_t;

btb_t   btb[MAX_SETS][MAX_WAYS];
uint8_t bht[BHT_MAX];           // tagless 2-bit saturating counters
uint32_t ghr = 0;               // global history register (gshare)

typedef struct { uint32_t size; uint32_t hist; const char *name; } bht_cfg_t;
bht_cfg_t bht_cfgs[] = {        // hist=0 => bimodal (PC-indexed); hist>0 => gshare
    {  16, 0, "bimodal-16"  },
    {  64, 0, "bimodal-64"  },
    { 256, 0, "bimodal-256" },
    {1024, 0, "bimodal-1024"},
    { 256, 8, "gshare-256"  },
    {1024,10, "gshare-1024" },
};

uint32_t ways_list[] = {1, 2, 4};
uint32_t sets_list[] = {1, 2, 4, 8};
uint32_t align_bytes = 4;

uint32_t curr_ways = 0;
uint32_t index_shift = 0, index_mask = 0, tag_shift = 0;
uint32_t bht_mask = 0, hist_len = 0;

uint32_t pred_count[3];
uint32_t taken_count[3];
uint32_t mis_cold[3];   // taken, BTB miss   -> no target available (BTB size fixes this)
uint32_t mis_dir[3];    // BTB hit, BHT direction wrong (either polarity)
uint32_t mis_tgt[3];    // BTB hit, both agree taken, stored target wrong
uint32_t stage = 0;

void try_branch(uint32_t next_pc, uint32_t pc) {
    if (stage == 0 && pc >= 0x0f000000 && pc < 0x10000000) stage = 1;
    if (stage == 1 && pc >= 0xa0000000 && pc < 0xc0000000) stage = 2;
    pred_count[stage]++;

    uint32_t taken = (next_pc != pc + 4);
    if (taken) taken_count[stage]++;

    // ---- BTB lookup (target supply) ----
    uint32_t set = (pc >> index_shift) & index_mask;
    uint32_t tag =  pc >> tag_shift;
    int      hit = -1;
    uint32_t victim = 0, oldest = 0xffffffff;
    for (uint32_t w = 0; w < curr_ways; w++) {
        if (btb[set][w].valid && btb[set][w].tag == tag) { hit = (int)w; break; }
        if (btb[set][w].last_used < oldest) { oldest = btb[set][w].last_used; victim = w; }
    }

    // ---- BHT lookup (direction) ----
    uint32_t pc_bits  = pc >> index_shift;                 // drop alignment
    uint32_t bht_idx  = (pc_bits ^ ghr) & bht_mask;        // ghr==0 for bimodal
    uint32_t bht_taken = (bht[bht_idx] >= 2);              // MSB of 2-bit counter

    // ---- effective prediction: jump iff (BHT says taken) AND (BTB has target) ----
    if (hit >= 0) {
        if (bht_taken) {                                   // predicted jump to stored target
            if (!taken)                                mis_dir[stage]++;   // predicted T, was NT
            else if (btb[set][hit].target != next_pc)  mis_tgt[stage]++;   // T, wrong target
            // else correct
        } else {                                           // predicted fall-through
            if (taken)                                 mis_dir[stage]++;   // predicted NT, was T
            // else correct
        }
        btb[set][hit].last_used = pred_count[stage];
        if (taken) btb[set][hit].target = next_pc;         // keep target fresh
    } else if (taken) {
        mis_cold[stage]++;                                 // no target -> fall-through, was taken
        btb[set][victim].tag       = tag;
        btb[set][victim].target    = next_pc;
        btb[set][victim].valid     = 1;
        btb[set][victim].last_used = pred_count[stage];
    }
    // (BTB miss + not taken => correct fall-through)

    // ---- update BHT + GHR only for KNOWN branches (taken now, or BTB-resident) ----
    // A not-taken BTB-miss is presumed non-branch/evicted -> no update (avoids polluting BHT).
    if (taken || hit >= 0) {
        if (taken) { if (bht[bht_idx] < 3) bht[bht_idx]++; }
        else       { if (bht[bht_idx] > 0) bht[bht_idx]--; }
        if (hist_len) ghr = ((ghr << 1) | taken) & ((1u << hist_len) - 1u);
    }
}

static const char *path = "/home/dsx99/osoc/ysyx-workbench/npc/tools/idk/new_microbench_save";

int main(void) {
    FILE *fp = fopen(path, "rb");
    if (!fp) { perror("fopen"); return 1; }
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    printf("trace = %s, size = %ld bytes (%ld addresses)\n", path, size, size / 4);

    uint32_t n_ways = sizeof(ways_list) / sizeof(ways_list[0]);
    uint32_t n_sets = sizeof(sets_list) / sizeof(sets_list[0]);
    uint32_t n_bht  = sizeof(bht_cfgs) / sizeof(bht_cfgs[0]);

    for (uint32_t ib = 0; ib < n_bht; ib++) {
        uint32_t bsize = bht_cfgs[ib].size;
        hist_len = bht_cfgs[ib].hist;
        bht_mask = bsize - 1;                               // sizes must be powers of 2
        printf("\n########## BHT = %s  (%u entries x 2b = %u bits) ##########\n",
               bht_cfgs[ib].name, bsize, bsize * 2);

        for (uint32_t iw = 0; iw < n_ways; iw++) {
            for (uint32_t is = 0; is < n_sets; is++) {
                curr_ways   = ways_list[iw];
                index_shift = LOG2(align_bytes);
                index_mask  = (1u << LOG2(sets_list[is])) - 1u;
                tag_shift   = index_shift + LOG2(sets_list[is]);

                stage = 0; ghr = 0;
                memset(btb, 0, sizeof(btb));
                memset(bht, 2, sizeof(bht));                // init weakly-taken (0b10)
                memset(pred_count,  0, sizeof(pred_count));
                memset(taken_count, 0, sizeof(taken_count));
                memset(mis_cold, 0, sizeof(mis_cold));
                memset(mis_dir,  0, sizeof(mis_dir));
                memset(mis_tgt,  0, sizeof(mis_tgt));

                uint32_t pc, next_pc;
                fseek(fp, 0, SEEK_SET);
                if (fread(&pc, 4, 1, fp) != 1) { fclose(fp); return 1; }
                while (fread(&next_pc, 4, 1, fp) == 1) {
                    try_branch(next_pc, pc);
                    pc = next_pc;
                }

                uint32_t tp=0, cold=0, dir=0, tgt=0;
                for (int s = 0; s < 3; s++) {
                    tp += pred_count[s];
                    cold += mis_cold[s]; dir += mis_dir[s]; tgt += mis_tgt[s];
                }
                uint32_t mis = cold + dir + tgt;

                uint32_t idx_bits = LOG2(sets_list[is]);
                uint32_t tag_bits = 32 - idx_bits - index_shift;
                uint32_t entries  = sets_list[is] * curr_ways;
                uint32_t btb_bits = entries * (tag_bits + 32 + 1);  // tag+target+valid (full 32b tgt)

                printf("entries %4u (%3u x %u):  MPKI %6.2f  mispred %u (%.2f%%)  "
                       "[cold %u, dir %u, target %u]  BTB~%ub +BHT~%ub =%ub\n",
                       entries, sets_list[is], curr_ways,
                       tp ? 1000.0 * mis / tp : 0.0,
                       mis, tp ? 100.0 * mis / tp : 0.0,
                       cold, dir, tgt,
                       btb_bits, bsize * 2, btb_bits + bsize * 2);
            }
        }
    }
    fclose(fp);
    return 0;
}