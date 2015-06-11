#include "stm32f4xx_hal.h"

#pragma once
//////////////////////////////////////////////////////////

// MCU GPIO
#define PA3   3
#define PA8   8
#define PA11 11
#define PA15 15
#define PD7  55
#define PD8  56
#define PC10 42 
#define PC11 43 
#define PB0  16
#define PB1  17
#define PB3  19
#define PB4  20

#define PD12  60
#define PD13  61
#define PD14  62
#define PD15  63

// board GPIO

#define ENABLE_I2C_5V PA3
#define ENABLE_CAN PA8
#define RELAY0     PD7
#define RELAY1     PD8
#define RELAY2     PC10
#define RELAY3     PC11

#define GPIO_0     PB4

#define GPIO_1     PB0
#define GPIO_2     PB1
#define GPIO_3     PC10
#define GPIO_4     PC11

#define ENALBLE_GPIO_5V   PA15


#define LED_GREEN  PD12
#define LED_RED    PD14
#define LED_ORANGE PD13
#define LED_BLUE   PD15


//////////////////////////////////////////////////////////
typedef enum io_direction {
  OUTPUT,
  INPUT
} io_direction;


typedef enum io_event_mode {
  MODE_INPUT,
  MODE_RISING,
  MODE_FALLING,
  MODE_RISING_FALLING
} io_event_mode;


//////////////////////////////////////////////////////////


void         gpio_set       ( unsigned int gpio_number);
void         gpio_reset     ( unsigned int gpio_number);
unsigned int gpio_get       ( unsigned int gpio_number);
unsigned int gpio_pulse     ( unsigned int gpio_number);
void         gpio_direction ( unsigned int gpio_number, enum io_direction dir);


