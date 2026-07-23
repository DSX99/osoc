include ../Makefile

CONFIG_ITRACE=y
CONFIG_IQUEUE=y

include $(NEMU_HOME)/src/utils/filelist.mk

#SoC
SoC_VSRC = $(shell find $(SOC_HOME)/perip/ -name "*.v") $(SOC_HOME)/build/*.v
INCLUDES = -I$(SOC_HOME)/perip/uart16550/rtl -I$(SOC_HOME)/perip/spi/rtl 

.DEFAULT_GOAL  := lint
VERILATOR = verilator
VERILOG_SRC = $(filter-out vsrc/ysyx% vsrc/CLINT.sv, $(wildcard vsrc/*.sv))
OSOC_SRC = vsrc/ysyx_26060184_core.sv vsrc/ysyx_26060184.sv vsrc/CLINT.sv $(VERILOG_SRC) $(SoC_VSRC)
NPC_SRC = vsrc/ysyx_26060184_func.sv vsrc/ysyx_26060184_core.sv vsrc/CLINT.sv $(VERILOG_SRC)
STA_SRC = vsrc/ysyx_26060184_core.sv $(filter-out vsrc/axi%, $(VERILOG_SRC))
CPP_SRC = $(shell find csrc/ -name "*.cpp" -not -name "main.cpp" -not -name "main_npc.cpp" -not -name "main_nvb.cpp")
OSOC_CPP_SRC = csrc/main_nvb.cpp $(CPP_SRC)
NPC_CPP_SRC = csrc/main_npc.cpp $(CPP_SRC)


IMG ?= 
ARGS ?= 
#idk there should be some include search path of verilator for rtl of uart+spi, but there are only .v and they are already included
VERILATOR_CFLAGS += -I$(NEMU_HOME)/tools/capstone/repo/include -I$(NEMU_HOME)/include -g -I$(NEMU_HOME)/tools/spike-diff/repo -I$(NEMU_HOME)/tools/spike-diff/repo/build
VERILATOR_CFLAGS += -DCONFIG_ISA_riscv32

LDFLAGS += -lreadline -L$(NEMU_HOME)/tools/capstone/repo -lcapstone $(NEMU_HOME)/tools/spike-diff/build/riscv32-spike-so

include $(NVBOARD_HOME)/scripts/nvboard.mk


VERILOG_FLAGS := -cc --exe -Wno-EOFNEWLINE --trace-fst -LDFLAGS "$(LDFLAGS)" -CFLAGS "$(VERILATOR_CFLAGS)" --trace-structs --timescale "1ns/1ns" --no-timing $(INCLUDES) --autoflush
ifndef NS
VERILOG_FLAGS += --quiet
endif

ifdef FAST
VERILOG_FLAGS += -O3 --x-assign fast --x-initial fast --no-assert
endif

INCFLAGS = $(addprefix -I, $(INC_PATH))

LIBCAPSTONE = $(NEMU_HOME)/tools/capstone/repo/libcapstone.so.5

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

lint:
	$(VERILATOR) --lint-only vsrc/ysyx_26060184_core.sv vsrc/ysyx_26060184.sv vsrc/CLINT.sv $(VERILOG_SRC) $(VERILOG_FLAGS) -Wall -Wno-UNUSEDSIGNAL -Wno-EOFNEWLINE --top-module ysyx_26060184 -Wno-DECLFILENAME

build: sim $(NVBOARD_ARCHIVE)
	mkdir -p obj_dir
	gcc -c $(VERILATOR_CFLAGS) -O2 $(NEMU_HOME)/src/utils/disasm.c -o obj_dir/disasm.o
	$(VERILATOR) $(OSOC_SRC) -LDFLAGS "$(NVBOARD_ARCHIVE) $(abspath obj_dir/disasm.o)" $(VERILOG_FLAGS) --top-module ysyxSoCFull  $(OSOC_CPP_SRC) $(addprefix -CFLAGS , $(INCFLAGS)) -CFLAGS "-DSOC" -DSOC=1 --Mdir obj_dir
	$(MAKE) -j -C obj_dir -f VysyxSoCFull.mk 

run: build
	LD_LIBRARY_PATH=$(NEMU_HOME)/tools/capstone/repo:$(NEMU_HOME)/build obj_dir/VysyxSoCFull $(ARGS) $(IMG)

IDK_CPP_SRC = 

npc_build: sim 
	@mkdir -p obj_dir_npc
	@gcc -c $(VERILATOR_CFLAGS) -O2 $(NEMU_HOME)/src/utils/disasm.c -o obj_dir_npc/disasm.o
	@$(VERILATOR) $(NPC_SRC) -LDFLAGS "$(abspath obj_dir_npc/disasm.o)" $(VERILOG_FLAGS) --top-module ysyx_26060184_func  $(NPC_CPP_SRC) $(addprefix -CFLAGS , $(INCFLAGS)) -CFLAGS "-DNPC" -DNPC=1 --Mdir obj_dir_npc
	@$(MAKE) -j -C obj_dir_npc -f Vysyx_26060184_func.mk 

npc_run: npc_build
	@LD_LIBRARY_PATH=$(NEMU_HOME)/tools/capstone/repo:$(NEMU_HOME)/build obj_dir_npc/Vysyx_26060184_func $(ARGS) $(IMG)

sta:
	make -C /home/dsx99/osoc/ysyx-workbench/yosys-sta sta \
		DESIGN=ysyx_26060184_core \
		SDC_FILE=/home/dsx99/osoc/ysyx-workbench/npc/sta_res/default.sdc \
		CLK_FREQ_MHZ=565 \
		CLK_PORT_NAME=clock \
		O=/home/dsx99/osoc/ysyx-workbench/npc/sta_res \
		RTL_FILES='$(foreach file, $(STA_SRC), $(abspath $(file)))'

sim-iverilog:
	mkdir -p icarus
	riscv64-linux-gnu-objcopy -I binary -O verilog $(IMG) $(IMG).hex
	iverilog -g2012 -DMEM_ADDR=\"$(IMG).hex\" -o icarus/sim.vvp ./iverilog_vsrc/RAM_for_netlist.sv ./iverilog_vsrc/top_module.sv ./iverilog_vsrc/ysyx_26060184.sv
	vvp ./icarus/sim.vvp -fst

gen_netlist:
	make -C /home/dsx99/osoc/ysyx-workbench/yosys-sta sta \
		DESIGN=ysyx_26060184 \
		SDC_FILE=/home/dsx99/osoc/ysyx-workbench/npc/sta_res/default.sdc \
		CLK_FREQ_MHZ=565 \
		CLK_PORT_NAME=clock \
		O=./net_list_res \
		RTL_FILES='$(abspath ./iverilog_vsrc/ysyx_26060184.sv)'

sim-iverilog-netlist:
	mkdir -p icarus_netlist
	riscv64-linux-gnu-objcopy -I binary -O verilog $(IMG) $(IMG).hex
	iverilog -g2012 -DMEM_ADDR=\"$(IMG).hex\" -o icarus/sim.vvp ./iverilog_vsrc/RAM_for_netlist.sv ./iverilog_vsrc/top_module.sv $(NETLIST) $(CELLS)
	vvp ./icarus/sim.vvp -fst

clean:
	rm -rf obj_dir
	rm -rf obj_dir_npc

.PHONY: sim build run lint clean disasm sta npc_run npc_build sim_iverilog