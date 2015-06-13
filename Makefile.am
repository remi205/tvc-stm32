## @start 1
## Makefile.am -- Process this file with automake to produce Makefile.in
ACLOCAL_AMFLAGS = -I macro_m4

### par defaut c'est le F4
if WANT_L4XX 
AM_CFLAGS = -I$(top_srcdir)/STM32L4xx_HAL_Driver/Inc -D__CORTEX_M=4 -D__FPU_PRESENT -D__FPU_USED=1 -mcpu=cortex-m4 -mthumb -I$(top_srcdir)/CMSIS/Device/ST/STM32L4xx/Include
AM_CPPFLAGS = -I$(top_srcdir)/STM32L4xx_HAL_Driver/Inc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16
SUBDIRS = STM32L4xx_HAL_Driver
LIBPORT = FreeRTOS/Source/portable/GCC/ARM_CM4F/libport.a
PORT_INC = FreeRTOS/Source/portable/GCC/ARM_CM4F
LIB_HAL = STM32L4xx_HAL_Driver/Src/libSTM32L4xx.a

else
if WANT_F3XX
AM_CFLAGS =  -I$(top_srcdir)/STM32F3xx_HAL_Driver/Inc -D__CORTEX_M=4 -D__FPU_PRESENT -D__FPU_USED=1 -mcpu=cortex-m4 -mthumb -I$(top_srcdir)/CMSIS/Device/ST/STM32F3xx/Include -mfloat-abi=hard -mfpu=fpv4-sp-d16 
AM_CPPFLAGS =  -I$(top_srcdir)/STM32F3xx_HAL_Driver/Inc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 
SUBDIRS = STM32F3xx_HAL_Driver
LIBPORT = FreeRTOS/Source/portable/GCC/ARM_CM4F/libport.a
PORT_INC = FreeRTOS/Source/portable/GCC/ARM_CM4F
LIB_HAL = STM32F3xx_HAL_Driver/Src/libSTM32F3xx.a
else
if WANT_F7XX 
AM_CFLAGS = -I$(top_srcdir)/STM32F7xx_HAL_Driver/Inc -D__CORTEX_M=7 -D__FPU_PRESENT -D__FPU_USED=1 -mcpu=cortex-m7 -mthumb -I$(top_srcdir)/CMSIS/Device/ST/STM32F7xx/Include
AM_CPPFLAGS =   -I$(top_srcdir)/STM32F7xx_HAL_Driver/Inc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16
SUBDIRS = STM32F7xx_HAL_Driver
FreeRTOS/Source/portable/GCC/ARM_CM4F/libport.a FreeRTOS/Source/portable/MemMang/libmem.a 
LIBPORT = FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1/libport.a
PORT_INC = FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1
LIB_HAL = STM32F7xx_HAL_Driver/Src/libSTM32F7xx.a
else
if WANT_L0XX 
AM_CFLAGS =  -I$(top_srcdir)/STM32L0xx_HAL_Driver/Inc -D__CORTEX_M=0 -D__FPU_USED=0 -mcpu=cortex-m0 -mthumb -I$(top_srcdir)/CMSIS/Device/ST/STM32L0xx/Include
AM_CPPFLAGS = -I$(top_srcdir)/STM32L0xx_HAL_Driver/Inc -mcpu=cortex-m0 -mthumb 
SUBDIRS = STM32L0xx_HAL_Driver
LIBPORT = FreeRTOS/Source/portable/GCC/ARM_CM0/libport.a
PORT_INC = FreeRTOS/Source/portable/GCC/ARM_CM0
LIB_HAL = STM32L0xx_HAL_Driver/Src/libSTM32L0xx.a
FAMILY_STM32= STM32L0xx

else
AM_CFLAGS =  -I$(top_srcdir)/STM32F4xx_HAL_Driver/Inc -D__CORTEX_M=4 -D__FPU_PRESENT -D__FPU_USED=1 -mcpu=cortex-m4 -mthumb  -I$(top_srcdir)/CMSIS/Device/ST/STM32F4xx/Include
AM_CPPFLAGS = -I$(top_srcdir)/STM32F4xx_HAL_Driver/Inc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16
SUBDIRS = STM32F4xx_HAL_Driver
LIBPORT = FreeRTOS/Source/portable/GCC/ARM_CM4F/libport.a
PORT_INC = FreeRTOS/Source/portable/GCC/ARM_CM4F
LIB_HAL = STM32F4xx_HAL_Driver/Src/libSTM32F4xx.a STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_eth.o
FAMILY_STM32= STM32F4xx

endif
endif
endif
endif

SUBDIRS += Common application bsp over-hal LwIP FreeRTOS CMSIS 

LD_SCRIPT = $(top_srcdir)/target/target-stm32-$(WANT_ROMRAM).ld 

if WANT_IPV4
LIB_IP = LwIP/src/core/ipv4/libipv4.a 
endif

if WANT_IPV6
LIB_IP = LwIP/src/core/ipv6/libipv6.a 
endif

##if WANT_FREERTOS  
LIB_FREERTOS = FreeRTOS/Source/libfreertos.a FreeRTOS/Source/portable/MemMang/libmem.a FreeRTOS/Source/CMSIS_RTOS/libcmsis_os.a
##endif


if WANT_IPV4
AM_CFLAGS = -DIPV4=$(WANT_IPV4)
AM_CPPFLAGS = -I$(top_srcdir)/LwIP/src/include/ipv4 
endif

if WANT_IPV6
AM_CFLAGS = -DIPV4=$(WANT_IPV6)
AM_CPPFLAGS = -I$(top_srcdir)/LwIP/src/include/ipv6 
endif

AM_CFLAGS += -Wall -Wpointer-arith -Wstrict-prototypes -Winline -Wundef -g  -I$(top_srcdir)/Inc -I../Inc -DIPV4=$(WANT_IPV4) -I$(top_srcdir)/CMSIS/Include -I$(top_srcdir)/FreeRTOS/Source/CMSIS_RTOS -I$(top_srcdir)/FreeRTOS/Source/include/ -I$(top_srcdir)/$(PORT_INC)

AM_CPPFLAGS += -O3 -ffunction-sections -fdata-sections -fno-exceptions -I$(top_srcdir)/tvc-macros -I$(top_srcdir)/LwIP/src/include  

## -fno-rtti
bin_PROGRAMS = essai_stm32

## pas encore full automatise
essai_stm32_SOURCES = 

## -T$(top_srcdir)/target/target-stm32-rom.ld 
essai_stm32_LDFLAGS =-mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Wl,-Map,essai_stm32.map -T$(top_srcdir)/target/stm32-mem/$(WANT_STM32) -T$(LD_SCRIPT)
essai_stm32_LDADD = bsp/libbsp.a application/libapplication.a over-hal/libover_hal.a bsp/dhcp_config.o $(LIB_HAL) LwIP/src/api/libapi.a LwIP/src/core/libcore.a LwIP/src/netif/libnetif.a LwIP/system/OS/libsysarch.a LwIP/src/core/ipv4/libipv4.a LwIP/src/core/raw.o $(LIBPORT) $(LIB_FREERTOS) $(LIB_IP)


## 



## @end 1

## with newlib ( with gcc)
## STARTUP_CLEAR_BSS
## NO_SYSTEM_INIT
## START start
