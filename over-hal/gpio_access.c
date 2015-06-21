#include "gpio_access.h"

GPIO_TypeDef *  GpioTable[] = {GPIOA, GPIOB, GPIOC , GPIOD, GPIOE, GPIOF};

static GPIO_TypeDef * gpio_getport( unsigned int gpio_number)
{
  return GpioTable[gpio_number / 16];
}

static unsigned short gpio_getbit( unsigned int gpio_number)
{
  return 1<<  gpio_number % 16;
}

void gpio_set(unsigned int gpio_number)
{
  HAL_GPIO_WritePin( gpio_getport(gpio_number), gpio_getbit(gpio_number), GPIO_PIN_SET);
}

void gpio_reset(unsigned int gpio_number)
{
  HAL_GPIO_WritePin( gpio_getport(gpio_number), gpio_getbit(gpio_number), GPIO_PIN_RESET);
}


unsigned int gpio_get ( unsigned int gpio_number)
{
  if ( HAL_GPIO_ReadPin(gpio_getport(gpio_number), gpio_getbit(gpio_number)) == GPIO_PIN_SET)
    return 1;
  else
    return 0;
}

unsigned int gpio_pulse( unsigned int gpio_number)
{
  HAL_GPIO_TogglePin(gpio_getport(gpio_number), gpio_getbit(gpio_number));
  return 0;
}

void gpio_direction( unsigned int gpio_number, enum io_direction dir)
{
  GPIO_InitTypeDef GPIO_InitStruct;
  GPIO_InitStruct.Pin = gpio_getbit(gpio_number);

  if ( dir == OUTPUT)
    {
      GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
      GPIO_InitStruct.Pull = GPIO_NOPULL;
      GPIO_InitStruct.Speed = GPIO_SPEED_FAST;
    }
  else
    {
      GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
    }

  HAL_GPIO_Init(gpio_getport(gpio_number) , &GPIO_InitStruct);
}

#if 0
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  // convert PIN to number 

  // get the std handler 

  // call it


}


void gpio_prepare_interrupt( unsigned int gpio_number, enum io_event_mode mode)
{
  GPIO_InitTypeDef GPIO_InitStruct;
  GPIO_InitStruct.Pin = gpio_getbit(gpio_number);

  if ( mode == MODE_RISING)
    GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING;
  else if ( mode == MODE_FALLING)
    GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  else if ( mode == MODE_RISING_FALLING)
    GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING_FALLING;
  else if ( mode == MODE_INTPUT)
    GPIO_InitStruct.Mode = GPIO_MODE_INPUT;

  HAL_GPIO_Init(gpio_getport(gpio_number) , &GPIO_InitStruct);
}
#endif

