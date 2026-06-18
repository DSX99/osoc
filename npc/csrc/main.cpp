#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <verilated.h>
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop_top.h"
#include "Vtop_regs.h"
#include "dpi.h"

#define CONFIG_FST
#define MAX_SIM_TIME 1024*1024*1024


#ifdef CONFIG_FST
#include <verilated_fst_c.h>
#endif

bool batch=0;
char *img_file;
bool finished=0;
uint32_t ret = 0;
VerilatedContext *contextp;
VerilatedFstC *tracep;
Vtop* top; 

void execute(uint32_t n);
void init_sdb();
void sdb_mainloop();
bool check_watchpoints();
void difftest_init(int port);
void difftest_exec(uint64_t n);
extern "C" void init_disasm();
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

void reset(Vtop *top,int n){
  top->rst=1;
  for(int i=0; i<n; i++){
    top->clk=1;
    top->eval();
    top->clk=0;
    top->eval();
  }
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
  printf("\n\033[1m\033[36mNPC\033[0m\n\n");
  parse_args(argc, argv);
  loadmemory(img_file, batch);
  init_disasm();
  if(!batch){
    difftest_init(0);
  }
  contextp = new VerilatedContext;
  // contextp->threads(1); // can be used in future to increase speed

  top = new Vtop{contextp};

#ifdef CONFIG_FST
  Verilated::traceEverOn(true);
  tracep = new VerilatedFstC;
  top->trace(tracep, 5);
  tracep->open("waveform.fst");
#endif


  if (top == NULL || top->top == NULL) {
    fprintf(stderr, "Error: Simulation model instantiation failed!\n");
    return -1;
  }

  reset(top, 100);
  top->rst=0;
  top->clk=0;

  if(batch){
    execute(-1);
  }else{
    init_sdb();
    sdb_mainloop();
  }
  
  #ifdef CONFIG_FST
  tracep->close();
  #endif
  delete top;
  return ret;
}

void execute(uint32_t n){
  difftest_exec(n);

  if(finished){
    printf("Program finished");
    return;
  }
  char str[128];
  uint8_t inst[4];
  while(n>0){

    #ifdef CONFIG_FST
    tracep->dump(contextp->time());
    #endif
    
    if(contextp->time() > MAX_SIM_TIME){
      ret = top->top->reg_mod->regs[10];
      break;
    }
    if(!((contextp->time()) % 1000000)&&batch){
      printf("time:%lu\n", contextp->time());
    }

    if(!batch & n<10){
      inst[0] = (top->top->opcode) & 0xff;
      inst[1] = (top->top->opcode >> 8) & 0xff;
      inst[2] = (top->top->opcode >> 16) & 0xff;
      inst[3] = (top->top->opcode >> 24) & 0xff;
      printf("0x%08x: %02x %02x %02x %02x ", top->top->pc, inst[3], inst[2], inst[1], inst[0]);
      disassemble(str, 128, top->top->pc, inst, 4);
      printf("%s\n", str);
    }

    contextp->timeInc(1);
    top->clk=!top->clk;
    top->eval();
    tracep->dump(contextp->time());
    contextp->timeInc(1);
    top->clk=!top->clk;
    top->eval();
    
    if(contextp->gotFinish()){
      if(!batch){
        inst[0] = (top->top->opcode) & 0xff;
        inst[1] = (top->top->opcode >> 8) & 0xff;
        inst[2] = (top->top->opcode >> 16) & 0xff;
        inst[3] = (top->top->opcode >> 24) & 0xff;
        printf("0x%08x: %02x %02x %02x %02x ", top->top->pc, inst[3], inst[2], inst[1], inst[0]);
        disassemble(str, 128, top->top->pc, inst, 4);
        printf("%s\n", str);
      }
      finished = 1;
      ret = top->top->reg_mod->regs[10];
      if(ret){
        printf("\033[1m\033[31mNOT GOOD\033[0m\n");
      }else{
        printf("\033[032mGOOD\033[0m\n");
      }
      break;
    }
    if(check_watchpoints()){
      break;
    }
    n--;
  }
}

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void reg_display() {
  printf("Regs values:\n");
  for(int i = 0; i<4; i++){
    for(int j = 0; j<8; j++){
      printf("%s(%02d):%08x   ", regs[8*i+j],8*i+j,top->top->reg_mod->regs[8*i+j]);
    }
    printf("\n");
  }
  printf("next pc:0x%08x\n",top->top->pc);
}

uint32_t reg_str2val(const char *s, bool *success) {
  if(strcmp(s,"pc")==0){
    return top->top->pc;
  }
  for(int i=0;i<32;i++){
    if(strcmp(s,regs[i])==0){
      return top->top->reg_mod->regs[i];
    }
  }

  printf("please input a correct reg name\n");
  *success=false;
  return 0;
}