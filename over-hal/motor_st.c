
#include <math.h>

#include "stm32f3xx_hal.h"
#include "spi_access.h"
#include "motor_st.h"


void send_parameter( SPI_HandleTypeDef *hspi, unsigned char *Cmd , long Value)
{
  Cmd[1]   = Value >> 16;
  Cmd[2]   = Value >> 8;
  Cmd[3]   = Value;
  spi_access_write( hspi, Cmd, 4);
}

unsigned long get_param( SPI_HandleTypeDef *hspi, unsigned char * Cmd, int len)
{
  Cmd[0] =  Cmd[0] | GET_PARAM;
  return spi_access_read_write( hspi, Cmd,  &Cmd[1], len-1);
}

int set_param( SPI_HandleTypeDef *hspi, unsigned char * Cmd, int len)
{
  Cmd[0] =  Cmd[0] | SET_PARAM;
  return spi_access_write( hspi, Cmd, len);
}

void set_param2( SPI_HandleTypeDef *hspi, unsigned char Regiter, int Value)
{
  unsigned char Cmd []= { SET_PARAM, 0, 0, 0};

  Cmd[0] =  Regiter | SET_PARAM;
  send_parameter( hspi, Cmd, Value);
}


//////////////////////////////////////////////////////////////////////
unsigned long AccCalc(float AcceleratorFactor)
{
  // The value in the ACC register is [(steps/s/s)*(tick^2)]/(2^-40) where tick is
  //  250ns (datasheet value)- 0x08A on boot.
  // Multiply desired steps/s/s by .137438 to get an appropriate value for this register.
  // This is a 12-bit value, so we need to make sure the value is at or below 0xFFF.
  float temp = AcceleratorFactor * 0.137438;
  if( ( long) temp > 0xFFF)
    return 0xFFF;
  else
    return (unsigned long) temp;
}

unsigned long DecelerationCalc(float AcceleratorFactor)
{
  // The calculation for DEC is the same as for ACC. Value is 0x08A on boot.
  // This is a 12-bit value, so we need to make sure the value is at or below 0xFFF.
  float temp = AcceleratorFactor * 0.137438;
  if( (long) temp > 0xFFF)
    return 0xFFF;
  else
    return (unsigned long) temp;
}

unsigned long MaxSpeedCalc(float SpeedWanted)
{
  // The value in the MAX_SPD register is [(steps/s)*(tick)]/(2^-18) where tick is
  //  250ns (datasheet value)- 0x041 on boot.
  // Multiply desired steps/s by .065536 to get an appropriate value for this register
  // This is a 10-bit value, so we need to make sure it remains at or below 0x3FF
  float temp = SpeedWanted * .065536;
  if( ( long) temp > 0x3FF)
    return 0x3FF;
  else
    return (unsigned long) temp;
}

unsigned long MinSpdCalc(float SpeedWanted)
{
  // The value in the MIN_SPD register is [(steps/s)*(tick)]/(2^-24) where tick is
  //  250ns (datasheet value)- 0x000 on boot.
  // Multiply desired steps/s by 4.1943 to get an appropriate value for this register
  // This is a 12-bit value, so we need to make sure the value is at or below 0xFFF.
  float temp = SpeedWanted * 4.1943;
  if( ( long) temp > 0xFFF)
    return 0xFFF;
  else
    return (unsigned long) temp;
}

unsigned long FullSCalc(float SpeedWanted)
{
  // The value in the FS_SPD register is ([(steps/s)*(tick)]/(2^-18))-0.5 where tick is
  //  250ns (datasheet value)- 0x027 on boot.
  // Multiply desired steps/s by .065536 and subtract .5 to get an appropriate value for this register
  // This is a 10-bit value, so we need to make sure the value is at or below 0x3FF.
  float temp = (SpeedWanted * .065536)-.5;
  if( ( long) temp > 0x3FF)
    return 0x3FF;
  else
    return (unsigned long) temp;
}

