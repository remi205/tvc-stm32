## @start 1
## Makefile.am -- Process this file with automake to produce Makefile.in
ACLOCAL_AMFLAGS = -I macro_m4

### par defaut c'est le F4
if WANT_L4XX 
AM_CFLAGS =  -I$(top_srcdir)/STM32L4xx_HAL_Driver/Inc -D__CORTEX_M=4 -D__FPU_PRESENT -D__FPU_USED=1 -mcpu=cortex-m4 -mthumb -I$(top_srcdir)/CMSIS/Device/ST/STM32L4xx/Include
AM_CPPFLAGS = -I$(top_srcdir)/STM32L4xx_HAL_Driver/Inc -mcpu=cortex-m4 -mthumb 
SUBDIRS = STM32L4xx_HAL_Driver
else
if WANT_F3XX
AM_CFLAGS =  -I$(top_srcdir)/STM32F3xx_HAL_Driver/Inc -D__CORTEX_M=4 -D__FPU_PRESENT -D__FPU_USED=1 -mcpu=cortex-m4 -mthumb -I$(top_srcdir)/CMSIS/Device/ST/STM32F3xx/Include
AM_CPPFLAGS =  -I$(top_srcdir)/STM32F3xx_HAL_Driver/Inc  -mcpu=cortex-m4 -mthumb 
SUBDIRS = STM32F3xx_HAL_Driver
else
if WANT_F7XX 
AM_CFLAGS =  -I$(top_srcdir)/STM32F7xx_HAL_Driver/Inc -D__CORTEX_M=7 -D__FPU_PRESENT -D__FPU_USED=1 -mcpu=cortex-m7 -mthumb -I$(top_srcdir)/CMSIS/Device/ST/STM32F7xx/Include
AM_CPPFLAGS =   -I$(top_srcdir)/STM32F7xx_HAL_Driver/Inc -mcpu=cortex-m7 -mthumb 
SUBDIRS = STM32F7xx_HAL_Driver
else
if WANT_L0XX 
AM_CFLAGS =  -I$(top_srcdir)/STM32L0xx_HAL_Driver/Inc -D__CORTEX_M=0 -D__FPU_USED=0 -mcpu=cortex-m0 -mthumb -I$(top_srcdir)/CMSIS/Device/ST/STM32L0xx/Include
AM_CPPFLAGS = -I$(top_srcdir)/STM32L0xx_HAL_Driver/Inc -mcpu=cortex-m0 -mthumb 
SUBDIRS = STM32L0xx_HAL_Driver
else
AM_CFLAGS =  -I$(top_srcdir)/STM32F4xx_HAL_Driver/Inc -D__CORTEX_M=4 -D__FPU_PRESENT -D__FPU_USED=1 -mcpu=cortex-m4 -mthumb  -I$(top_srcdir)/CMSIS/Device/ST/STM32F4xx/Include
AM_CPPFLAGS = -I$(top_srcdir)/STM32F4xx_HAL_Driver/Inc -mcpu=cortex-m4 -mthumb 
SUBDIRS = STM32F4xx_HAL_Driver
endif
endif
endif
endif

SUBDIRS += Common application bsp over-hal LwIP FreeRTOS CMSIS 

if WANT_IPV4
AM_CFLAGS = -DIPV4=$(WANT_IPV4)
AM_CPPFLAGS = -I$(top_srcdir)/LwIP/src/include/ipv4 
endif

if WANT_IPV6
AM_CFLAGS = -DIPV4=$(WANT_IPV6)
AM_CPPFLAGS = -I$(top_srcdir)/LwIP/src/include/ipv6 
endif

AM_CFLAGS += -O3 -Wall -Wpointer-arith -Wstrict-prototypes -Winline -Wundef -g  -I$(top_srcdir)/Inc -I../Inc -DIPV4=$(WANT_IPV4) -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include/ -I$(top_srcdir)/FreeRTOS/Source/portable/GCC/ARM_CM3 -DSTM32F407xx

AM_CPPFLAGS += -O3 -ffunction-sections -fdata-sections  -fno-exceptions -I$(top_srcdir)/tvc-macros -I$(top_srcdir)/LwIP/src/include  

## -fno-rtti
bin_PROGRAMS = essai_stm32

## pas encore full automatise
essai_stm32_SOURCES = bsp/main.c bsp/newlib_stub.c bsp/stm32f4xx_crt0.s FreeRTOS/Source/CMSIS_RTOS/cmsis_os.c

essai_stm32_LDFLAGS =-mcpu=cortex-m4 -mthumb -Wl,-Map,essai_stm32.map -T$(top_srcdir)/target/stm32-mem/STM32F417VEx-mem.ld -T$(top_srcdir)/target/target-stm32-rom.ld 
essai_stm32_LDADD = bsp/libbsp.a application/libapplication.a over-hal/libover_hal.a bsp/dhcp_config.o STM32F4xx_HAL_Driver/Src/libSTM32F4xx.a FreeRTOS/Source/libfreertos.a LwIP/src/api/libapi.a LwIP/src/core/libcore.a LwIP/src/netif/libnetif.a LwIP/system/OS/libsysarch.a LwIP/src/core/ipv4/libipv4.a STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_eth.o LwIP/src/core/raw.o


if WANT_F4XX 
essai_stm32_LDADD += STM32F4xx_HAL_Driver/Src/libSTM32F4xx.a
endif

if WANT_F3XX
essai_stm32_LDADD += STM32F3xx_HAL_Driver/Src/libSTM32F3xx.a
endif

if WANT_F7XX 
essai_stm32_LDADD += STM32F7xx_HAL_Driver/Src/libSTM32F7xx.a
endif

if WANT_L4XX 
essai_stm32_LDADD += STM32L4xx_HAL_Driver/Src/libSTM32L4xx.a
endif

if WANT_L0XX 
essai_stm32_LDADD += STM32L0xx_HAL_Driver/Src/libSTM32L0xx.a
endif

if WANT_IPV4
essai_stm32_LDADD += LwIP/src/core/ipv4/libipv4.a 
endif

if WANT_IPV6
essai_stm32_LDADD += LwIP/src/core/ipv6/libipv6.a 
endif

if WANT_FREERTOS  
essai_stm32_LDADD += FreeRTOS/Source/libfreertos.a 
endif

## 
essai_stm32_LDFLAGS += -T$(top_srcdir)/target/stm32-mem/$(WANT_STM32) 

if TARGET_RAM
essai_stm32_LDFLAGS += -T$(top_srcdir)/target/target-stm32-ram.ld 
endif

if TARGET_FLASH
essai_stm32_LDFLAGS += -T$(top_srcdir)/target/target-stm32-rom.ld 
endif

## @end 1

## with newlib ( with gcc)
## STARTUP_CLEAR_BSS
## NO_SYSTEM_INIT
## START start