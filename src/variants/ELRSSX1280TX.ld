/*
**  Abstract    : Linker script for STM32L432KB device
**                with 128KByte FLASH, 36KByte RAM (20K SRAM1, 16K SRAM2)
*/

BOOTLOADER_SIZE = 16K;

/* Specify the memory areas */
MEMORY{
    RAM_CODE(rx) : ORIGIN = 0x20000000,
    LENGTH = 1K RAM_DATA(xrw) : ORIGIN = 0x20000000 + LENGTH(RAM_CODE),
    LENGTH = 20K - LENGTH(RAM_CODE)
                       SRAM2(xrw) : ORIGIN = 0x10000000,
    LENGTH = 16K FLASH(rx) : ORIGIN = 0x08000000 + BOOTLOADER_SIZE,
    LENGTH = 128K - BOOTLOADER_SIZE
}

INCLUDE "variants/ldscript_gen.ld"