unsigned long IntSpdCalc(float SpeedWanted)
{
  // The value in the INT_SPD register is [(steps/s)*(tick)]/(2^-24) where tick is
  //  250ns (datasheet value)- 0x408 on boot.
  // Multiply desired steps/s by 4.1943 to get an appropriate value for this register
  // This is a 14-bit value, so we need to make sure the value is at or below 0x3FFF.
  float temp = SpeedWanted * 4.1943;
  if( (long) temp > 0x3FFF)
    return 0x3FFF;
  else
    return (unsigned long) temp;
}

unsigned long SpeedCalc(float SpeedWanted)
{
  // When issuing RUN command, the 20-bit speed is [(steps/s)*(tick)]/(2^-28) where tick is
  //  250ns (datasheet value).
  // Multiply desired steps/s by 67.106 to get an appropriate value for this register
  // This is a 20-bit value, so we need to make sure the value is at or below 0xFFFFF.

  float temp = SpeedWanted * 67.106;
  if( (long) temp > 0xFFFFF)
    return 0xFFFFF;
  else
    return (unsigned long)temp;
}

//////////////////////////////////////////////////////////////////////
unsigned long get_current_position(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 1, 0, 0, 0};

  if ( spi_access_read(hspi, Cmd, 4) )
    return Cmd[1] << 16 + Cmd[2] << 8 + Cmd[3];
  else
    return -1;
}

// quand le moteur est stoppé
int set_current_position(SPI_HandleTypeDef *hspi,unsigned long new_position)
{
  unsigned char Cmd []= { 1, 0, 0, 0};

  Cmd[1] = 0xFF & ((new_position & 0xFFFFFF) >>16);
  Cmd[2] = 0xFF & ((new_position & 0xFFFFFF) >> 8);
  Cmd[3] = 0xFF & ((new_position & 0xFFFFFF) >> 0);

  return spi_access_write( hspi, Cmd, 4);
}

//////////////////////////////////////////////////////////////////////
unsigned long get_electrical_position(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 2, 0, 0};

  if ( spi_access_read(hspi, Cmd, 3) )
    return  Cmd[2] << 8 + Cmd[1];
  else
    return -1;
}

// quand le moteur est stoppé
int set_electrical_position( SPI_HandleTypeDef *hspi, unsigned long new_position)
{
  unsigned char Cmd [3]= { 2, 0, 0};

  Cmd[1] = 0xFF & ((new_position & 0xFFFFFF) >> 8);
  Cmd[2] = 0xFF & ((new_position & 0xFFFFFF) >> 0);

  return spi_access_write(hspi, Cmd, 3);
}

//////////////////////////////////////////////////////////////////////
unsigned long get_mark_position(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 3, 0, 0, 0};

  if ( spi_access_read(hspi, Cmd, 4) )
    return Cmd[1] << 16 + Cmd[2] << 8 + Cmd[3];
  else
    return -1;
}

// quand le moteur est stoppé
int set_mark_position(SPI_HandleTypeDef *hspi, unsigned long new_position)
{
  unsigned char Cmd []= { 3, 0, 0, 0};

  Cmd[1] = 0xFF & ((new_position & 0xFFFFFF) >>16);
  Cmd[2] = 0xFF & ((new_position & 0xFFFFFF) >> 8);
  Cmd[3] = 0xFF & ((new_position & 0xFFFFFF) >> 0);

  return spi_access_write(hspi, Cmd, 4);
}

//////////////////////////////////////////////////////////////////////
unsigned long get_current_speed(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 4, 0, 0, 0};

  if ( spi_access_read(hspi, Cmd, 4) )
    return Cmd[1] << 16 + Cmd[2] << 8 + Cmd[3];
  else
    return -1;
}

//////////////////////////////////////////////////////////////////////
unsigned long get_acceleration_position(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 2, 0, 0};

  if ( spi_access_read(hspi, Cmd, 3) )
    return  Cmd[1] << 8 + Cmd[2];
  else
    return -1;
}

