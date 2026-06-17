#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <verilated.h>
#include "Vtop.h"
#include "dpi.h"
#include "Vtop___024root.h"
#include "Vtop_top.h"
#include "Vtop_regs.h"

#ifdef CONFIG_VCD
#include <verilated_vcd_c.h>
#elif CONFIG_FST
#include <verilated_fst_c.h>
#endif

static bool batch=0;
static char *img_file;

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
  printf("Parcing args\n");
  parse_args(argc, argv);

  printf("Loading memory\n");
  loadmemory(img_file);
  
  printf("Starting simulating\n");
  VerilatedContext* const contextp = new VerilatedContext;
    
    // contextp->threads(1); // can be used in future to increase speed
    // contextp->traceEverOn(true); // for vcd tracing

#ifdef CONFIG_VCD
  Verilated::traceEverOn(true);
  VerilatedVcdC *tracep = new VerilatedVcdC;
#elif CONFIG_FST
  Verilated::traceEverOn(true);
  VerilatedFstC *tracep = new VerilatedFstC;
#endif

  Vtop* const top = new Vtop{contextp};


  reset(top, 100);
  if(batch){
    while (contextp->gotFinish()) {
      contextp->timeInc(1);
      top->clk=!top->clk;
      top->eval();

      #if defined(CONFIG_VCD) || defined(CONFIG_FST)
      tracep->dump(contextp->time());
      #endif
    }

    int ret = top->top->reg_mod->regs[10];

    #if defined(CONFIG_VCD) || defined(CONFIG_FST)
    tracep->close();
    #endif
    
    delete top;

    return ret;
  } else{
    printf("non batch mode is not yet implemented");
  }
}