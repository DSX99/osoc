/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/paddr.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>

void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm();

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

typedef struct {
    const char *name;
    uintptr_t address;
    size_t size;
} FunctionInfo;

FunctionInfo func[100];

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static char *elf_file = NULL;
static int difftest_port = 1234;
static char ftrace[256][256];
int lead_space=0;
int ftrace_count=0;

#ifdef CONFIG_FTRACE

size_t extract_elf_functions(const void *elf_base, FunctionInfo *functions, size_t max_funcs) {
    if (!elf_base || !functions || max_funcs == 0) return 0;

    const Elf32_Ehdr *ehdr = (const Elf32_Ehdr *)elf_base;

    if (memcmp(ehdr->e_ident, ELFMAG, SELFMAG) != 0) {
        printf("Error: Invalid ELF magic bytes.\n");
        return 0;
    }

    if (ehdr->e_ident[EI_CLASS] != ELFCLASS32) {
        printf("Error: This code is written for 32-bit ELF files.\n");
        return 0;
    }

    const Elf32_Shdr *shdrs = (const Elf32_Shdr *)((const uint8_t *)elf_base + ehdr->e_shoff);

    const Elf32_Shdr *symtab_shdr = NULL;
    const Elf32_Shdr *strtab_shdr = NULL;

    for (int i = 0; i < ehdr->e_shnum; i++) {
        if (shdrs[i].sh_type == SHT_SYMTAB || shdrs[i].sh_type == SHT_DYNSYM) {
            symtab_shdr = &shdrs[i];
            strtab_shdr = &shdrs[symtab_shdr->sh_link]; 
            break;
        }
    }

    if (!symtab_shdr || !strtab_shdr) {
        printf("Error: No symbol table found (file might be stripped).\n");
        return 0;
    }

    const Elf32_Sym *syms = (const Elf32_Sym *)((const uint8_t *)elf_base + symtab_shdr->sh_offset);
    const char *strtab = (const char *)elf_base + strtab_shdr->sh_offset;
    
    size_t num_syms = symtab_shdr->sh_size / symtab_shdr->sh_entsize;
    size_t func_count = 0;

    for (size_t i = 0; i < num_syms && func_count < max_funcs; i++) {
        if (ELF32_ST_TYPE(syms[i].st_info) == STT_FUNC && syms[i].st_name != 0) {
            functions[func_count].name = strtab + syms[i].st_name;
            functions[func_count].address = syms[i].st_value;
            functions[func_count].size = syms[i].st_size;
            
            func_count++;
        }
    }

    return func_count;
}

void load_elf(){
  Log("Loading ELF");
  if (elf_file == NULL) {
    Log("No ELF is given. No meaningful ftrace");
    func[0].name=NULL;
    return;
  }
  int fd = open(elf_file, O_RDONLY);
  if (fd < 0) {
    Log("Failed to open ELF file: %s", elf_file);
    func[0].name = NULL;
    return;
  }
  struct stat st; 
  fstat(fd, &st);
  void *elf_memory = mmap(NULL, st.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
  size_t extracted = extract_elf_functions(elf_memory, func, 99);
  func[extracted].name=NULL;
}

void record_ftrace(vaddr_t dnpc, int reg1){
  int count=0;
  while(func[count].name!=NULL){
    if( dnpc >= func[count].address && dnpc < (func[count].address + func[count].size)){
      if(dnpc==reg1){
        if(lead_space==0){
          printf("IDK how you managed to return from nothing but okay\n");
          return;
        }
        sprintf(ftrace[ftrace_count],"%*s retn[%s]@0x%08x", lead_space-2, "", func[count].name, dnpc);
        lead_space=lead_space-2;
      }else{
        sprintf(ftrace[ftrace_count],"%*s call[%s]@0x%08x", lead_space+2, "", func[count].name, dnpc);
        lead_space=lead_space+2;
      }
      ftrace_count++;
      if(ftrace_count==256) ftrace_count=0;
      break;
    }
    count++;
  }
}

void print_ftrace(){
  int count =0;
  while(count<ftrace_count){
    printf("%s\n",ftrace[count]);
    count++;
  }
}
#endif

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {"elf"     , required_argument, NULL, 'e'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 'e': elf_file = optarg; break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\t-e,--elf=FILE           run ftrace with funct from FILE\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /*Loading elf for ftrace*/
  load_elf();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

  IFDEF(CONFIG_ITRACE, init_disasm());

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif
