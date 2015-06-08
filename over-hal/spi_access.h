
#pragma once

#include "stm32f4xx_hal.h"

int spi_access_read(SPI_HandleTypeDef *hspi, unsigned char *Buffer, unsigned char len);
int spi_access_write(SPI_HandleTypeDef *hspi, unsigned char *Buffer, unsigned char len );
int spi_access_read_write(SPI_HandleTypeDef *hspi, unsigned char *Buffer,unsigned char *Buffer2, unsigned short len );

