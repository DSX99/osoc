ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

MEMORY {
  mrom (rx) : ORIGIN = 0x20000000, LENGTH = 4K
  sram (rwx): ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS {
  . = ORIGIN(mrom);
  .text : {
    *(entry)
    *(.text*)
  } >mrom AT> mrom : text
  etext = .;
  _etext = .;

  .rodata : {
    *(.rodata*)
  } >mrom AT> mrom

  /* =========================================================================
     A. FORCE LINKER CONTEXT TO SRAM BEFORE DEFINING RAM SYMBOLS
     ========================================================================= */
  . = ORIGIN(sram);
  _data_VMA = .;

  .data : {
    _data_start = .; /* Correct: Now explicitly captures 0x0F000000 in SRAM */
    *(.data*)
    *(.sdata*)
    . = ALIGN(4);
    edata = .;
  } >sram AT> mrom : data
  
  _data_size = SIZEOF(.data);
  _data = LOADADDR(.data); /* Correct: Safely gets the storage address in MROM */

  .bss : {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    . = ALIGN(4);
    _bss_end = .;
  } >sram
  
  /* =========================================================================
     B. DYNAMIC HEAP & STACK BOUNDARY GENERATION
     ========================================================================= */
  
  /* The heap starts exactly where .bss ends, avoiding all variables */
  _heap_start = .; 

  /* Set stack definitions cleanly relative to the physical memory footprint */
  _stack_top     = ORIGIN(sram) + LENGTH(sram) - 0x1000; /* Protect top 4KB */
  _stack_pointer = ORIGIN(sram) + LENGTH(sram);          /* Top edge of RAM */
  
  end = .;
  _end = .;
}