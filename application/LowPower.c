
#include "../over-hal/gpio_access.h"


unsigned long PreSleepProcessing( unsigned long xModifiableIdleTime)
{
  (void) xModifiableIdleTime;
  /* Disable the peripheral clock during Low Power (Sleep) mode.*/
  __GPIOG_CLK_SLEEP_DISABLE();
  __I2C1_CLK_DISABLE();
  __GPIOE_CLK_DISABLE();
  return 1;
}

unsigned long PostSleepProcessing( unsigned long ulExpectedIdleTime)
{
  __GPIOE_CLK_ENABLE();
 __I2C1_CLK_ENABLE();
  return 1;
}
