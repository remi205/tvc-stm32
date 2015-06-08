///////////////////////////////////////////////////

#pragma once

#include "stm32f3xx_hal.h"
#include "L6470_def.h"


//The ABS_POS register contains the current motor absolute position in agreement with the 
///selected step mode; the stored value unit is equal to the selected step mode (full, half, 
//quarter, etc.). The value is in 2's complement format and it ranges from -221 to +221-1.
unsigned long get_Current_position(SPI_HandleTypeDef *hspi);
int set_Current_position(SPI_HandleTypeDef *hspi,unsigned long new_position);
unsigned long get_electrical_position(SPI_HandleTypeDef *hspi);
int set_electrical_position(SPI_HandleTypeDef *hspi,unsigned long new_position);
unsigned long get_Current_position(SPI_HandleTypeDef *hspi);
int set_Current_position(SPI_HandleTypeDef *hspi,unsigned long new_position);
unsigned long get_electrical_position(SPI_HandleTypeDef *hspi);
int set_electrical_position(SPI_HandleTypeDef *hspi,unsigned long new_position);
unsigned long get_mark_position(SPI_HandleTypeDef *hspi);
int set_mark_position(SPI_HandleTypeDef *hspi,unsigned long new_position);
unsigned long get_current_speed(SPI_HandleTypeDef *hspi);
unsigned long get_acceleration_position(SPI_HandleTypeDef *hspi);
int set_acceleration_position(SPI_HandleTypeDef *hspi,unsigned long new_acceleration);
unsigned long get_deceleration_position(SPI_HandleTypeDef *hspi);
int set_deceleration_position(SPI_HandleTypeDef *hspi,unsigned long new_deceleration);
  unsigned long get_maximum_speed_position(SPI_HandleTypeDef *hspi);
int set_maximum_speed_position(SPI_HandleTypeDef *hspi,unsigned long new_maximum_speed);
unsigned long get_minimum_speed_position(SPI_HandleTypeDef *hspi);
int set_minimum_speed_position(SPI_HandleTypeDef *hspi,unsigned long new_minimum_speed);
unsigned long get_full_speed_position(SPI_HandleTypeDef *hspi);
int set_full_speed_position(SPI_HandleTypeDef *hspi,unsigned long new_full_speed);
unsigned long get_holding_kval(SPI_HandleTypeDef *hspi);
int set_holding_kval(SPI_HandleTypeDef *hspi,unsigned long new_holding_kval);
unsigned long get_constant_speed_kval(SPI_HandleTypeDef *hspi);
int set_holding_kval(SPI_HandleTypeDef *hspi,unsigned long new_constant_speed_kval);
unsigned long get_acceleration_starting_kval(SPI_HandleTypeDef *hspi);
int set_acceleration_starting_kval(SPI_HandleTypeDef *hspi,unsigned long new_acceleration_starting_kval);
unsigned long get_deceleration_starting_kval(SPI_HandleTypeDef *hspi);
int set_deceleration_starting_kval(SPI_HandleTypeDef *hspi,unsigned long new_deceleration_starting_kval);
unsigned long get_intersect_speed(SPI_HandleTypeDef *hspi);
int set_intersect_speed(SPI_HandleTypeDef *hspi,unsigned long new_intersect_speed);
unsigned long get_start_slope(SPI_HandleTypeDef *hspi);
int set_start_slope(SPI_HandleTypeDef *hspi,unsigned long new_start_slope);
unsigned long get_acceleration_final_slope(SPI_HandleTypeDef *hspi);
int set_acceleration_final_slope(SPI_HandleTypeDef *hspi,unsigned long new_acceleration_final_slope);
 unsigned long get_deceleration_final_slope(SPI_HandleTypeDef *hspi);
int set_deceleration_final_slope(SPI_HandleTypeDef *hspi,unsigned long new_deceleration_final_slope);
unsigned long get_adc_output(SPI_HandleTypeDef *hspi);
unsigned long get_ocd_threshold(SPI_HandleTypeDef *hspi);
int set_ocd_threshold(SPI_HandleTypeDef *hspi,unsigned long new_ocd_threshold);
unsigned long get_stall_threshold(SPI_HandleTypeDef *hspi);
int set_stall_threshold(SPI_HandleTypeDef *hspi,unsigned long new_stall_threshold);
unsigned long get_step_mode(SPI_HandleTypeDef *hspi);
int set_step_mode(SPI_HandleTypeDef *hspi,unsigned long new_step_mode);
unsigned long get_alarms_enable(SPI_HandleTypeDef *hspi);
int set_alarms_enable(SPI_HandleTypeDef *hspi,unsigned long new_alarms_enable);
  unsigned long get_alarms_enable(SPI_HandleTypeDef *hspi);
int set_alarms_enable(SPI_HandleTypeDef *hspi,unsigned long new_alarms_enable);
unsigned long get_gate_driver_configuration (SPI_HandleTypeDef *hspi);
int set_gate_driver_configuration(SPI_HandleTypeDef *hspi,unsigned long new_gate_driver_configuration);
unsigned long get_gate_driver_configuration2 (SPI_HandleTypeDef *hspi);
int set_gate_driver_configuration(SPI_HandleTypeDef *hspi,unsigned long new_gate_driver_configuration);
unsigned long get_config(SPI_HandleTypeDef *hspi);
unsigned long get_status(SPI_HandleTypeDef *hspi);


void motor_st_init(SPI_HandleTypeDef *hspi);
void run(SPI_HandleTypeDef *hspi, long Speed);
void st_goto(SPI_HandleTypeDef *hspi, long Position);




