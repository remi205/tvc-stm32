## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libport.a

AM_CFLAGS=-O3 -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16  -Wall -Wpointer-arith -Wstrict-prototypes -Winline -Wundef -g -I$(top_srcdir)/STM32F4xx_HAL_Driver/inc -I$(top_srcdir)/inc  -I$(top_srcdir)/FreeRTOS/Source/include

libport_a_SOURCES = port.c
