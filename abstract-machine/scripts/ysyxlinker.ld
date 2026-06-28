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
  } >mrom : text

  .rodata : {
    *(.rodata*)
  } >mrom

  /* Keep a strict record of where we are in MROM for the flash payload */
  _mrom_data_flash_start = .; 

  /* VMA is SRAM, but LMA is explicitly forced to our current MROM tracking spot */
  .data : {
    _data_start = .;   /* Writable VMA start address in SRAM */
    *(.data*)
    _data_end = .;     /* Writable VMA end address in SRAM */
  } >sram AT> mrom : data

  /* Calculate size using the section-bound symbols */
  _data_size = _data_end - _data_start;
  
  /* Retain your compatibility hooks safely */
  _data = _data_start;
  edata = _data_end;
  etext = _mrom_data_flash_start;
  _etext = _mrom_data_flash_start;

  .bss : {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    . = ALIGN(4);
    _bss_end = .;
  } >sram AT> sram

  /* Absolute math definitions - completely detached from the counter '.' */
  _stack_top      = ORIGIN(sram) + 0x1000;
  _stack_pointer  = _stack_top + 0x1000;
  end             = _stack_pointer;
  _end            = _stack_pointer;
  _heap_start     = (_stack_pointer + 0xFFF) & ~0xFFF;
}