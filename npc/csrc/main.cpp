#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <verilated.h>
#include "Vtop.h"
#include "dpi.h"
#include "Vtop___024root.h"
#include "Vtop_top.h"
#include "Vtop_regs.h"
#include "sdb.h"

#define CONFIG_FST
#define MAX_SIM_TIME 10*1024


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
void init_disasm();

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
  printf("\n");
  parse_args(argc, argv);
  loadmemory(img_file);
  void init_disasm();
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
  while(n>0){

    #ifdef CONFIG_FST
    tracep->dump(contextp->time());
    #endif
    
    if(contextp->time() > MAX_SIM_TIME){
      ret = top->top->reg_mod->regs[10];
    }
    if(!((contextp->time()) % 1000)){
      printf("time:%lu\n", contextp->time());
    }
    
    contextp->timeInc(1);
    top->clk=!top->clk;
    top->eval();
  
    if(contextp->gotFinish()){
      finished = 1;
      ret = top->top->reg_mod->regs[10];
    }
  }
}