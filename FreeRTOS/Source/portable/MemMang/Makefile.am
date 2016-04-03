
## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libmem.a

AM_CFLAGS=-O3 -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -Wall -Wpointer-arith -Wstrict-prototypes -Winline -Wundef -g -I$(top_srcdir)/STM32F4xx_HAL_Driver/Inc -I$(top_srcdir)/Inc -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/ARM_CM7 

libmem_a_SOURCES = heap_1.c
