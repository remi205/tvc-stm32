#pragma once

int tri_init();
int tri_set_speed(SPI_HandleTypeDef *unit, float Speed, int Direction);
int tri_get_position(SPI_HandleTypeDef *unit);
int tri_set_position(SPI_HandleTypeDef *unit, unsigned int Position,  int Direction , int Interpolation); 
int tri_stop(SPI_HandleTypeDef *unit);
int tri_get_state(SPI_HandleTypeDef *unit);
int tri_power_off(SPI_HandleTypeDef *unit);
int tri_power_on(SPI_HandleTypeDef *unit);
int tri_set_motor_parameter(SPI_HandleTypeDef *unit,  float p1,  float p2, float p3,  float p4, float p5,  float p6);
int tri_resume_motor( int Port1, int Port2, int Port3);

