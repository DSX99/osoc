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
  
  // 1. Fetch the environment variable value from the system OS
  const char *nemu_home = getenv("NEMU_HOME");
  char lib_path[512];
  
  if (nemu_home) {
    // Construct the true absolute path string
    snprintf(lib_path, sizeof(lib_path), "%s/tools/capstone/repo/libcapstone." CS_LIB_SUFFIX, nemu_home);
  } else {
    // Brute force fallback if you forgot to run 'source env.sh' in your terminal
    fprintf(stderr, "Warning: $NEMU_HOME environment variable is not set!\n");
    snprintf(lib_path, sizeof(lib_path), "/home/dsx99/osoc/ysyx-workbench/nemu/tools/capstone/repo/libcapstone." CS_LIB_SUFFIX);
  }

  printf("Attempting to load Capstone from: %s\n", lib_path);

  // 2. Open using the resolved string path
  dl_handle = dlopen(lib_path, RTLD_LAZY);
  
  if (!dl_handle) {
    fprintf(stderr, "dlopen failed with error: %s\n", dlerror());
    assert(dl_handle);
  }

  // The rest of your dlsym assignments remain exactly the same...
  cs_err (*cs_open_dl)(cs_arch arch, cs_mode mode, csh *handle) = NULL;
  cs_open_dl = (decltype(cs_open_dl))dlsym(dl_handle, "cs_open");
  assert(cs_open_dl);

  cs_disasm_dl = (decltype(cs_disasm_dl))dlsym(dl_handle, "cs_disasm");
  assert(cs_disasm_dl);

  cs_free_dl = (decltype(cs_free_dl))dlsym(dl_handle, "cs_free");
  assert(cs_free_dl);

  cs_arch arch = CS_ARCH_RISCV;
  cs_mode mode = CS_MODE_RISCV32;
  int ret = cs_open_dl(arch, mode, &handle);
  
  if (ret != CS_ERR_OK) {
      fprintf(stderr, "Capstone cs_open failed with error code: %d\n", ret);
      // Code 1 = CS_ERR_ARCH (Unsupported architecture)
      // Code 2 = CS_ERR_HANDLE (Invalid handle)
      // Code 3 = CS_ERR_KV (Unsupported mode)
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