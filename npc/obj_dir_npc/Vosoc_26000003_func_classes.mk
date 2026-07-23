# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vosoc_26000003_func.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  Vosoc_26000003_func \
  Vosoc_26000003_func___024root__0 \
  Vosoc_26000003_func_osoc_26000003_func__0 \
  Vosoc_26000003_func_osoc_26000003_core__0 \
  Vosoc_26000003_func_regs__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vosoc_26000003_func___024root__Slow \
  Vosoc_26000003_func___024root__0__Slow \
  Vosoc_26000003_func_osoc_26000003_func__Slow \
  Vosoc_26000003_func_osoc_26000003_func__0__Slow \
  Vosoc_26000003_func_osoc_26000003_core__Slow \
  Vosoc_26000003_func_osoc_26000003_core__0__Slow \
  Vosoc_26000003_func_regs__Slow \
  Vosoc_26000003_func_regs__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  Vosoc_26000003_func__Dpi \
  Vosoc_26000003_func__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vosoc_26000003_func__Syms__Slow \
  Vosoc_26000003_func__Trace__0__Slow \
  Vosoc_26000003_func__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_dpi \
  verilated_fst_c \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
