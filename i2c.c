
#include <stdio.h>
#include "i2c.h"

I2C_HandleTypeDef * I2C_Init(unsigned long Base ,unsigned int Speed, int Address)
{ 
  I2C_HandleTypeDef *hi2c =  (I2C_HandleTypeDef *) malloc(sizeof(I2C_HandleTypeDef));

  if( hi2c = NULL)
    return NULL;
  
  hi2c.Instance = Base;

  hi2c->Init.ClockSpeed = Speed;
  hi2c->Init.DutyCycle = I2C_DUTYCYCLE_2;
  hi2c->Init.OwnAddress1 = 0;
  hi2c->Init.AddressingMode = Address7;
  hi2c->Init.DualAddressMode = I2C_DUALADDRESS_DISABLED;
  hi2c->Init.OwnAddress2 = 0;
  hi2c->Init.GeneralCallMode = I2C_GENERALCALL_DISABLED;
  hi2c->Init.NoStretchMode = I2C_NOSTRETCH_DISABLED;

  HAL_I2C_Init(hi2c);
  return hi2c;
}

// une fonction générique, pour l'init par ip. Les gpio choisit sont dans le fichier est i2c.c mais il faut le renomer en i2c_gpio.c
#include "spi.h"

SPI_HandleTypeDef * SPI_InitMaster(unsigned long Base , 
                                   unsigned long DataSize, 
                                   unigned char ClockPolarty, 
                                   unsigned char ClockPhase)
{
  SPI_HandleTypeDef *hspi =  (SPI_HandleTypeDef *) malloc(sizeof(SPI_HandleTypeDef));

  hspi.Instance = Base ;
  hspi.Init.Mode = SPI_MODE_MASTER;
  hspi.Init.Direction = SPI_DIRECTION_2LINES;
  hspi.Init.DataSize = DataSize;
  hspi.Init.CLKPolarity = ClockPolarty;
  hspi.Init.CLKPhase = ClockPhase;
  hspi.Init.NSS = SPI_NSS_SOFT;
  hspi.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_8;
  hspi.Init.FirstBit = SPI_FIRSTBIT_MSB;
  hspi.Init.TIMode = SPI_TIMODE_DISABLED;
  hspi.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLED;
  hspi.Init.NSSPMode = SPI_NSS_PULSE_ENABLED;

  HAL_SPI_Init(hspi);
  return hspi;
}

SPI_HandleTypeDef * SPI_InitSlave(unsigned long Base , 
                                  unsigned long DataSize, 
                                  unsigned char ClockPolarty,
                                  unsigned char ClockPhase
                    unsigned char ClockPhase
                                  )
{
  SPI_HandleTypeDef *hspi =  (SPI_HandleTypeDef *) malloc(sizeof(SPI_HandleTypeDef));

  hspi.Instance =  Base ;
  hspi.Init.Mode = SPI_MODE_SALVE;
  hspi.Init.Direction = SPI_DIRECTION_2LINES;
  hspi.Init.DataSize = DataSize;
  hspi.Init.CLKPolarity = ClockPolarty;
  hspi.Init.CLKPhase = ClockPhase;
  hspi.Init.NSS = SPI_NSS_SOFT;
  hspi.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_8;
  hspi.Init.FirstBit = SPI_FIRSTBIT_MSB;
  hspi.Init.TIMode = SPI_TIMODE_DISABLED;
  hspi.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLED;
  hspi.Init.NSSPMode = SPI_NSS_PULSE_ENABLED;

  HAL_SPI_Init(hspi);
  return hspi;
}