// quand le moteur est stoppé
int set_acceleration_position(SPI_HandleTypeDef *hspi, unsigned long new_acceleration)
{
  unsigned char Cmd []= { 2, 0, 0};

  Cmd[1] = 0xFF & ((new_acceleration & 0xFFFFFF) >> 8);
  Cmd[2] = 0xFF & ((new_acceleration & 0xFFFFFF) >> 0);

  return spi_access_write(hspi, Cmd, 3);
}

//////////////////////////////////////////////////////////////////////
unsigned long get_deceleration_position(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 6, 0, 0};

  if ( spi_access_read( hspi, Cmd, 3) )
    return  Cmd[1] << 8 + Cmd[2];
  else
    return -1;
}

// quand le moteur est stoppé
int set_deceleration_position(SPI_HandleTypeDef *hspi, unsigned long new_deceleration)
{
  unsigned char Cmd []= { 3, 0, 0};

  Cmd[1] = 0xFF & ((new_deceleration & 0xFFFFFF) >> 8);
  Cmd[2] = 0xFF & ((new_deceleration & 0xFFFFFF) >> 0);

  return spi_access_write(hspi, Cmd, 3);
}

//////////////////////////////////////////////////////////////////////

unsigned long get_maximum_speed_position(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 7, 0, 0};

  if ( spi_access_read(hspi, Cmd, 3) )
    return  Cmd[1] << 8 + Cmd[2];
  else
    return -1;
}

// quand le moteur est stoppé
int set_maximum_speed_position(SPI_HandleTypeDef *hspi, unsigned long new_maximum_speed)
{
  unsigned char Cmd []= { 7, 0, 0};

  Cmd[1] = 0xFF & ((new_maximum_speed & 0xFFFFFF) >> 8);
  Cmd[2] = 0xFF & ((new_maximum_speed & 0xFFFFFF) >> 0);

  return spi_access_write( hspi,Cmd, 3);
}

//////////////////////////////////////////////////////////////////////


unsigned long get_minimum_speed_position(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 8, 0, 0};

  if ( spi_access_read( hspi, Cmd, 3) )
    return  Cmd[1] << 8 + Cmd[2];
  else
    return -1;
}

// quand le moteur est stoppé
int set_minimum_speed_position(SPI_HandleTypeDef *hspi, unsigned long new_minimum_speed)
{
  unsigned char Cmd []= { 8, 0, 0};

  Cmd[1] = 0xFF & ((new_minimum_speed & 0xFFFFFF) >> 8);
  Cmd[2] = 0xFF & ((new_minimum_speed & 0xFFFFFF) >> 0);

  return spi_access_write( hspi, Cmd, 3);
}

//////////////////////////////////////////////////////////////////////
unsigned long get_full_speed_position(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 0x15, 0, 0};

  if ( spi_access_read( hspi, Cmd, 3) )
    return  Cmd[1] << 8 + Cmd[2];
  else
    return -1;
}

// quand le moteur est stoppé
int set_full_speed_position(SPI_HandleTypeDef *hspi, unsigned long new_full_speed)
{
  unsigned char Cmd []= { 0x15, 0, 0};

  Cmd[1] = 0xFF & ((new_full_speed & 0xFFFFFF) >> 8);
  Cmd[2] = 0xFF & ((new_full_speed & 0xFFFFFF) >> 0);

  return spi_access_write( hspi, Cmd, 3);
}

//////////////////////////////////////////////////////////////////////
unsigned long get_holding_kval(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 9, 0};

  if ( spi_access_read( hspi, Cmd, 2) )
    return Cmd[1];
  else
    return -1;
}

// quand le moteur est stoppé
int set_holding_kval(SPI_HandleTypeDef *hspi, unsigned long new_holding_kval)
{
  unsigned char Cmd []= { 9, 0};

  Cmd[1] = 0xFF & ((new_holding_kval & 0xFFFFFF) >> 0);

  return spi_access_write( hspi, Cmd, 2);
}

