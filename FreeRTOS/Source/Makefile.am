## Makefile.am -- Process this file with automake to produce Makefile.in
SUBDIRS = CMSIS_RTOS portable

lib_LIBRARIES = libfreertos.a

AM_CFLAGS =$(WANT_ARCH) $(WANT_OPT) -Wall -Wpointer-arith  -Winline -Wundef -g  -ffunction-sections -fdata-sections

CFLAGS +=-I$(top_srcdir)/Inc -I$(top_srcdir)/inc -I$(top_srcdir)/CMSIS/Device/ST/STM32$(FAMILY)xx/Include -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/CMSIS/Device/ST/STM32$(FAMILY)xx/Include  -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/$(GCC_CORE)

libfreertos_a_SOURCES = croutine.c list.c queue.c tasks.c timers.c event_groups.c
