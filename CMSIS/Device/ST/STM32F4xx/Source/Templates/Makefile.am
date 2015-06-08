## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES =system.a

AM_CFLAGS=-O3 -mcpu=cortex-m4 -mthumb -Wall -Wpointer-arith -Wstrict-prototypes -Winline -Wundef -g -I$(top_srcdir)/Carlina/Drivers/STM32F4xx_HAL_Driver/inc -I$(top_srcdir)/inc
AM_CPPFLAGS =-O3 -mcpu=cortex-m4 -mthumb -ffunction-sections -fdata-sections  -fno-exceptions -I$(top_srcdir)/tvc-macros -I$(top_srcdir)/Carlina/Drivers/STM32F4xx_HAL_Driver/inc  

libsystem_a_SOURCES = system_stm32f4xx.c