//////////////////////////////////////////////////////////////////////
unsigned long get_constant_speed_kval(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 0xa, 0};

  if ( spi_access_read( hspi, Cmd, 2) )
    return Cmd[1];
  else
    return -1;
}

// quand le moteur est stoppé
int set_constant_speed_kval(SPI_HandleTypeDef *hspi, unsigned long new_constant_speed_kval)
{
  unsigned char Cmd []= { 0xa, 0};

  Cmd[1] = 0xFF & ((new_constant_speed_kval & 0xFFFFFF) >> 0);

  return spi_access_write( hspi, Cmd, 2);
}

//////////////////////////////////////////////////////////////////////
unsigned long get_acceleration_starting_kval(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 0xb, 0};

  if ( spi_access_read(hspi, Cmd, 2) )
    return Cmd[1];
  else
    return -1;
}

// quand le moteur est stoppé
int set_acceleration_starting_kval(SPI_HandleTypeDef *hspi,unsigned long new_acceleration_starting_kval)
{
  unsigned char Cmd []= { 0xb, 0};

  Cmd[1] = 0xFF & ((new_acceleration_starting_kval & 0xFFFFFF) >> 0);

  return spi_access_write( hspi, Cmd, 2);
}

//////////////////////////////////////////////////////////////////////
unsigned long get_deceleration_starting_kval(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 0xc, 0};

  if ( spi_access_read( hspi, Cmd, 2) )
    return Cmd[1];
  else
    return -1;
}

// quand le moteur est stoppé
int set_deceleration_starting_kval(SPI_HandleTypeDef *hspi, unsigned long new_deceleration_starting_kval)
{
  unsigned char Cmd []= { 0xc, 0};

  Cmd[1] = 0xFF & ((new_deceleration_starting_kval & 0xFFFFFF) >> 0);

  return spi_access_write( hspi, Cmd, 2);
}

//////////////////////////////////////////////////////////////////////
unsigned long get_intersect_speed(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 0xd, 0, 0};

  if ( spi_access_read( hspi, Cmd, 3) )
    return  Cmd[1] << 8 + Cmd[2];
  else
    return -1;
}

// quand le moteur est stoppé
int set_intersect_speed(SPI_HandleTypeDef *hspi, unsigned long new_intersect_speed)
{
  unsigned char Cmd []= { 0xd, 0, 0};

  Cmd[1] = 0xFF & ((new_intersect_speed & 0xFFFFFF) >> 8);
  Cmd[2] = 0xFF & ((new_intersect_speed & 0xFFFFFF) >> 0);

  return spi_access_write( hspi, Cmd, 3);
}


//////////////////////////////////////////////////////////////////////
unsigned long get_start_slope(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 0xe, 0};

  if ( spi_access_read( hspi, Cmd, 2) )
    return Cmd[1];
  else
    return -1;
}

// quand le moteur est stoppé
int set_start_slope(SPI_HandleTypeDef *hspi, unsigned long new_start_slope)
{
  unsigned char Cmd []= { 0xe, 0};

  Cmd[1] = 0xFF & ((new_start_slope & 0xFFFFFF) >> 0);

  return spi_access_write( hspi, Cmd, 2);
}

//////////////////////////////////////////////////////////////////////
unsigned long get_acceleration_final_slope(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 0xf, 0};

  if ( spi_access_read( hspi, Cmd, 2) )
    return Cmd[1];
  else
    return -1;
}

// quand le moteur est stoppé
int set_acceleration_final_slope(SPI_HandleTypeDef *hspi, unsigned long new_acceleration_final_slope)
{
  unsigned char Cmd []= { 0xf, 0};

  Cmd[1] = 0xFF & ((new_acceleration_final_slope & 0xFFFFFF) >> 0);

  return spi_access_write( hspi, Cmd, 2);
}

//////////////////////////////////////////////////////////////////////
unsigned long get_deceleration_final_slope(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 0x10, 0};

  if ( spi_access_read( hspi, Cmd, 2) )
    return Cmd[1];
  else
    return -1;
}

