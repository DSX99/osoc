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

VERILATOR_CFLAGS += -I$(NEMU_HOME)/tools/capstone/repo/include -I$(NEMU_HOME)/include -g
VERILATOR_CFLAGS += -DCONFIG_ISA_riscv32

DISASM_OBJ = $(abspath obj_dir/disasm.o)

LDFLAGS += -lreadline -L$(NEMU_HOME)/tools/capstone/repo -lcapstone $(DISASM_OBJ) -L$(NEMU_HOME)/build -l$(NEMU_HOME)/build/riscv32-nemu-interpreter-so

VERILOG_FLAGS := -cc --exe -Wno-EOFNEWLINE --top-module top --trace-fst -LDFLAGS "$(LDFLAGS)" -CFLAGS "$(VERILATOR_CFLAGS)"

LIBCAPSTONE = $(NEMU_HOME)/tools/capstone/repo/libcapstone.so.5

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

lint:
	@$(VERILATOR) --lint-only -Wall $(VERILOG_SRC) -Wno-EOFNEWLINE --top-module top

build: sim 
	@mkdir -p obj_dir
	@gcc -c $(VERILATOR_CFLAGS) -O2 $(NEMU_HOME)/src/utils/disasm.c -o obj_dir/disasm.o
	@$(VERILATOR) -Wall $(VERILOG_SRC) $(VERILOG_FLAGS) $(CPP_SRC)
	@$(MAKE) -j -C obj_dir -f Vtop.mk

run: build
	@LD_LIBRARY_PATH=$(NEMU_HOME)/tools/capstone/repo:$(NEMU_HOME)/build obj_dir/Vtop $(ARGS) $(IMG)

gdb: build
	@--gdb -CFLAGS "-g"
	@gdb --args obj_dir/Vtop $(ARGS) $(IMG)

clean:
	rm -rf obj_dir

.PHONY: sim build run lint clean disasm