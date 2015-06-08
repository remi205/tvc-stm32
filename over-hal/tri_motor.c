#include "motor_st.h"

#include "tri-motor.h"
#include "gpio_access.h"

int tri_init()
{
  gpio_direction(NSS_1, OUTPUT);
  gpio_direction(NSS_2, OUTPUT);
  gpio_direction(NSS_3, OUTPUT); 
 
  // on monte les nss 
  gpio_set(NSS_1);
  gpio_set(NSS_2);
  gpio_set(NSS_3);
}

int tri_set_speed(SPI_HandleTypeDef *unit, float Speed, int Direction)
{
  int ret = 0;
  if ( Direction == 1)
    run(unit, Speed);
  else
    run(unit, -Speed);
  return ret;
}

int tri_get_position(SPI_HandleTypeDef *unit)
{
  return get_current_position(unit);
}

int tri_set_position(SPI_HandleTypeDef *unit, unsigned int Position,  int Direction ,int Interpolation)
{
  if ( Direction == 1)
    set_current_position(unit, Position);
  else 
    set_current_position(unit, -Position);
}

int tri_stop(SPI_HandleTypeDef *unit)
{
  // soft ou hard
  return soft_stop(unit);
}

int tri_get_state(SPI_HandleTypeDef *unit)
{
  return get_status(unit);
}

int tri_power_off(SPI_HandleTypeDef *unit)
{
  return soft_free(unit);
}

int tri_power_on(SPI_HandleTypeDef *unit)
{

}


int tri_set_motor_parameter(SPI_HandleTypeDef *unit,  float p1,  float p2, float p3,  float p4, float p5,  float p6)
{
}

int tri_resume_motor( int Port1, int Port2, int Port3)
{
  gpio_set(NSS_1);
  gpio_set(NSS_2);
  gpio_set(NSS_3);
  return 0;
}

void tri_motor_st_init(SPI_HandleTypeDef *unit)
{
  motor_st_init(unit);
}
