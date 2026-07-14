ENTRY(_start)

PHDRS{
  preboot PT_LOAD;
  boot PT_LOAD;
  text PT_LOAD;
  data PT_LOAD;
  data_extra PT_LOAD;
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
  } >flash : preboot

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

    /* section for rt-thread*/
    /* section information for finsh shell */
    __fsymtab_start = .;
    KEEP(*(FSymTab))
    __fsymtab_end = .;
    . = ALIGN(8);
    __vsymtab_start = .;
    KEEP(*(VSymTab))
    __vsymtab_end = .;
    . = ALIGN(8);

    /* section information for initial. */
    . = ALIGN(8);
    __rt_init_start = .;
    KEEP(*(SORT(.rti_fn*)))
    __rt_init_end = .;
    . = ALIGN(8);

    __rt_utest_tc_tab_start = .;
    KEEP(*(UtestTcTab))
    __rt_utest_tc_tab_end = .;

    . = ALIGN(8);
    __am_apps_data_start = .;
    *(__am_apps.data*)
    *(__am_apps.sdata*)
    __am_apps_data_end = .;
    . = ALIGN(8);

    _data_end = .;
  } >sdram AT> flash : data

  .bss (NOLOAD) : {
	  _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)

    /* section for rt-thread */
    . = ALIGN(8);
    __am_apps_bss_start = .;
    *(__am_apps.bss*)
    *(__am_apps.sbss*)
    *(__am_apps.scommon*)
    __am_apps_bss_end = .;
    . = ALIGN(8);

    _bss_end = .;
  } >sdram AT> flash
  
  
  _sram_start = ORIGIN(sram);
  _stack_top = ORIGIN(sdram) + LENGTH(sdram) - 0x2000; 
  . = ORIGIN(sdram) + LENGTH(sdram);
  end = .;
  _end = .;
  _heap_start = _bss_end;

  . = ORIGIN(sram) + LENGTH(sram);
  _stack_pointer = .;
}
