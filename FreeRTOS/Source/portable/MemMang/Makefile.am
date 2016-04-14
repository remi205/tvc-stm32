
## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libmem.a

AM_CFLAGS=$(WANT_OPT) $(WANT_ARCH) -Wall -Wpointer-arith -Wstrict-prototypes -Winline -Wundef -g -I$(top_srcdir)/STM32$(FAMILY)xx_HAL_Driver/Inc -I$(top_srcdir)/Inc -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/$(GCC_CORE)

libmem_a_SOURCES = heap_1.c
