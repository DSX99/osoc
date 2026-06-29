ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

MEMORY {
  mrom (rx) : ORIGIN = 0x20000000, LENGTH = 4K
  sram (rwx): ORIGIN = 0x0f001000, LENGTH = 8K
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
  }
  _data_start = .;
  .data : {
    *(.data*)
  } >sram AT> mrom : data
  _data_size = SIZEOF(.data);
  edata = .;
  _data = .;
  .bss : {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  } >sram AT> mrom
  . = ORIGIN(sram) + 0x1000;
  _stack_top = .;
  . = _stack_top + 0x1000;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ALIGN(0x1000);
}
