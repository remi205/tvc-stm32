## Makefile.am -- Process this file with automake to produce Makefile.in -D$(WANT_STM32)
lib_LIBRARIES = libSTM32F7xx.a

AM_CFLAGS =-mcpu=cortex-m4 -mthumb -O3 -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Wall -Wpointer-arith  -Winline -Wundef -g  -ffunction-sections -fdata-sections -DSTM32$(STM32)xx

CFLAGS += -I$(top_srcdir)/Inc -I$(top_srcdir) -I$(top_srcdir)/STM32F7xx_HAL_Driver/Inc -I$(top_srcdir)/CMSIS/Device/ST/STM32F7xx/Include -I$(top_srcdir)/CMSIS/Include/  
libSTM32F7xx_a_SOURCES =stm32f7xx_hal_dac.c 
			stm32f7xx_hal_hash.c\
			stm32f7xx_hal_nand.c\
			stm32f7xx_hal_rtc_ex.c\
			stm32f7xx_hal_tim_ex.c\
			stm32f7xx_hal.c\
			stm32f7xx_hal_dac_ex.c\
			stm32f7xx_hal_hash_ex.c\
			stm32f7xx_hal_nor.c\
			stm32f7xx_hal_sai.c\
			stm32f7xx_hal_uart.c\
			stm32f7xx_hal_adc.c\
			stm32f7xx_hal_dcmi.c\
			stm32f7xx_hal_hcd.c\
			stm32f7xx_hal_pcd.c\
			stm32f7xx_hal_sai_ex.c\
			stm32f7xx_hal_usart.c\
			stm32f7xx_hal_adc_ex.c\
			stm32f7xx_hal_dcmi_ex.c\
			stm32f7xx_hal_i2c.c\
			stm32f7xx_hal_pcd_ex.c\
			stm32f7xx_hal_sd.c\
			stm32f7xx_hal_wwdg.c\
			stm32f7xx_hal_can.c\
			stm32f7xx_hal_dma.c\
			stm32f7xx_hal_i2c_ex.c\
			stm32f7xx_hal_pwr.c\
			stm32f7xx_hal_sdram.c\
			stm32f7xx_ll_fmc.c\
			stm32f7xx_hal_cec.c\
			stm32f7xx_hal_dma_ex.c\
			stm32f7xx_hal_i2s.c\
			stm32f7xx_hal_pwr_ex.c\
			stm32f7xx_hal_smartcard.c\
			stm32f7xx_ll_sdmmc.c\
			stm32f7xx_hal_cortex.c\
			stm32f7xx_hal_dma2d.c\
			stm32f7xx_hal_irda.c\
			stm32f7xx_hal_qspi.c\
			stm32f7xx_hal_smartcard_ex.c\
			stm32f7xx_ll_usb.c\
			stm32f7xx_hal_crc.c\
			stm32f7xx_hal_eth.c\
			stm32f7xx_hal_iwdg.c\
			stm32f7xx_hal_rcc.c\
			stm32f7xx_hal_spdifrx.c\
			stm32f7xx_hal_crc_ex.c\
			stm32f7xx_hal_flash.c\
			stm32f7xx_hal_lptim.c\
			stm32f7xx_hal_rcc_ex.c\
			stm32f7xx_hal_spi.c\
			stm32f7xx_hal_cryp.c\
			stm32f7xx_hal_flash_ex.c\
			stm32f7xx_hal_ltdc.c\
			stm32f7xx_hal_rng.c\
			stm32f7xx_hal_sram.c\
			stm32f7xx_hal_cryp_ex.c\
			stm32f7xx_hal_gpio.c\
			stm32f7xx_hal_msp_template.c\
			stm32f7xx_hal_rtc.c\
			stm32f7xx_hal_tim.c




