ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

MEMORY {
  flash (rx) : ORIGIN = 0x30000000, LENGTH = 16M
  sram (rwx): ORIGIN = 0x0f000000, LENGTH = 8K
  psram (rwx): ORIGIN = 0x80000000, LENGTH = 4M
}

SECTIONS {
  . = ORIGIN(flash);

  .boot : {
    _boot_start = .;
    *(entry)
    *(.boot*)
    _boot_end = .;
  } >flash : text


  _text_flash_start = .;

  .text : {
    _text_start = .;
    *(.text*)
    *(.rodata*)
    _text_end = .;
  } >sram AT> flash : text

  _data_flash_start = .;

  .data : {
    _data_start = .;
    *(.data*)
    *(.sdata*)
    _data_end = .;
  } >sram AT> flash : data

  .bss (NOLOAD) : {
	  _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    _bss_end = .;
  } >sram AT> flash
  
  
  _sram_start = ORIGIN(sram);
  _stack_top = ORIGIN(sram) + LENGTH(sram) - 0x1000; 
  . = ORIGIN(sram) + LENGTH(sram);
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = _bss_end;
}
