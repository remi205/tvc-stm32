## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES =system.a

AM_CFLAGS=-O3 -mcpu=cortex-m4 -mthumb  -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Wall -Wpointer-arith -Wstrict-prototypes -Winline -Wundef -g -I$(top_srcdir)/Drivers/STM32F3xx_HAL_Driver/inc -I$(top_srcdir)/inc

libsystem_a_SOURCES = system_stm32f3xx.c
