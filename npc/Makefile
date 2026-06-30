include ../Makefile

CONFIG_ITRACE=y
CONFIG_IQUEUE=y

include $(NEMU_HOME)/src/utils/filelist.mk

#SoC
SoC_VSRC = $(shell find $(SOC_HOME)/perip/ -name "*.v") $(SOC_HOME)/build/*.v
INCLUDES = -I$(SOC_HOME)/perip/uart16550/rtl -I$(SOC_HOME)/perip/spi/rtl 

.DEFAULT_GOAL  := lint
VERILATOR = verilator
VERILOG_SRC = vsrc/pipeline_bus_pkg.sv vsrc/*.sv $(SoC_VSRC) 
CPP_SRC = csrc/*.cpp

IMG ?= 
ARGS ?= 
#idk there should be some include search path of verilator for rtl of uart+spi, but there are only .v and they are already included
VERILATOR_CFLAGS += -I$(NEMU_HOME)/tools/capstone/repo/include -I$(NEMU_HOME)/include -g -I$(NEMU_HOME)/tools/spike-diff/repo -I$(NEMU_HOME)/tools/spike-diff/repo/build
VERILATOR_CFLAGS += -DCONFIG_ISA_riscv32

DISASM_OBJ = $(abspath obj_dir/disasm.o)

LDFLAGS += -lreadline -L$(NEMU_HOME)/tools/capstone/repo -lcapstone $(DISASM_OBJ) $(NEMU_HOME)/tools/spike-diff/build/riscv32-spike-so

VERILOG_FLAGS := -cc --exe -Wno-EOFNEWLINE --top-module ysyxSoCFull --trace-fst -LDFLAGS "$(LDFLAGS)" -CFLAGS "$(VERILATOR_CFLAGS)" --trace-structs --timescale "1ns/1ns" --no-timing $(INCLUDES) --autoflush --quiet --quiet-exit

LIBCAPSTONE = $(NEMU_HOME)/tools/capstone/repo/libcapstone.so.5

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

lint:
	@$(VERILATOR) --lint-only $(VERILOG_SRC) $(VERILOG_FLAGS)

build: sim 
	@mkdir -p obj_dir
	@gcc -c $(VERILATOR_CFLAGS) -O2 $(NEMU_HOME)/src/utils/disasm.c -o obj_dir/disasm.o
	@$(VERILATOR) $(VERILOG_SRC) $(VERILOG_FLAGS) $(CPP_SRC)
	@$(MAKE) -j -C obj_dir -f VysyxSoCFull.mk 

run: build
	@LD_LIBRARY_PATH=$(NEMU_HOME)/tools/capstone/repo:$(NEMU_HOME)/build obj_dir/VysyxSoCFull $(ARGS) $(IMG) +verilator+no-print-status

gdb: build
	@--gdb -CFLAGS "-g"
	@gdb --args obj_dir/Vtop $(ARGS) $(IMG)

clean:
	rm -rf obj_dir

.PHONY: sim build run lint clean disasm