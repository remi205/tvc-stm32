## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libstm32.a

AM_CFLAGS=-O3 $(WANT_ARCH) -Wall -Wpointer-arith -Wstrict-prototypes -Winline -Wundef -g -I$(top_srcdir)/STM32F3xx_HAL_Driver/inc -I$(top_srcdir)/inc

libstm32_a_SOURCES = startup_stm32f373xx.s
