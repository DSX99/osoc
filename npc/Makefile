include ../Makefile

CONFIG_ITRACE=y
CONFIG_IQUEUE=y

include $(NEMU_HOME)/src/utils/filelist.mk

#SoC
SoC_VSRC = $(shell find $(SOC_HOME)/perip/ -name "*.v") $(SOC_HOME)/build/*.v
INCLUDES = -I$(SOC_HOME)/perip/uart16550/rtl -I$(SOC_HOME)/perip/spi/rtl 

.DEFAULT_GOAL  := lint
VERILATOR = verilator
VERILOG_SRC = $(filter-out vsrc/osoc*, vsrc/*.sv)
OSOC_SRC = vsrc/osoc_26000003_core.sv vsrc/osoc_26000003.sv $(VERILOG_SRC) $(SoC_VSRC)
NPC_SRC = vsrc/osoc_26000003_func.sv $(VERILOG_SRC)
STA_SRC = $(wildcard vsrc/*.sv)
CPP_SRC = $(shell find csrc/*.cpp -not -name main* )

IMG ?= 
ARGS ?= 
#idk there should be some include search path of verilator for rtl of uart+spi, but there are only .v and they are already included
VERILATOR_CFLAGS += -I$(NEMU_HOME)/tools/capstone/repo/include -I$(NEMU_HOME)/include -g -I$(NEMU_HOME)/tools/spike-diff/repo -I$(NEMU_HOME)/tools/spike-diff/repo/build
VERILATOR_CFLAGS += -DCONFIG_ISA_riscv32

DISASM_OBJ = $(abspath obj_dir/disasm.o)

LDFLAGS += -lreadline -L$(NEMU_HOME)/tools/capstone/repo -lcapstone $(DISASM_OBJ) $(NEMU_HOME)/tools/spike-diff/build/riscv32-spike-so

VERILOG_FLAGS := -cc --exe -Wno-EOFNEWLINE --trace-fst -LDFLAGS "$(LDFLAGS)" -CFLAGS "$(VERILATOR_CFLAGS)" --trace-structs --timescale "1ns/1ns" --no-timing $(INCLUDES) --autoflush
ifndef NS
VERILOG_FLAGS += --quiet
endif

ifdef FAST
VERILOG_FLAGS += -O3 --x-assign fast --x-initial fast --no-assert
endif

NVB_HEAD_SRC ?= 

ifdef NVB
CPP_SRC += csrc/main_nvb.cpp $(NVBOARD_HOME)/src/*.cpp 
INC_PATH += $(NVBOARD_HOME)/include/ /usr/include/SDL2 $(NPC_HOME)/usr/include
else
CPP_SRC += csrc/main.cpp 
endif

INCFLAGS = $(addprefix -I, $(INC_PATH))

LIBCAPSTONE = $(NEMU_HOME)/tools/capstone/repo/libcapstone.so.5

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

lint:
	@$(VERILATOR) --lint-only $(VERILOG_SRC) $(VERILOG_FLAGS)

build: sim 
	@mkdir -p obj_dir
	@gcc -c $(VERILATOR_CFLAGS) -O2 $(NEMU_HOME)/src/utils/disasm.c -o obj_dir/disasm.o
	@$(VERILATOR) $(OSOC_SRC) $(VERILOG_FLAGS) --top-module ysyxSoCFull  $(CPP_SRC) $(addprefix -CFLAGS , $(INCFLAGS))
	@$(MAKE) -j -C obj_dir -f VysyxSoCFull.mk 

run: build
	@LD_LIBRARY_PATH=$(NEMU_HOME)/tools/capstone/repo:$(NEMU_HOME)/build obj_dir/VysyxSoCFull $(ARGS) $(IMG)

npc_build: sim 
	@mkdir -p obj_dir
	@gcc -c $(VERILATOR_CFLAGS) -O2 $(NEMU_HOME)/src/utils/disasm.c -o obj_dir/disasm.o
	@$(VERILATOR) $(NPC_SRC) $(VERILOG_FLAGS) --top-module osoc_26000003_func  $(CPP_SRC) $(addprefix -CFLAGS , $(INCFLAGS))
	@$(MAKE) -j -C obj_dir -f Vosoc_26000003_func.mk 

npc_run: npc_build
	@LD_LIBRARY_PATH=$(NEMU_HOME)/tools/capstone/repo:$(NEMU_HOME)/build obj_dir/VysyxSoCFull $(ARGS) $(IMG)

gdb: build
	@--gdb -CFLAGS "-g"
	@gdb --args obj_dir/Vtop $(ARGS) $(IMG)

sta:
	make -C /home/dsx99/osoc/ysyx-workbench/yosys-sta sta\
	 DESIGN=osoc_26000003 SDC_FILE=/home/dsx99/osoc/ysyx-workbench/npc/sta_res/default.sdc\
	  CLK_FREQ_MHZ=300 CLK_PORT_NAME=clock O=/home/dsx99/osoc/ysyx-workbench/npc/sta_res\
	  RTL_FILES='$(foreach file, $(STA_SRC), $(abspath $(file)))'

clean:
	rm -rf obj_dir

.PHONY: sim build run lint clean disasm sta syn