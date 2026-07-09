#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <verilated.h>
#include "dpi.h"
#include "common.h"


#ifdef CONFIG_FST
#include <verilated_fst_c.h>
#endif

#ifdef OP_TRACE
FILE *fp;
#endif

struct CPU_state {
  uint32_t gpr[32];
  uint32_t pc;
};


// KILLS DIFTEST
bool do_diff = 1;


bool batch=0;
char *img_file;
bool finished=0;
uint32_t ret = 0;
static uint32_t qexit = 0;
VerilatedContext *contextp;
VerilatedFstC *tracep;
VysyxSoCFull* soc; 
VysyxSoCFull_osoc_26000003_core *top;
CPU_state cpu;
bool fail=0;

Performance_t program[3];
uint64_t cycles[3];

int stage=0;
int prev_ifu=0,prev_lsu_r=0,prev_lsu_w=0;
uint32_t prev_pc;
int stall_count=0;

char itrace[16][128];
int point=0;

void execute(uint64_t n);
void init_sdb();
void sdb_mainloop(uint32_t *ret);
bool check_watchpoints();
extern "C" {
void difftest_init(int port);
void difftest_exec(uint64_t n);
void difftest_regcpy(void *regs, bool direction);
void init_disasm();
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
}

void reset(VysyxSoCFull *soc,int n){
  soc->reset=1;
  for(int i=0; i<n; i++){
    #ifdef CONFIG_FST
    contextp->timeInc(1);
    tracep->dump(contextp->time());
    #endif
    soc->clock=1;
    soc->eval();
    #ifdef CONFIG_FST
    contextp->timeInc(1);
    tracep->dump(contextp->time());
    #endif
    soc->clock=0;
    soc->eval();
  }
  soc->reset=0;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-b", table, NULL)) != -1) {
    switch (o) {
      case 'b': batch = 1; break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

int main(int argc, char** argv) {
  #ifdef CONFIG_FST
  printf("\n\t\t\033[31mRUNNING WITH FST\033[0m\n");
  #endif
  #ifdef OP_TRACE
  printf("\n\t\t\033[31mRUNNING WITH OP_TRACE\033[0m\n");
  fp = fopen("/home/dsx99/osoc/ysyx-workbench/npc/tools/idk/opcodes", "wb");
  #endif
  Verilated::commandArgs(argc, argv);
  printf("\n\033[1m\033[36mNPC\033[0m\n\n");
  parse_args(argc, argv);
  init_disasm();
  if(!batch && do_diff){
    difftest_init(0);
  }
  loadmemory(img_file, batch);
  memset(&cpu, 0, sizeof(CPU_state));
  cpu.pc = 0x30000000;

  if(!batch && do_diff){
    difftest_regcpy(&cpu, 1);
  }

  contextp = new VerilatedContext;
  // contextp->threads(4); // can be used in future to increase speed

  soc = new VysyxSoCFull{contextp};
  top = soc->ysyxSoCFull->asic->cpu->cpu->core;
  
#ifdef CONFIG_FST
  Verilated::traceEverOn(true);
  tracep = new VerilatedFstC;
  soc->trace(tracep, 5);
  tracep->open("waveform.fst");
#endif


  if (soc == NULL) {
    fprintf(stderr, "Error: Simulation model instantiation failed!\n");
    return -1;
  }

  reset(soc, 100);

  if(batch){
    execute(-1LL);
  }else{
    init_sdb();
    sdb_mainloop(&qexit);
  }

  //printing perf data
  cycles[2] = (contextp->time()>>1) - cycles[1] - cycles[0];
  
  print_stage_performance_table(cycles, program);

  #ifdef CONFIG_FST
  tracep->close();
  #endif
  #ifdef OP_TRACE
  fclose(fp);
  #endif
  
  delete soc;
  return (ret || (!finished && qexit));
}


const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};


void execute(uint64_t n){

  char str[128];
  uint8_t inst[4];
  CPU_state ref_cpu;

  if(fail && do_diff){ 
    printf("failed\n");
    difftest_regcpy(&ref_cpu, 0);

    if (ref_cpu.pc != top->pc) {
      printf("Difference with REF pc, should:0x%08x, actually:0x%08x\n", ref_cpu.pc, top->pc);
      ret = 1;
      return; 
    }

    for(int i = 0; i < 16; i++){
      if(ref_cpu.gpr[i] != top->reg_mod->regs[i]){
        printf("Difference with REF %s, should:0x%08x, actually:0x%08x, pc: 0x%08x\n", 
                regs[i], ref_cpu.gpr[i], top->reg_mod->regs[i], top->pc);
        ret = 1;
        return;
      }
    }
    difftest_exec(1);
    return;
  }

  if(finished){
    printf("Program finished\n");
    if(!batch  && do_diff) difftest_exec(1);
    return;
  }

  while(n>0){

    
    // if(contextp->time() > MAX_SIM_TIME){
      //   printf("MAX SIMTIME\n");
      //   ret = top->reg_mod->regs[10];
      //   break;
      // }
      
      if(!((contextp->time()) % 100000000)&&batch){
        printf("time:%lu\n", contextp->time());
      }
      
      if(!batch && top->opcode!=0 && top->reg_valid){
        inst[0] = (top->opcode) & 0xff;
        inst[1] = (top->opcode >> 8) & 0xff;
        inst[2] = (top->opcode >> 16) & 0xff;
        inst[3] = (top->opcode >> 24) & 0xff;
        disassemble(str, 128, top->pc, inst, 4);
        if(n<10){
        printf("0x%08x: %02x %02x %02x %02x ", top->pc, inst[3], inst[2], inst[1], inst[0]);
        printf("%s\n", str);
      }
      #ifdef ITRACE
      strcpy(itrace[point],str);
      point = (point+1)%ITRACE_VAL;
      #endif
    }
    
    #ifdef CONFIG_FST
    tracep->dump(contextp->time());
    #endif
    contextp->timeInc(1);
    soc->clock=!soc->clock;
    soc->eval();
    #ifdef CONFIG_FST
    tracep->dump(contextp->time());
    #endif
    contextp->timeInc(1);
    soc->clock=!soc->clock;
    soc->eval();

    #ifdef OP_TRACE
    if((top->pc != top->prev_pc) && !top->rst) fwrite(&top->pc,4,1,fp);
    #endif

    if(!top->rst){
    //changing stages
    if(stage == 0 && (top->pc >= 0x0f000000 && top->pc < 0x10000000)){
      stage = 1;
      cycles[0] = contextp->time()>>1;
    }
    if(stage == 1 && (top->pc >= 0xa0000000 && top->pc < 0xc0000000)){
      stage = 2;
      cycles[1] = (contextp->time()>>1) - cycles[0];
    }
    
    //couting performance
    if(top->if_de_valid_if == 0){
      program[stage].ifu_stall_cycle++;
    }
    if((top->if_de_valid_if && top->if_de_ready_if) && prev_ifu == 0){
      program[stage].ifu_fetch_instr++;
    }
    prev_ifu = (top->if_de_valid_if && top->if_de_ready_if);
    if(top->branch){
      program[stage].possible_branch_count++;
    }
    if(top->branch_taken){
      program[stage].branch_taken++;
    }
    if(top->ex_ls_valid_ls && !top->ex_ls_ready_ls){
      program[stage].lsu_stall_cycle++;
    }
    if(top->ex_ls_valid_ls && top->ex_ls_ready_ls){
      if(top->ex_ls_bus_lsu_re_ls){
        program[stage].lsu_read_data++;
      }
      if(top->ex_ls_bus_lsu_we_ls){
        program[stage].lsu_write_data++;
      }
    }
    if(top->reg_valid){
      program[stage].writeback++;
    }
    if(top->pc != top->prev_pc){
      if(top->cache_hit) program[stage].cache_hit++;
      if(top->cache_miss) program[stage].cache_miss++;
    }
    if(top->cache_miss) program[stage].cache_miss_cycles++;
    }

    if(top->pc == prev_pc){
      stall_count++;
      if(stall_count>2000000 && !(stall_count % 500000)){
        printf("Possibly infinite stall\n");
      }
    }else{
      stall_count=0;
    }
    prev_pc = top->pc;

    if(fail){ 
      printf("failed\n");
      return;
    }

    if((!batch) && top->reg_valid && do_diff) difftest_exec(1);

    if(contextp->gotFinish()){
      #ifdef CONFIG_FST
      tracep->close();
      #endif
      if(!batch){
        inst[0] = (top->opcode) & 0xff;
        inst[1] = (top->opcode >> 8) & 0xff;
        inst[2] = (top->opcode >> 16) & 0xff;
        inst[3] = (top->opcode >> 24) & 0xff;
        printf("0x%08x: %02x %02x %02x %02x ", top->pc, inst[3], inst[2], inst[1], inst[0]);
        disassemble(str, 128, top->pc, inst, 4);
        printf("%s\n", str);
        #ifdef ITRACE
        strcpy(itrace[point],str);
        point = (point+1)%ITRACE_VAL;
        #endif
      }
      finished = 1;
      ret = top->reg_mod->regs[10];
      if(ret){
        printf("\033[1m\033[31mNOT GOOD\033[0m\n");
      }else{
        printf("\033[032mGOOD\033[0m\n");
      }
      printf("Finished in %ld\n",contextp->time());
      break;
    }
    if(check_watchpoints()){
      inst[0] = (top->opcode) & 0xff;
      inst[1] = (top->opcode >> 8) & 0xff;
      inst[2] = (top->opcode >> 16) & 0xff;
      inst[3] = (top->opcode >> 24) & 0xff;
      printf("0x%08x: %02x %02x %02x %02x ", top->pc, inst[3], inst[2], inst[1], inst[0]);
      disassemble(str, 128, top->pc, inst, 4);
      printf("%s\n", str);
      #ifdef ITRACE
      strcpy(itrace[point],str);
      point = (point+1)%ITRACE_VAL;
      #endif
      break;
    }
    n--;
    
    if(!batch && do_diff && top->reg_valid) {
        difftest_regcpy(&ref_cpu, 0);

        if (ref_cpu.pc != top->pc) {
          printf("Difference with REF pc, should:0x%08x, actually:0x%08x\n", ref_cpu.pc, top->pc);
          printf("%d\n",contextp->time());
          ret = 1;
          inst[0] = (top->opcode) & 0xff;
          inst[1] = (top->opcode >> 8) & 0xff;
          inst[2] = (top->opcode >> 16) & 0xff;
          inst[3] = (top->opcode >> 24) & 0xff;
          printf("0x%08x: %02x %02x %02x %02x ", top->pc, inst[3], inst[2], inst[1], inst[0]);
          // disassemble(str, 128, top->pc, inst, 4);
          printf("%s\n", str);
          #ifdef ITRACE
          strcpy(itrace[point],str);
          point = (point+1)%ITRACE_VAL;
          #endif
          return; 
        }

        for(int i = 0; i < 16; i++){
          if(ref_cpu.gpr[i] != top->reg_mod->regs[i]){
            printf("Difference with REF %s, should:0x%08x, actually:0x%08x, pc: 0x%08x\n", 
                   regs[i], ref_cpu.gpr[i], top->reg_mod->regs[i], top->pc);
            ret = 1;
            inst[0] = (top->opcode) & 0xff;
            inst[1] = (top->opcode >> 8) & 0xff;
            inst[2] = (top->opcode >> 16) & 0xff;
            inst[3] = (top->opcode >> 24) & 0xff;
            printf("0x%08x: %02x %02x %02x %02x ", top->pc, inst[3], inst[2], inst[1], inst[0]);
            disassemble(str, 128, top->pc, inst, 4);
            printf("%s\n", str);
            #ifdef ITRACE
            strcpy(itrace[point],str);
            point = (point+1)%ITRACE_VAL;
            #endif
            return;
          }
        }
    }
  }
}

void reg_display() {
  printf("Regs values:\n");
  for(int i = 0; i<4; i++){
    for(int j = 0; j<8; j++){
      printf("%s(%02d):%08x   ", regs[8*i+j],8*i+j,top->reg_mod->regs[8*i+j]);
    }
    printf("\n");
  }
  printf("next pc:0x%08x\n",top->pc);
}

uint32_t reg_str2val(const char *s, bool *success) {
  if(strcmp(s,"pc")==0){
    return top->pc;
  }
  for(int i=0;i<32;i++){
    if(strcmp(s,regs[i])==0){
      return top->reg_mod->regs[i];
    }
  }

  printf("please input a correct reg name\n");
  *success=false;
  return 0;
}

void print_itrace(){
  for(int i=0;i<ITRACE_VAL;i++){
    printf("%s\n",itrace[point]);
    point=point+1;
    if(point==ITRACE_VAL){
      point=0;
    }
  }
}

void print_ftrace(){
  printf("too bad, not implemented\n");
}

void print_stage_performance_table(const uint64_t cycles[3], const Performance_t perf[3]) {
    const char* stage_names[3] = {"0: PREBOOT", "1: BOOT", "2: PROGRAM"};
    
    // Arrays to hold derived metrics for each stage
    double cpi[3], ipc[3], ifu_stall_pct[3], lsu_stall_pct[3], branch_taken_pct[3];
    double cache_hit_pct[3], cache_miss_pct[3], avg_miss_latency[3];

    for (int i = 0; i < 3; i++) {
        cpi[i]              = (perf[i].writeback > 0) ? (double)cycles[i] / perf[i].writeback : 0.0;
        ipc[i]              = (cycles[i] > 0) ? (double)perf[i].writeback / cycles[i] : 0.0;
        ifu_stall_pct[i]    = (cycles[i] > 0) ? ((double)perf[i].ifu_stall_cycle / cycles[i]) * 100.0 : 0.0;
        lsu_stall_pct[i]    = (cycles[i] > 0) ? ((double)perf[i].lsu_stall_cycle / cycles[i]) * 100.0 : 0.0;
        branch_taken_pct[i] = (perf[i].possible_branch_count > 0) 
                              ? ((double)perf[i].branch_taken / perf[i].possible_branch_count) * 100.0 : 0.0;
        
        // New Cache Calculations
        uint64_t total_cache_accesses = perf[i].cache_hit + perf[i].cache_miss;
        cache_hit_pct[i]    = (total_cache_accesses > 0) ? ((double)perf[i].cache_hit / total_cache_accesses) * 100.0 : 0.0;
        cache_miss_pct[i]   = (total_cache_accesses > 0) ? ((double)perf[i].cache_miss / total_cache_accesses) * 100.0 : 0.0;
        avg_miss_latency[i] = (perf[i].cache_miss > 0) ? (double)perf[i].cache_miss_cycles / perf[i].cache_miss : 0.0;
    }

    // Table Header
    std::printf("\n=========================================================================================================\n");
    std::printf("                                    MULTI-STAGE PERFORMANCE REPORT                                       \n");
    std::printf("=========================================================================================================\n");
    std::printf(" %-36s | %-20s | %-20s | %-20s \n", "Performance Metric", stage_names[0], stage_names[1], stage_names[2]);
    std::printf("---------------------------------------------------------------------------------------------------------\n");

    // Global Core Metrics
    std::printf(" %-36s | %-20llu | %-20llu | %-20llu \n", "Execution Cycles", 
                (unsigned long long)cycles[0], (unsigned long long)cycles[1], (unsigned long long)cycles[2]);
    std::printf(" %-36s | %-20llu | %-20llu | %-20llu \n", "Instructions Retired (WB)", 
                (unsigned long long)perf[0].writeback, (unsigned long long)perf[1].writeback, (unsigned long long)perf[2].writeback);
    std::printf(" %-36s | %-20.3f | %-20.3f | %-20.3f \n", "Cycles Per Instruction (CPI)", cpi[0], cpi[1], cpi[2]);
    std::printf(" %-36s | %-20.3f | %-20.3f | %-20.3f \n", "Instructions Per Cycle (IPC)", ipc[0], ipc[1], ipc[2]);
    std::printf("---------------------------------------------------------------------------------------------------------\n");

    // Frontend (IFU) Metrics
    std::printf(" %-36s | %-20llu | %-20llu | %-20llu \n", "IFU Fetched Instructions", 
                (unsigned long long)perf[0].ifu_fetch_instr, (unsigned long long)perf[1].ifu_fetch_instr, (unsigned long long)perf[2].ifu_fetch_instr);
    
    char buf0[32], buf1[32], buf2[32];
    std::snprintf(buf0, sizeof(buf0), "%llu (%3.1f%%)", (unsigned long long)perf[0].ifu_stall_cycle, ifu_stall_pct[0]);
    std::snprintf(buf1, sizeof(buf1), "%llu (%3.1f%%)", (unsigned long long)perf[1].ifu_stall_cycle, ifu_stall_pct[1]);
    std::snprintf(buf2, sizeof(buf2), "%llu (%3.1f%%)", (unsigned long long)perf[2].ifu_stall_cycle, ifu_stall_pct[2]);
    std::printf(" %-36s | %-20s | %-20s | %-20s \n", "IFU Stall Cycles", buf0, buf1, buf2);
    std::printf("---------------------------------------------------------------------------------------------------------\n");

    // Branch Metrics
    std::printf(" %-36s | %-20llu | %-20llu | %-20llu \n", "Control Branches + Jumps Executed", 
                (unsigned long long)perf[0].possible_branch_count, (unsigned long long)perf[1].possible_branch_count, (unsigned long long)perf[2].possible_branch_count);
    
    std::snprintf(buf0, sizeof(buf0), "%llu (%3.1f%%)", (unsigned long long)perf[0].branch_taken, branch_taken_pct[0]);
    std::snprintf(buf1, sizeof(buf1), "%llu (%3.1f%%)", (unsigned long long)perf[1].branch_taken, branch_taken_pct[1]);
    std::snprintf(buf2, sizeof(buf2), "%llu (%3.1f%%)", (unsigned long long)perf[2].branch_taken, branch_taken_pct[2]);
    std::printf(" %-36s | %-20s | %-20s | %-20s \n", "Branches + Jumps Taken", buf0, buf1, buf2);
    std::printf("---------------------------------------------------------------------------------------------------------\n");

    // Backend (LSU) Metrics
    std::printf(" %-36s | %-20llu | %-20llu | %-20llu \n", "LSU Data Reads (Loads)", 
                (unsigned long long)perf[0].lsu_read_data, (unsigned long long)perf[1].lsu_read_data, (unsigned long long)perf[2].lsu_read_data);
    std::printf(" %-36s | %-20llu | %-20llu | %-20llu \n", "LSU Data Writes (Stores)", 
                (unsigned long long)perf[0].lsu_write_data, (unsigned long long)perf[1].lsu_write_data, (unsigned long long)perf[2].lsu_write_data);
    
    std::snprintf(buf0, sizeof(buf0), "%llu (%3.1f%%)", (unsigned long long)perf[0].lsu_stall_cycle, lsu_stall_pct[0]);
    std::snprintf(buf1, sizeof(buf1), "%llu (%3.1f%%)", (unsigned long long)perf[1].lsu_stall_cycle, lsu_stall_pct[1]);
    std::snprintf(buf2, sizeof(buf2), "%llu (%3.1f%%)", (unsigned long long)perf[2].lsu_stall_cycle, lsu_stall_pct[2]);
    std::printf(" %-36s | %-20s | %-20s | %-20s \n", "LSU Stall Cycles", buf0, buf1, buf2);
    std::printf("---------------------------------------------------------------------------------------------------------\n");

    // Memory Subsystem (Cache) Metrics
    std::snprintf(buf0, sizeof(buf0), "%llu (%3.1f%%)", (unsigned long long)perf[0].cache_hit, cache_hit_pct[0]);
    std::snprintf(buf1, sizeof(buf1), "%llu (%3.1f%%)", (unsigned long long)perf[1].cache_hit, cache_hit_pct[1]);
    std::snprintf(buf2, sizeof(buf2), "%llu (%3.1f%%)", (unsigned long long)perf[2].cache_hit, cache_hit_pct[2]);
    std::printf(" %-36s | %-20s | %-20s | %-20s \n", "Cache Hits", buf0, buf1, buf2);

    std::snprintf(buf0, sizeof(buf0), "%llu (%3.1f%%)", (unsigned long long)perf[0].cache_miss, cache_miss_pct[0]);
    std::snprintf(buf1, sizeof(buf1), "%llu (%3.1f%%)", (unsigned long long)perf[1].cache_miss, cache_miss_pct[1]);
    std::snprintf(buf2, sizeof(buf2), "%llu (%3.1f%%)", (unsigned long long)perf[2].cache_miss, cache_miss_pct[2]);
    std::printf(" %-36s | %-20s | %-20s | %-20s \n", "Cache Misses", buf0, buf1, buf2);

    std::printf(" %-36s | %-20llu | %-20llu | %-20llu \n", "Cache Miss Penalty Cycles", 
                (unsigned long long)perf[0].cache_miss_cycles, (unsigned long long)perf[1].cache_miss_cycles, (unsigned long long)perf[2].cache_miss_cycles);
    std::printf(" %-36s | %-20.2f | %-20.2f | %-20.2f \n", "Avg Cache Miss Latency (cyc)", 
                avg_miss_latency[0], avg_miss_latency[1], avg_miss_latency[2]);
    double AMAT = avg_miss_latency[2] * cache_miss_pct[2]/100;
    std::printf("=========================================================================================================\n");
    std::snprintf(buf0, sizeof(buf0), "%3.1f", avg_miss_latency[0] * cache_miss_pct[0]/100);
    std::snprintf(buf1, sizeof(buf1), "%3.1f", avg_miss_latency[1] * cache_miss_pct[1]/100);
    std::snprintf(buf2, sizeof(buf2), "%3.1f", avg_miss_latency[2] * cache_miss_pct[2]/100);
    std::printf(" %-36s | %-20s | %-20s | %-20s \n", "AMAT (cycles)", buf0, buf1, buf2);
    std::printf("=========================================================================================================\n\n");
              
}