VERILOG_SRC = vsrc/*.sv
CPP_SRC = csrc/*.cpp csrc/*.c 


# all:
# 	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."

_default:
	verilator --lint-only -Wall $(VERILOG_SRC) -Wno-EOFNEWLINE

include ../Makefile