// quand le moteur est stoppé
int set_deceleration_final_slope(SPI_HandleTypeDef *hspi, unsigned long new_deceleration_final_slope)
{
  unsigned char Cmd []= { 0x10, 0};

  Cmd[1] = 0xFF & ((new_deceleration_final_slope & 0xFFFFFF) >> 0);

  return spi_access_write( hspi, Cmd, 2);
}


//////////////////////////////////////////////////////////////////////
unsigned long get_adc_output(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 0x12, 0};

  if ( spi_access_read( hspi, Cmd, 2) )
    return Cmd[1];
  else
    return -1;
}


//////////////////////////////////////////////////////////////////////
unsigned long get_ocd_threshold(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 0x13, 0};

  if ( spi_access_read( hspi, Cmd, 2) )
    return Cmd[1];
  else
    return -1;
}

// quand le moteur est stoppé
int set_ocd_threshold(SPI_HandleTypeDef *hspi, unsigned long new_ocd_threshold)
{
  unsigned char Cmd []= { 0x13, 0};

  Cmd[1] = 0xFF & ((new_ocd_threshold & 0xFFFFFF) >> 0);

  return spi_access_write( hspi, Cmd, 2);
}

//////////////////////////////////////////////////////////////////////
unsigned long get_stall_threshold(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 0x14, 0};

  if ( spi_access_read( hspi, Cmd, 2) )
    return Cmd[1];
  else
    return -1;
}

// quand le moteur est stoppé
int set_stall_threshold(SPI_HandleTypeDef *hspi, unsigned long new_stall_threshold)
{
  unsigned char Cmd []= { 0x14, 0};

  Cmd[1] = 0xFF & ((new_stall_threshold & 0xFFFFFF) >> 0);

  return spi_access_write( hspi, Cmd, 2);
}

//////////////////////////////////////////////////////////////////////
unsigned long get_step_mode(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 0x16, 0};

  if ( spi_access_read( hspi, Cmd, 2) )
    return Cmd[1];
  else
    return -1;
}

// quand le moteur est stoppé
int set_step_mode(SPI_HandleTypeDef *hspi, unsigned long new_step_mode)
{
  unsigned char Cmd []= { 0x16, 0};
   
  Cmd[1] = 0xFF & ((new_step_mode & 0xFFFFFF) >> 0);

  return spi_access_write( hspi, Cmd, 2);
}

//////////////////////////////////////////////////////////////////////
unsigned long get_alarms_enable(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 0x17, 0};

  if ( spi_access_read( hspi, Cmd, 2) )
    return Cmd[1];
  else
    return -1;
}

// quand le moteur est stoppé
int set_alarms_enable(SPI_HandleTypeDef *hspi, unsigned long new_alarms_enable)
{
  unsigned char Cmd []= { 0x17, 0};
   
  Cmd[1] = 0xFF & ((new_alarms_enable & 0xFFFFFF) >> 0);

  return spi_access_write( hspi, Cmd, 2);
}

//////////////////////////////////////////////////////////////////////
unsigned long get_gate_driver_configuration (SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 0x18, 0, 0};

  if ( spi_access_read( hspi, Cmd, 3) )
    return Cmd[1];
  else
    return -1;
}

// quand le moteur est stoppé
int set_gate_driver_configuration(SPI_HandleTypeDef *hspi, unsigned long new_gate_driver_configuration)
{
  unsigned char Cmd []= { 0x18, 0, 0};
   
  Cmd[1] = 0xFF & ((new_gate_driver_configuration & 0xFFFFFF) >> 8);
  Cmd[2] = 0xFF & ((new_gate_driver_configuration & 0xFFFFFF) >> 0);

  return spi_access_write( hspi, Cmd, 3);
}

//////////////////////////////////////////////////////////////////////
unsigned long get_gate_driver_configuration2 (SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 0x19, 0};

  if ( spi_access_read( hspi, Cmd, 2) )
    return Cmd[1];
  else
    return -1;
}

