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

VERILATOR_CFLAGS += -I$(NEMU_HOME)/tools/capstone/repo/include
LDFLAGS += -lreadline -L$(NEMU_HOME)/tools/capstone/repo -lcapstone
VERILOG_FLAGS := -cc --exe -Wno-EOFNEWLINE --top-module top --trace-fst -LDFLAGS "$(LDFLAGS)" -CFLAGS "$(VERILATOR_CFLAGS)"

LIBCAPSTONE = $(NEMU_HOME)/tools/capstone/repo/libcapstone.so.5

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

lint:
	@$(VERILATOR) --lint-only -Wall $(VERILOG_SRC) -Wno-EOFNEWLINE --top-module top

build: sim 
	@$(VERILATOR) -Wall $(VERILOG_SRC) $(VERILOG_FLAGS) $(CPP_SRC)
	@$(MAKE) -j -C obj_dir -f Vtop.mk VM_USER_OBJECTS="$(NEMU_HOME)/build/obj-riscv32-nemu-interpreter/src/utils/disasm.o"

run: build
	@obj_dir/Vtop $(ARGS) $(IMG)

gdb: build
	@--gdb -CFLAGS "-g"
	@gdb --args obj_dir/Vtop $(ARGS) $(IMG)

clean:
	rm -rf obj_dir

.PHONY: sim build run lint clean disasm