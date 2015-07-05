  .syntax unified
	.cpu cortex-m4
	.fpu softvfp
	.thumb

/* start address for the initialization values of the .data section.
defined in linker script */
.word	_sidata
/* start address for the .data section. defined in linker script */
.word  __data_start__
/* end address for the .data section. defined in linker script */
.word  __data_end__
/* start address for the .bss section. defined in linker script */
.word  __bss_start__
/* end address for the .bss section. defined in linker script */
.word   __bss_end__
/* stack used for SystemInit_ExtMemCtl; always internal RAM used */

//.equ  BootRAM,        0xF1E0F85F
/**
 * @brief  This is the code that gets called when the processor first
 *          starts execution following a reset event. Only the absolutely
 *          necessary set is performed, after which the application
 *          supplied main() routine is called.
 * @param  None
 * @retval : None
*/
    .section	.text.Reset_Handler
	.weak	Reset_Handler
	.type	Reset_Handler, %function
Reset_Handler:
  ldr   sp, =_estack     /* set stack pointer */

/* Copy the data segment initializers from flash to SRAM */
  movs	r1, #0
  b	LoopCopyDataInit

CopyDataInit:
	ldr	r3, =_sidata
	ldr	r3, [r3, r1]
	str	r3, [r0, r1]
	adds	r1, r1, #4

LoopCopyDataInit:
  ldr  r0, =__data_start__
  ldr  r3, =__data_end__
	adds	r2, r0, r1
	cmp	r2, r3
	bcc	CopyDataInit
  ldr  r2, =__bss_start__
	b	LoopFillZerobss
/* Zero fill the bss segment. */
FillZerobss:
	movs	r3, #0
	str	r3, [r2], #4

LoopFillZerobss:
  ldr  r3, =  __bss_end__
	cmp	r2, r3
	bcc	FillZerobss

/* Call the clock system intitialization function.*/
    bl  SystemInit
/* Call static constructors */
    bl __libc_init_array
/* Call the application's entry point.*/
    bl	main
    bx  lr  
    
.size	Reset_Handler, .-Reset_Handler
/*.include "stm32f3xx_vectors.s"*/
        
        