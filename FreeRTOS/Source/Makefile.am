
## Makefile.am -- Process this file with automake to produce Makefile.in
LIBS= 

lib_LIBRARIES = libfreertos.a

AM_CFLAGS =-mcpu=cortex-m4 -mthumb -O3 -Wall -Wpointer-arith  -Winline -Wundef -g  -ffunction-sections -fdata-sections

CPPFLAGS +=-I$(top_srcdir)/lwip/src/include -I$(top_srcdir)/inc  -I$(top_srcdir)/FreeRTOS/Source/include
CFLAGS +=-I$(top_srcdir)/Inc -I$(top_srcdir)/inc -I$(top_srcdir)/CMSIS/Device/ST/STM32F4xx/Include -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/CMSIS/Device/ST/STM32F4xx/Include  -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/ARM_CM3

libfreertos_a_SOURCES = croutine.c list.c queue.c tasks.c timers.c portable/GCC/ARM_CM3/port.c portable/MemMang/heap_1.c