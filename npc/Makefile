include ../Makefile

.DEFAULT_GOAL  := lint
VERILATOR = verilator
VERILOG_SRC = vsrc/*.sv
CPP_SRC = csrc/*.cpp

IMG ?= 
ARGS ?= 

LDFLAGS += -lreadline
VERILOG_FLAGS := -cc --exe -Wno-EOFNEWLINE --top-module top --trace-fst -LDFLAGS "$(LDFLAGS)"

LIBCAPSTONE = $(NEMU_HOME)/src/utils

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

lint:
	@$(VERILATOR) --lint-only -Wall $(VERILOG_SRC) -Wno-EOFNEWLINE --top-module top

disasm:
	$(MAKE) -C $(NEMU_HOME)/src/utils/filelist.mk

build: sim disasm
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