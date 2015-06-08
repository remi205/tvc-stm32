#if 0
#include "stm32f3xx_hal.h"

#pragma once

typedef int (* COMMAND_FUNC )(char * command);


int InitConsole( UART_HandleTypeDef * SerialPort, COMMAND_FUNC fn);
int WriteConsole(char * buffer);

#endif
