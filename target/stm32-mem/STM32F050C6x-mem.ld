/* tvc-stm32 : STM32F050C6x-mem.ld generated by Lisp xml-config program */
/* Linker script to configure memory regions.
 *   FLASH.ORIGIN: starting address of flash
 *   FLASH.LENGTH: length of flash
 *   RAM.ORIGIN: starting address of RAM bank 0
 *   RAM.LENGTH: length of RAM bank 0
 */
MEMORY
{
   FLASH (rx)  : ORIGIN =  0x8000000, LENGTH = 32K
   SRAM  (rxw) : ORIGIN = 0x20000000, LENGTH = 4K
}
