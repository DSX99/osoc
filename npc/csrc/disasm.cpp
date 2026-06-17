#include <dlfcn.h>
#include <cassert>
#include <cstdio>
#include <cstdint>
#include <cstdlib>

#define CS_LIB_SUFFIX "so.5"

enum cs_arch { CS_ARCH_RISCV = 6 };
enum cs_mode { CS_MODE_RISCV32 = 1 << 0 };
enum cs_err  { CS_ERR_OK = 0 };

// Keep it as a simple 64-bit generic storage value for the rest of your file
typedef uint64_t csh;

typedef struct cs_insn {
  unsigned int id;
  uint64_t address;
  uint16_t size;
  uint8_t bytes[24];
  char mnemonic[32];
  char op_str[160];
  void *detail; 
} cs_insn;

static size_t (*cs_disasm_dl)(csh handle, const uint8_t *code, size_t code_size, uint64_t address, size_t count, cs_insn **insn);
static void (*cs_free_dl)(cs_insn *insn, size_t count);

static csh handle = 0;
static bool disasm_ready = false;

void init_disasm() {
  void *dl_handle = dlopen("libcapstone.so.5", RTLD_LAZY);
  if (!dl_handle) dl_handle = dlopen("libcapstone.so", RTLD_LAZY);

  if (!dl_handle) {
    const char *nemu_home = getenv("NEMU_HOME");
    char lib_path[512];
    if (nemu_home) {
      snprintf(lib_path, sizeof(lib_path), "%s/tools/capstone/repo/libcapstone." CS_LIB_SUFFIX, nemu_home);
    } else {
      snprintf(lib_path, sizeof(lib_path), "/home/dsx99/osoc/ysyx-workbench/nemu/tools/capstone/repo/libcapstone." CS_LIB_SUFFIX);
    }
    dl_handle = dlopen(lib_path, RTLD_LAZY);
  }

  if (!dl_handle) {
    printf("[Disasm] Capstone library not found. Falling back to hex layout.\n");
    return;
  }

  // Bind the functions
  using cs_open_t = int (*)(int arch, int mode, void *handle_ptr);
  cs_open_t cs_open_dl = (cs_open_t)dlsym(dl_handle, "cs_open");
  cs_disasm_dl = (decltype(cs_disasm_dl))dlsym(dl_handle, "cs_disasm");
  cs_free_dl = (decltype(cs_free_dl))dlsym(dl_handle, "cs_free");

  if (!cs_open_dl || !cs_disasm_dl || !cs_free_dl) {
    printf("[Disasm] Symbols binding failed. Falling back to hex layout.\n");
    return;
  }

  // FIX: Use a local raw pointer. Capstone writes an internal memory address here.
  void *local_handle = nullptr;
  int ret = cs_open_dl(CS_ARCH_RISCV, CS_MODE_RISCV32, &local_handle);
  
  if (ret == CS_ERR_OK) {
      // Safely copy the pointer address bits directly into our global storage handle
      handle = (csh)(uintptr_t)local_handle;
      disasm_ready = true;
      printf("[Disasm] Capstone initialized successfully for RISC-V.\n");
  } else {
      printf("[Disasm] Capstone open returned error %d. Falling back to hex layout.\n", ret);
  }
}

void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte) {
  if (!disasm_ready) {
    if (nbyte == 4) {
      snprintf(str, size, "[hex] 0x%08x", *(uint32_t*)code);
    } else {
      snprintf(str, size, "[hex] unknown width");
    }
    return;
  }

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