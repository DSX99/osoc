ENTRY(_start)
PHDRS {
  text PT_LOAD;
  data PT_LOAD;
  bss  PT_LOAD;
}
MEMORY {
  mrom (rx) : ORIGIN = 0x20000000, LENGTH = 4K
  sram (rwx): ORIGIN = 0x0f000000, LENGTH = 8K
}
SECTIONS {
  . = ORIGIN(mrom);
  .text : {
    *(entry)
    *(.text*)
  } >mrom AT>mrom :text
  etext = .;
  _etext = .;

  .rodata : {
    *(.rodata*)
  } >mrom AT>mrom :text

  _data_start = .;
  .data : {
    *(.data*)
  } >sram AT>mrom :data
  _data_size = SIZEOF(.data);
  edata = .;
  _data = .;

  .bss (NOLOAD) : {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  } >sram
  _bss_end = .;
  _data_VMA = ORIGIN(sram);
  
  _heap_start = ORIGIN(sram) + SIZEOF(.data) + SIZEOF(.bss);
  
  _stack_top = ORIGIN(sram) + LENGTH(sram) - 0x1000;
  . = ORIGIN(sram) + LENGTH(sram);
  _stack_pointer = .;
  end = .;
  _end = .;
}