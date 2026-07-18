#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <verilated.h>
#include "dpi.h"
#include "common.h"
#include "nvboard.h"

#ifdef CONFIG_FST
#include <verilated_fst_c.h>
#endif

struct CPU_state {
  uint32_t gpr[32];
  uint32_t pc;
};


// KILLS DIFTEST
bool do_diff = 0;


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
bool valid_cycle=0;

char itrace[16][128];
int point=0;

void execute(uint64_t n);
void init_sdb();
void sdb_mainloop(uint32_t *ret);
bool check_watchpoints();
void uart_set_divisor(uint16_t d);
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

void nvboard_bind_all_pins() {
	nvboard_bind_pin( &soc->externalPins_vga_vsync, 1, VGA_VSYNC);
	nvboard_bind_pin( &soc->externalPins_vga_hsync, 1, VGA_HSYNC);
	nvboard_bind_pin( &soc->externalPins_vga_valid, 1, VGA_BLANK_N);
	nvboard_bind_pin( &soc->externalPins_vga_r, 8, VGA_R7, VGA_R6, VGA_R5, VGA_R4, VGA_R3, VGA_R2, VGA_R1, VGA_R0);
	nvboard_bind_pin( &soc->externalPins_vga_g, 8, VGA_G7, VGA_G6, VGA_G5, VGA_G4, VGA_G3, VGA_G2, VGA_G1, VGA_G0);
	nvboard_bind_pin( &soc->externalPins_vga_b, 8, VGA_B7, VGA_B6, VGA_B5, VGA_B4, VGA_B3, VGA_B2, VGA_B1, VGA_B0);
	nvboard_bind_pin( &soc->externalPins_gpio_out, 16, LD15, LD14, LD13, LD12, LD11, LD10, LD9, LD8, LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &soc->externalPins_gpio_in, 16, SW15, SW14, SW13, SW12, SW11, SW10, SW9, SW8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &soc->externalPins_gpio_seg_0, 8, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G, DEC0P);
	nvboard_bind_pin( &soc->externalPins_gpio_seg_1, 8, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G, DEC1P);
	nvboard_bind_pin( &soc->externalPins_gpio_seg_2, 8, SEG2A, SEG2B, SEG2C, SEG2D, SEG2E, SEG2F, SEG2G, DEC2P);
	nvboard_bind_pin( &soc->externalPins_gpio_seg_3, 8, SEG3A, SEG3B, SEG3C, SEG3D, SEG3E, SEG3F, SEG3G, DEC3P);
	nvboard_bind_pin( &soc->externalPins_gpio_seg_4, 8, SEG4A, SEG4B, SEG4C, SEG4D, SEG4E, SEG4F, SEG4G, DEC4P);
	nvboard_bind_pin( &soc->externalPins_gpio_seg_5, 8, SEG5A, SEG5B, SEG5C, SEG5D, SEG5E, SEG5F, SEG5G, DEC5P);
	nvboard_bind_pin( &soc->externalPins_gpio_seg_6, 8, SEG6A, SEG6B, SEG6C, SEG6D, SEG6E, SEG6F, SEG6G, DEC6P);
	nvboard_bind_pin( &soc->externalPins_gpio_seg_7, 8, SEG7A, SEG7B, SEG7C, SEG7D, SEG7E, SEG7F, SEG7G, DEC7P);
	nvboard_bind_pin( &soc->externalPins_ps2_clk, 1, PS2_CLK);
	nvboard_bind_pin( &soc->externalPins_ps2_data, 1, PS2_DAT);
	nvboard_bind_pin( &soc->externalPins_uart_tx, 1, UART_TX);
	nvboard_bind_pin( &soc->externalPins_uart_rx, 1, UART_RX);
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

  nvboard_bind_all_pins();
  nvboard_init();
  uart_set_divisor(0);
  
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
    execute(-1);
  }else{
    init_sdb();
    sdb_mainloop(&qexit);
  }

  #ifdef CONFIG_FST
  tracep->close();
  #endif
  nvboard_quit();
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
  int device_access = 0;

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
    
    if(contextp->time() > MAX_SIM_TIME){
      ret = top->reg_mod->regs[10];
      break;
    }
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

    contextp->timeInc(1);
    soc->clock=!soc->clock;
    soc->eval();
    #ifdef CONFIG_FST
    tracep->dump(contextp->time());
    #endif
    contextp->timeInc(1);
    soc->clock=!soc->clock;
    soc->eval();

    nvboard_update();

    valid_cycle = top->reg_valid;

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
        printf("0x%08x: %02x %02x %02x %02x ", top->prev_pc, inst[3], inst[2], inst[1], inst[0]);
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
      printf("0x%08x: %02x %02x %02x %02x ", top->prev_pc, inst[3], inst[2], inst[1], inst[0]);
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
      if(device_access){
        for(int i = 0; i < 32; i++){
          cpu.gpr[i] = top->reg_mod->regs[i];
        }
        cpu.pc = top->pc;
        difftest_regcpy(&cpu, 1);
        device_access--;
      }

      difftest_regcpy(&ref_cpu, 0);

      if (ref_cpu.pc != top->pc) {
        printf("Difference with REF pc, should:0x%08x, actually:0x%08x\n", ref_cpu.pc, top->prev_pc);
        ret = 1;
        inst[0] = (top->opcode) & 0xff;
        inst[1] = (top->opcode >> 8) & 0xff;
        inst[2] = (top->opcode >> 16) & 0xff;
        inst[3] = (top->opcode >> 24) & 0xff;
        printf("0x%08x: %02x %02x %02x %02x ", top->prev_pc, inst[3], inst[2], inst[1], inst[0]);
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
                 regs[i], ref_cpu.gpr[i], top->reg_mod->regs[i], top->prev_pc);
          ret = 1;
          inst[0] = (top->opcode) & 0xff;
          inst[1] = (top->opcode >> 8) & 0xff;
          inst[2] = (top->opcode >> 16) & 0xff;
          inst[3] = (top->opcode >> 24) & 0xff;
          printf("0x%08x: %02x %02x %02x %02x ", top->prev_pc, inst[3], inst[2], inst[1], inst[0]);
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
    if((top->__PVT__io_master_araddr == 0x200bff8) || (top->__PVT__io_master_araddr == 0x200bffc) || (top->__PVT__io_master_araddr == 0x10000005)){
      device_access++;
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
