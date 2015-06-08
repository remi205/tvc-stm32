#include "stm32f4xx_hal.h"
#include "Serial.h"


RTC_HandleTypeDef hrtc;

void HAL_RTCEx_WakeUpTimerEventCallback(RTC_HandleTypeDef *hrtc)
{

}

int init_rtc_timer( unsigned long Period)
{
 // HAL_RTCEx_SetWakeUpTimer_IT(&hrtc, Period, 3):
}
                   
