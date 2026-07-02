ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

MEMORY {
  flash (rx) : ORIGIN = 0x30000000, LENGTH = 16M
  sram (rwx): ORIGIN = 0x0f000000, LENGTH = 8K
  psram (rwx): ORIGIN = 0x80000000, LENGTH = 4M
}

SECTIONS {
  . = ORIGIN(flash);
  _text_start = .;
  .text : {
    *(entry)
    *(.text*)
  } >sram AT> flash : text
  etext = .;
  _etext = .;
  .rodata : {
    *(.rodata*)
  } >sram AT>flash
  _data_start = .;
  .data : {
    *(.data*)
    *(.sdata*)
  } >sram AT> flash : data
  _data_size = SIZEOF(.data);
  edata = .;
  _data = .;
  .bss (NOLOAD) : {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  _bss_end = .;
  } >sram AT>flash
  _sram_start = ORIGIN(sram);
  _stack_top = ORIGIN(sram) + LENGTH(sram) - 0x1000; 
  . = ORIGIN(sram) + LENGTH(sram);
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ORIGIN(sram) + SIZEOF(.data);
}