// quand le moteur est stoppé
int set_gate_driver_configuration2(SPI_HandleTypeDef *hspi,unsigned long new_gate_driver_configuration)
{
  unsigned char Cmd []= { 0x19, 0,0};
   
  Cmd[1] = 0xFF & ((new_gate_driver_configuration & 0xFFFFFF) >> 8);
  Cmd[2] = 0xFF & ((new_gate_driver_configuration & 0xFFFFFF) >> 0);

  return spi_access_write( hspi, Cmd, 3);
}

//////////////////////////////////////////////////////////////////////
unsigned long get_config(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 0x1A, 0, 0};

  if ( spi_access_read( hspi, Cmd, 3) )
    return Cmd[1] << 8 + Cmd[2];
  else
    return -1;
}


//////////////////////////////////////////////////////////////////////
unsigned long get_status(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { 0x1B, 0, 0};

  if ( spi_access_read( hspi, Cmd, 3) )
    return Cmd[1] << 8 + Cmd[2];
  else
    return -1;
}


void run(SPI_HandleTypeDef *hspi, long Speed)
{
  // MOVE will send the motor n_step steps (size based on step mode) in the
  //  direction imposed by dir (FWD or REV constants may be used). The motor
  //  will accelerate according the acceleration and deceleration curves, and
  //  will run at MAX_SPEED. Stepping mode will adhere to FS_SPD value, as well.
  unsigned char dir;
  
  if(Speed >= 0)
    dir = FWD;
  else
    dir = REV;
  
  long n_Speed = SpeedCalc( abs(Speed));
  
  unsigned char Cmd []= { RUN, 0, 0, 0};

  Cmd[0] |= dir;
  send_parameter( hspi, Cmd, n_Speed);
}

void move(SPI_HandleTypeDef *hspi, long n_step)
{
  // MOVE will send the motor n_step steps (size based on step mode) in the
  //  direction imposed by dir (FWD or REV constants may be used). The motor
  //  will accelerate according the acceleration and deceleration curves, and
  //  will run at MAX_SPEED. Stepping mode will adhere to FS_SPD value, as well.
  
  unsigned char dir;
  
  if(n_step >= 0)
    dir = FWD;
  else
    dir = REV;
 
 long n_stepABS = abs(n_step);
  
  unsigned char Cmd []= { MOVE, 0, 0, 0};

  Cmd[0] |= dir;
  send_parameter( hspi, Cmd, n_stepABS);
}

void st_goto(SPI_HandleTypeDef *hspi, long Position)
{
  // MOVE will send the motor n_step steps (size based on step mode) in the
  //  direction imposed by dir (FWD or REV constants may be used). The motor
  //  will accelerate according the acceleration and deceleration curves, and
  //  will run at MAX_SPEED. Stepping mode will adhere to FS_SPD value, as well.
  unsigned char Cmd []= { GOTO, 0, 0, 0};
  send_parameter( hspi, Cmd, Position);
}


void goto_direction(SPI_HandleTypeDef *hspi, unsigned char Direction, long Position )
{
  // MOVE will send the motor n_step steps (size based on step mode) in the
  //  direction imposed by dir (FWD or REV constants may be used). The motor
  //  will accelerate according the acceleration and deceleration curves, and
  //  will run at MAX_SPEED. Stepping mode will adhere to FS_SPD value, as well.
  unsigned char Cmd []= { GOTO_DIR, 0, 0, 0};

  Cmd[0] |= Direction;
  send_parameter( hspi, Cmd, Position);
}


void go_until(SPI_HandleTypeDef *hspi, unsigned char act, unsigned char Direction, unsigned long Speed)
{
  // GoUntil will set the motor running with direction dir (REV or
  //  FWD) until a falling edge is detected on the SW pin. Depending
  //  on bit SW_MODE in CONFIG, either a hard stop or a soft stop is
  //  performed at the falling edge, and depending on the value of
  //  act (either RESET or COPY) the value in the ABS_POS register is
  //  either RESET to 0 or COPY-ed into the MARK register.
  unsigned char Cmd []= { GO_UNTIL, 0, 0, 0};

  Cmd[0] |= Direction | act;
  send_parameter( hspi, Cmd, Speed);
}

