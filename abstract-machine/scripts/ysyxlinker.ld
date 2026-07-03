ENTRY(_start)

PHDRS{
  boot PT_LOAD;
  text PT_LOAD;
  data PT_LOAD;
}

MEMORY {
  flash (rx)  : ORIGIN = 0x30000000, LENGTH = 16M
  sram (rwx)  : ORIGIN = 0x0f000000, LENGTH = 8K
  psram (rwx) : ORIGIN = 0x80000000, LENGTH = 4M
  sdram (rwx) : ORIGIN = 0xa0000000, LENGTH = 128M
}

SECTIONS {
  . = ORIGIN(flash);

  .preboot : {
    *(entry)
    *(.preboot)
  } >flash : boot

  _boot_flash_start = LOADADDR(.boot);

  .boot : {
    _boot_start = .;
    *(.boot*)
    _boot_end = .;
  } >sram AT>flash : boot

  _text_flash_start = LOADADDR(.text);

  .text : {
    _text_start = .;
    *(.text*)
    *(.rodata*)
    _text_end = .;
  } >sdram AT> flash : text

  _data_flash_start = LOADADDR(.data);

  .data : {
    _data_start = .;
    *(.data*)
    *(.sdata*)
    _data_end = .;
  } >sdram AT> flash : data

  .bss (NOLOAD) : {
	  _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    _bss_end = .;
  } >sdram AT> flash : data
  
  
  _sram_start = ORIGIN(sram);
  _stack_top = ORIGIN(sram) + LENGTH(sram); 
  . = ORIGIN(sram) + LENGTH(sram);
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = _bss_end;
}
