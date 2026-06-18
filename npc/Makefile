include ../Makefile

CONFIG_ITRACE=y
CONFIG_IQUEUE=y

include $(NEMU_HOME)/src/utils/filelist.mk

.DEFAULT_GOAL  := lint
VERILATOR = verilator
VERILOG_SRC = vsrc/*.sv
CPP_SRC = csrc/*.cpp

CPP_SRC += $(NEMU_HOME)/src/utils/disasm.c

IMG ?= 
ARGS ?= 

VERILATOR_CFLAGS += -I$(NEMU_HOME)/tools/capstone/repo/include -I$(NEMU_HOME)/include
LDFLAGS += -lreadline -L$(NEMU_HOME)/tools/capstone/repo -lcapstone

VERILATOR_CFLAGS += -DCONFIG_ISA_riscv32 

VERILOG_FLAGS := -cc --exe -Wno-EOFNEWLINE --top-module top --trace-fst -LDFLAGS "$(LDFLAGS)" -CFLAGS "$(VERILATOR_CFLAGS)"

LIBCAPSTONE = $(NEMU_HOME)/tools/capstone/repo/libcapstone.so.5

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

lint:
	@$(VERILATOR) --lint-only -Wall $(VERILOG_SRC) -Wno-EOFNEWLINE --top-module top

build: sim 
	@$(VERILATOR) -Wall $(VERILOG_SRC) $(VERILOG_FLAGS) $(CPP_SRC)
	@$(MAKE) -j -C obj_dir -f Vtop.mk

run: build
	@obj_dir/Vtop $(ARGS) $(IMG)

gdb: build
	@--gdb -CFLAGS "-g"
	@gdb --args obj_dir/Vtop $(ARGS) $(IMG)

clean:
	rm -rf obj_dir

.PHONY: sim build run lint clean disasm