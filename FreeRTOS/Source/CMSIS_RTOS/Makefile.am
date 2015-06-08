## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libcmsis_os.a

AM_CFLAGS =-mcpu=cortex-m4 -mthumb -O3 -Wall -Wpointer-arith  -Winline -Wundef -g  -ffunction-sections -fdata-sections -DSTM32F407xx

CFLAGS +=-I$(top_srcdir)/Inc -I$(top_srcdir)/CMSIS/Include -I. -I$(top_srcdir)/FreeRTOS/Source/include -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/ARM_CM3 -I$(top_srcdir)/LwIP/system/OS -D__CORTEX_M=4 -D__FPU_PRESENT -D__FPU_USED=1 -DSTM32F407xx

libcmsis_os_a_SOURCES = cmsis_os.c

