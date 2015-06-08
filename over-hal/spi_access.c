
#if 0
#include "stm32f4xx_hal.h"
#include "Serial.h"
#include "spi_access.h"
#include "cmsis_os.h"

extern SPI_HandleTypeDef hspi2;

osSemaphoreId SemaphoreIncommingSPI1;
osSemaphoreDef(SemaphoreIncommingSPI1);
 
osSemaphoreId SemaphoreOutcommingSPI1;
osSemaphoreDef(SemaphoreOutcommingSPI1);

osSemaphoreId SemaphoreIncommingSPI2;
osSemaphoreDef(SemaphoreIncommingSPI2);
 
osSemaphoreId SemaphoreOutcommingSPI2;
osSemaphoreDef(SemaphoreOutcommingSPI2);

osSemaphoreId SemaphoreIncommingSPI3;
osSemaphoreDef(SemaphoreIncommingSPI3);
 
osSemaphoreId SemaphoreOutcommingSPI3;
osSemaphoreDef(SemaphoreOutcommingSPI3);


int spi_init()
{
  // build 
}

int spi_access_read(SPI_HandleTypeDef *hspi, unsigned char *Buffer, unsigned char len)
{
  int ret = HAL_SPI_Receive_IT(hspi, Buffer, len);
  if ( ret != HAL_OK)
    {
      WriteConsole("spi_access_read : SPI problem on SPI2\n");
    }
  return ret;
}


int spi_access_write(SPI_HandleTypeDef *hspi,unsigned char *Buffer, unsigned char len )
{

  int ret =  HAL_SPI_Transmit_IT(hspi, Buffer, len);
  if ( ret != HAL_OK)
    {
      WriteConsole("spi_access_read : SPI problem on SPI2\n");
    }

  return ret;
}


int spi_access_read_write(SPI_HandleTypeDef *hspi, unsigned char *Buffer,unsigned char *Buffer2, unsigned short len )
{
  int ret =  HAL_SPI_TransmitReceive_IT(hspi, Buffer, Buffer2, len);
  if ( ret != HAL_OK)
    {
      WriteConsole("spi_access_read : SPI problem on SPI2\n");
    }
  return ret;
}
      
// callback 
void HAL_SPI_TxCpltCallback(SPI_HandleTypeDef *hspi)
{
  if ( hspi->Instance == SPI1)
    {
    }
  else if ( hspi->Instance == SPI2)
    {
    }
  else if ( hspi->Instance == SPI3)
    {
    }
    }

void HAL_SPI_RxCpltCallback(SPI_HandleTypeDef *hspi)
{
  if ( hspi->Instance == SPI1)
    {
    }
  else if ( hspi->Instance == SPI2)
    {
    }
  else if ( hspi->Instance == SPI3)
    {
    }
}

void HAL_SPI_TxRxCpltCallback(SPI_HandleTypeDef *hspi)
{
  if ( hspi->Instance == SPI1)
    {
    }
  else if ( hspi->Instance == SPI2)
    {
    }
  else if ( hspi->Instance == SPI3)
    {
    }
}

#endif
