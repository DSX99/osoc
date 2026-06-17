include ../Makefile

.DEFAULT_GOAL  := lint
VERILATOR = verilator
VERILOG_SRC = vsrc/*.sv
CPP_SRC = csrc/*.cpp

IMG ?= 
ARGS ?= 

VERILOG_FLAGS := -cc --exe -Wno-EOFNEWLINE --top-module top
ifneq ($(VCD),)
VERILOG_FLAGS += --trace
endif
ifneq ($(FST),)
VERILOG_FLAGS += --trace-fst
endif


sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

lint:
	@$(VERILATOR) --lint-only -Wall $(VERILOG_SRC) -Wno-EOFNEWLINE --top-module top

build: sim
	@$(VERILATOR) -Wall $(VERILOG_SRC) $(VERILOG_FLAGS) $(CPP_SRC)
	@$(MAKE) -j -C obj_dir -f Vtop.mk

run: build
	@obj_dir/Vtop $(ARGS) $(IMG)

clean:
	rm -rf obj_dir

.PHONY: sim build run lint clean