void release_sw(SPI_HandleTypeDef *hspi, unsigned char act, unsigned char Direction)
{
  // Similar in nature to GoUntil, ReleaseSW produces motion at the
  // higher of two speeds: the value in MIN_SPEED or 5 steps/s.
  // The motor continues to run at this speed until a rising edge
  // is detected on the switch input, then a hard stop is performed
  // and the ABS_POS register is either COPY-ed into MARK or RESET to
  // 0, depending on whether RESET or COPY was passed to the function
  // for act.
  unsigned char Cmd []= { RELEASE_SW, 0, 0, 0};

  Cmd[0] |= Direction | act;
  spi_access_write( hspi, Cmd, 1);
}

void go_home(SPI_HandleTypeDef *hspi)
{
  // GoHome is equivalent to GoTo(0), but requires less time to send.
  //  Note that no direction is provided;motion occurs through shortest
  //  path. If a direction is required, use GoTo_DIR().
  unsigned char Cmd []= { GO_HOME, 0, 0, 0};
  spi_access_write( hspi, Cmd, 1);
}

void go_mark(SPI_HandleTypeDef *hspi)
{
  // GoMark is equivalent to GoTo(MARK), but requires less time to send.
  //  Note that no direction is provided; motion occurs through shortest
  //  path. If a direction is required, use GoTo_DIR().
  unsigned char Cmd []= { GO_MARK, 0, 0, 0};
  
  spi_access_write( hspi, Cmd, 1);
}

void set_mark(SPI_HandleTypeDef *hspi, long value)
{
  unsigned char Cmd []= { MARK, 0, 0, 0};
  send_parameter( hspi, Cmd, value);
}

void set_as_home(SPI_HandleTypeDef *hspi)
{
  // GoMark is equivalent to GoTo(MARK), but requires less time to send.
  //  Note that no direction is provided; motion occurs through shortest
  //  path. If a direction is required, use GoTo_DIR().
  unsigned char Cmd []= { RESET_POS, 0, 0, 0};
  spi_access_write( hspi, Cmd, 1);
}

void reset_device(SPI_HandleTypeDef *hspi)
{
  // Reset device to power up conditions. Equivalent to toggling the STBY
  //  pin or cycling power.
  unsigned char Cmd []= { RESET_DEVICE, 0, 0, 0};
  spi_access_write( hspi, Cmd, 1);
}

void soft_stop(SPI_HandleTypeDef *hspi)
{
  // Bring the motor to a halt using the deceleration curve.
  unsigned char Cmd []= { SOFT_STOP, 0, 0, 0};
  spi_access_write( hspi, Cmd, 1);
}


void hard_stop(SPI_HandleTypeDef *hspi)
{
  unsigned char Cmd []= { HARD_STOP, 0, 0, 0};
  spi_access_write(  hspi, Cmd, 1);
}

void soft_free(SPI_HandleTypeDef *hspi)
{
  // Decelerate the motor and disengage
  unsigned char Cmd []= { SOFT_HIZ, 0, 0, 0};
  spi_access_write( hspi, Cmd, 1);
}

void hard_free(SPI_HandleTypeDef *hspi)
{
  // disengage the motor immediately with no deceleration.
  unsigned char Cmd []= { HARD_HIZ, 0, 0, 0};
  spi_access_write( hspi, Cmd, 1);
}

int st_get_status(SPI_HandleTypeDef *hspi)
{
  // Fetch and return the 16-bit value in the STATUS register. Resets
  //  any warning flags and exits any error states. Using GetParam()
  //  to read STATUS does not clear these values.
  unsigned char Cmd []= { GET_STATUS, 0, 0, 0};
  return spi_access_write_read( hspi, Cmd, &Cmd[1], 2);
}


