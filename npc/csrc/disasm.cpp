#include <dlfcn.h>
#include <cassert>
#include <cstdio>
#include <cstdint>

#define CS_LIB_SUFFIX "so.5"

// Enums needed for Capstone initialization parameters
enum cs_arch { CS_ARCH_RISCV = 6 };
enum cs_mode { CS_MODE_RISCV32 = 1 << 0 };
enum cs_err  { CS_ERR_OK = 0 };

typedef size_t csh;

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

// Function pointers declared using our explicit local type definition
static size_t (*cs_disasm_dl)(csh handle, const uint8_t *code,
    size_t code_size, uint64_t address, size_t count, cs_insn **insn);
static void (*cs_free_dl)(cs_insn *insn, size_t count);

static csh handle;

void init_disasm() {
  void *dl_handle;
  // Note: Ensure your shell environment has $NEMU_HOME or replace with absolute path
  dl_handle = dlopen("$NEMU_HOME/tools/capstone/repo/libcapstone." CS_LIB_SUFFIX, RTLD_LAZY);
  assert(dl_handle);

  // Declare local function pointer matching Capstone's architecture open call
  using cs_open_t = cs_err (*)(cs_arch arch, cs_mode mode, csh *handle);
  cs_open_t cs_open_dl = (cs_open_t)dlsym(dl_handle, "cs_open");
  assert(cs_open_dl);

  // Force the dlsym return values to match our global definitions exactly using decltype
  cs_disasm_dl = (decltype(cs_disasm_dl))dlsym(dl_handle, "cs_disasm");
  assert(cs_disasm_dl);

  cs_free_dl = (decltype(cs_free_dl))dlsym(dl_handle, "cs_free");
  assert(cs_free_dl);

  cs_arch arch = CS_ARCH_RISCV;
  cs_mode mode = CS_MODE_RISCV32;
  int ret = cs_open_dl(arch, mode, &handle);
  assert(ret == CS_ERR_OK);
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