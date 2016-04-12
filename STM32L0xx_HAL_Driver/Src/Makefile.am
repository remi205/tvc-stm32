
## Makefile.am -- Process this file with automake to produce Makefile.in -D$(WANT_STM32)
lib_LIBRARIES = libSTM32F4xx.a

AM_CFLAGS = $(WANT_ARCH) $(WANT_OPT) -Wall -Wpointer-arith  -Winline -Wundef -g  -ffunction-sections -fdata-sections -DSTM32$(STM32)

CFLAGS += -I$(top_srcdir)/Inc -I$(top_srcdir) -I$(top_srcdir)/STM32L0xx_HAL_Driver/Inc -I$(top_srcdir)/CMSIS/Device/ST/STM32L0xx/Include -I$(top_srcdir)/CMSIS/Include/  
libSTM32F4xx_a_SOURCES =stm32l0xx_hal.c\
			stm32l0xx_hal_cryp_ex.c\
			stm32l0xx_hal_i2c.c\
			stm32l0xx_hal_pcd.c\
			stm32l0xx_hal_rtc_ex.c\
			stm32l0xx_hal_uart.c\
			stm32l0xx_hal_adc.c\
			stm32l0xx_hal_dac.c\
			stm32l0xx_hal_i2c_ex.c\
			stm32l0xx_hal_pcd_ex.c\
			stm32l0xx_hal_smartcard.c\
			stm32l0xx_hal_uart_ex.c\
			stm32l0xx_hal_adc_ex.c\
			stm32l0xx_hal_dac_ex.c\
			stm32l0xx_hal_i2s.c\
			stm32l0xx_hal_pwr.c\
			stm32l0xx_hal_smartcard_ex.c\
			stm32l0xx_hal_usart.c\
			stm32l0xx_hal_comp.c\
			stm32l0xx_hal_dma.c\
			stm32l0xx_hal_irda.c\
			stm32l0xx_hal_pwr_ex.c\
			stm32l0xx_hal_smbus.c\
			stm32l0xx_hal_wwdg.c\
			stm32l0xx_hal_cortex.c \
			stm32l0xx_hal_flash.c\
			stm32l0xx_hal_iwdg.c\
			stm32l0xx_hal_rcc.c\
			stm32l0xx_hal_spi.c\
			stm32l0xx_hal_crc.c\
			stm32l0xx_hal_flash_ex.c\
			stm32l0xx_hal_lcd.c\
			stm32l0xx_hal_rcc_ex.c\
			stm32l0xx_hal_tim.c\
			stm32l0xx_hal_crc_ex.c\
			stm32l0xx_hal_flash_ramfunc.c\
			stm32l0xx_hal_lptim.c   \
			stm32l0xx_hal_rng.c\
			stm32l0xx_hal_tim_ex.c



