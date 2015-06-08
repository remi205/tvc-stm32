
## Makefile.am -- Process this file with automake to produce Makefile.in
lib_LIBRARIES = libSTM32F3xx.a

AM_CFLAGS =-mcpu=cortex-m4 -mthumb -O3 -Wall -Wpointer-arith  -Winline -Wundef -g  -ffunction-sections -fdata-sections

CPPFLAGS += -I$(top_srcdir)/inc -I$(top_srcdir) -I$(top_srcdir)/STM32F3xx_HAL_Driver/Inc
CFLAGS += -I$(top_srcdir)/Inc -I$(top_srcdir) -I$(top_srcdir)/STM32F3xx_HAL_Driver/Inc -I$(top_srcdir)/CMSIS/Device/ST/STM32F3xx/Include -I$(top_srcdir)/CMSIS/Include/ -DSTM32F373xx

libSTM32F3xx_a_SOURCES =stm32f3xx_hal.c\
			stm32f3xx_hal_adc.c\
			stm32f3xx_hal_adc_ex.c\
			stm32f3xx_hal_can.c\
			stm32f3xx_hal_cec.c\
			stm32f3xx_hal_comp.c\
			stm32f3xx_hal_cortex.c\
			stm32f3xx_hal_crc.c\
			stm32f3xx_hal_crc_ex.c\
			stm32f3xx_hal_dac.c\
			stm32f3xx_hal_dac_ex.c\
			stm32f3xx_hal_dma.c\
			stm32f3xx_hal_flash.c\
			stm32f3xx_hal_flash_ex.c\
	  		stm32f3xx_hal_gpio.c\
			stm32f3xx_hal_hrtim.c
			stm32f3xx_hal_i2c.c\
			stm32f3xx_hal_i2c_ex.c\
			stm32f3xx_hal_i2s.c\
			stm32f3xx_hal_i2s_ex.c\
			stm32f3xx_hal_irda.c\
			stm32f3xx_hal_iwdg.c\
			stm32f3xx_hal_nand.c\
			stm32f3xx_hal_nor.c\
			stm32f3xx_hal_opamp.c\
			stm32f3xx_hal_opamp_ex.c\
			stm32f3xx_hal_pccard.c\
			stm32f3xx_hal_pcd.c\
			stm32f3xx_hal_pcd_ex.c\
			stm32f3xx_hal_ppp.c\
			stm32f3xx_hal_pwr.c\
			stm32f3xx_hal_pwr_ex.c\
			stm32f3xx_hal_rcc.c\
			stm32f3xx_hal_rcc_ex.c\
			stm32f3xx_hal_rtc.c\
			stm32f3xx_hal_rtc_ex.c\
			stm32f3xx_hal_sdadc.c\
			stm32f3xx_hal_smartcard.c\
			stm32f3xx_hal_smartcard_ex.c\
			stm32f3xx_hal_smbus.c\
			stm32f3xx_hal_spi.c\
			stm32f3xx_hal_sram.c\
			stm32f3xx_hal_tim.c\
			stm32f3xx_hal_tim_ex.c\
			stm32f3xx_hal_tsc.c\
			stm32f3xx_hal_uart.c\
			stm32f3xx_hal_uart_ex.c\
			stm32f3xx_hal_usart.c\
			stm32f3xx_hal_wwdg.c\
			stm32f3xx_ll_fmc.c
