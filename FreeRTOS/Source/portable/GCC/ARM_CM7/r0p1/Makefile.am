## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libport.a

AM_CFLAGS=-O3 $(WANT_ARCH) -Wall -Wpointer-arith -Wstrict-prototypes -Winline -Wundef -g -I$(top_srcdir)/STM32F7xx_HAL_Driver/Inc -I$(top_srcdir)/Inc  -I$(top_srcdir)/FreeRTOS/Source/include

libport_a_SOURCES = port.c

