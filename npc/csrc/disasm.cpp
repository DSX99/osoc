#include <dlfcn.h>
#include <cassert>
#include <cstdio>
#include <cstdint>
#include <cstdlib>

#define CS_LIB_SUFFIX "so.5"

// Enums needed for Capstone initialization parameters
enum cs_arch { CS_ARCH_RISCV = 6 };
enum cs_mode { CS_MODE_RISCV32 = 1 << 0 };
enum cs_err  { CS_ERR_OK = 0 };

// Use a plain unsigned long long to hold the handle value safely across 32/64-bit boundaries
typedef unsigned long long csh;

// Our definitive local structure layout for the Capstone instruction data
typedef struct cs_insn {
  unsigned int id;
  uint64_t address;
  uint16_t size;
  uint8_t bytes[24];
  char mnemonic[32];
  char op_str[160];
  void *detail; 
} cs_insn;

// Function pointers matching the primitive wide type
static size_t (*cs_disasm_dl)(csh handle, const uint8_t *code,
    size_t code_size, uint64_t address, size_t count, cs_insn **insn);
static void (*cs_free_dl)(cs_insn *insn, size_t count);

static csh handle = 0;

void init_disasm() {
  void *dl_handle = NULL;

  // 1. First try loading the system's global Capstone library
  // This version almost always has all architectures (including RISC-V) compiled in
  dl_handle = dlopen("libcapstone.so.5", RTLD_LAZY);

  if (!dl_handle) {
    // Try without major version suffix just in case
    dl_handle = dlopen("libcapstone.so", RTLD_LAZY);
  }

  // 2. Fallback to the NEMU repository library only if the host system doesn't have it
  if (!dl_handle) {
    const char *nemu_home = getenv("NEMU_HOME");
    char lib_path[512];
    if (nemu_home) {
      snprintf(lib_path, sizeof(lib_path), "%s/tools/capstone/repo/libcapstone." CS_LIB_SUFFIX, nemu_home);
    } else {
      snprintf(lib_path, sizeof(lib_path), "/home/dsx99/osoc/ysyx-workbench/nemu/tools/capstone/repo/libcapstone." CS_LIB_SUFFIX);
    }
    printf("System Capstone not found. Falling back to NEMU path: %s\n", lib_path);
    dl_handle = dlopen(lib_path, RTLD_LAZY);
  }

  if (!dl_handle) {
    fprintf(stderr, "Fatal Error: Could not load any variant of libcapstone shared object file.\n");
    assert(dl_handle);
  }

  // Bind the library functions
  using cs_open_t = int (*)(int arch, int mode, void *handle_ptr);
  cs_open_t cs_open_dl = (cs_open_t)dlsym(dl_handle, "cs_open");
  assert(cs_open_dl);

  cs_disasm_dl = (decltype(cs_disasm_dl))dlsym(dl_handle, "cs_disasm");
  assert(cs_disasm_dl);

  cs_free_dl = (decltype(cs_free_dl))dlsym(dl_handle, "cs_free");
  assert(cs_free_dl);

  // Initialize Capstone for RISC-V
  int ret = cs_open_dl(CS_ARCH_RISCV, CS_MODE_RISCV32, &handle);
  
  if (ret != CS_ERR_OK) {
      fprintf(stderr, "Capstone cs_open failed with error code: %d (CS_ERR_ARCH means no RISC-V support)\n", ret);
      assert(ret == CS_ERR_OK);
  }
}

void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte) {
  cs_insn *insn;
  size_t count = cs_disasm_dl(handle, code, nbyte, pc, 0, &insn);
  assert(count == 1);
  
  if (insn->op_str[0] != '\0') {
    snprintf(str, size, "%-8s%s", insn->mnemonic, insn->op_str);
  } else {
    snprintf(str, size, "%s", insn->mnemonic);
  }
  
  cs_free_dl(insn, count);
}