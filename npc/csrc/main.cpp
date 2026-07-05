#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <verilated.h>
#include "dpi.h"
#include "common.h"


#ifdef CONFIG_FST
#include <verilated_fst_c.h>
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
    soc->clock=1;
    soc->eval();
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

    for(int i = 0; i < 32; i++){
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

    #ifdef CONFIG_FST
    tracep->dump(contextp->time());
    #endif
    
    // if(contextp->time() > MAX_SIM_TIME){
    //   printf("MAX SIMTIME\n");
    //   ret = top->reg_mod->regs[10];
    //   break;
    // }

    if(!((contextp->time()) % 100000000)&&batch){
      printf("time:%lu\n", contextp->time());
    }

    if(!batch && top->opcode!=0 && top->reg_valid_e){
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

    contextp->timeInc(1);
    soc->clock=!soc->clock;
    soc->eval();
    #ifdef CONFIG_FST
    tracep->dump(contextp->time());
    #endif
    contextp->timeInc(1);
    soc->clock=!soc->clock;
    soc->eval();


    //couting performance
    if(top->if_id_valid == 0){
      program[stage].ifu_stall_cycle++;
    }
    if(top->if_id_valid && prev_ifu == 0){
      program[stage].ifu_fetch_instr++;
    }
    if(top->branch){
      program[stage].possible_branch_count++;
    }
    if(top->branch_taken){
      program[stage].branch_taken++;
    }
    if(top->ex_ls_valid && !top->ex_ls_ready){
      program[stage].ifu_stall_cycle++;
      if(top->ex_ls_bus_lsu_we){
        program[stage].lsu_read_data++;
      }
      if(top->ex_ls_bus_lsu_we){
        program[stage].lsu_write_data++;
      }
    }
    if(top->reg_valid_e){
      program[stage].writeback++;
    }

    if(stage == 0 && (top->pc >= 0x0f000000 && top->pc < 0x10000000)){
      stage = 1;
      cycles[0] = contextp->time()>>1;
    }

    if(stage == 1 && (top->pc >= 0xa0000000 && top->pc < 0xc0000000)){
      stage = 2;
      cycles[1] = (contextp->time()>>1) - cycles[0];
    }

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
    
    if(!batch && do_diff) {
        difftest_regcpy(&ref_cpu, 0);

        if (ref_cpu.pc != top->pc) {
          printf("Difference with REF pc, should:0x%08x, actually:0x%08x\n", ref_cpu.pc, top->pc);
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

        for(int i = 0; i < 32; i++){
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
