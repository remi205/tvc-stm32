## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES =libsystem.a

AM_CFLAGS=$(WANT_OPT) $(WANT_ARCH) -Wall -Wpointer-arith -Wstrict-prototypes -Winline -Wundef -g -I$(top_srcdir)/STM32$(FAMILLY)xx_HAL_Driver/inc -I$(top_srcdir)/inc

libsystem_a_SOURCES = system_stm32f4xx.c
