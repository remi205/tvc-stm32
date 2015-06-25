#pragma once

// with a macro in the line command -DFAMILLY$(FAMILLY)
#if defined(FAMILLYF4)
#include <stm32f4xx_hal.h>
#elif defined(FAMILLYF3)
#include <stm32f3xx_hal.h>
#elif defined(FAMILLYF7)
#include <stm32f7xx_hal.h>
#elif defined(FAMILLYL0)
#include <stm32l0xx_hal.h>
#elif defined(FAMILLYL4)
#include <stm32l4xx_hal.h>
#endif