void motor_st_init(SPI_HandleTypeDef *hspi)
{
  // Acceleration rate settings to dSPIN_CONF_PARAM_ACC in steps/s2, range 14.55 to 59590 steps/s2 
  set_acceleration_position( hspi, dSPIN_CONF_PARAM_ACC);
  
  // Deceleration rate settings to dSPIN_CONF_PARAM_DEC in steps/s2, range 14.55 to 59590 steps/s2 
  set_deceleration_position( hspi, dSPIN_CONF_PARAM_DEC);
    
  // Maximum speed settings to dSPIN_CONF_PARAM_MAX_SPEED in steps/s, range 15.25 to 15610 steps/s 
  set_maximum_speed_position( hspi, dSPIN_CONF_PARAM_MAX_SPEED);
    
  // Full step speed settings dSPIN_CONF_PARAM_FS_SPD in steps/s, range 7.63 to 15625 steps/s 
  set_full_speed_position(hspi, dSPIN_CONF_PARAM_FS_SPD);
  
  // Minimum speed settings to dSPIN_CONF_PARAM_MIN_SPEED in steps/s, range 0 to 976.3 steps/s
  long tmp =  dSPIN_CONF_PARAM_MIN_SPEED;
  //dSPIN_CONF_PARAM_LSPD_BIT | dSPIN_CONF_PARAM_MIN_SPEED;
  set_minimum_speed_position(hspi, tmp);

  // Acceleration duty cycle (torque) settings to dSPIN_CONF_PARAM_KVAL_ACC in %, range 0 to 99.6%
  set_acceleration_starting_kval(hspi, dSPIN_CONF_PARAM_KVAL_ACC);

  // Deceleration duty cycle (torque) settings to dSPIN_CONF_PARAM_KVAL_DEC in %, range 0 to 99.6% 
  set_deceleration_starting_kval(hspi, dSPIN_CONF_PARAM_KVAL_DEC);
  
  // Run duty cycle (torque) settings to dSPIN_CONF_PARAM_KVAL_RUN in %, range 0 to 99.6% 
  set_constant_speed_kval(hspi, dSPIN_CONF_PARAM_KVAL_RUN);
  
  // Hold duty cycle (torque) settings to dSPIN_CONF_PARAM_KVAL_HOLD in %, range 0 to 99.6% 
  set_holding_kval(hspi ,dSPIN_CONF_PARAM_KVAL_HOLD);
  
  // Thermal compensation param settings to dSPIN_CONF_PARAM_K_THERM, range 1 to 1.46875 
   set_kval_thermal(hspi, dSPIN_CONF_PARAM_K_THERM);
    
   // Intersect speed settings for BEMF compensation to dSPIN_CONF_PARAM_INT_SPD in steps/s, range 0 to 3906 steps/s
   // dSPIN_CONF_PARAM_INT_SPD
    
   // BEMF start slope settings for BEMF compensation to dSPIN_CONF_PARAM_ST_SLP in % step/s, range 0 to 0.4% s/step 
   // dSPIN_CONF_PARAM_ST_SLP;

  // BEMF final acc slope settings for BEMF compensation to dSPIN_CONF_PARAM_FN_SLP_ACC in% step/s, range 0 to 0.4% s/step 
  set_start_slope(hspi, dSPIN_CONF_PARAM_FN_SLP_ACC);

  // BEMF final dec slope settings for BEMF compensation to dSPIN_CONF_PARAM_FN_SLP_DEC in% step/s, range 0 to 0.4% s/step
  set_deceleration_final_slope(hspi, dSPIN_CONF_PARAM_FN_SLP_DEC);
  
  // Stall threshold settings to dSPIN_CONF_PARAM_STALL_TH in mA, range 31.25 to 4000mA
  set_stall_threshold(hspi, dSPIN_CONF_PARAM_STALL_TH);
}
