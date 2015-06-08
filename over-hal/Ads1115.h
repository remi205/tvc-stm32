/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/Ads111x/Ads1115/Windows/Ads1115.h
// 
//
// Generated on the 20/07/2012 22:02 by the 'super-cool' code generator 
//
// Generator written in Common Lisp, created by  Remi PRUD'HOMME 
// with the help of : 
//
/////////////////////////////////////////////////////////////////////////
//  Copyright  2012
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//  Reference document : 
/////////////////////////////////////////////////////////////////////////

// This file is generated. Don't modify it 

#ifndef D__LISP_PRODUCTION_ADS111X_ADS1115_WINDOWS_ADS1115_H
#define D__LISP_PRODUCTION_ADS111X_ADS1115_WINDOWS_ADS1115_H

#include "Ads1115_types.h"

USHORT SetDataRegister( USHORT Param );
USHORT GetDataRegister();
USHORT SetHighThresholdRegister( USHORT Param );
USHORT GetHighThresholdRegister();
USHORT SetLowThresholdRegister( USHORT Param );
USHORT GetLowThresholdRegister();
USHORT SetConfigurationRegister( USHORT Param );
USHORT GetConfigurationRegister();
USHORT SetComparatorQueue( enum ComparatorQueue Param );
USHORT GetComparatorQueue();
USHORT SetLatchingComparator( enum LatchingComparator Param );
USHORT GetLatchingComparator();
USHORT SetComparatorPolarity( enum ComparatorPolarity Param );
USHORT GetComparatorPolarity();
USHORT SetComparatorMode( enum ComparatorMode Param );
USHORT GetComparatorMode();
USHORT SetDataRate( enum DataRate Param );
USHORT GetDataRate();
USHORT SetMode( enum Mode Param );
USHORT GetMode();
USHORT SetProgrammableGain( enum ProgrammableGain Param );
USHORT GetProgrammableGain();
USHORT SetInputMultiplexer( enum InputMultiplexer Param );
USHORT GetInputMultiplexer();
USHORT SetConversionStatus( enum ConversionStatus Param );
USHORT GetConversionStatus();
USHORT SetConversionStart( enum ConversionStart Param );
USHORT GetConversionStart();
USHORT SetPointerRegister( USHORT Param );
USHORT GetPointerRegister();


#ifdef __cplusplus
}
#endif

#endif
