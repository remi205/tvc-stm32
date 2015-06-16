
#pragma once

extern struct UART_HandleTypeDef * Handle;

struct UART_HandleTypeDef * OpenConsole();

int ReadConsole2(  UART_HandleTypeDef * Handle, char * s, int len);
int WriteConsole2(UART_HandleTypeDef * Handle, char * s);

#define WriteConsole(s) WriteConsole2(Handle,s)
#define ReadConsole(s,len) ReadConsole2(Handle,s,len)
