include ../Makefile

CONFIG_ITRACE=y
CONFIG_IQUEUE=y

include $(NEMU_HOME)/src/utils/filelist.mk

.DEFAULT_GOAL  := lint
VERILATOR = verilator
VERILOG_SRC = vsrc/*.sv
CPP_SRC = csrc/*.cpp

IMG ?= 
ARGS ?= 

VERILATOR_CFLAGS += -I$(NEMU_HOME)/tools/capstone/repo/include -I$(NEMU_HOME)/include
VERILATOR_CFLAGS += -DCONFIG_ISA_riscv32

# FIX 1: Provide the exact absolute path to the object file we will compile
DISASM_OBJ = $(abspath obj_dir/disasm.o)

# FIX 2: Explicitly pass the object binary straight into the Linker flags
LDFLAGS += -lreadline -L$(NEMU_HOME)/tools/capstone/repo -lcapstone $(DISASM_OBJ)

VERILOG_FLAGS := -cc --exe -Wno-EOFNEWLINE --top-module top --trace-fst -LDFLAGS "$(LDFLAGS)" -CFLAGS "$(VERILATOR_CFLAGS)"

LIBCAPSTONE = $(NEMU_HOME)/tools/capstone/repo/libcapstone.so.5

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

lint:
	@$(VERILATOR) --lint-only -Wall $(VERILOG_SRC) -Wno-EOFNEWLINE --top-module top

build: sim 
	@mkdir -p obj_dir
	# FIX 3: Compile disasm.o BEFORE Verilator runs, so $(DISASM_OBJ) exists when linking
	@gcc -c $(VERILATOR_CFLAGS) -O2 $(NEMU_HOME)/src/utils/disasm.c -o obj_dir/disasm.o
	@$(VERILATOR) -Wall $(VERILOG_SRC) $(VERILOG_FLAGS) $(CPP_SRC)
	# FIX 4: Call standard Make without the broken VM_USER_OBJS assignment
	@$(MAKE) -j -C obj_dir -f Vtop.mk

run: build
	@LD_LIBRARY_PATH=$(NEMU_HOME)/tools/capstone/repo obj_dir/Vtop $(ARGS) $(IMG)

gdb: build
	@--gdb -CFLAGS "-g"
	@gdb --args obj_dir/Vtop $(ARGS) $(IMG)

clean:
	rm -rf obj_dir

.PHONY: sim build run lint clean disasm