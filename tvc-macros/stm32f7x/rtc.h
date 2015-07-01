/////////////////////////////////////////////////////////////////////////
// File : d:/Lisp/Production/stm32-svd/macro-c/rtc.h
// 
//
// Generated on the 29/06/2015 19:00 by the 'super-cool' code generator 
//
// Generator written in Common Lisp, by rémi prud'homme
// with the help of : 
//
/////////////////////////////////////////////////////////////////////////
//  Copyrigtht remi prudhomme, tvc stm32 2015  2015
/////////////////////////////////////////////////////////////////////////


// This file is generated on.
// Don't modify it 
#pragma once 
 
#define RTC 0x40002800
/////////////////////////////////////////////////////////////////////////
//
// Function : Tr
//
// Return the value of register TR
//
// Notes : Register Tr at offset 0x0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TR( y) \
     WRITE_REGISTER_ULONG( 0x0 , y)

#define SET_BITS_TR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  mask ); \
   }

#define CLEAR_BITS_TR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val & ~mask ); \
   }

#define READ_REGISTER_TR() \
     READ_REGISTER_ULONG(0x0)

/////////////////////////////////////////////////////////////////////////
//
// Function : Tr
//
// Return the value of register TR
//
// Notes : Register time register (TR) at the offset 0x0, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Second units in BCD format 
    // 
#define SU_MASK 0xFU
#define SU_OFFSET 3
#define SU_START_BIT 0
#define SU_WIDTH 4


#define TR_REG 0x0

typedef enum su {
    SU_0,
    SU_1
} SU_T ;
#define READ_SU() \
   ((READ_REGISTER_ULONG(0x0) & SU_MASK)  >> SU_START_BIT)

#define WRITE_SU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ SU_MASK) | ((val << SU_START_BIT) & SU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tr
//
// Return the value of register TR
//
// Notes : Register time register (TR) at the offset 0x0, Bits 4:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Second tens in BCD format 
    // 
#define ST_MASK 0x70U
#define ST_OFFSET 6
#define ST_START_BIT 4
#define ST_WIDTH 3



typedef enum st {
    ST_0,
    ST_1
} ST_T ;
#define READ_ST() \
   ((READ_REGISTER_ULONG(0x0) & ST_MASK)  >> ST_START_BIT)

#define WRITE_ST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ ST_MASK) | ((val << ST_START_BIT) & ST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tr
//
// Return the value of register TR
//
// Notes : Register time register (TR) at the offset 0x0, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Minute units in BCD format 
    // 
#define MNU_MASK 0xF00U
#define MNU_OFFSET 11
#define MNU_START_BIT 8
#define MNU_WIDTH 4



typedef enum mnu {
    MNU_0,
    MNU_1
} MNU_T ;
#define READ_MNU() \
   ((READ_REGISTER_ULONG(0x0) & MNU_MASK)  >> MNU_START_BIT)

#define WRITE_MNU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MNU_MASK) | ((val << MNU_START_BIT) & MNU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tr
//
// Return the value of register TR
//
// Notes : Register time register (TR) at the offset 0x0, Bits 12:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Minute tens in BCD format 
    // 
#define MNT_MASK 0x7000U
#define MNT_OFFSET 14
#define MNT_START_BIT 12
#define MNT_WIDTH 3



typedef enum mnt {
    MNT_0,
    MNT_1
} MNT_T ;
#define READ_MNT() \
   ((READ_REGISTER_ULONG(0x0) & MNT_MASK)  >> MNT_START_BIT)

#define WRITE_MNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ MNT_MASK) | ((val << MNT_START_BIT) & MNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tr
//
// Return the value of register TR
//
// Notes : Register time register (TR) at the offset 0x0, Bits 16:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hour units in BCD format 
    // 
#define HU_MASK 0xF0000U
#define HU_OFFSET 19
#define HU_START_BIT 16
#define HU_WIDTH 4



#define READ_HU() \
   ((READ_REGISTER_ULONG(0x0) & HU_MASK)  >> HU_START_BIT)

#define WRITE_HU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ HU_MASK) | ((val << HU_START_BIT) & HU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tr
//
// Return the value of register TR
//
// Notes : Register time register (TR) at the offset 0x0, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hour tens in BCD format 
    // 
#define HT_MASK 0x300000U
#define HT_OFFSET 21
#define HT_START_BIT 20
#define HT_WIDTH 2



typedef enum ht {
    HT_0,
    HT_1
} HT_T ;
#define READ_HT() \
   ((READ_REGISTER_ULONG(0x0) & HT_MASK)  >> HT_START_BIT)

#define WRITE_HT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ HT_MASK) | ((val << HT_START_BIT) & HT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tr
//
// Return the value of register TR
//
// Notes : Register time register (TR) at the offset 0x0, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AM/PM notation 
    // 
#define PM_MASK 0x400000U
#define PM_OFFSET 22
#define PM_START_BIT 22
#define PM_WIDTH 1



#define WRITE_PM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x0); \
     WRITE_REGISTER_ULONG(0x0, (OldValue & ~ PM_MASK) | ((val << PM_START_BIT) & PM_MASK )); \
   } 

#define ENABLE_PM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG( 0x0 , val |  PM_MASK ); \
   }

#define DISABLE_PM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x0); \
     WRITE_REGISTER_ULONG(0x0, val & ~PM_MASK ); \
   } 

#define READ_PM() \
   ((READ_REGISTER_ULONG(0x0) & PM_MASK)  >> PM_START_BIT)

#define WHEN_PM_HIGH() \
     if ( READ_PM() )


#define UNLESS_PM_HIGH() \
     if (! READ_PM() )


#define WAIT_PM_LOW() \
    while ( READ_PM() );


#define WAIT_PM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PM() && (--___t___ > 0)); }


#define WAIT_PM_HIGH() \
    while (! READ_PM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dr
//
// Return the value of register DR
//
// Notes : Register Dr at offset 0x4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_DR( y) \
     WRITE_REGISTER_ULONG( 0x4 , y)

#define SET_BITS_DR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  mask ); \
   }

#define CLEAR_BITS_DR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val & ~mask ); \
   }

#define READ_REGISTER_DR() \
     READ_REGISTER_ULONG(0x4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Dr
//
// Return the value of register DR
//
// Notes : Register date register (DR) at the offset 0x4, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Date units in BCD format 
    // 
#define DU_MASK 0xFU
#define DU_OFFSET 3
#define DU_START_BIT 0
#define DU_WIDTH 4


#define DR_REG 0x4

typedef enum du {
    DU_0,
    DU_1
} DU_T ;
#define READ_DU() \
   ((READ_REGISTER_ULONG(0x4) & DU_MASK)  >> DU_START_BIT)

#define WRITE_DU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ DU_MASK) | ((val << DU_START_BIT) & DU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dr
//
// Return the value of register DR
//
// Notes : Register date register (DR) at the offset 0x4, Bits 4:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Date tens in BCD format 
    // 
#define DT_MASK 0x30U
#define DT_OFFSET 5
#define DT_START_BIT 4
#define DT_WIDTH 2



typedef enum dt {
    DT_0,
    DT_1
} DT_T ;
#define READ_DT() \
   ((READ_REGISTER_ULONG(0x4) & DT_MASK)  >> DT_START_BIT)

#define WRITE_DT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ DT_MASK) | ((val << DT_START_BIT) & DT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dr
//
// Return the value of register DR
//
// Notes : Register date register (DR) at the offset 0x4, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Month units in BCD format 
    // 
#define MU_MASK 0xF00U
#define MU_OFFSET 11
#define MU_START_BIT 8
#define MU_WIDTH 4



typedef enum mu {
    MU_0,
    MU_1
} MU_T ;
#define READ_MU() \
   ((READ_REGISTER_ULONG(0x4) & MU_MASK)  >> MU_START_BIT)

#define WRITE_MU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MU_MASK) | ((val << MU_START_BIT) & MU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dr
//
// Return the value of register DR
//
// Notes : Register date register (DR) at the offset 0x4, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Month tens in BCD format 
    // 
#define MT_MASK 0x1000U
#define MT_OFFSET 12
#define MT_START_BIT 12
#define MT_WIDTH 1



typedef enum mt {
    MT_0,
    MT_1
} MT_T ;
#define WRITE_MT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ MT_MASK) | ((val << MT_START_BIT) & MT_MASK )); \
   } 

#define ENABLE_MT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG( 0x4 , val |  MT_MASK ); \
   }

#define DISABLE_MT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4); \
     WRITE_REGISTER_ULONG(0x4, val & ~MT_MASK ); \
   } 

#define READ_MT() \
   ((READ_REGISTER_ULONG(0x4) & MT_MASK)  >> MT_START_BIT)

#define WHEN_MT_HIGH() \
     if ( READ_MT() )


#define UNLESS_MT_HIGH() \
     if (! READ_MT() )


#define WAIT_MT_LOW() \
    while ( READ_MT() );


#define WAIT_MT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MT() && (--___t___ > 0)); }


#define WAIT_MT_HIGH() \
    while (! READ_MT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Dr
//
// Return the value of register DR
//
// Notes : Register date register (DR) at the offset 0x4, Bits 13:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Week day units 
    // 
#define WDU_MASK 0xE000U
#define WDU_OFFSET 15
#define WDU_START_BIT 13
#define WDU_WIDTH 3



typedef enum wdu {
    WDU_0,
    WDU_1
} WDU_T ;
#define READ_WDU() \
   ((READ_REGISTER_ULONG(0x4) & WDU_MASK)  >> WDU_START_BIT)

#define WRITE_WDU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ WDU_MASK) | ((val << WDU_START_BIT) & WDU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dr
//
// Return the value of register DR
//
// Notes : Register date register (DR) at the offset 0x4, Bits 16:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Year units in BCD format 
    // 
#define YU_MASK 0xF0000U
#define YU_OFFSET 19
#define YU_START_BIT 16
#define YU_WIDTH 4



typedef enum yu {
    YU_0,
    YU_1
} YU_T ;
#define READ_YU() \
   ((READ_REGISTER_ULONG(0x4) & YU_MASK)  >> YU_START_BIT)

#define WRITE_YU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ YU_MASK) | ((val << YU_START_BIT) & YU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Dr
//
// Return the value of register DR
//
// Notes : Register date register (DR) at the offset 0x4, Bits 20:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Year tens in BCD format 
    // 
#define YT_MASK 0xF00000U
#define YT_OFFSET 23
#define YT_START_BIT 20
#define YT_WIDTH 4



typedef enum yt {
    YT_0,
    YT_1
} YT_T ;
#define READ_YT() \
   ((READ_REGISTER_ULONG(0x4) & YT_MASK)  >> YT_START_BIT)

#define WRITE_YT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4); \
     WRITE_REGISTER_ULONG(0x4, (OldValue & ~ YT_MASK) | ((val << YT_START_BIT) & YT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register Cr at offset 0x8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CR( y) \
     WRITE_REGISTER_ULONG( 0x8 , y)

#define SET_BITS_CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  mask ); \
   }

#define CLEAR_BITS_CR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val & ~mask ); \
   }

#define READ_REGISTER_CR() \
     READ_REGISTER_ULONG(0x8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register control register (CR) at the offset 0x8, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // timestamp on internal event enable 
    // 
#define ITSE_MASK 0x1000000U
#define ITSE_OFFSET 24
#define ITSE_START_BIT 24
#define ITSE_WIDTH 1


#define CR_REG 0x8

typedef enum itse {
    ITSE_0,
    ITSE_1
} ITSE_T ;
#define WRITE_ITSE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ ITSE_MASK) | ((val << ITSE_START_BIT) & ITSE_MASK )); \
   } 

#define ENABLE_ITSE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  ITSE_MASK ); \
   }

#define DISABLE_ITSE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~ITSE_MASK ); \
   } 

#define READ_ITSE() \
   ((READ_REGISTER_ULONG(0x8) & ITSE_MASK)  >> ITSE_START_BIT)

#define WHEN_ITSE_HIGH() \
     if ( READ_ITSE() )


#define UNLESS_ITSE_HIGH() \
     if (! READ_ITSE() )


#define WAIT_ITSE_LOW() \
    while ( READ_ITSE() );


#define WAIT_ITSE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ITSE() && (--___t___ > 0)); }


#define WAIT_ITSE_HIGH() \
    while (! READ_ITSE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register control register (CR) at the offset 0x8, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Calibration output enable 
    // 
#define COE_MASK 0x800000U
#define COE_OFFSET 23
#define COE_START_BIT 23
#define COE_WIDTH 1



typedef enum coe {
    COE_0,
    COE_1
} COE_T ;
#define WRITE_COE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ COE_MASK) | ((val << COE_START_BIT) & COE_MASK )); \
   } 

#define ENABLE_COE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  COE_MASK ); \
   }

#define DISABLE_COE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~COE_MASK ); \
   } 

#define READ_COE() \
   ((READ_REGISTER_ULONG(0x8) & COE_MASK)  >> COE_START_BIT)

#define WHEN_COE_HIGH() \
     if ( READ_COE() )


#define UNLESS_COE_HIGH() \
     if (! READ_COE() )


#define WAIT_COE_LOW() \
    while ( READ_COE() );


#define WAIT_COE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_COE() && (--___t___ > 0)); }


#define WAIT_COE_HIGH() \
    while (! READ_COE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register control register (CR) at the offset 0x8, Bits 21:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Output selection 
    // 
#define OSEL_MASK 0x600000U
#define OSEL_OFFSET 22
#define OSEL_START_BIT 21
#define OSEL_WIDTH 2



typedef enum osel {
    OSEL_0,
    OSEL_1
} OSEL_T ;
#define READ_OSEL() \
   ((READ_REGISTER_ULONG(0x8) & OSEL_MASK)  >> OSEL_START_BIT)

#define WRITE_OSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ OSEL_MASK) | ((val << OSEL_START_BIT) & OSEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register control register (CR) at the offset 0x8, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Output polarity 
    // 
#define POL_MASK 0x100000U
#define POL_OFFSET 20
#define POL_START_BIT 20
#define POL_WIDTH 1



#define WRITE_POL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ POL_MASK) | ((val << POL_START_BIT) & POL_MASK )); \
   } 

#define ENABLE_POL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  POL_MASK ); \
   }

#define DISABLE_POL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~POL_MASK ); \
   } 

#define READ_POL() \
   ((READ_REGISTER_ULONG(0x8) & POL_MASK)  >> POL_START_BIT)

#define WHEN_POL_HIGH() \
     if ( READ_POL() )


#define UNLESS_POL_HIGH() \
     if (! READ_POL() )


#define WAIT_POL_LOW() \
    while ( READ_POL() );


#define WAIT_POL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_POL() && (--___t___ > 0)); }


#define WAIT_POL_HIGH() \
    while (! READ_POL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register control register (CR) at the offset 0x8, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Calibration output selection 
    // 
#define COSEL_MASK 0x80000U
#define COSEL_OFFSET 19
#define COSEL_START_BIT 19
#define COSEL_WIDTH 1



typedef enum cosel {
    COSEL_0,
    COSEL_1
} COSEL_T ;
#define WRITE_COSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ COSEL_MASK) | ((val << COSEL_START_BIT) & COSEL_MASK )); \
   } 

#define ENABLE_COSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  COSEL_MASK ); \
   }

#define DISABLE_COSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~COSEL_MASK ); \
   } 

#define READ_COSEL() \
   ((READ_REGISTER_ULONG(0x8) & COSEL_MASK)  >> COSEL_START_BIT)

#define WHEN_COSEL_HIGH() \
     if ( READ_COSEL() )


#define UNLESS_COSEL_HIGH() \
     if (! READ_COSEL() )


#define WAIT_COSEL_LOW() \
    while ( READ_COSEL() );


#define WAIT_COSEL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_COSEL() && (--___t___ > 0)); }


#define WAIT_COSEL_HIGH() \
    while (! READ_COSEL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register control register (CR) at the offset 0x8, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Backup 
    // 
#define BKP_MASK 0x40000U
#define BKP_OFFSET 18
#define BKP_START_BIT 18
#define BKP_WIDTH 1



typedef enum bkp {
    BKP_0,
    BKP_1
} BKP_T ;
#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

#define ENABLE_BKP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  BKP_MASK ); \
   }

#define DISABLE_BKP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~BKP_MASK ); \
   } 

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0x8) & BKP_MASK)  >> BKP_START_BIT)

#define WHEN_BKP_HIGH() \
     if ( READ_BKP() )


#define UNLESS_BKP_HIGH() \
     if (! READ_BKP() )


#define WAIT_BKP_LOW() \
    while ( READ_BKP() );


#define WAIT_BKP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BKP() && (--___t___ > 0)); }


#define WAIT_BKP_HIGH() \
    while (! READ_BKP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register control register (CR) at the offset 0x8, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Subtract 1 hour (winter time change) 
    // 
#define SUB1H_MASK 0x20000U
#define SUB1H_OFFSET 17
#define SUB1H_START_BIT 17
#define SUB1H_WIDTH 1



typedef enum sub1h {
    SUB_1H_0,
    SUB_1H_1
} SUB_1H_T ;
#define WRITE_SUB1H(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ SUB1H_MASK) | ((val << SUB1H_START_BIT) & SUB1H_MASK )); \
   } 

#define ENABLE_SUB1H() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  SUB1H_MASK ); \
   }

#define DISABLE_SUB1H() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~SUB1H_MASK ); \
   } 

#define READ_SUB1H() \
   ((READ_REGISTER_ULONG(0x8) & SUB1H_MASK)  >> SUB1H_START_BIT)

#define WHEN_SUB1H_HIGH() \
     if ( READ_SUB1H() )


#define UNLESS_SUB1H_HIGH() \
     if (! READ_SUB1H() )


#define WAIT_SUB1H_LOW() \
    while ( READ_SUB1H() );


#define WAIT_SUB1H_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SUB1H() && (--___t___ > 0)); }


#define WAIT_SUB1H_HIGH() \
    while (! READ_SUB1H() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register control register (CR) at the offset 0x8, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Add 1 hour (summer time change) 
    // 
#define ADD1H_MASK 0x10000U
#define ADD1H_OFFSET 16
#define ADD1H_START_BIT 16
#define ADD1H_WIDTH 1



typedef enum add1h {
    ADD_1H_0,
    ADD_1H_1
} ADD_1H_T ;
#define WRITE_ADD1H(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ ADD1H_MASK) | ((val << ADD1H_START_BIT) & ADD1H_MASK )); \
   } 

#define ENABLE_ADD1H() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  ADD1H_MASK ); \
   }

#define DISABLE_ADD1H() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~ADD1H_MASK ); \
   } 

#define READ_ADD1H() \
   ((READ_REGISTER_ULONG(0x8) & ADD1H_MASK)  >> ADD1H_START_BIT)

#define WHEN_ADD1H_HIGH() \
     if ( READ_ADD1H() )


#define UNLESS_ADD1H_HIGH() \
     if (! READ_ADD1H() )


#define WAIT_ADD1H_LOW() \
    while ( READ_ADD1H() );


#define WAIT_ADD1H_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADD1H() && (--___t___ > 0)); }


#define WAIT_ADD1H_HIGH() \
    while (! READ_ADD1H() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register control register (CR) at the offset 0x8, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Time-stamp interrupt enable 
    // 
#define TSIE_MASK 0x8000U
#define TSIE_OFFSET 15
#define TSIE_START_BIT 15
#define TSIE_WIDTH 1



typedef enum tsie {
    TSIE_0,
    TSIE_1
} TSIE_T ;
#define WRITE_TSIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TSIE_MASK) | ((val << TSIE_START_BIT) & TSIE_MASK )); \
   } 

#define ENABLE_TSIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TSIE_MASK ); \
   }

#define DISABLE_TSIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TSIE_MASK ); \
   } 

#define READ_TSIE() \
   ((READ_REGISTER_ULONG(0x8) & TSIE_MASK)  >> TSIE_START_BIT)

#define WHEN_TSIE_HIGH() \
     if ( READ_TSIE() )


#define UNLESS_TSIE_HIGH() \
     if (! READ_TSIE() )


#define WAIT_TSIE_LOW() \
    while ( READ_TSIE() );


#define WAIT_TSIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSIE() && (--___t___ > 0)); }


#define WAIT_TSIE_HIGH() \
    while (! READ_TSIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register control register (CR) at the offset 0x8, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wakeup timer interrupt enable 
    // 
#define WUTIE_MASK 0x4000U
#define WUTIE_OFFSET 14
#define WUTIE_START_BIT 14
#define WUTIE_WIDTH 1



typedef enum wutie {
    WUTIE_0,
    WUTIE_1
} WUTIE_T ;
#define WRITE_WUTIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ WUTIE_MASK) | ((val << WUTIE_START_BIT) & WUTIE_MASK )); \
   } 

#define ENABLE_WUTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  WUTIE_MASK ); \
   }

#define DISABLE_WUTIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~WUTIE_MASK ); \
   } 

#define READ_WUTIE() \
   ((READ_REGISTER_ULONG(0x8) & WUTIE_MASK)  >> WUTIE_START_BIT)

#define WHEN_WUTIE_HIGH() \
     if ( READ_WUTIE() )


#define UNLESS_WUTIE_HIGH() \
     if (! READ_WUTIE() )


#define WAIT_WUTIE_LOW() \
    while ( READ_WUTIE() );


#define WAIT_WUTIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WUTIE() && (--___t___ > 0)); }


#define WAIT_WUTIE_HIGH() \
    while (! READ_WUTIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register control register (CR) at the offset 0x8, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alarm B interrupt enable 
    // 
#define ALRBIE_MASK 0x2000U
#define ALRBIE_OFFSET 13
#define ALRBIE_START_BIT 13
#define ALRBIE_WIDTH 1



typedef enum alrbie {
    ALRBIE_0,
    ALRBIE_1
} ALRBIE_T ;
#define WRITE_ALRBIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ ALRBIE_MASK) | ((val << ALRBIE_START_BIT) & ALRBIE_MASK )); \
   } 

#define ENABLE_ALRBIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  ALRBIE_MASK ); \
   }

#define DISABLE_ALRBIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~ALRBIE_MASK ); \
   } 

#define READ_ALRBIE() \
   ((READ_REGISTER_ULONG(0x8) & ALRBIE_MASK)  >> ALRBIE_START_BIT)

#define WHEN_ALRBIE_HIGH() \
     if ( READ_ALRBIE() )


#define UNLESS_ALRBIE_HIGH() \
     if (! READ_ALRBIE() )


#define WAIT_ALRBIE_LOW() \
    while ( READ_ALRBIE() );


#define WAIT_ALRBIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ALRBIE() && (--___t___ > 0)); }


#define WAIT_ALRBIE_HIGH() \
    while (! READ_ALRBIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register control register (CR) at the offset 0x8, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alarm A interrupt enable 
    // 
#define ALRAIE_MASK 0x1000U
#define ALRAIE_OFFSET 12
#define ALRAIE_START_BIT 12
#define ALRAIE_WIDTH 1



typedef enum alraie {
    ALRAIE_0,
    ALRAIE_1
} ALRAIE_T ;
#define WRITE_ALRAIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ ALRAIE_MASK) | ((val << ALRAIE_START_BIT) & ALRAIE_MASK )); \
   } 

#define ENABLE_ALRAIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  ALRAIE_MASK ); \
   }

#define DISABLE_ALRAIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~ALRAIE_MASK ); \
   } 

#define READ_ALRAIE() \
   ((READ_REGISTER_ULONG(0x8) & ALRAIE_MASK)  >> ALRAIE_START_BIT)

#define WHEN_ALRAIE_HIGH() \
     if ( READ_ALRAIE() )


#define UNLESS_ALRAIE_HIGH() \
     if (! READ_ALRAIE() )


#define WAIT_ALRAIE_LOW() \
    while ( READ_ALRAIE() );


#define WAIT_ALRAIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ALRAIE() && (--___t___ > 0)); }


#define WAIT_ALRAIE_HIGH() \
    while (! READ_ALRAIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register control register (CR) at the offset 0x8, Bits 11:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Time stamp enable 
    // 
#define TSE_MASK 0x800U
#define TSE_OFFSET 11
#define TSE_START_BIT 11
#define TSE_WIDTH 1



#define WRITE_TSE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TSE_MASK) | ((val << TSE_START_BIT) & TSE_MASK )); \
   } 

#define ENABLE_TSE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TSE_MASK ); \
   }

#define DISABLE_TSE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TSE_MASK ); \
   } 

#define READ_TSE() \
   ((READ_REGISTER_ULONG(0x8) & TSE_MASK)  >> TSE_START_BIT)

#define WHEN_TSE_HIGH() \
     if ( READ_TSE() )


#define UNLESS_TSE_HIGH() \
     if (! READ_TSE() )


#define WAIT_TSE_LOW() \
    while ( READ_TSE() );


#define WAIT_TSE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSE() && (--___t___ > 0)); }


#define WAIT_TSE_HIGH() \
    while (! READ_TSE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register control register (CR) at the offset 0x8, Bits 10:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wakeup timer enable 
    // 
#define WUTE_MASK 0x400U
#define WUTE_OFFSET 10
#define WUTE_START_BIT 10
#define WUTE_WIDTH 1



typedef enum wute {
    WUTE_0,
    WUTE_1
} WUTE_T ;
#define WRITE_WUTE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ WUTE_MASK) | ((val << WUTE_START_BIT) & WUTE_MASK )); \
   } 

#define ENABLE_WUTE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  WUTE_MASK ); \
   }

#define DISABLE_WUTE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~WUTE_MASK ); \
   } 

#define READ_WUTE() \
   ((READ_REGISTER_ULONG(0x8) & WUTE_MASK)  >> WUTE_START_BIT)

#define WHEN_WUTE_HIGH() \
     if ( READ_WUTE() )


#define UNLESS_WUTE_HIGH() \
     if (! READ_WUTE() )


#define WAIT_WUTE_LOW() \
    while ( READ_WUTE() );


#define WAIT_WUTE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WUTE() && (--___t___ > 0)); }


#define WAIT_WUTE_HIGH() \
    while (! READ_WUTE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register control register (CR) at the offset 0x8, Bits 9:9

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alarm B enable 
    // 
#define ALRBE_MASK 0x200U
#define ALRBE_OFFSET 9
#define ALRBE_START_BIT 9
#define ALRBE_WIDTH 1



typedef enum alrbe {
    ALRBE_0,
    ALRBE_1
} ALRBE_T ;
#define WRITE_ALRBE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ ALRBE_MASK) | ((val << ALRBE_START_BIT) & ALRBE_MASK )); \
   } 

#define ENABLE_ALRBE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  ALRBE_MASK ); \
   }

#define DISABLE_ALRBE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~ALRBE_MASK ); \
   } 

#define READ_ALRBE() \
   ((READ_REGISTER_ULONG(0x8) & ALRBE_MASK)  >> ALRBE_START_BIT)

#define WHEN_ALRBE_HIGH() \
     if ( READ_ALRBE() )


#define UNLESS_ALRBE_HIGH() \
     if (! READ_ALRBE() )


#define WAIT_ALRBE_LOW() \
    while ( READ_ALRBE() );


#define WAIT_ALRBE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ALRBE() && (--___t___ > 0)); }


#define WAIT_ALRBE_HIGH() \
    while (! READ_ALRBE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register control register (CR) at the offset 0x8, Bits 8:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alarm A enable 
    // 
#define ALRAE_MASK 0x100U
#define ALRAE_OFFSET 8
#define ALRAE_START_BIT 8
#define ALRAE_WIDTH 1



typedef enum alrae {
    ALRAE_0,
    ALRAE_1
} ALRAE_T ;
#define WRITE_ALRAE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ ALRAE_MASK) | ((val << ALRAE_START_BIT) & ALRAE_MASK )); \
   } 

#define ENABLE_ALRAE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  ALRAE_MASK ); \
   }

#define DISABLE_ALRAE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~ALRAE_MASK ); \
   } 

#define READ_ALRAE() \
   ((READ_REGISTER_ULONG(0x8) & ALRAE_MASK)  >> ALRAE_START_BIT)

#define WHEN_ALRAE_HIGH() \
     if ( READ_ALRAE() )


#define UNLESS_ALRAE_HIGH() \
     if (! READ_ALRAE() )


#define WAIT_ALRAE_LOW() \
    while ( READ_ALRAE() );


#define WAIT_ALRAE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ALRAE() && (--___t___ > 0)); }


#define WAIT_ALRAE_HIGH() \
    while (! READ_ALRAE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register control register (CR) at the offset 0x8, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hour format 
    // 
#define FMT_MASK 0x40U
#define FMT_OFFSET 6
#define FMT_START_BIT 6
#define FMT_WIDTH 1



typedef enum fmt {
    FMT_0,
    FMT_1
} FMT_T ;
#define WRITE_FMT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ FMT_MASK) | ((val << FMT_START_BIT) & FMT_MASK )); \
   } 

#define ENABLE_FMT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  FMT_MASK ); \
   }

#define DISABLE_FMT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~FMT_MASK ); \
   } 

#define READ_FMT() \
   ((READ_REGISTER_ULONG(0x8) & FMT_MASK)  >> FMT_START_BIT)

#define WHEN_FMT_HIGH() \
     if ( READ_FMT() )


#define UNLESS_FMT_HIGH() \
     if (! READ_FMT() )


#define WAIT_FMT_LOW() \
    while ( READ_FMT() );


#define WAIT_FMT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_FMT() && (--___t___ > 0)); }


#define WAIT_FMT_HIGH() \
    while (! READ_FMT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register control register (CR) at the offset 0x8, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Bypass the shadow registers 
    // 
#define BYPSHAD_MASK 0x20U
#define BYPSHAD_OFFSET 5
#define BYPSHAD_START_BIT 5
#define BYPSHAD_WIDTH 1



typedef enum bypshad {
    BYPSHAD_0,
    BYPSHAD_1
} BYPSHAD_T ;
#define WRITE_BYPSHAD(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ BYPSHAD_MASK) | ((val << BYPSHAD_START_BIT) & BYPSHAD_MASK )); \
   } 

#define ENABLE_BYPSHAD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  BYPSHAD_MASK ); \
   }

#define DISABLE_BYPSHAD() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~BYPSHAD_MASK ); \
   } 

#define READ_BYPSHAD() \
   ((READ_REGISTER_ULONG(0x8) & BYPSHAD_MASK)  >> BYPSHAD_START_BIT)

#define WHEN_BYPSHAD_HIGH() \
     if ( READ_BYPSHAD() )


#define UNLESS_BYPSHAD_HIGH() \
     if (! READ_BYPSHAD() )


#define WAIT_BYPSHAD_LOW() \
    while ( READ_BYPSHAD() );


#define WAIT_BYPSHAD_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_BYPSHAD() && (--___t___ > 0)); }


#define WAIT_BYPSHAD_HIGH() \
    while (! READ_BYPSHAD() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register control register (CR) at the offset 0x8, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Reference clock detection enable (50 or 60 Hz) 
    // 
#define REFCKON_MASK 0x10U
#define REFCKON_OFFSET 4
#define REFCKON_START_BIT 4
#define REFCKON_WIDTH 1



typedef enum refckon {
    REFCKON_0,
    REFCKON_1
} REFCKON_T ;
#define WRITE_REFCKON(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ REFCKON_MASK) | ((val << REFCKON_START_BIT) & REFCKON_MASK )); \
   } 

#define ENABLE_REFCKON() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  REFCKON_MASK ); \
   }

#define DISABLE_REFCKON() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~REFCKON_MASK ); \
   } 

#define READ_REFCKON() \
   ((READ_REGISTER_ULONG(0x8) & REFCKON_MASK)  >> REFCKON_START_BIT)

#define WHEN_REFCKON_HIGH() \
     if ( READ_REFCKON() )


#define UNLESS_REFCKON_HIGH() \
     if (! READ_REFCKON() )


#define WAIT_REFCKON_LOW() \
    while ( READ_REFCKON() );


#define WAIT_REFCKON_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_REFCKON() && (--___t___ > 0)); }


#define WAIT_REFCKON_HIGH() \
    while (! READ_REFCKON() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register control register (CR) at the offset 0x8, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Time-stamp event active edge 
    // 
#define TSEDGE_MASK 0x8U
#define TSEDGE_OFFSET 3
#define TSEDGE_START_BIT 3
#define TSEDGE_WIDTH 1



typedef enum tsedge {
    TSEDGE_0,
    TSEDGE_1
} TSEDGE_T ;
#define WRITE_TSEDGE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ TSEDGE_MASK) | ((val << TSEDGE_START_BIT) & TSEDGE_MASK )); \
   } 

#define ENABLE_TSEDGE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG( 0x8 , val |  TSEDGE_MASK ); \
   }

#define DISABLE_TSEDGE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8); \
     WRITE_REGISTER_ULONG(0x8, val & ~TSEDGE_MASK ); \
   } 

#define READ_TSEDGE() \
   ((READ_REGISTER_ULONG(0x8) & TSEDGE_MASK)  >> TSEDGE_START_BIT)

#define WHEN_TSEDGE_HIGH() \
     if ( READ_TSEDGE() )


#define UNLESS_TSEDGE_HIGH() \
     if (! READ_TSEDGE() )


#define WAIT_TSEDGE_LOW() \
    while ( READ_TSEDGE() );


#define WAIT_TSEDGE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSEDGE() && (--___t___ > 0)); }


#define WAIT_TSEDGE_HIGH() \
    while (! READ_TSEDGE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Cr
//
// Return the value of register CR
//
// Notes : Register control register (CR) at the offset 0x8, Bits 0:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wakeup clock selection 
    // 
#define WCKSEL_MASK 0x7U
#define WCKSEL_OFFSET 2
#define WCKSEL_START_BIT 0
#define WCKSEL_WIDTH 3



typedef enum wcksel {
    WCKSEL_0,
    WCKSEL_1
} WCKSEL_T ;
#define READ_WCKSEL() \
   ((READ_REGISTER_ULONG(0x8) & WCKSEL_MASK)  >> WCKSEL_START_BIT)

#define WRITE_WCKSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8); \
     WRITE_REGISTER_ULONG(0x8, (OldValue & ~ WCKSEL_MASK) | ((val << WCKSEL_START_BIT) & WCKSEL_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Isr
//
// Return the value of register ISR
//
// Notes : Register Isr at offset 0xC
//
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
//
// Function : RECALPF
//
// Return the value of register Isr
//
// Notes : Recalibration pending Flag 
//        (ISR) at the offset 0xC, Bits 16:16
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RECALPF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ RECALPF_MASK) | ((val << RECALPF_START_BIT) & RECALPF_MASK )); \
   } 

#define ENABLE_RECALPF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  RECALPF_MASK ); \
   }

#define DISABLE_RECALPF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~RECALPF_MASK ); \
   } 

#define READ_RECALPF() \
   ((READ_REGISTER_ULONG(0xC) & RECALPF_MASK)  >> RECALPF_START_BIT)

#define WHEN_RECALPF_HIGH() \
     if ( READ_RECALPF() )


#define UNLESS_RECALPF_HIGH() \
     if (! READ_RECALPF() )


#define WAIT_RECALPF_LOW() \
    while ( READ_RECALPF() );


#define WAIT_RECALPF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RECALPF() && (--___t___ > 0)); }


#define WAIT_RECALPF_HIGH() \
    while (! READ_RECALPF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TAMP3F
//
// Return the value of register Isr
//
// Notes : RTC_TAMP3 detection flag 
//        (ISR) at the offset 0xC, Bits 15:15
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TAMP3F(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TAMP3F_MASK) | ((val << TAMP3F_START_BIT) & TAMP3F_MASK )); \
   } 

#define ENABLE_TAMP3F() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TAMP3F_MASK ); \
   }

#define DISABLE_TAMP3F() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TAMP3F_MASK ); \
   } 

#define READ_TAMP3F() \
   ((READ_REGISTER_ULONG(0xC) & TAMP3F_MASK)  >> TAMP3F_START_BIT)

#define WHEN_TAMP3F_HIGH() \
     if ( READ_TAMP3F() )


#define UNLESS_TAMP3F_HIGH() \
     if (! READ_TAMP3F() )


#define WAIT_TAMP3F_LOW() \
    while ( READ_TAMP3F() );


#define WAIT_TAMP3F_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAMP3F() && (--___t___ > 0)); }


#define WAIT_TAMP3F_HIGH() \
    while (! READ_TAMP3F() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TAMP2F
//
// Return the value of register Isr
//
// Notes : RTC_TAMP2 detection flag 
//        (ISR) at the offset 0xC, Bits 14:14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TAMP2F(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TAMP2F_MASK) | ((val << TAMP2F_START_BIT) & TAMP2F_MASK )); \
   } 

#define ENABLE_TAMP2F() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TAMP2F_MASK ); \
   }

#define DISABLE_TAMP2F() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TAMP2F_MASK ); \
   } 

#define READ_TAMP2F() \
   ((READ_REGISTER_ULONG(0xC) & TAMP2F_MASK)  >> TAMP2F_START_BIT)

#define WHEN_TAMP2F_HIGH() \
     if ( READ_TAMP2F() )


#define UNLESS_TAMP2F_HIGH() \
     if (! READ_TAMP2F() )


#define WAIT_TAMP2F_LOW() \
    while ( READ_TAMP2F() );


#define WAIT_TAMP2F_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAMP2F() && (--___t___ > 0)); }


#define WAIT_TAMP2F_HIGH() \
    while (! READ_TAMP2F() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TAMP1F
//
// Return the value of register Isr
//
// Notes : Tamper detection flag 
//        (ISR) at the offset 0xC, Bits 13:13
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TAMP1F(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TAMP1F_MASK) | ((val << TAMP1F_START_BIT) & TAMP1F_MASK )); \
   } 

#define ENABLE_TAMP1F() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TAMP1F_MASK ); \
   }

#define DISABLE_TAMP1F() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TAMP1F_MASK ); \
   } 

#define READ_TAMP1F() \
   ((READ_REGISTER_ULONG(0xC) & TAMP1F_MASK)  >> TAMP1F_START_BIT)

#define WHEN_TAMP1F_HIGH() \
     if ( READ_TAMP1F() )


#define UNLESS_TAMP1F_HIGH() \
     if (! READ_TAMP1F() )


#define WAIT_TAMP1F_LOW() \
    while ( READ_TAMP1F() );


#define WAIT_TAMP1F_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAMP1F() && (--___t___ > 0)); }


#define WAIT_TAMP1F_HIGH() \
    while (! READ_TAMP1F() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TSOVF
//
// Return the value of register Isr
//
// Notes : Time-stamp overflow flag 
//        (ISR) at the offset 0xC, Bits 12:12
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TSOVF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TSOVF_MASK) | ((val << TSOVF_START_BIT) & TSOVF_MASK )); \
   } 

#define ENABLE_TSOVF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TSOVF_MASK ); \
   }

#define DISABLE_TSOVF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TSOVF_MASK ); \
   } 

#define READ_TSOVF() \
   ((READ_REGISTER_ULONG(0xC) & TSOVF_MASK)  >> TSOVF_START_BIT)

#define WHEN_TSOVF_HIGH() \
     if ( READ_TSOVF() )


#define UNLESS_TSOVF_HIGH() \
     if (! READ_TSOVF() )


#define WAIT_TSOVF_LOW() \
    while ( READ_TSOVF() );


#define WAIT_TSOVF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSOVF() && (--___t___ > 0)); }


#define WAIT_TSOVF_HIGH() \
    while (! READ_TSOVF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : TSF
//
// Return the value of register Isr
//
// Notes : Time-stamp flag 
//        (ISR) at the offset 0xC, Bits 11:11
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_TSF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ TSF_MASK) | ((val << TSF_START_BIT) & TSF_MASK )); \
   } 

#define ENABLE_TSF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  TSF_MASK ); \
   }

#define DISABLE_TSF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~TSF_MASK ); \
   } 

#define READ_TSF() \
   ((READ_REGISTER_ULONG(0xC) & TSF_MASK)  >> TSF_START_BIT)

#define WHEN_TSF_HIGH() \
     if ( READ_TSF() )


#define UNLESS_TSF_HIGH() \
     if (! READ_TSF() )


#define WAIT_TSF_LOW() \
    while ( READ_TSF() );


#define WAIT_TSF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TSF() && (--___t___ > 0)); }


#define WAIT_TSF_HIGH() \
    while (! READ_TSF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : WUTF
//
// Return the value of register Isr
//
// Notes : Wakeup timer flag 
//        (ISR) at the offset 0xC, Bits 10:10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WUTF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ WUTF_MASK) | ((val << WUTF_START_BIT) & WUTF_MASK )); \
   } 

#define ENABLE_WUTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  WUTF_MASK ); \
   }

#define DISABLE_WUTF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~WUTF_MASK ); \
   } 

#define READ_WUTF() \
   ((READ_REGISTER_ULONG(0xC) & WUTF_MASK)  >> WUTF_START_BIT)

#define WHEN_WUTF_HIGH() \
     if ( READ_WUTF() )


#define UNLESS_WUTF_HIGH() \
     if (! READ_WUTF() )


#define WAIT_WUTF_LOW() \
    while ( READ_WUTF() );


#define WAIT_WUTF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WUTF() && (--___t___ > 0)); }


#define WAIT_WUTF_HIGH() \
    while (! READ_WUTF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ALRBF
//
// Return the value of register Isr
//
// Notes : Alarm B flag 
//        (ISR) at the offset 0xC, Bits 9:9
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ALRBF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ ALRBF_MASK) | ((val << ALRBF_START_BIT) & ALRBF_MASK )); \
   } 

#define ENABLE_ALRBF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  ALRBF_MASK ); \
   }

#define DISABLE_ALRBF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~ALRBF_MASK ); \
   } 

#define READ_ALRBF() \
   ((READ_REGISTER_ULONG(0xC) & ALRBF_MASK)  >> ALRBF_START_BIT)

#define WHEN_ALRBF_HIGH() \
     if ( READ_ALRBF() )


#define UNLESS_ALRBF_HIGH() \
     if (! READ_ALRBF() )


#define WAIT_ALRBF_LOW() \
    while ( READ_ALRBF() );


#define WAIT_ALRBF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ALRBF() && (--___t___ > 0)); }


#define WAIT_ALRBF_HIGH() \
    while (! READ_ALRBF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ALRAF
//
// Return the value of register Isr
//
// Notes : Alarm A flag 
//        (ISR) at the offset 0xC, Bits 8:8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ALRAF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ ALRAF_MASK) | ((val << ALRAF_START_BIT) & ALRAF_MASK )); \
   } 

#define ENABLE_ALRAF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  ALRAF_MASK ); \
   }

#define DISABLE_ALRAF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~ALRAF_MASK ); \
   } 

#define READ_ALRAF() \
   ((READ_REGISTER_ULONG(0xC) & ALRAF_MASK)  >> ALRAF_START_BIT)

#define WHEN_ALRAF_HIGH() \
     if ( READ_ALRAF() )


#define UNLESS_ALRAF_HIGH() \
     if (! READ_ALRAF() )


#define WAIT_ALRAF_LOW() \
    while ( READ_ALRAF() );


#define WAIT_ALRAF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ALRAF() && (--___t___ > 0)); }


#define WAIT_ALRAF_HIGH() \
    while (! READ_ALRAF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : INIT
//
// Return the value of register Isr
//
// Notes : Initialization mode 
//        (ISR) at the offset 0xC, Bits 7:7
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_INIT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ INIT_MASK) | ((val << INIT_START_BIT) & INIT_MASK )); \
   } 

#define ENABLE_INIT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  INIT_MASK ); \
   }

#define DISABLE_INIT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~INIT_MASK ); \
   } 

#define READ_INIT() \
   ((READ_REGISTER_ULONG(0xC) & INIT_MASK)  >> INIT_START_BIT)

#define WHEN_INIT_HIGH() \
     if ( READ_INIT() )


#define UNLESS_INIT_HIGH() \
     if (! READ_INIT() )


#define WAIT_INIT_LOW() \
    while ( READ_INIT() );


#define WAIT_INIT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_INIT() && (--___t___ > 0)); }


#define WAIT_INIT_HIGH() \
    while (! READ_INIT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : INITF
//
// Return the value of register Isr
//
// Notes : Initialization flag 
//        (ISR) at the offset 0xC, Bits 6:6
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_INITF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ INITF_MASK) | ((val << INITF_START_BIT) & INITF_MASK )); \
   } 

#define ENABLE_INITF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  INITF_MASK ); \
   }

#define DISABLE_INITF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~INITF_MASK ); \
   } 

#define READ_INITF() \
   ((READ_REGISTER_ULONG(0xC) & INITF_MASK)  >> INITF_START_BIT)

#define WHEN_INITF_HIGH() \
     if ( READ_INITF() )


#define UNLESS_INITF_HIGH() \
     if (! READ_INITF() )


#define WAIT_INITF_LOW() \
    while ( READ_INITF() );


#define WAIT_INITF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_INITF() && (--___t___ > 0)); }


#define WAIT_INITF_HIGH() \
    while (! READ_INITF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : RSF
//
// Return the value of register Isr
//
// Notes : Registers synchronization flag 
//        (ISR) at the offset 0xC, Bits 5:5
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_RSF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ RSF_MASK) | ((val << RSF_START_BIT) & RSF_MASK )); \
   } 

#define ENABLE_RSF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  RSF_MASK ); \
   }

#define DISABLE_RSF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~RSF_MASK ); \
   } 

#define READ_RSF() \
   ((READ_REGISTER_ULONG(0xC) & RSF_MASK)  >> RSF_START_BIT)

#define WHEN_RSF_HIGH() \
     if ( READ_RSF() )


#define UNLESS_RSF_HIGH() \
     if (! READ_RSF() )


#define WAIT_RSF_LOW() \
    while ( READ_RSF() );


#define WAIT_RSF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RSF() && (--___t___ > 0)); }


#define WAIT_RSF_HIGH() \
    while (! READ_RSF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : INITS
//
// Return the value of register Isr
//
// Notes : Initialization status flag 
//        (ISR) at the offset 0xC, Bits 4:4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_INITS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ INITS_MASK) | ((val << INITS_START_BIT) & INITS_MASK )); \
   } 

#define ENABLE_INITS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  INITS_MASK ); \
   }

#define DISABLE_INITS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~INITS_MASK ); \
   } 

#define READ_INITS() \
   ((READ_REGISTER_ULONG(0xC) & INITS_MASK)  >> INITS_START_BIT)

#define WHEN_INITS_HIGH() \
     if ( READ_INITS() )


#define UNLESS_INITS_HIGH() \
     if (! READ_INITS() )


#define WAIT_INITS_LOW() \
    while ( READ_INITS() );


#define WAIT_INITS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_INITS() && (--___t___ > 0)); }


#define WAIT_INITS_HIGH() \
    while (! READ_INITS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : SHPF
//
// Return the value of register Isr
//
// Notes : Shift operation pending 
//        (ISR) at the offset 0xC, Bits 3:3
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_SHPF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ SHPF_MASK) | ((val << SHPF_START_BIT) & SHPF_MASK )); \
   } 

#define ENABLE_SHPF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  SHPF_MASK ); \
   }

#define DISABLE_SHPF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~SHPF_MASK ); \
   } 

#define READ_SHPF() \
   ((READ_REGISTER_ULONG(0xC) & SHPF_MASK)  >> SHPF_START_BIT)

#define WHEN_SHPF_HIGH() \
     if ( READ_SHPF() )


#define UNLESS_SHPF_HIGH() \
     if (! READ_SHPF() )


#define WAIT_SHPF_LOW() \
    while ( READ_SHPF() );


#define WAIT_SHPF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_SHPF() && (--___t___ > 0)); }


#define WAIT_SHPF_HIGH() \
    while (! READ_SHPF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : WUTWF
//
// Return the value of register Isr
//
// Notes : Wakeup timer write flag 
//        (ISR) at the offset 0xC, Bits 2:2
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_WUTWF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ WUTWF_MASK) | ((val << WUTWF_START_BIT) & WUTWF_MASK )); \
   } 

#define ENABLE_WUTWF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  WUTWF_MASK ); \
   }

#define DISABLE_WUTWF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~WUTWF_MASK ); \
   } 

#define READ_WUTWF() \
   ((READ_REGISTER_ULONG(0xC) & WUTWF_MASK)  >> WUTWF_START_BIT)

#define WHEN_WUTWF_HIGH() \
     if ( READ_WUTWF() )


#define UNLESS_WUTWF_HIGH() \
     if (! READ_WUTWF() )


#define WAIT_WUTWF_LOW() \
    while ( READ_WUTWF() );


#define WAIT_WUTWF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WUTWF() && (--___t___ > 0)); }


#define WAIT_WUTWF_HIGH() \
    while (! READ_WUTWF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ALRBWF
//
// Return the value of register Isr
//
// Notes : Alarm B write flag 
//        (ISR) at the offset 0xC, Bits 1:1
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ALRBWF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ ALRBWF_MASK) | ((val << ALRBWF_START_BIT) & ALRBWF_MASK )); \
   } 

#define ENABLE_ALRBWF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  ALRBWF_MASK ); \
   }

#define DISABLE_ALRBWF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~ALRBWF_MASK ); \
   } 

#define READ_ALRBWF() \
   ((READ_REGISTER_ULONG(0xC) & ALRBWF_MASK)  >> ALRBWF_START_BIT)

#define WHEN_ALRBWF_HIGH() \
     if ( READ_ALRBWF() )


#define UNLESS_ALRBWF_HIGH() \
     if (! READ_ALRBWF() )


#define WAIT_ALRBWF_LOW() \
    while ( READ_ALRBWF() );


#define WAIT_ALRBWF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ALRBWF() && (--___t___ > 0)); }


#define WAIT_ALRBWF_HIGH() \
    while (! READ_ALRBWF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : ALRAWF
//
// Return the value of register Isr
//
// Notes : Alarm A write flag 
//        (ISR) at the offset 0xC, Bits 0:0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_ALRAWF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC); \
     WRITE_REGISTER_ULONG(0xC, (OldValue & ~ ALRAWF_MASK) | ((val << ALRAWF_START_BIT) & ALRAWF_MASK )); \
   } 

#define ENABLE_ALRAWF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG( 0xC , val |  ALRAWF_MASK ); \
   }

#define DISABLE_ALRAWF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC); \
     WRITE_REGISTER_ULONG(0xC, val & ~ALRAWF_MASK ); \
   } 

#define READ_ALRAWF() \
   ((READ_REGISTER_ULONG(0xC) & ALRAWF_MASK)  >> ALRAWF_START_BIT)

#define WHEN_ALRAWF_HIGH() \
     if ( READ_ALRAWF() )


#define UNLESS_ALRAWF_HIGH() \
     if (! READ_ALRAWF() )


#define WAIT_ALRAWF_LOW() \
    while ( READ_ALRAWF() );


#define WAIT_ALRAWF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ALRAWF() && (--___t___ > 0)); }


#define WAIT_ALRAWF_HIGH() \
    while (! READ_ALRAWF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Prer
//
// Return the value of register PRER
//
// Notes : Register Prer at offset 0x10
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_PRER( y) \
     WRITE_REGISTER_ULONG( 0x10 , y)

#define SET_BITS_PRER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val |  mask ); \
   }

#define CLEAR_BITS_PRER(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x10); \
     WRITE_REGISTER_ULONG( 0x10 , val & ~mask ); \
   }

#define READ_REGISTER_PRER() \
     READ_REGISTER_ULONG(0x10)

/////////////////////////////////////////////////////////////////////////
//
// Function : Prer
//
// Return the value of register PRER
//
// Notes : Register prescaler register (PRER) at the offset 0x10, Bits 0:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Synchronous prescaler factor 
    // 
#define PREDIV_S_MASK 0x7FFFU
#define PREDIV_S_OFFSET 14
#define PREDIV_S_START_BIT 0
#define PREDIV_S_WIDTH 15


#define PRER_REG 0x10

typedef enum prediv_s {
    PREDIV_S_0,
    PREDIV_S_1
} PREDIV_S_T ;
#define READ_PREDIV_S() \
   ((READ_REGISTER_ULONG(0x10) & PREDIV_S_MASK)  >> PREDIV_S_START_BIT)

#define WRITE_PREDIV_S(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ PREDIV_S_MASK) | ((val << PREDIV_S_START_BIT) & PREDIV_S_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Prer
//
// Return the value of register PRER
//
// Notes : Register prescaler register (PRER) at the offset 0x10, Bits 16:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Asynchronous prescaler factor 
    // 
#define PREDIV_A_MASK 0x7F0000U
#define PREDIV_A_OFFSET 22
#define PREDIV_A_START_BIT 16
#define PREDIV_A_WIDTH 7



typedef enum prediv_a {
    PREDIV_A_0,
    PREDIV_A_1
} PREDIV_A_T ;
#define READ_PREDIV_A() \
   ((READ_REGISTER_ULONG(0x10) & PREDIV_A_MASK)  >> PREDIV_A_START_BIT)

#define WRITE_PREDIV_A(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x10); \
     WRITE_REGISTER_ULONG(0x10, (OldValue & ~ PREDIV_A_MASK) | ((val << PREDIV_A_START_BIT) & PREDIV_A_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Wutr
//
// Return the value of register WUTR
//
// Notes : Register Wutr at offset 0x14
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_WUTR( y) \
     WRITE_REGISTER_ULONG( 0x14 , y)

#define SET_BITS_WUTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val |  mask ); \
   }

#define CLEAR_BITS_WUTR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x14); \
     WRITE_REGISTER_ULONG( 0x14 , val & ~mask ); \
   }

#define READ_REGISTER_WUTR() \
     READ_REGISTER_ULONG(0x14)

/////////////////////////////////////////////////////////////////////////
//
// Function : Wutr
//
// Return the value of register WUTR
//
// Notes : Register wakeup timer register (WUTR) at the offset 0x14, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Wakeup auto-reload value bits 
    // 
#define WUT_MASK 0xFFFFU
#define WUT_OFFSET 15
#define WUT_START_BIT 0
#define WUT_WIDTH 16


#define WUTR_REG 0x14

typedef enum wut {
    WUT_0,
    WUT_1
} WUT_T ;
#define READ_WUT() \
   ((READ_REGISTER_ULONG(0x14) & WUT_MASK)  >> WUT_START_BIT)

#define WRITE_WUT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x14); \
     WRITE_REGISTER_ULONG(0x14, (OldValue & ~ WUT_MASK) | ((val << WUT_START_BIT) & WUT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmar
//
// Return the value of register ALRMAR
//
// Notes : Register Alrmar at offset 0x1C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ALRMAR( y) \
     WRITE_REGISTER_ULONG( 0x1C , y)

#define SET_BITS_ALRMAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  mask ); \
   }

#define CLEAR_BITS_ALRMAR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val & ~mask ); \
   }

#define READ_REGISTER_ALRMAR() \
     READ_REGISTER_ULONG(0x1C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmar
//
// Return the value of register ALRMAR
//
// Notes : Register alarm A register (ALRMAR) at the offset 0x1C, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Second units in BCD format 
    // 
#define SU_MASK 0xFU
#define SU_OFFSET 3
#define SU_START_BIT 0
#define SU_WIDTH 4


#define ALRMAR_REG 0x1C

#define READ_SU() \
   ((READ_REGISTER_ULONG(0x1C) & SU_MASK)  >> SU_START_BIT)

#define WRITE_SU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ SU_MASK) | ((val << SU_START_BIT) & SU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmar
//
// Return the value of register ALRMAR
//
// Notes : Register alarm A register (ALRMAR) at the offset 0x1C, Bits 4:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Second tens in BCD format 
    // 
#define ST_MASK 0x70U
#define ST_OFFSET 6
#define ST_START_BIT 4
#define ST_WIDTH 3



#define READ_ST() \
   ((READ_REGISTER_ULONG(0x1C) & ST_MASK)  >> ST_START_BIT)

#define WRITE_ST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ ST_MASK) | ((val << ST_START_BIT) & ST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmar
//
// Return the value of register ALRMAR
//
// Notes : Register alarm A register (ALRMAR) at the offset 0x1C, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alarm A seconds mask 
    // 
#define MSK1_MASK 0x80U
#define MSK1_OFFSET 7
#define MSK1_START_BIT 7
#define MSK1_WIDTH 1



typedef enum msk1 {
    MSK_1_0,
    MSK_1_1
} MSK_1_T ;
#define WRITE_MSK1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ MSK1_MASK) | ((val << MSK1_START_BIT) & MSK1_MASK )); \
   } 

#define ENABLE_MSK1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  MSK1_MASK ); \
   }

#define DISABLE_MSK1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~MSK1_MASK ); \
   } 

#define READ_MSK1() \
   ((READ_REGISTER_ULONG(0x1C) & MSK1_MASK)  >> MSK1_START_BIT)

#define WHEN_MSK1_HIGH() \
     if ( READ_MSK1() )


#define UNLESS_MSK1_HIGH() \
     if (! READ_MSK1() )


#define WAIT_MSK1_LOW() \
    while ( READ_MSK1() );


#define WAIT_MSK1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MSK1() && (--___t___ > 0)); }


#define WAIT_MSK1_HIGH() \
    while (! READ_MSK1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmar
//
// Return the value of register ALRMAR
//
// Notes : Register alarm A register (ALRMAR) at the offset 0x1C, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Minute units in BCD format 
    // 
#define MNU_MASK 0xF00U
#define MNU_OFFSET 11
#define MNU_START_BIT 8
#define MNU_WIDTH 4



#define READ_MNU() \
   ((READ_REGISTER_ULONG(0x1C) & MNU_MASK)  >> MNU_START_BIT)

#define WRITE_MNU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ MNU_MASK) | ((val << MNU_START_BIT) & MNU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmar
//
// Return the value of register ALRMAR
//
// Notes : Register alarm A register (ALRMAR) at the offset 0x1C, Bits 12:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Minute tens in BCD format 
    // 
#define MNT_MASK 0x7000U
#define MNT_OFFSET 14
#define MNT_START_BIT 12
#define MNT_WIDTH 3



#define READ_MNT() \
   ((READ_REGISTER_ULONG(0x1C) & MNT_MASK)  >> MNT_START_BIT)

#define WRITE_MNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ MNT_MASK) | ((val << MNT_START_BIT) & MNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmar
//
// Return the value of register ALRMAR
//
// Notes : Register alarm A register (ALRMAR) at the offset 0x1C, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alarm A minutes mask 
    // 
#define MSK2_MASK 0x8000U
#define MSK2_OFFSET 15
#define MSK2_START_BIT 15
#define MSK2_WIDTH 1



typedef enum msk2 {
    MSK_2_0,
    MSK_2_1
} MSK_2_T ;
#define WRITE_MSK2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ MSK2_MASK) | ((val << MSK2_START_BIT) & MSK2_MASK )); \
   } 

#define ENABLE_MSK2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  MSK2_MASK ); \
   }

#define DISABLE_MSK2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~MSK2_MASK ); \
   } 

#define READ_MSK2() \
   ((READ_REGISTER_ULONG(0x1C) & MSK2_MASK)  >> MSK2_START_BIT)

#define WHEN_MSK2_HIGH() \
     if ( READ_MSK2() )


#define UNLESS_MSK2_HIGH() \
     if (! READ_MSK2() )


#define WAIT_MSK2_LOW() \
    while ( READ_MSK2() );


#define WAIT_MSK2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MSK2() && (--___t___ > 0)); }


#define WAIT_MSK2_HIGH() \
    while (! READ_MSK2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmar
//
// Return the value of register ALRMAR
//
// Notes : Register alarm A register (ALRMAR) at the offset 0x1C, Bits 16:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hour units in BCD format 
    // 
#define HU_MASK 0xF0000U
#define HU_OFFSET 19
#define HU_START_BIT 16
#define HU_WIDTH 4



#define READ_HU() \
   ((READ_REGISTER_ULONG(0x1C) & HU_MASK)  >> HU_START_BIT)

#define WRITE_HU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ HU_MASK) | ((val << HU_START_BIT) & HU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmar
//
// Return the value of register ALRMAR
//
// Notes : Register alarm A register (ALRMAR) at the offset 0x1C, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hour tens in BCD format 
    // 
#define HT_MASK 0x300000U
#define HT_OFFSET 21
#define HT_START_BIT 20
#define HT_WIDTH 2



#define READ_HT() \
   ((READ_REGISTER_ULONG(0x1C) & HT_MASK)  >> HT_START_BIT)

#define WRITE_HT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ HT_MASK) | ((val << HT_START_BIT) & HT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmar
//
// Return the value of register ALRMAR
//
// Notes : Register alarm A register (ALRMAR) at the offset 0x1C, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AM/PM notation 
    // 
#define PM_MASK 0x400000U
#define PM_OFFSET 22
#define PM_START_BIT 22
#define PM_WIDTH 1



#define WRITE_PM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ PM_MASK) | ((val << PM_START_BIT) & PM_MASK )); \
   } 

#define ENABLE_PM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  PM_MASK ); \
   }

#define DISABLE_PM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~PM_MASK ); \
   } 

#define READ_PM() \
   ((READ_REGISTER_ULONG(0x1C) & PM_MASK)  >> PM_START_BIT)

#define WHEN_PM_HIGH() \
     if ( READ_PM() )


#define UNLESS_PM_HIGH() \
     if (! READ_PM() )


#define WAIT_PM_LOW() \
    while ( READ_PM() );


#define WAIT_PM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PM() && (--___t___ > 0)); }


#define WAIT_PM_HIGH() \
    while (! READ_PM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmar
//
// Return the value of register ALRMAR
//
// Notes : Register alarm A register (ALRMAR) at the offset 0x1C, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alarm A hours mask 
    // 
#define MSK3_MASK 0x800000U
#define MSK3_OFFSET 23
#define MSK3_START_BIT 23
#define MSK3_WIDTH 1



typedef enum msk3 {
    MSK_3_0,
    MSK_3_1
} MSK_3_T ;
#define WRITE_MSK3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ MSK3_MASK) | ((val << MSK3_START_BIT) & MSK3_MASK )); \
   } 

#define ENABLE_MSK3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  MSK3_MASK ); \
   }

#define DISABLE_MSK3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~MSK3_MASK ); \
   } 

#define READ_MSK3() \
   ((READ_REGISTER_ULONG(0x1C) & MSK3_MASK)  >> MSK3_START_BIT)

#define WHEN_MSK3_HIGH() \
     if ( READ_MSK3() )


#define UNLESS_MSK3_HIGH() \
     if (! READ_MSK3() )


#define WAIT_MSK3_LOW() \
    while ( READ_MSK3() );


#define WAIT_MSK3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MSK3() && (--___t___ > 0)); }


#define WAIT_MSK3_HIGH() \
    while (! READ_MSK3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmar
//
// Return the value of register ALRMAR
//
// Notes : Register alarm A register (ALRMAR) at the offset 0x1C, Bits 24:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Date units or day in BCD format 
    // 
#define DU_MASK 0xF000000U
#define DU_OFFSET 27
#define DU_START_BIT 24
#define DU_WIDTH 4



#define READ_DU() \
   ((READ_REGISTER_ULONG(0x1C) & DU_MASK)  >> DU_START_BIT)

#define WRITE_DU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ DU_MASK) | ((val << DU_START_BIT) & DU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmar
//
// Return the value of register ALRMAR
//
// Notes : Register alarm A register (ALRMAR) at the offset 0x1C, Bits 28:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Date tens in BCD format 
    // 
#define DT_MASK 0x30000000U
#define DT_OFFSET 29
#define DT_START_BIT 28
#define DT_WIDTH 2



#define READ_DT() \
   ((READ_REGISTER_ULONG(0x1C) & DT_MASK)  >> DT_START_BIT)

#define WRITE_DT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ DT_MASK) | ((val << DT_START_BIT) & DT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmar
//
// Return the value of register ALRMAR
//
// Notes : Register alarm A register (ALRMAR) at the offset 0x1C, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Week day selection 
    // 
#define WDSEL_MASK 0x40000000U
#define WDSEL_OFFSET 30
#define WDSEL_START_BIT 30
#define WDSEL_WIDTH 1



typedef enum wdsel {
    WDSEL_0,
    WDSEL_1
} WDSEL_T ;
#define WRITE_WDSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ WDSEL_MASK) | ((val << WDSEL_START_BIT) & WDSEL_MASK )); \
   } 

#define ENABLE_WDSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  WDSEL_MASK ); \
   }

#define DISABLE_WDSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~WDSEL_MASK ); \
   } 

#define READ_WDSEL() \
   ((READ_REGISTER_ULONG(0x1C) & WDSEL_MASK)  >> WDSEL_START_BIT)

#define WHEN_WDSEL_HIGH() \
     if ( READ_WDSEL() )


#define UNLESS_WDSEL_HIGH() \
     if (! READ_WDSEL() )


#define WAIT_WDSEL_LOW() \
    while ( READ_WDSEL() );


#define WAIT_WDSEL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WDSEL() && (--___t___ > 0)); }


#define WAIT_WDSEL_HIGH() \
    while (! READ_WDSEL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmar
//
// Return the value of register ALRMAR
//
// Notes : Register alarm A register (ALRMAR) at the offset 0x1C, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alarm A date mask 
    // 
#define MSK4_MASK 0x80000000U
#define MSK4_OFFSET 31
#define MSK4_START_BIT 31
#define MSK4_WIDTH 1



typedef enum msk4 {
    MSK_4_0,
    MSK_4_1
} MSK_4_T ;
#define WRITE_MSK4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x1C); \
     WRITE_REGISTER_ULONG(0x1C, (OldValue & ~ MSK4_MASK) | ((val << MSK4_START_BIT) & MSK4_MASK )); \
   } 

#define ENABLE_MSK4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG( 0x1C , val |  MSK4_MASK ); \
   }

#define DISABLE_MSK4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x1C); \
     WRITE_REGISTER_ULONG(0x1C, val & ~MSK4_MASK ); \
   } 

#define READ_MSK4() \
   ((READ_REGISTER_ULONG(0x1C) & MSK4_MASK)  >> MSK4_START_BIT)

#define WHEN_MSK4_HIGH() \
     if ( READ_MSK4() )


#define UNLESS_MSK4_HIGH() \
     if (! READ_MSK4() )


#define WAIT_MSK4_LOW() \
    while ( READ_MSK4() );


#define WAIT_MSK4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MSK4() && (--___t___ > 0)); }


#define WAIT_MSK4_HIGH() \
    while (! READ_MSK4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmbr
//
// Return the value of register ALRMBR
//
// Notes : Register Alrmbr at offset 0x20
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ALRMBR( y) \
     WRITE_REGISTER_ULONG( 0x20 , y)

#define SET_BITS_ALRMBR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  mask ); \
   }

#define CLEAR_BITS_ALRMBR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val & ~mask ); \
   }

#define READ_REGISTER_ALRMBR() \
     READ_REGISTER_ULONG(0x20)

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmbr
//
// Return the value of register ALRMBR
//
// Notes : Register alarm B register (ALRMBR) at the offset 0x20, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Second units in BCD format 
    // 
#define SU_MASK 0xFU
#define SU_OFFSET 3
#define SU_START_BIT 0
#define SU_WIDTH 4


#define ALRMBR_REG 0x20

#define READ_SU() \
   ((READ_REGISTER_ULONG(0x20) & SU_MASK)  >> SU_START_BIT)

#define WRITE_SU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ SU_MASK) | ((val << SU_START_BIT) & SU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmbr
//
// Return the value of register ALRMBR
//
// Notes : Register alarm B register (ALRMBR) at the offset 0x20, Bits 4:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Second tens in BCD format 
    // 
#define ST_MASK 0x70U
#define ST_OFFSET 6
#define ST_START_BIT 4
#define ST_WIDTH 3



#define READ_ST() \
   ((READ_REGISTER_ULONG(0x20) & ST_MASK)  >> ST_START_BIT)

#define WRITE_ST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ ST_MASK) | ((val << ST_START_BIT) & ST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmbr
//
// Return the value of register ALRMBR
//
// Notes : Register alarm B register (ALRMBR) at the offset 0x20, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alarm B seconds mask 
    // 
#define MSK1_MASK 0x80U
#define MSK1_OFFSET 7
#define MSK1_START_BIT 7
#define MSK1_WIDTH 1



#define WRITE_MSK1(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ MSK1_MASK) | ((val << MSK1_START_BIT) & MSK1_MASK )); \
   } 

#define ENABLE_MSK1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  MSK1_MASK ); \
   }

#define DISABLE_MSK1() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~MSK1_MASK ); \
   } 

#define READ_MSK1() \
   ((READ_REGISTER_ULONG(0x20) & MSK1_MASK)  >> MSK1_START_BIT)

#define WHEN_MSK1_HIGH() \
     if ( READ_MSK1() )


#define UNLESS_MSK1_HIGH() \
     if (! READ_MSK1() )


#define WAIT_MSK1_LOW() \
    while ( READ_MSK1() );


#define WAIT_MSK1_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MSK1() && (--___t___ > 0)); }


#define WAIT_MSK1_HIGH() \
    while (! READ_MSK1() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmbr
//
// Return the value of register ALRMBR
//
// Notes : Register alarm B register (ALRMBR) at the offset 0x20, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Minute units in BCD format 
    // 
#define MNU_MASK 0xF00U
#define MNU_OFFSET 11
#define MNU_START_BIT 8
#define MNU_WIDTH 4



#define READ_MNU() \
   ((READ_REGISTER_ULONG(0x20) & MNU_MASK)  >> MNU_START_BIT)

#define WRITE_MNU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ MNU_MASK) | ((val << MNU_START_BIT) & MNU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmbr
//
// Return the value of register ALRMBR
//
// Notes : Register alarm B register (ALRMBR) at the offset 0x20, Bits 12:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Minute tens in BCD format 
    // 
#define MNT_MASK 0x7000U
#define MNT_OFFSET 14
#define MNT_START_BIT 12
#define MNT_WIDTH 3



#define READ_MNT() \
   ((READ_REGISTER_ULONG(0x20) & MNT_MASK)  >> MNT_START_BIT)

#define WRITE_MNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ MNT_MASK) | ((val << MNT_START_BIT) & MNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmbr
//
// Return the value of register ALRMBR
//
// Notes : Register alarm B register (ALRMBR) at the offset 0x20, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alarm B minutes mask 
    // 
#define MSK2_MASK 0x8000U
#define MSK2_OFFSET 15
#define MSK2_START_BIT 15
#define MSK2_WIDTH 1



#define WRITE_MSK2(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ MSK2_MASK) | ((val << MSK2_START_BIT) & MSK2_MASK )); \
   } 

#define ENABLE_MSK2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  MSK2_MASK ); \
   }

#define DISABLE_MSK2() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~MSK2_MASK ); \
   } 

#define READ_MSK2() \
   ((READ_REGISTER_ULONG(0x20) & MSK2_MASK)  >> MSK2_START_BIT)

#define WHEN_MSK2_HIGH() \
     if ( READ_MSK2() )


#define UNLESS_MSK2_HIGH() \
     if (! READ_MSK2() )


#define WAIT_MSK2_LOW() \
    while ( READ_MSK2() );


#define WAIT_MSK2_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MSK2() && (--___t___ > 0)); }


#define WAIT_MSK2_HIGH() \
    while (! READ_MSK2() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmbr
//
// Return the value of register ALRMBR
//
// Notes : Register alarm B register (ALRMBR) at the offset 0x20, Bits 16:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hour units in BCD format 
    // 
#define HU_MASK 0xF0000U
#define HU_OFFSET 19
#define HU_START_BIT 16
#define HU_WIDTH 4



#define READ_HU() \
   ((READ_REGISTER_ULONG(0x20) & HU_MASK)  >> HU_START_BIT)

#define WRITE_HU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ HU_MASK) | ((val << HU_START_BIT) & HU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmbr
//
// Return the value of register ALRMBR
//
// Notes : Register alarm B register (ALRMBR) at the offset 0x20, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hour tens in BCD format 
    // 
#define HT_MASK 0x300000U
#define HT_OFFSET 21
#define HT_START_BIT 20
#define HT_WIDTH 2



#define READ_HT() \
   ((READ_REGISTER_ULONG(0x20) & HT_MASK)  >> HT_START_BIT)

#define WRITE_HT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ HT_MASK) | ((val << HT_START_BIT) & HT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmbr
//
// Return the value of register ALRMBR
//
// Notes : Register alarm B register (ALRMBR) at the offset 0x20, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AM/PM notation 
    // 
#define PM_MASK 0x400000U
#define PM_OFFSET 22
#define PM_START_BIT 22
#define PM_WIDTH 1



#define WRITE_PM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ PM_MASK) | ((val << PM_START_BIT) & PM_MASK )); \
   } 

#define ENABLE_PM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  PM_MASK ); \
   }

#define DISABLE_PM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~PM_MASK ); \
   } 

#define READ_PM() \
   ((READ_REGISTER_ULONG(0x20) & PM_MASK)  >> PM_START_BIT)

#define WHEN_PM_HIGH() \
     if ( READ_PM() )


#define UNLESS_PM_HIGH() \
     if (! READ_PM() )


#define WAIT_PM_LOW() \
    while ( READ_PM() );


#define WAIT_PM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PM() && (--___t___ > 0)); }


#define WAIT_PM_HIGH() \
    while (! READ_PM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmbr
//
// Return the value of register ALRMBR
//
// Notes : Register alarm B register (ALRMBR) at the offset 0x20, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alarm B hours mask 
    // 
#define MSK3_MASK 0x800000U
#define MSK3_OFFSET 23
#define MSK3_START_BIT 23
#define MSK3_WIDTH 1



#define WRITE_MSK3(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ MSK3_MASK) | ((val << MSK3_START_BIT) & MSK3_MASK )); \
   } 

#define ENABLE_MSK3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  MSK3_MASK ); \
   }

#define DISABLE_MSK3() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~MSK3_MASK ); \
   } 

#define READ_MSK3() \
   ((READ_REGISTER_ULONG(0x20) & MSK3_MASK)  >> MSK3_START_BIT)

#define WHEN_MSK3_HIGH() \
     if ( READ_MSK3() )


#define UNLESS_MSK3_HIGH() \
     if (! READ_MSK3() )


#define WAIT_MSK3_LOW() \
    while ( READ_MSK3() );


#define WAIT_MSK3_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MSK3() && (--___t___ > 0)); }


#define WAIT_MSK3_HIGH() \
    while (! READ_MSK3() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmbr
//
// Return the value of register ALRMBR
//
// Notes : Register alarm B register (ALRMBR) at the offset 0x20, Bits 24:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Date units or day in BCD format 
    // 
#define DU_MASK 0xF000000U
#define DU_OFFSET 27
#define DU_START_BIT 24
#define DU_WIDTH 4



#define READ_DU() \
   ((READ_REGISTER_ULONG(0x20) & DU_MASK)  >> DU_START_BIT)

#define WRITE_DU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ DU_MASK) | ((val << DU_START_BIT) & DU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmbr
//
// Return the value of register ALRMBR
//
// Notes : Register alarm B register (ALRMBR) at the offset 0x20, Bits 28:29

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Date tens in BCD format 
    // 
#define DT_MASK 0x30000000U
#define DT_OFFSET 29
#define DT_START_BIT 28
#define DT_WIDTH 2



#define READ_DT() \
   ((READ_REGISTER_ULONG(0x20) & DT_MASK)  >> DT_START_BIT)

#define WRITE_DT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ DT_MASK) | ((val << DT_START_BIT) & DT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmbr
//
// Return the value of register ALRMBR
//
// Notes : Register alarm B register (ALRMBR) at the offset 0x20, Bits 30:30

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Week day selection 
    // 
#define WDSEL_MASK 0x40000000U
#define WDSEL_OFFSET 30
#define WDSEL_START_BIT 30
#define WDSEL_WIDTH 1



#define WRITE_WDSEL(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ WDSEL_MASK) | ((val << WDSEL_START_BIT) & WDSEL_MASK )); \
   } 

#define ENABLE_WDSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  WDSEL_MASK ); \
   }

#define DISABLE_WDSEL() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~WDSEL_MASK ); \
   } 

#define READ_WDSEL() \
   ((READ_REGISTER_ULONG(0x20) & WDSEL_MASK)  >> WDSEL_START_BIT)

#define WHEN_WDSEL_HIGH() \
     if ( READ_WDSEL() )


#define UNLESS_WDSEL_HIGH() \
     if (! READ_WDSEL() )


#define WAIT_WDSEL_LOW() \
    while ( READ_WDSEL() );


#define WAIT_WDSEL_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_WDSEL() && (--___t___ > 0)); }


#define WAIT_WDSEL_HIGH() \
    while (! READ_WDSEL() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmbr
//
// Return the value of register ALRMBR
//
// Notes : Register alarm B register (ALRMBR) at the offset 0x20, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Alarm B date mask 
    // 
#define MSK4_MASK 0x80000000U
#define MSK4_OFFSET 31
#define MSK4_START_BIT 31
#define MSK4_WIDTH 1



#define WRITE_MSK4(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x20); \
     WRITE_REGISTER_ULONG(0x20, (OldValue & ~ MSK4_MASK) | ((val << MSK4_START_BIT) & MSK4_MASK )); \
   } 

#define ENABLE_MSK4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG( 0x20 , val |  MSK4_MASK ); \
   }

#define DISABLE_MSK4() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x20); \
     WRITE_REGISTER_ULONG(0x20, val & ~MSK4_MASK ); \
   } 

#define READ_MSK4() \
   ((READ_REGISTER_ULONG(0x20) & MSK4_MASK)  >> MSK4_START_BIT)

#define WHEN_MSK4_HIGH() \
     if ( READ_MSK4() )


#define UNLESS_MSK4_HIGH() \
     if (! READ_MSK4() )


#define WAIT_MSK4_LOW() \
    while ( READ_MSK4() );


#define WAIT_MSK4_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MSK4() && (--___t___ > 0)); }


#define WAIT_MSK4_HIGH() \
    while (! READ_MSK4() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Wpr
//
// Return the value of register WPR
//
// Notes : Register Wpr at offset 0x24
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_WPR( y) \
     WRITE_REGISTER_ULONG( 0x24 , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : Wpr
//
// Return the value of register WPR
//
// Notes : Register write protection register (WPR) at the offset 0x24, Bits 0:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Write protection key 
    // 
#define KEY_MASK 0xFFU
#define KEY_OFFSET 7
#define KEY_START_BIT 0
#define KEY_WIDTH 8


#define WPR_REG 0x24

typedef enum key {
    KEY_0,
    KEY_1
} KEY_T ;
#define READ_KEY() \
   ((READ_REGISTER_ULONG(0x24) & KEY_MASK)  >> KEY_START_BIT)

#define WRITE_KEY(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x24); \
     WRITE_REGISTER_ULONG(0x24, (OldValue & ~ KEY_MASK) | ((val << KEY_START_BIT) & KEY_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Ssr
//
// Return the value of register SSR
//
// Notes : Register Ssr at offset 0x28
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_SSR() \
     READ_REGISTER_ULONG(0x28)

/////////////////////////////////////////////////////////////////////////
//
// Function : Ssr
//
// Return the value of register SSR
//
// Notes : Register sub second register (SSR) at the offset 0x28, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Sub second value 
    // 
#define SS_MASK 0xFFFFU
#define SS_OFFSET 15
#define SS_START_BIT 0
#define SS_WIDTH 16


#define SSR_REG 0x28

typedef enum ss {
    SS_0,
    SS_1
} SS_T ;
#define READ_SS() \
   ((READ_REGISTER_ULONG(0x28) & SS_MASK)  >> SS_START_BIT)

#define WRITE_SS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x28); \
     WRITE_REGISTER_ULONG(0x28, (OldValue & ~ SS_MASK) | ((val << SS_START_BIT) & SS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Shiftr
//
// Return the value of register SHIFTR
//
// Notes : Register Shiftr at offset 0x2C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_SHIFTR( y) \
     WRITE_REGISTER_ULONG( 0x2C , y)

/////////////////////////////////////////////////////////////////////////
//
// Function : Shiftr
//
// Return the value of register SHIFTR
//
// Notes : Register shift control register (SHIFTR) at the offset 0x2C, Bits 0:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Subtract a fraction of a second 
    // 
#define SUBFS_MASK 0x7FFFU
#define SUBFS_OFFSET 14
#define SUBFS_START_BIT 0
#define SUBFS_WIDTH 15


#define SHIFTR_REG 0x2C

typedef enum subfs {
    SUBFS_0,
    SUBFS_1
} SUBFS_T ;
#define READ_SUBFS() \
   ((READ_REGISTER_ULONG(0x2C) & SUBFS_MASK)  >> SUBFS_START_BIT)

#define WRITE_SUBFS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ SUBFS_MASK) | ((val << SUBFS_START_BIT) & SUBFS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Shiftr
//
// Return the value of register SHIFTR
//
// Notes : Register shift control register (SHIFTR) at the offset 0x2C, Bits 31:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Add one second 
    // 
#define ADD1S_MASK 0x80000000U
#define ADD1S_OFFSET 31
#define ADD1S_START_BIT 31
#define ADD1S_WIDTH 1



typedef enum add1s {
    ADD_1S_0,
    ADD_1S_1
} ADD_1S_T ;
#define WRITE_ADD1S(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x2C); \
     WRITE_REGISTER_ULONG(0x2C, (OldValue & ~ ADD1S_MASK) | ((val << ADD1S_START_BIT) & ADD1S_MASK )); \
   } 

#define ENABLE_ADD1S() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG( 0x2C , val |  ADD1S_MASK ); \
   }

#define DISABLE_ADD1S() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x2C); \
     WRITE_REGISTER_ULONG(0x2C, val & ~ADD1S_MASK ); \
   } 

#define READ_ADD1S() \
   ((READ_REGISTER_ULONG(0x2C) & ADD1S_MASK)  >> ADD1S_START_BIT)

#define WHEN_ADD1S_HIGH() \
     if ( READ_ADD1S() )


#define UNLESS_ADD1S_HIGH() \
     if (! READ_ADD1S() )


#define WAIT_ADD1S_LOW() \
    while ( READ_ADD1S() );


#define WAIT_ADD1S_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_ADD1S() && (--___t___ > 0)); }


#define WAIT_ADD1S_HIGH() \
    while (! READ_ADD1S() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Tstr
//
// Return the value of register TSTR
//
// Notes : Register Tstr at offset 0x30
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_TSTR() \
     READ_REGISTER_ULONG(0x30)

/////////////////////////////////////////////////////////////////////////
//
// Function : Tstr
//
// Return the value of register TSTR
//
// Notes : Register time stamp time register (TSTR) at the offset 0x30, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // AM/PM notation 
    // 
#define PM_MASK 0x400000U
#define PM_OFFSET 22
#define PM_START_BIT 22
#define PM_WIDTH 1


#define TSTR_REG 0x30

#define WRITE_PM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ PM_MASK) | ((val << PM_START_BIT) & PM_MASK )); \
   } 

#define ENABLE_PM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG( 0x30 , val |  PM_MASK ); \
   }

#define DISABLE_PM() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x30); \
     WRITE_REGISTER_ULONG(0x30, val & ~PM_MASK ); \
   } 

#define READ_PM() \
   ((READ_REGISTER_ULONG(0x30) & PM_MASK)  >> PM_START_BIT)

#define WHEN_PM_HIGH() \
     if ( READ_PM() )


#define UNLESS_PM_HIGH() \
     if (! READ_PM() )


#define WAIT_PM_LOW() \
    while ( READ_PM() );


#define WAIT_PM_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_PM() && (--___t___ > 0)); }


#define WAIT_PM_HIGH() \
    while (! READ_PM() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Tstr
//
// Return the value of register TSTR
//
// Notes : Register time stamp time register (TSTR) at the offset 0x30, Bits 20:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hour tens in BCD format 
    // 
#define HT_MASK 0x300000U
#define HT_OFFSET 21
#define HT_START_BIT 20
#define HT_WIDTH 2



#define READ_HT() \
   ((READ_REGISTER_ULONG(0x30) & HT_MASK)  >> HT_START_BIT)

#define WRITE_HT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ HT_MASK) | ((val << HT_START_BIT) & HT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tstr
//
// Return the value of register TSTR
//
// Notes : Register time stamp time register (TSTR) at the offset 0x30, Bits 16:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Hour units in BCD format 
    // 
#define HU_MASK 0xF0000U
#define HU_OFFSET 19
#define HU_START_BIT 16
#define HU_WIDTH 4



#define READ_HU() \
   ((READ_REGISTER_ULONG(0x30) & HU_MASK)  >> HU_START_BIT)

#define WRITE_HU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ HU_MASK) | ((val << HU_START_BIT) & HU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tstr
//
// Return the value of register TSTR
//
// Notes : Register time stamp time register (TSTR) at the offset 0x30, Bits 12:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Minute tens in BCD format 
    // 
#define MNT_MASK 0x7000U
#define MNT_OFFSET 14
#define MNT_START_BIT 12
#define MNT_WIDTH 3



#define READ_MNT() \
   ((READ_REGISTER_ULONG(0x30) & MNT_MASK)  >> MNT_START_BIT)

#define WRITE_MNT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ MNT_MASK) | ((val << MNT_START_BIT) & MNT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tstr
//
// Return the value of register TSTR
//
// Notes : Register time stamp time register (TSTR) at the offset 0x30, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Minute units in BCD format 
    // 
#define MNU_MASK 0xF00U
#define MNU_OFFSET 11
#define MNU_START_BIT 8
#define MNU_WIDTH 4



#define READ_MNU() \
   ((READ_REGISTER_ULONG(0x30) & MNU_MASK)  >> MNU_START_BIT)

#define WRITE_MNU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ MNU_MASK) | ((val << MNU_START_BIT) & MNU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tstr
//
// Return the value of register TSTR
//
// Notes : Register time stamp time register (TSTR) at the offset 0x30, Bits 4:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Second tens in BCD format 
    // 
#define ST_MASK 0x70U
#define ST_OFFSET 6
#define ST_START_BIT 4
#define ST_WIDTH 3



#define READ_ST() \
   ((READ_REGISTER_ULONG(0x30) & ST_MASK)  >> ST_START_BIT)

#define WRITE_ST(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ ST_MASK) | ((val << ST_START_BIT) & ST_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tstr
//
// Return the value of register TSTR
//
// Notes : Register time stamp time register (TSTR) at the offset 0x30, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Second units in BCD format 
    // 
#define SU_MASK 0xFU
#define SU_OFFSET 3
#define SU_START_BIT 0
#define SU_WIDTH 4



#define READ_SU() \
   ((READ_REGISTER_ULONG(0x30) & SU_MASK)  >> SU_START_BIT)

#define WRITE_SU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x30); \
     WRITE_REGISTER_ULONG(0x30, (OldValue & ~ SU_MASK) | ((val << SU_START_BIT) & SU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tsdr
//
// Return the value of register TSDR
//
// Notes : Register Tsdr at offset 0x34
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_TSDR() \
     READ_REGISTER_ULONG(0x34)

/////////////////////////////////////////////////////////////////////////
//
// Function : Tsdr
//
// Return the value of register TSDR
//
// Notes : Register time stamp date register (TSDR) at the offset 0x34, Bits 0:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Date units in BCD format 
    // 
#define DU_MASK 0xFU
#define DU_OFFSET 3
#define DU_START_BIT 0
#define DU_WIDTH 4


#define TSDR_REG 0x34

#define READ_DU() \
   ((READ_REGISTER_ULONG(0x34) & DU_MASK)  >> DU_START_BIT)

#define WRITE_DU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ DU_MASK) | ((val << DU_START_BIT) & DU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tsdr
//
// Return the value of register TSDR
//
// Notes : Register time stamp date register (TSDR) at the offset 0x34, Bits 4:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Date tens in BCD format 
    // 
#define DT_MASK 0x30U
#define DT_OFFSET 5
#define DT_START_BIT 4
#define DT_WIDTH 2



#define READ_DT() \
   ((READ_REGISTER_ULONG(0x34) & DT_MASK)  >> DT_START_BIT)

#define WRITE_DT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ DT_MASK) | ((val << DT_START_BIT) & DT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tsdr
//
// Return the value of register TSDR
//
// Notes : Register time stamp date register (TSDR) at the offset 0x34, Bits 8:11

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Month units in BCD format 
    // 
#define MU_MASK 0xF00U
#define MU_OFFSET 11
#define MU_START_BIT 8
#define MU_WIDTH 4



#define READ_MU() \
   ((READ_REGISTER_ULONG(0x34) & MU_MASK)  >> MU_START_BIT)

#define WRITE_MU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ MU_MASK) | ((val << MU_START_BIT) & MU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tsdr
//
// Return the value of register TSDR
//
// Notes : Register time stamp date register (TSDR) at the offset 0x34, Bits 12:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Month tens in BCD format 
    // 
#define MT_MASK 0x1000U
#define MT_OFFSET 12
#define MT_START_BIT 12
#define MT_WIDTH 1



#define WRITE_MT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ MT_MASK) | ((val << MT_START_BIT) & MT_MASK )); \
   } 

#define ENABLE_MT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG( 0x34 , val |  MT_MASK ); \
   }

#define DISABLE_MT() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x34); \
     WRITE_REGISTER_ULONG(0x34, val & ~MT_MASK ); \
   } 

#define READ_MT() \
   ((READ_REGISTER_ULONG(0x34) & MT_MASK)  >> MT_START_BIT)

#define WHEN_MT_HIGH() \
     if ( READ_MT() )


#define UNLESS_MT_HIGH() \
     if (! READ_MT() )


#define WAIT_MT_LOW() \
    while ( READ_MT() );


#define WAIT_MT_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_MT() && (--___t___ > 0)); }


#define WAIT_MT_HIGH() \
    while (! READ_MT() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Tsdr
//
// Return the value of register TSDR
//
// Notes : Register time stamp date register (TSDR) at the offset 0x34, Bits 13:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Week day units 
    // 
#define WDU_MASK 0xE000U
#define WDU_OFFSET 15
#define WDU_START_BIT 13
#define WDU_WIDTH 3



#define READ_WDU() \
   ((READ_REGISTER_ULONG(0x34) & WDU_MASK)  >> WDU_START_BIT)

#define WRITE_WDU(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x34); \
     WRITE_REGISTER_ULONG(0x34, (OldValue & ~ WDU_MASK) | ((val << WDU_START_BIT) & WDU_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tsssr
//
// Return the value of register TSSSR
//
// Notes : Register Tsssr at offset 0x38
//
/////////////////////////////////////////////////////////////////////////
#define READ_REGISTER_TSSSR() \
     READ_REGISTER_ULONG(0x38)

/////////////////////////////////////////////////////////////////////////
//
// Function : Tsssr
//
// Return the value of register TSSSR
//
// Notes : Register timestamp sub second register (TSSSR) at the offset 0x38, Bits 0:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Sub second value 
    // 
#define SS_MASK 0xFFFFU
#define SS_OFFSET 15
#define SS_START_BIT 0
#define SS_WIDTH 16


#define TSSSR_REG 0x38

#define READ_SS() \
   ((READ_REGISTER_ULONG(0x38) & SS_MASK)  >> SS_START_BIT)

#define WRITE_SS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x38); \
     WRITE_REGISTER_ULONG(0x38, (OldValue & ~ SS_MASK) | ((val << SS_START_BIT) & SS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Calr
//
// Return the value of register CALR
//
// Notes : Register Calr at offset 0x3C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_CALR( y) \
     WRITE_REGISTER_ULONG( 0x3C , y)

#define SET_BITS_CALR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  mask ); \
   }

#define CLEAR_BITS_CALR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val & ~mask ); \
   }

#define READ_REGISTER_CALR() \
     READ_REGISTER_ULONG(0x3C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Calr
//
// Return the value of register CALR
//
// Notes : Register calibration register (CALR) at the offset 0x3C, Bits 0:8

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Calibration minus 
    // 
#define CALM_MASK 0x1FFU
#define CALM_OFFSET 8
#define CALM_START_BIT 0
#define CALM_WIDTH 9


#define CALR_REG 0x3C

typedef enum calm {
    CALM_0,
    CALM_1
} CALM_T ;
#define READ_CALM() \
   ((READ_REGISTER_ULONG(0x3C) & CALM_MASK)  >> CALM_START_BIT)

#define WRITE_CALM(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ CALM_MASK) | ((val << CALM_START_BIT) & CALM_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Calr
//
// Return the value of register CALR
//
// Notes : Register calibration register (CALR) at the offset 0x3C, Bits 13:13

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Use a 16-second calibration cycle period 
    // 
#define CALW16_MASK 0x2000U
#define CALW16_OFFSET 13
#define CALW16_START_BIT 13
#define CALW16_WIDTH 1



typedef enum calw16 {
    CALW_1_6_0,
    CALW_1_6_1
} CALW_16_T ;
#define WRITE_CALW16(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ CALW16_MASK) | ((val << CALW16_START_BIT) & CALW16_MASK )); \
   } 

#define ENABLE_CALW16() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  CALW16_MASK ); \
   }

#define DISABLE_CALW16() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~CALW16_MASK ); \
   } 

#define READ_CALW16() \
   ((READ_REGISTER_ULONG(0x3C) & CALW16_MASK)  >> CALW16_START_BIT)

#define WHEN_CALW16_HIGH() \
     if ( READ_CALW16() )


#define UNLESS_CALW16_HIGH() \
     if (! READ_CALW16() )


#define WAIT_CALW16_LOW() \
    while ( READ_CALW16() );


#define WAIT_CALW16_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CALW16() && (--___t___ > 0)); }


#define WAIT_CALW16_HIGH() \
    while (! READ_CALW16() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Calr
//
// Return the value of register CALR
//
// Notes : Register calibration register (CALR) at the offset 0x3C, Bits 14:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Use an 8-second calibration cycle period 
    // 
#define CALW8_MASK 0x4000U
#define CALW8_OFFSET 14
#define CALW8_START_BIT 14
#define CALW8_WIDTH 1



typedef enum calw8 {
    CALW_8_0,
    CALW_8_1
} CALW_8_T ;
#define WRITE_CALW8(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ CALW8_MASK) | ((val << CALW8_START_BIT) & CALW8_MASK )); \
   } 

#define ENABLE_CALW8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  CALW8_MASK ); \
   }

#define DISABLE_CALW8() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~CALW8_MASK ); \
   } 

#define READ_CALW8() \
   ((READ_REGISTER_ULONG(0x3C) & CALW8_MASK)  >> CALW8_START_BIT)

#define WHEN_CALW8_HIGH() \
     if ( READ_CALW8() )


#define UNLESS_CALW8_HIGH() \
     if (! READ_CALW8() )


#define WAIT_CALW8_LOW() \
    while ( READ_CALW8() );


#define WAIT_CALW8_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CALW8() && (--___t___ > 0)); }


#define WAIT_CALW8_HIGH() \
    while (! READ_CALW8() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Calr
//
// Return the value of register CALR
//
// Notes : Register calibration register (CALR) at the offset 0x3C, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Increase frequency of RTC by 488.5 ppm 
    // 
#define CALP_MASK 0x8000U
#define CALP_OFFSET 15
#define CALP_START_BIT 15
#define CALP_WIDTH 1



typedef enum calp {
    CALP_0,
    CALP_1
} CALP_T ;
#define WRITE_CALP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x3C); \
     WRITE_REGISTER_ULONG(0x3C, (OldValue & ~ CALP_MASK) | ((val << CALP_START_BIT) & CALP_MASK )); \
   } 

#define ENABLE_CALP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG( 0x3C , val |  CALP_MASK ); \
   }

#define DISABLE_CALP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x3C); \
     WRITE_REGISTER_ULONG(0x3C, val & ~CALP_MASK ); \
   } 

#define READ_CALP() \
   ((READ_REGISTER_ULONG(0x3C) & CALP_MASK)  >> CALP_START_BIT)

#define WHEN_CALP_HIGH() \
     if ( READ_CALP() )


#define UNLESS_CALP_HIGH() \
     if (! READ_CALP() )


#define WAIT_CALP_LOW() \
    while ( READ_CALP() );


#define WAIT_CALP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_CALP() && (--___t___ > 0)); }


#define WAIT_CALP_HIGH() \
    while (! READ_CALP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register Tampcr at offset 0x40
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_TAMPCR( y) \
     WRITE_REGISTER_ULONG( 0x40 , y)

#define SET_BITS_TAMPCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  mask ); \
   }

#define CLEAR_BITS_TAMPCR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val & ~mask ); \
   }

#define READ_REGISTER_TAMPCR() \
     READ_REGISTER_ULONG(0x40)

/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register tamper configuration register (TAMPCR) at the offset 0x40, Bits 24:24

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tamper 3 mask flag 
    // 
#define TAMP3MF_MASK 0x1000000U
#define TAMP3MF_OFFSET 24
#define TAMP3MF_START_BIT 24
#define TAMP3MF_WIDTH 1


#define TAMPCR_REG 0x40

typedef enum tamp3mf {
    TAMP_3MF_0,
    TAMP_3MF_1
} TAMP_3MF_T ;
#define WRITE_TAMP3MF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TAMP3MF_MASK) | ((val << TAMP3MF_START_BIT) & TAMP3MF_MASK )); \
   } 

#define ENABLE_TAMP3MF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TAMP3MF_MASK ); \
   }

#define DISABLE_TAMP3MF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TAMP3MF_MASK ); \
   } 

#define READ_TAMP3MF() \
   ((READ_REGISTER_ULONG(0x40) & TAMP3MF_MASK)  >> TAMP3MF_START_BIT)

#define WHEN_TAMP3MF_HIGH() \
     if ( READ_TAMP3MF() )


#define UNLESS_TAMP3MF_HIGH() \
     if (! READ_TAMP3MF() )


#define WAIT_TAMP3MF_LOW() \
    while ( READ_TAMP3MF() );


#define WAIT_TAMP3MF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAMP3MF() && (--___t___ > 0)); }


#define WAIT_TAMP3MF_HIGH() \
    while (! READ_TAMP3MF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register tamper configuration register (TAMPCR) at the offset 0x40, Bits 23:23

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tamper 3 no erase 
    // 
#define TAMP3NOERASE_MASK 0x800000U
#define TAMP3NOERASE_OFFSET 23
#define TAMP3NOERASE_START_BIT 23
#define TAMP3NOERASE_WIDTH 1



typedef enum tamp3noerase {
    TAMP_3NOERASE_0,
    TAMP_3NOERASE_1
} TAMP_3NOERASE_T ;
#define WRITE_TAMP3NOERASE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TAMP3NOERASE_MASK) | ((val << TAMP3NOERASE_START_BIT) & TAMP3NOERASE_MASK )); \
   } 

#define ENABLE_TAMP3NOERASE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TAMP3NOERASE_MASK ); \
   }

#define DISABLE_TAMP3NOERASE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TAMP3NOERASE_MASK ); \
   } 

#define READ_TAMP3NOERASE() \
   ((READ_REGISTER_ULONG(0x40) & TAMP3NOERASE_MASK)  >> TAMP3NOERASE_START_BIT)

#define WHEN_TAMP3NOERASE_HIGH() \
     if ( READ_TAMP3NOERASE() )


#define UNLESS_TAMP3NOERASE_HIGH() \
     if (! READ_TAMP3NOERASE() )


#define WAIT_TAMP3NOERASE_LOW() \
    while ( READ_TAMP3NOERASE() );


#define WAIT_TAMP3NOERASE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAMP3NOERASE() && (--___t___ > 0)); }


#define WAIT_TAMP3NOERASE_HIGH() \
    while (! READ_TAMP3NOERASE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register tamper configuration register (TAMPCR) at the offset 0x40, Bits 22:22

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tamper 3 interrupt enable 
    // 
#define TAMP3IE_MASK 0x400000U
#define TAMP3IE_OFFSET 22
#define TAMP3IE_START_BIT 22
#define TAMP3IE_WIDTH 1



typedef enum tamp3ie {
    TAMP_3IE_0,
    TAMP_3IE_1
} TAMP_3IE_T ;
#define WRITE_TAMP3IE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TAMP3IE_MASK) | ((val << TAMP3IE_START_BIT) & TAMP3IE_MASK )); \
   } 

#define ENABLE_TAMP3IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TAMP3IE_MASK ); \
   }

#define DISABLE_TAMP3IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TAMP3IE_MASK ); \
   } 

#define READ_TAMP3IE() \
   ((READ_REGISTER_ULONG(0x40) & TAMP3IE_MASK)  >> TAMP3IE_START_BIT)

#define WHEN_TAMP3IE_HIGH() \
     if ( READ_TAMP3IE() )


#define UNLESS_TAMP3IE_HIGH() \
     if (! READ_TAMP3IE() )


#define WAIT_TAMP3IE_LOW() \
    while ( READ_TAMP3IE() );


#define WAIT_TAMP3IE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAMP3IE() && (--___t___ > 0)); }


#define WAIT_TAMP3IE_HIGH() \
    while (! READ_TAMP3IE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register tamper configuration register (TAMPCR) at the offset 0x40, Bits 21:21

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tamper 2 mask flag 
    // 
#define TAMP2MF_MASK 0x200000U
#define TAMP2MF_OFFSET 21
#define TAMP2MF_START_BIT 21
#define TAMP2MF_WIDTH 1



typedef enum tamp2mf {
    TAMP_2MF_0,
    TAMP_2MF_1
} TAMP_2MF_T ;
#define WRITE_TAMP2MF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TAMP2MF_MASK) | ((val << TAMP2MF_START_BIT) & TAMP2MF_MASK )); \
   } 

#define ENABLE_TAMP2MF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TAMP2MF_MASK ); \
   }

#define DISABLE_TAMP2MF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TAMP2MF_MASK ); \
   } 

#define READ_TAMP2MF() \
   ((READ_REGISTER_ULONG(0x40) & TAMP2MF_MASK)  >> TAMP2MF_START_BIT)

#define WHEN_TAMP2MF_HIGH() \
     if ( READ_TAMP2MF() )


#define UNLESS_TAMP2MF_HIGH() \
     if (! READ_TAMP2MF() )


#define WAIT_TAMP2MF_LOW() \
    while ( READ_TAMP2MF() );


#define WAIT_TAMP2MF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAMP2MF() && (--___t___ > 0)); }


#define WAIT_TAMP2MF_HIGH() \
    while (! READ_TAMP2MF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register tamper configuration register (TAMPCR) at the offset 0x40, Bits 20:20

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tamper 2 no erase 
    // 
#define TAMP2NOERASE_MASK 0x100000U
#define TAMP2NOERASE_OFFSET 20
#define TAMP2NOERASE_START_BIT 20
#define TAMP2NOERASE_WIDTH 1



typedef enum tamp2noerase {
    TAMP_2NOERASE_0,
    TAMP_2NOERASE_1
} TAMP_2NOERASE_T ;
#define WRITE_TAMP2NOERASE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TAMP2NOERASE_MASK) | ((val << TAMP2NOERASE_START_BIT) & TAMP2NOERASE_MASK )); \
   } 

#define ENABLE_TAMP2NOERASE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TAMP2NOERASE_MASK ); \
   }

#define DISABLE_TAMP2NOERASE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TAMP2NOERASE_MASK ); \
   } 

#define READ_TAMP2NOERASE() \
   ((READ_REGISTER_ULONG(0x40) & TAMP2NOERASE_MASK)  >> TAMP2NOERASE_START_BIT)

#define WHEN_TAMP2NOERASE_HIGH() \
     if ( READ_TAMP2NOERASE() )


#define UNLESS_TAMP2NOERASE_HIGH() \
     if (! READ_TAMP2NOERASE() )


#define WAIT_TAMP2NOERASE_LOW() \
    while ( READ_TAMP2NOERASE() );


#define WAIT_TAMP2NOERASE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAMP2NOERASE() && (--___t___ > 0)); }


#define WAIT_TAMP2NOERASE_HIGH() \
    while (! READ_TAMP2NOERASE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register tamper configuration register (TAMPCR) at the offset 0x40, Bits 19:19

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tamper 2 interrupt enable 
    // 
#define TAMP2IE_MASK 0x80000U
#define TAMP2IE_OFFSET 19
#define TAMP2IE_START_BIT 19
#define TAMP2IE_WIDTH 1



typedef enum tamp2ie {
    TAMP_2IE_0,
    TAMP_2IE_1
} TAMP_2IE_T ;
#define WRITE_TAMP2IE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TAMP2IE_MASK) | ((val << TAMP2IE_START_BIT) & TAMP2IE_MASK )); \
   } 

#define ENABLE_TAMP2IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TAMP2IE_MASK ); \
   }

#define DISABLE_TAMP2IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TAMP2IE_MASK ); \
   } 

#define READ_TAMP2IE() \
   ((READ_REGISTER_ULONG(0x40) & TAMP2IE_MASK)  >> TAMP2IE_START_BIT)

#define WHEN_TAMP2IE_HIGH() \
     if ( READ_TAMP2IE() )


#define UNLESS_TAMP2IE_HIGH() \
     if (! READ_TAMP2IE() )


#define WAIT_TAMP2IE_LOW() \
    while ( READ_TAMP2IE() );


#define WAIT_TAMP2IE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAMP2IE() && (--___t___ > 0)); }


#define WAIT_TAMP2IE_HIGH() \
    while (! READ_TAMP2IE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register tamper configuration register (TAMPCR) at the offset 0x40, Bits 18:18

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tamper 1 mask flag 
    // 
#define TAMP1MF_MASK 0x40000U
#define TAMP1MF_OFFSET 18
#define TAMP1MF_START_BIT 18
#define TAMP1MF_WIDTH 1



typedef enum tamp1mf {
    TAMP_1MF_0,
    TAMP_1MF_1
} TAMP_1MF_T ;
#define WRITE_TAMP1MF(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TAMP1MF_MASK) | ((val << TAMP1MF_START_BIT) & TAMP1MF_MASK )); \
   } 

#define ENABLE_TAMP1MF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TAMP1MF_MASK ); \
   }

#define DISABLE_TAMP1MF() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TAMP1MF_MASK ); \
   } 

#define READ_TAMP1MF() \
   ((READ_REGISTER_ULONG(0x40) & TAMP1MF_MASK)  >> TAMP1MF_START_BIT)

#define WHEN_TAMP1MF_HIGH() \
     if ( READ_TAMP1MF() )


#define UNLESS_TAMP1MF_HIGH() \
     if (! READ_TAMP1MF() )


#define WAIT_TAMP1MF_LOW() \
    while ( READ_TAMP1MF() );


#define WAIT_TAMP1MF_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAMP1MF() && (--___t___ > 0)); }


#define WAIT_TAMP1MF_HIGH() \
    while (! READ_TAMP1MF() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register tamper configuration register (TAMPCR) at the offset 0x40, Bits 17:17

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tamper 1 no erase 
    // 
#define TAMP1NOERASE_MASK 0x20000U
#define TAMP1NOERASE_OFFSET 17
#define TAMP1NOERASE_START_BIT 17
#define TAMP1NOERASE_WIDTH 1



typedef enum tamp1noerase {
    TAMP_1NOERASE_0,
    TAMP_1NOERASE_1
} TAMP_1NOERASE_T ;
#define WRITE_TAMP1NOERASE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TAMP1NOERASE_MASK) | ((val << TAMP1NOERASE_START_BIT) & TAMP1NOERASE_MASK )); \
   } 

#define ENABLE_TAMP1NOERASE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TAMP1NOERASE_MASK ); \
   }

#define DISABLE_TAMP1NOERASE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TAMP1NOERASE_MASK ); \
   } 

#define READ_TAMP1NOERASE() \
   ((READ_REGISTER_ULONG(0x40) & TAMP1NOERASE_MASK)  >> TAMP1NOERASE_START_BIT)

#define WHEN_TAMP1NOERASE_HIGH() \
     if ( READ_TAMP1NOERASE() )


#define UNLESS_TAMP1NOERASE_HIGH() \
     if (! READ_TAMP1NOERASE() )


#define WAIT_TAMP1NOERASE_LOW() \
    while ( READ_TAMP1NOERASE() );


#define WAIT_TAMP1NOERASE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAMP1NOERASE() && (--___t___ > 0)); }


#define WAIT_TAMP1NOERASE_HIGH() \
    while (! READ_TAMP1NOERASE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register tamper configuration register (TAMPCR) at the offset 0x40, Bits 16:16

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tamper 1 interrupt enable 
    // 
#define TAMP1IE_MASK 0x10000U
#define TAMP1IE_OFFSET 16
#define TAMP1IE_START_BIT 16
#define TAMP1IE_WIDTH 1



typedef enum tamp1ie {
    TAMP_1IE_0,
    TAMP_1IE_1
} TAMP_1IE_T ;
#define WRITE_TAMP1IE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TAMP1IE_MASK) | ((val << TAMP1IE_START_BIT) & TAMP1IE_MASK )); \
   } 

#define ENABLE_TAMP1IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TAMP1IE_MASK ); \
   }

#define DISABLE_TAMP1IE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TAMP1IE_MASK ); \
   } 

#define READ_TAMP1IE() \
   ((READ_REGISTER_ULONG(0x40) & TAMP1IE_MASK)  >> TAMP1IE_START_BIT)

#define WHEN_TAMP1IE_HIGH() \
     if ( READ_TAMP1IE() )


#define UNLESS_TAMP1IE_HIGH() \
     if (! READ_TAMP1IE() )


#define WAIT_TAMP1IE_LOW() \
    while ( READ_TAMP1IE() );


#define WAIT_TAMP1IE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAMP1IE() && (--___t___ > 0)); }


#define WAIT_TAMP1IE_HIGH() \
    while (! READ_TAMP1IE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register tamper configuration register (TAMPCR) at the offset 0x40, Bits 15:15

//
/////////////////////////////////////////////////////////////////////////

    // 
    // TAMPER pull-up disable 
    // 
#define TAMPPUDIS_MASK 0x8000U
#define TAMPPUDIS_OFFSET 15
#define TAMPPUDIS_START_BIT 15
#define TAMPPUDIS_WIDTH 1



typedef enum tamppudis {
    TAMPPUDIS_0,
    TAMPPUDIS_1
} TAMPPUDIS_T ;
#define WRITE_TAMPPUDIS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TAMPPUDIS_MASK) | ((val << TAMPPUDIS_START_BIT) & TAMPPUDIS_MASK )); \
   } 

#define ENABLE_TAMPPUDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TAMPPUDIS_MASK ); \
   }

#define DISABLE_TAMPPUDIS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TAMPPUDIS_MASK ); \
   } 

#define READ_TAMPPUDIS() \
   ((READ_REGISTER_ULONG(0x40) & TAMPPUDIS_MASK)  >> TAMPPUDIS_START_BIT)

#define WHEN_TAMPPUDIS_HIGH() \
     if ( READ_TAMPPUDIS() )


#define UNLESS_TAMPPUDIS_HIGH() \
     if (! READ_TAMPPUDIS() )


#define WAIT_TAMPPUDIS_LOW() \
    while ( READ_TAMPPUDIS() );


#define WAIT_TAMPPUDIS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAMPPUDIS() && (--___t___ > 0)); }


#define WAIT_TAMPPUDIS_HIGH() \
    while (! READ_TAMPPUDIS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register tamper configuration register (TAMPCR) at the offset 0x40, Bits 13:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tamper precharge duration 
    // 
#define TAMPPRCH_MASK 0x6000U
#define TAMPPRCH_OFFSET 14
#define TAMPPRCH_START_BIT 13
#define TAMPPRCH_WIDTH 2



typedef enum tampprch {
    TAMPPRCH_0,
    TAMPPRCH_1
} TAMPPRCH_T ;
#define READ_TAMPPRCH() \
   ((READ_REGISTER_ULONG(0x40) & TAMPPRCH_MASK)  >> TAMPPRCH_START_BIT)

#define WRITE_TAMPPRCH(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TAMPPRCH_MASK) | ((val << TAMPPRCH_START_BIT) & TAMPPRCH_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register tamper configuration register (TAMPCR) at the offset 0x40, Bits 11:12

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tamper filter count 
    // 
#define TAMPFLT_MASK 0x1800U
#define TAMPFLT_OFFSET 12
#define TAMPFLT_START_BIT 11
#define TAMPFLT_WIDTH 2



typedef enum tampflt {
    TAMPFLT_0,
    TAMPFLT_1
} TAMPFLT_T ;
#define READ_TAMPFLT() \
   ((READ_REGISTER_ULONG(0x40) & TAMPFLT_MASK)  >> TAMPFLT_START_BIT)

#define WRITE_TAMPFLT(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TAMPFLT_MASK) | ((val << TAMPFLT_START_BIT) & TAMPFLT_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register tamper configuration register (TAMPCR) at the offset 0x40, Bits 8:10

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tamper sampling frequency 
    // 
#define TAMPFREQ_MASK 0x700U
#define TAMPFREQ_OFFSET 10
#define TAMPFREQ_START_BIT 8
#define TAMPFREQ_WIDTH 3



typedef enum tampfreq {
    TAMPFREQ_0,
    TAMPFREQ_1
} TAMPFREQ_T ;
#define READ_TAMPFREQ() \
   ((READ_REGISTER_ULONG(0x40) & TAMPFREQ_MASK)  >> TAMPFREQ_START_BIT)

#define WRITE_TAMPFREQ(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TAMPFREQ_MASK) | ((val << TAMPFREQ_START_BIT) & TAMPFREQ_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register tamper configuration register (TAMPCR) at the offset 0x40, Bits 7:7

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Activate timestamp on tamper detection event 
    // 
#define TAMPTS_MASK 0x80U
#define TAMPTS_OFFSET 7
#define TAMPTS_START_BIT 7
#define TAMPTS_WIDTH 1



typedef enum tampts {
    TAMPTS_0,
    TAMPTS_1
} TAMPTS_T ;
#define WRITE_TAMPTS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TAMPTS_MASK) | ((val << TAMPTS_START_BIT) & TAMPTS_MASK )); \
   } 

#define ENABLE_TAMPTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TAMPTS_MASK ); \
   }

#define DISABLE_TAMPTS() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TAMPTS_MASK ); \
   } 

#define READ_TAMPTS() \
   ((READ_REGISTER_ULONG(0x40) & TAMPTS_MASK)  >> TAMPTS_START_BIT)

#define WHEN_TAMPTS_HIGH() \
     if ( READ_TAMPTS() )


#define UNLESS_TAMPTS_HIGH() \
     if (! READ_TAMPTS() )


#define WAIT_TAMPTS_LOW() \
    while ( READ_TAMPTS() );


#define WAIT_TAMPTS_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAMPTS() && (--___t___ > 0)); }


#define WAIT_TAMPTS_HIGH() \
    while (! READ_TAMPTS() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register tamper configuration register (TAMPCR) at the offset 0x40, Bits 6:6

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Active level for tamper 3 
    // 
#define TAMP3TRG_MASK 0x40U
#define TAMP3TRG_OFFSET 6
#define TAMP3TRG_START_BIT 6
#define TAMP3TRG_WIDTH 1



typedef enum tamp3trg {
    TAMP_3TRG_0,
    TAMP_3TRG_1
} TAMP_3TRG_T ;
#define WRITE_TAMP3TRG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TAMP3TRG_MASK) | ((val << TAMP3TRG_START_BIT) & TAMP3TRG_MASK )); \
   } 

#define ENABLE_TAMP3TRG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TAMP3TRG_MASK ); \
   }

#define DISABLE_TAMP3TRG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TAMP3TRG_MASK ); \
   } 

#define READ_TAMP3TRG() \
   ((READ_REGISTER_ULONG(0x40) & TAMP3TRG_MASK)  >> TAMP3TRG_START_BIT)

#define WHEN_TAMP3TRG_HIGH() \
     if ( READ_TAMP3TRG() )


#define UNLESS_TAMP3TRG_HIGH() \
     if (! READ_TAMP3TRG() )


#define WAIT_TAMP3TRG_LOW() \
    while ( READ_TAMP3TRG() );


#define WAIT_TAMP3TRG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAMP3TRG() && (--___t___ > 0)); }


#define WAIT_TAMP3TRG_HIGH() \
    while (! READ_TAMP3TRG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register tamper configuration register (TAMPCR) at the offset 0x40, Bits 5:5

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tamper 3 detection enable 
    // 
#define TAMP3E_MASK 0x20U
#define TAMP3E_OFFSET 5
#define TAMP3E_START_BIT 5
#define TAMP3E_WIDTH 1



typedef enum tamp3e {
    TAMP_3E_0,
    TAMP_3E_1
} TAMP_3E_T ;
#define WRITE_TAMP3E(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TAMP3E_MASK) | ((val << TAMP3E_START_BIT) & TAMP3E_MASK )); \
   } 

#define ENABLE_TAMP3E() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TAMP3E_MASK ); \
   }

#define DISABLE_TAMP3E() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TAMP3E_MASK ); \
   } 

#define READ_TAMP3E() \
   ((READ_REGISTER_ULONG(0x40) & TAMP3E_MASK)  >> TAMP3E_START_BIT)

#define WHEN_TAMP3E_HIGH() \
     if ( READ_TAMP3E() )


#define UNLESS_TAMP3E_HIGH() \
     if (! READ_TAMP3E() )


#define WAIT_TAMP3E_LOW() \
    while ( READ_TAMP3E() );


#define WAIT_TAMP3E_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAMP3E() && (--___t___ > 0)); }


#define WAIT_TAMP3E_HIGH() \
    while (! READ_TAMP3E() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register tamper configuration register (TAMPCR) at the offset 0x40, Bits 4:4

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Active level for tamper 2 
    // 
#define TAMP2TRG_MASK 0x10U
#define TAMP2TRG_OFFSET 4
#define TAMP2TRG_START_BIT 4
#define TAMP2TRG_WIDTH 1



typedef enum tamp2trg {
    TAMP_2TRG_0,
    TAMP_2TRG_1
} TAMP_2TRG_T ;
#define WRITE_TAMP2TRG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TAMP2TRG_MASK) | ((val << TAMP2TRG_START_BIT) & TAMP2TRG_MASK )); \
   } 

#define ENABLE_TAMP2TRG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TAMP2TRG_MASK ); \
   }

#define DISABLE_TAMP2TRG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TAMP2TRG_MASK ); \
   } 

#define READ_TAMP2TRG() \
   ((READ_REGISTER_ULONG(0x40) & TAMP2TRG_MASK)  >> TAMP2TRG_START_BIT)

#define WHEN_TAMP2TRG_HIGH() \
     if ( READ_TAMP2TRG() )


#define UNLESS_TAMP2TRG_HIGH() \
     if (! READ_TAMP2TRG() )


#define WAIT_TAMP2TRG_LOW() \
    while ( READ_TAMP2TRG() );


#define WAIT_TAMP2TRG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAMP2TRG() && (--___t___ > 0)); }


#define WAIT_TAMP2TRG_HIGH() \
    while (! READ_TAMP2TRG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register tamper configuration register (TAMPCR) at the offset 0x40, Bits 3:3

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tamper 2 detection enable 
    // 
#define TAMP2E_MASK 0x8U
#define TAMP2E_OFFSET 3
#define TAMP2E_START_BIT 3
#define TAMP2E_WIDTH 1



typedef enum tamp2e {
    TAMP_2E_0,
    TAMP_2E_1
} TAMP_2E_T ;
#define WRITE_TAMP2E(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TAMP2E_MASK) | ((val << TAMP2E_START_BIT) & TAMP2E_MASK )); \
   } 

#define ENABLE_TAMP2E() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TAMP2E_MASK ); \
   }

#define DISABLE_TAMP2E() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TAMP2E_MASK ); \
   } 

#define READ_TAMP2E() \
   ((READ_REGISTER_ULONG(0x40) & TAMP2E_MASK)  >> TAMP2E_START_BIT)

#define WHEN_TAMP2E_HIGH() \
     if ( READ_TAMP2E() )


#define UNLESS_TAMP2E_HIGH() \
     if (! READ_TAMP2E() )


#define WAIT_TAMP2E_LOW() \
    while ( READ_TAMP2E() );


#define WAIT_TAMP2E_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAMP2E() && (--___t___ > 0)); }


#define WAIT_TAMP2E_HIGH() \
    while (! READ_TAMP2E() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register tamper configuration register (TAMPCR) at the offset 0x40, Bits 2:2

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tamper interrupt enable 
    // 
#define TAMPIE_MASK 0x4U
#define TAMPIE_OFFSET 2
#define TAMPIE_START_BIT 2
#define TAMPIE_WIDTH 1



typedef enum tampie {
    TAMPIE_0,
    TAMPIE_1
} TAMPIE_T ;
#define WRITE_TAMPIE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TAMPIE_MASK) | ((val << TAMPIE_START_BIT) & TAMPIE_MASK )); \
   } 

#define ENABLE_TAMPIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TAMPIE_MASK ); \
   }

#define DISABLE_TAMPIE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TAMPIE_MASK ); \
   } 

#define READ_TAMPIE() \
   ((READ_REGISTER_ULONG(0x40) & TAMPIE_MASK)  >> TAMPIE_START_BIT)

#define WHEN_TAMPIE_HIGH() \
     if ( READ_TAMPIE() )


#define UNLESS_TAMPIE_HIGH() \
     if (! READ_TAMPIE() )


#define WAIT_TAMPIE_LOW() \
    while ( READ_TAMPIE() );


#define WAIT_TAMPIE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAMPIE() && (--___t___ > 0)); }


#define WAIT_TAMPIE_HIGH() \
    while (! READ_TAMPIE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register tamper configuration register (TAMPCR) at the offset 0x40, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Active level for tamper 1 
    // 
#define TAMP1TRG_MASK 0x2U
#define TAMP1TRG_OFFSET 1
#define TAMP1TRG_START_BIT 1
#define TAMP1TRG_WIDTH 1



typedef enum tamp1trg {
    TAMP_1TRG_0,
    TAMP_1TRG_1
} TAMP_1TRG_T ;
#define WRITE_TAMP1TRG(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TAMP1TRG_MASK) | ((val << TAMP1TRG_START_BIT) & TAMP1TRG_MASK )); \
   } 

#define ENABLE_TAMP1TRG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TAMP1TRG_MASK ); \
   }

#define DISABLE_TAMP1TRG() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TAMP1TRG_MASK ); \
   } 

#define READ_TAMP1TRG() \
   ((READ_REGISTER_ULONG(0x40) & TAMP1TRG_MASK)  >> TAMP1TRG_START_BIT)

#define WHEN_TAMP1TRG_HIGH() \
     if ( READ_TAMP1TRG() )


#define UNLESS_TAMP1TRG_HIGH() \
     if (! READ_TAMP1TRG() )


#define WAIT_TAMP1TRG_LOW() \
    while ( READ_TAMP1TRG() );


#define WAIT_TAMP1TRG_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAMP1TRG() && (--___t___ > 0)); }


#define WAIT_TAMP1TRG_HIGH() \
    while (! READ_TAMP1TRG() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Tampcr
//
// Return the value of register TAMPCR
//
// Notes : Register tamper configuration register (TAMPCR) at the offset 0x40, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Tamper 1 detection enable 
    // 
#define TAMP1E_MASK 0x1U
#define TAMP1E_OFFSET 0
#define TAMP1E_START_BIT 0
#define TAMP1E_WIDTH 1



typedef enum tamp1e {
    TAMP_1E_0,
    TAMP_1E_1
} TAMP_1E_T ;
#define WRITE_TAMP1E(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x40); \
     WRITE_REGISTER_ULONG(0x40, (OldValue & ~ TAMP1E_MASK) | ((val << TAMP1E_START_BIT) & TAMP1E_MASK )); \
   } 

#define ENABLE_TAMP1E() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG( 0x40 , val |  TAMP1E_MASK ); \
   }

#define DISABLE_TAMP1E() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x40); \
     WRITE_REGISTER_ULONG(0x40, val & ~TAMP1E_MASK ); \
   } 

#define READ_TAMP1E() \
   ((READ_REGISTER_ULONG(0x40) & TAMP1E_MASK)  >> TAMP1E_START_BIT)

#define WHEN_TAMP1E_HIGH() \
     if ( READ_TAMP1E() )


#define UNLESS_TAMP1E_HIGH() \
     if (! READ_TAMP1E() )


#define WAIT_TAMP1E_LOW() \
    while ( READ_TAMP1E() );


#define WAIT_TAMP1E_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_TAMP1E() && (--___t___ > 0)); }


#define WAIT_TAMP1E_HIGH() \
    while (! READ_TAMP1E() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmassr
//
// Return the value of register ALRMASSR
//
// Notes : Register Alrmassr at offset 0x44
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ALRMASSR( y) \
     WRITE_REGISTER_ULONG( 0x44 , y)

#define SET_BITS_ALRMASSR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val |  mask ); \
   }

#define CLEAR_BITS_ALRMASSR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x44); \
     WRITE_REGISTER_ULONG( 0x44 , val & ~mask ); \
   }

#define READ_REGISTER_ALRMASSR() \
     READ_REGISTER_ULONG(0x44)

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmassr
//
// Return the value of register ALRMASSR
//
// Notes : Register alarm A sub second register (ALRMASSR) at the offset 0x44, Bits 0:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Sub seconds value 
    // 
#define SS_MASK 0x7FFFU
#define SS_OFFSET 14
#define SS_START_BIT 0
#define SS_WIDTH 15


#define ALRMASSR_REG 0x44

#define READ_SS() \
   ((READ_REGISTER_ULONG(0x44) & SS_MASK)  >> SS_START_BIT)

#define WRITE_SS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ SS_MASK) | ((val << SS_START_BIT) & SS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmassr
//
// Return the value of register ALRMASSR
//
// Notes : Register alarm A sub second register (ALRMASSR) at the offset 0x44, Bits 24:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mask the most-significant bits starting at this bit 
    // 
#define MASKSS_MASK 0xF000000U
#define MASKSS_OFFSET 27
#define MASKSS_START_BIT 24
#define MASKSS_WIDTH 4



typedef enum maskss {
    MASKSS_0,
    MASKSS_1
} MASKSS_T ;
#define READ_MASKSS() \
   ((READ_REGISTER_ULONG(0x44) & MASKSS_MASK)  >> MASKSS_START_BIT)

#define WRITE_MASKSS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x44); \
     WRITE_REGISTER_ULONG(0x44, (OldValue & ~ MASKSS_MASK) | ((val << MASKSS_START_BIT) & MASKSS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmbssr
//
// Return the value of register ALRMBSSR
//
// Notes : Register Alrmbssr at offset 0x48
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_ALRMBSSR( y) \
     WRITE_REGISTER_ULONG( 0x48 , y)

#define SET_BITS_ALRMBSSR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val |  mask ); \
   }

#define CLEAR_BITS_ALRMBSSR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x48); \
     WRITE_REGISTER_ULONG( 0x48 , val & ~mask ); \
   }

#define READ_REGISTER_ALRMBSSR() \
     READ_REGISTER_ULONG(0x48)

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmbssr
//
// Return the value of register ALRMBSSR
//
// Notes : Register alarm B sub second register (ALRMBSSR) at the offset 0x48, Bits 0:14

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Sub seconds value 
    // 
#define SS_MASK 0x7FFFU
#define SS_OFFSET 14
#define SS_START_BIT 0
#define SS_WIDTH 15


#define ALRMBSSR_REG 0x48

#define READ_SS() \
   ((READ_REGISTER_ULONG(0x48) & SS_MASK)  >> SS_START_BIT)

#define WRITE_SS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ SS_MASK) | ((val << SS_START_BIT) & SS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Alrmbssr
//
// Return the value of register ALRMBSSR
//
// Notes : Register alarm B sub second register (ALRMBSSR) at the offset 0x48, Bits 24:27

//
/////////////////////////////////////////////////////////////////////////

    // 
    // Mask the most-significant bits starting at this bit 
    // 
#define MASKSS_MASK 0xF000000U
#define MASKSS_OFFSET 27
#define MASKSS_START_BIT 24
#define MASKSS_WIDTH 4



#define READ_MASKSS() \
   ((READ_REGISTER_ULONG(0x48) & MASKSS_MASK)  >> MASKSS_START_BIT)

#define WRITE_MASKSS(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x48); \
     WRITE_REGISTER_ULONG(0x48, (OldValue & ~ MASKSS_MASK) | ((val << MASKSS_START_BIT) & MASKSS_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Or
//
// Return the value of register OR
//
// Notes : Register Or at offset 0x4C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_OR( y) \
     WRITE_REGISTER_ULONG( 0x4C , y)

#define SET_BITS_OR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  mask ); \
   }

#define CLEAR_BITS_OR(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val & ~mask ); \
   }

#define READ_REGISTER_OR() \
     READ_REGISTER_ULONG(0x4C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Or
//
// Return the value of register OR
//
// Notes : Register option register (OR) at the offset 0x4C, Bits 1:1

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RTC_OUT remap 
    // 
#define RTC_OUT_RMP_MASK 0x2U
#define RTC_OUT_RMP_OFFSET 1
#define RTC_OUT_RMP_START_BIT 1
#define RTC_OUT_RMP_WIDTH 1


#define OR_REG 0x4C

typedef enum rtc_out_rmp {
    RTC_OUT_RMP_0,
    RTC_OUT_RMP_1
} RTC_OUT_RMP_T ;
#define WRITE_RTC_OUT_RMP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ RTC_OUT_RMP_MASK) | ((val << RTC_OUT_RMP_START_BIT) & RTC_OUT_RMP_MASK )); \
   } 

#define ENABLE_RTC_OUT_RMP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  RTC_OUT_RMP_MASK ); \
   }

#define DISABLE_RTC_OUT_RMP() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~RTC_OUT_RMP_MASK ); \
   } 

#define READ_RTC_OUT_RMP() \
   ((READ_REGISTER_ULONG(0x4C) & RTC_OUT_RMP_MASK)  >> RTC_OUT_RMP_START_BIT)

#define WHEN_RTC_OUT_RMP_HIGH() \
     if ( READ_RTC_OUT_RMP() )


#define UNLESS_RTC_OUT_RMP_HIGH() \
     if (! READ_RTC_OUT_RMP() )


#define WAIT_RTC_OUT_RMP_LOW() \
    while ( READ_RTC_OUT_RMP() );


#define WAIT_RTC_OUT_RMP_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RTC_OUT_RMP() && (--___t___ > 0)); }


#define WAIT_RTC_OUT_RMP_HIGH() \
    while (! READ_RTC_OUT_RMP() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Or
//
// Return the value of register OR
//
// Notes : Register option register (OR) at the offset 0x4C, Bits 0:0

//
/////////////////////////////////////////////////////////////////////////

    // 
    // RTC_ALARM on PC13 output type 
    // 
#define RTC_ALARM_TYPE_MASK 0x1U
#define RTC_ALARM_TYPE_OFFSET 0
#define RTC_ALARM_TYPE_START_BIT 0
#define RTC_ALARM_TYPE_WIDTH 1



typedef enum rtc_alarm_type {
    RTC_ALARM_TYPE_0,
    RTC_ALARM_TYPE_1
} RTC_ALARM_TYPE_T ;
#define WRITE_RTC_ALARM_TYPE(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x4C); \
     WRITE_REGISTER_ULONG(0x4C, (OldValue & ~ RTC_ALARM_TYPE_MASK) | ((val << RTC_ALARM_TYPE_START_BIT) & RTC_ALARM_TYPE_MASK )); \
   } 

#define ENABLE_RTC_ALARM_TYPE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG( 0x4C , val |  RTC_ALARM_TYPE_MASK ); \
   }

#define DISABLE_RTC_ALARM_TYPE() \
   {\
     ULONG val = READ_REGISTER_ULONG(0x4C); \
     WRITE_REGISTER_ULONG(0x4C, val & ~RTC_ALARM_TYPE_MASK ); \
   } 

#define READ_RTC_ALARM_TYPE() \
   ((READ_REGISTER_ULONG(0x4C) & RTC_ALARM_TYPE_MASK)  >> RTC_ALARM_TYPE_START_BIT)

#define WHEN_RTC_ALARM_TYPE_HIGH() \
     if ( READ_RTC_ALARM_TYPE() )


#define UNLESS_RTC_ALARM_TYPE_HIGH() \
     if (! READ_RTC_ALARM_TYPE() )


#define WAIT_RTC_ALARM_TYPE_LOW() \
    while ( READ_RTC_ALARM_TYPE() );


#define WAIT_RTC_ALARM_TYPE_LOW_WITH_TIMEOUT(timeout) \
   { unsigned long ___t___ = timeout; while ( READ_RTC_ALARM_TYPE() && (--___t___ > 0)); }


#define WAIT_RTC_ALARM_TYPE_HIGH() \
    while (! READ_RTC_ALARM_TYPE() );


/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp0r
//
// Return the value of register BKP0R
//
// Notes : Register Bkp0r at offset 0x50
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_0R( y) \
     WRITE_REGISTER_ULONG( 0x50 , y)

#define SET_BITS_BKP_0R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_0R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x50); \
     WRITE_REGISTER_ULONG( 0x50 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_0R() \
     READ_REGISTER_ULONG(0x50)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp0r
//
// Return the value of register BKP_0R
//
// Notes : Register backup register (BKP0R) at the offset 0x50, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_0R_REG 0x50

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0x50) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x50); \
     WRITE_REGISTER_ULONG(0x50, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp1r
//
// Return the value of register BKP1R
//
// Notes : Register Bkp1r at offset 0x54
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_1R( y) \
     WRITE_REGISTER_ULONG( 0x54 , y)

#define SET_BITS_BKP_1R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_1R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x54); \
     WRITE_REGISTER_ULONG( 0x54 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_1R() \
     READ_REGISTER_ULONG(0x54)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp1r
//
// Return the value of register BKP_1R
//
// Notes : Register backup register (BKP1R) at the offset 0x54, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_1R_REG 0x54

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0x54) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x54); \
     WRITE_REGISTER_ULONG(0x54, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp2r
//
// Return the value of register BKP2R
//
// Notes : Register Bkp2r at offset 0x58
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_2R( y) \
     WRITE_REGISTER_ULONG( 0x58 , y)

#define SET_BITS_BKP_2R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG( 0x58 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_2R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x58); \
     WRITE_REGISTER_ULONG( 0x58 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_2R() \
     READ_REGISTER_ULONG(0x58)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp2r
//
// Return the value of register BKP_2R
//
// Notes : Register backup register (BKP2R) at the offset 0x58, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_2R_REG 0x58

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0x58) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x58); \
     WRITE_REGISTER_ULONG(0x58, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp3r
//
// Return the value of register BKP3R
//
// Notes : Register Bkp3r at offset 0x5C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_3R( y) \
     WRITE_REGISTER_ULONG( 0x5C , y)

#define SET_BITS_BKP_3R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x5C); \
     WRITE_REGISTER_ULONG( 0x5C , val |  mask ); \
   }

#define CLEAR_BITS_BKP_3R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x5C); \
     WRITE_REGISTER_ULONG( 0x5C , val & ~mask ); \
   }

#define READ_REGISTER_BKP_3R() \
     READ_REGISTER_ULONG(0x5C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp3r
//
// Return the value of register BKP_3R
//
// Notes : Register backup register (BKP3R) at the offset 0x5C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_3R_REG 0x5C

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0x5C) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x5C); \
     WRITE_REGISTER_ULONG(0x5C, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp4r
//
// Return the value of register BKP4R
//
// Notes : Register Bkp4r at offset 0x60
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_4R( y) \
     WRITE_REGISTER_ULONG( 0x60 , y)

#define SET_BITS_BKP_4R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_4R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x60); \
     WRITE_REGISTER_ULONG( 0x60 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_4R() \
     READ_REGISTER_ULONG(0x60)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp4r
//
// Return the value of register BKP_4R
//
// Notes : Register backup register (BKP4R) at the offset 0x60, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_4R_REG 0x60

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0x60) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x60); \
     WRITE_REGISTER_ULONG(0x60, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp5r
//
// Return the value of register BKP5R
//
// Notes : Register Bkp5r at offset 0x64
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_5R( y) \
     WRITE_REGISTER_ULONG( 0x64 , y)

#define SET_BITS_BKP_5R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_5R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x64); \
     WRITE_REGISTER_ULONG( 0x64 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_5R() \
     READ_REGISTER_ULONG(0x64)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp5r
//
// Return the value of register BKP_5R
//
// Notes : Register backup register (BKP5R) at the offset 0x64, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_5R_REG 0x64

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0x64) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x64); \
     WRITE_REGISTER_ULONG(0x64, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp6r
//
// Return the value of register BKP6R
//
// Notes : Register Bkp6r at offset 0x68
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_6R( y) \
     WRITE_REGISTER_ULONG( 0x68 , y)

#define SET_BITS_BKP_6R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x68); \
     WRITE_REGISTER_ULONG( 0x68 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_6R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x68); \
     WRITE_REGISTER_ULONG( 0x68 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_6R() \
     READ_REGISTER_ULONG(0x68)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp6r
//
// Return the value of register BKP_6R
//
// Notes : Register backup register (BKP6R) at the offset 0x68, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_6R_REG 0x68

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0x68) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x68); \
     WRITE_REGISTER_ULONG(0x68, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp7r
//
// Return the value of register BKP7R
//
// Notes : Register Bkp7r at offset 0x6C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_7R( y) \
     WRITE_REGISTER_ULONG( 0x6C , y)

#define SET_BITS_BKP_7R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x6C); \
     WRITE_REGISTER_ULONG( 0x6C , val |  mask ); \
   }

#define CLEAR_BITS_BKP_7R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x6C); \
     WRITE_REGISTER_ULONG( 0x6C , val & ~mask ); \
   }

#define READ_REGISTER_BKP_7R() \
     READ_REGISTER_ULONG(0x6C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp7r
//
// Return the value of register BKP_7R
//
// Notes : Register backup register (BKP7R) at the offset 0x6C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_7R_REG 0x6C

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0x6C) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x6C); \
     WRITE_REGISTER_ULONG(0x6C, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp8r
//
// Return the value of register BKP8R
//
// Notes : Register Bkp8r at offset 0x70
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_8R( y) \
     WRITE_REGISTER_ULONG( 0x70 , y)

#define SET_BITS_BKP_8R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x70); \
     WRITE_REGISTER_ULONG( 0x70 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_8R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x70); \
     WRITE_REGISTER_ULONG( 0x70 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_8R() \
     READ_REGISTER_ULONG(0x70)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp8r
//
// Return the value of register BKP_8R
//
// Notes : Register backup register (BKP8R) at the offset 0x70, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_8R_REG 0x70

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0x70) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x70); \
     WRITE_REGISTER_ULONG(0x70, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp9r
//
// Return the value of register BKP9R
//
// Notes : Register Bkp9r at offset 0x74
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_9R( y) \
     WRITE_REGISTER_ULONG( 0x74 , y)

#define SET_BITS_BKP_9R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG( 0x74 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_9R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x74); \
     WRITE_REGISTER_ULONG( 0x74 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_9R() \
     READ_REGISTER_ULONG(0x74)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp9r
//
// Return the value of register BKP_9R
//
// Notes : Register backup register (BKP9R) at the offset 0x74, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_9R_REG 0x74

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0x74) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x74); \
     WRITE_REGISTER_ULONG(0x74, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp10r
//
// Return the value of register BKP10R
//
// Notes : Register Bkp10r at offset 0x78
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_1_0R( y) \
     WRITE_REGISTER_ULONG( 0x78 , y)

#define SET_BITS_BKP_1_0R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x78); \
     WRITE_REGISTER_ULONG( 0x78 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_1_0R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x78); \
     WRITE_REGISTER_ULONG( 0x78 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_1_0R() \
     READ_REGISTER_ULONG(0x78)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp10r
//
// Return the value of register BKP_1_0R
//
// Notes : Register backup register (BKP10R) at the offset 0x78, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_1_0R_REG 0x78

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0x78) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x78); \
     WRITE_REGISTER_ULONG(0x78, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp11r
//
// Return the value of register BKP11R
//
// Notes : Register Bkp11r at offset 0x7C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_1_1R( y) \
     WRITE_REGISTER_ULONG( 0x7C , y)

#define SET_BITS_BKP_1_1R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x7C); \
     WRITE_REGISTER_ULONG( 0x7C , val |  mask ); \
   }

#define CLEAR_BITS_BKP_1_1R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x7C); \
     WRITE_REGISTER_ULONG( 0x7C , val & ~mask ); \
   }

#define READ_REGISTER_BKP_1_1R() \
     READ_REGISTER_ULONG(0x7C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp11r
//
// Return the value of register BKP_1_1R
//
// Notes : Register backup register (BKP11R) at the offset 0x7C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_1_1R_REG 0x7C

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0x7C) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x7C); \
     WRITE_REGISTER_ULONG(0x7C, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp12r
//
// Return the value of register BKP12R
//
// Notes : Register Bkp12r at offset 0x80
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_1_2R( y) \
     WRITE_REGISTER_ULONG( 0x80 , y)

#define SET_BITS_BKP_1_2R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG( 0x80 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_1_2R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x80); \
     WRITE_REGISTER_ULONG( 0x80 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_1_2R() \
     READ_REGISTER_ULONG(0x80)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp12r
//
// Return the value of register BKP_1_2R
//
// Notes : Register backup register (BKP12R) at the offset 0x80, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_1_2R_REG 0x80

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0x80) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x80); \
     WRITE_REGISTER_ULONG(0x80, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp13r
//
// Return the value of register BKP13R
//
// Notes : Register Bkp13r at offset 0x84
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_1_3R( y) \
     WRITE_REGISTER_ULONG( 0x84 , y)

#define SET_BITS_BKP_1_3R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG( 0x84 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_1_3R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x84); \
     WRITE_REGISTER_ULONG( 0x84 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_1_3R() \
     READ_REGISTER_ULONG(0x84)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp13r
//
// Return the value of register BKP_1_3R
//
// Notes : Register backup register (BKP13R) at the offset 0x84, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_1_3R_REG 0x84

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0x84) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x84); \
     WRITE_REGISTER_ULONG(0x84, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp14r
//
// Return the value of register BKP14R
//
// Notes : Register Bkp14r at offset 0x88
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_1_4R( y) \
     WRITE_REGISTER_ULONG( 0x88 , y)

#define SET_BITS_BKP_1_4R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x88); \
     WRITE_REGISTER_ULONG( 0x88 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_1_4R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x88); \
     WRITE_REGISTER_ULONG( 0x88 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_1_4R() \
     READ_REGISTER_ULONG(0x88)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp14r
//
// Return the value of register BKP_1_4R
//
// Notes : Register backup register (BKP14R) at the offset 0x88, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_1_4R_REG 0x88

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0x88) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x88); \
     WRITE_REGISTER_ULONG(0x88, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp15r
//
// Return the value of register BKP15R
//
// Notes : Register Bkp15r at offset 0x8C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_1_5R( y) \
     WRITE_REGISTER_ULONG( 0x8C , y)

#define SET_BITS_BKP_1_5R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8C); \
     WRITE_REGISTER_ULONG( 0x8C , val |  mask ); \
   }

#define CLEAR_BITS_BKP_1_5R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x8C); \
     WRITE_REGISTER_ULONG( 0x8C , val & ~mask ); \
   }

#define READ_REGISTER_BKP_1_5R() \
     READ_REGISTER_ULONG(0x8C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp15r
//
// Return the value of register BKP_1_5R
//
// Notes : Register backup register (BKP15R) at the offset 0x8C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_1_5R_REG 0x8C

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0x8C) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x8C); \
     WRITE_REGISTER_ULONG(0x8C, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp16r
//
// Return the value of register BKP16R
//
// Notes : Register Bkp16r at offset 0x90
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_1_6R( y) \
     WRITE_REGISTER_ULONG( 0x90 , y)

#define SET_BITS_BKP_1_6R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x90); \
     WRITE_REGISTER_ULONG( 0x90 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_1_6R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x90); \
     WRITE_REGISTER_ULONG( 0x90 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_1_6R() \
     READ_REGISTER_ULONG(0x90)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp16r
//
// Return the value of register BKP_1_6R
//
// Notes : Register backup register (BKP16R) at the offset 0x90, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_1_6R_REG 0x90

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0x90) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x90); \
     WRITE_REGISTER_ULONG(0x90, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp17r
//
// Return the value of register BKP17R
//
// Notes : Register Bkp17r at offset 0x94
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_1_7R( y) \
     WRITE_REGISTER_ULONG( 0x94 , y)

#define SET_BITS_BKP_1_7R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x94); \
     WRITE_REGISTER_ULONG( 0x94 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_1_7R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x94); \
     WRITE_REGISTER_ULONG( 0x94 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_1_7R() \
     READ_REGISTER_ULONG(0x94)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp17r
//
// Return the value of register BKP_1_7R
//
// Notes : Register backup register (BKP17R) at the offset 0x94, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_1_7R_REG 0x94

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0x94) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x94); \
     WRITE_REGISTER_ULONG(0x94, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp18r
//
// Return the value of register BKP18R
//
// Notes : Register Bkp18r at offset 0x98
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_1_8R( y) \
     WRITE_REGISTER_ULONG( 0x98 , y)

#define SET_BITS_BKP_1_8R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x98); \
     WRITE_REGISTER_ULONG( 0x98 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_1_8R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x98); \
     WRITE_REGISTER_ULONG( 0x98 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_1_8R() \
     READ_REGISTER_ULONG(0x98)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp18r
//
// Return the value of register BKP_1_8R
//
// Notes : Register backup register (BKP18R) at the offset 0x98, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_1_8R_REG 0x98

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0x98) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x98); \
     WRITE_REGISTER_ULONG(0x98, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp19r
//
// Return the value of register BKP19R
//
// Notes : Register Bkp19r at offset 0x9C
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_1_9R( y) \
     WRITE_REGISTER_ULONG( 0x9C , y)

#define SET_BITS_BKP_1_9R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x9C); \
     WRITE_REGISTER_ULONG( 0x9C , val |  mask ); \
   }

#define CLEAR_BITS_BKP_1_9R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0x9C); \
     WRITE_REGISTER_ULONG( 0x9C , val & ~mask ); \
   }

#define READ_REGISTER_BKP_1_9R() \
     READ_REGISTER_ULONG(0x9C)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp19r
//
// Return the value of register BKP_1_9R
//
// Notes : Register backup register (BKP19R) at the offset 0x9C, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_1_9R_REG 0x9C

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0x9C) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0x9C); \
     WRITE_REGISTER_ULONG(0x9C, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp20r
//
// Return the value of register BKP20R
//
// Notes : Register Bkp20r at offset 0xA0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_2_0R( y) \
     WRITE_REGISTER_ULONG( 0xA0 , y)

#define SET_BITS_BKP_2_0R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xA0); \
     WRITE_REGISTER_ULONG( 0xA0 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_2_0R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xA0); \
     WRITE_REGISTER_ULONG( 0xA0 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_2_0R() \
     READ_REGISTER_ULONG(0xA0)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp20r
//
// Return the value of register BKP_2_0R
//
// Notes : Register backup register (BKP20R) at the offset 0xA0, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_2_0R_REG 0xA0

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0xA0) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xA0); \
     WRITE_REGISTER_ULONG(0xA0, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp21r
//
// Return the value of register BKP21R
//
// Notes : Register Bkp21r at offset 0xA4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_2_1R( y) \
     WRITE_REGISTER_ULONG( 0xA4 , y)

#define SET_BITS_BKP_2_1R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xA4); \
     WRITE_REGISTER_ULONG( 0xA4 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_2_1R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xA4); \
     WRITE_REGISTER_ULONG( 0xA4 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_2_1R() \
     READ_REGISTER_ULONG(0xA4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp21r
//
// Return the value of register BKP_2_1R
//
// Notes : Register backup register (BKP21R) at the offset 0xA4, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_2_1R_REG 0xA4

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0xA4) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xA4); \
     WRITE_REGISTER_ULONG(0xA4, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp22r
//
// Return the value of register BKP22R
//
// Notes : Register Bkp22r at offset 0xA8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_2_2R( y) \
     WRITE_REGISTER_ULONG( 0xA8 , y)

#define SET_BITS_BKP_2_2R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xA8); \
     WRITE_REGISTER_ULONG( 0xA8 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_2_2R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xA8); \
     WRITE_REGISTER_ULONG( 0xA8 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_2_2R() \
     READ_REGISTER_ULONG(0xA8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp22r
//
// Return the value of register BKP_2_2R
//
// Notes : Register backup register (BKP22R) at the offset 0xA8, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_2_2R_REG 0xA8

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0xA8) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xA8); \
     WRITE_REGISTER_ULONG(0xA8, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp23r
//
// Return the value of register BKP23R
//
// Notes : Register Bkp23r at offset 0xAC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_2_3R( y) \
     WRITE_REGISTER_ULONG( 0xAC , y)

#define SET_BITS_BKP_2_3R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xAC); \
     WRITE_REGISTER_ULONG( 0xAC , val |  mask ); \
   }

#define CLEAR_BITS_BKP_2_3R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xAC); \
     WRITE_REGISTER_ULONG( 0xAC , val & ~mask ); \
   }

#define READ_REGISTER_BKP_2_3R() \
     READ_REGISTER_ULONG(0xAC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp23r
//
// Return the value of register BKP_2_3R
//
// Notes : Register backup register (BKP23R) at the offset 0xAC, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_2_3R_REG 0xAC

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0xAC) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xAC); \
     WRITE_REGISTER_ULONG(0xAC, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp24r
//
// Return the value of register BKP24R
//
// Notes : Register Bkp24r at offset 0xB0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_2_4R( y) \
     WRITE_REGISTER_ULONG( 0xB0 , y)

#define SET_BITS_BKP_2_4R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xB0); \
     WRITE_REGISTER_ULONG( 0xB0 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_2_4R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xB0); \
     WRITE_REGISTER_ULONG( 0xB0 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_2_4R() \
     READ_REGISTER_ULONG(0xB0)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp24r
//
// Return the value of register BKP_2_4R
//
// Notes : Register backup register (BKP24R) at the offset 0xB0, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_2_4R_REG 0xB0

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0xB0) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xB0); \
     WRITE_REGISTER_ULONG(0xB0, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp25r
//
// Return the value of register BKP25R
//
// Notes : Register Bkp25r at offset 0xB4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_2_5R( y) \
     WRITE_REGISTER_ULONG( 0xB4 , y)

#define SET_BITS_BKP_2_5R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xB4); \
     WRITE_REGISTER_ULONG( 0xB4 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_2_5R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xB4); \
     WRITE_REGISTER_ULONG( 0xB4 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_2_5R() \
     READ_REGISTER_ULONG(0xB4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp25r
//
// Return the value of register BKP_2_5R
//
// Notes : Register backup register (BKP25R) at the offset 0xB4, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_2_5R_REG 0xB4

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0xB4) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xB4); \
     WRITE_REGISTER_ULONG(0xB4, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp26r
//
// Return the value of register BKP26R
//
// Notes : Register Bkp26r at offset 0xB8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_2_6R( y) \
     WRITE_REGISTER_ULONG( 0xB8 , y)

#define SET_BITS_BKP_2_6R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xB8); \
     WRITE_REGISTER_ULONG( 0xB8 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_2_6R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xB8); \
     WRITE_REGISTER_ULONG( 0xB8 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_2_6R() \
     READ_REGISTER_ULONG(0xB8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp26r
//
// Return the value of register BKP_2_6R
//
// Notes : Register backup register (BKP26R) at the offset 0xB8, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_2_6R_REG 0xB8

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0xB8) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xB8); \
     WRITE_REGISTER_ULONG(0xB8, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp27r
//
// Return the value of register BKP27R
//
// Notes : Register Bkp27r at offset 0xBC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_2_7R( y) \
     WRITE_REGISTER_ULONG( 0xBC , y)

#define SET_BITS_BKP_2_7R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xBC); \
     WRITE_REGISTER_ULONG( 0xBC , val |  mask ); \
   }

#define CLEAR_BITS_BKP_2_7R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xBC); \
     WRITE_REGISTER_ULONG( 0xBC , val & ~mask ); \
   }

#define READ_REGISTER_BKP_2_7R() \
     READ_REGISTER_ULONG(0xBC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp27r
//
// Return the value of register BKP_2_7R
//
// Notes : Register backup register (BKP27R) at the offset 0xBC, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_2_7R_REG 0xBC

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0xBC) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xBC); \
     WRITE_REGISTER_ULONG(0xBC, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp28r
//
// Return the value of register BKP28R
//
// Notes : Register Bkp28r at offset 0xC0
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_2_8R( y) \
     WRITE_REGISTER_ULONG( 0xC0 , y)

#define SET_BITS_BKP_2_8R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC0); \
     WRITE_REGISTER_ULONG( 0xC0 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_2_8R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC0); \
     WRITE_REGISTER_ULONG( 0xC0 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_2_8R() \
     READ_REGISTER_ULONG(0xC0)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp28r
//
// Return the value of register BKP_2_8R
//
// Notes : Register backup register (BKP28R) at the offset 0xC0, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_2_8R_REG 0xC0

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0xC0) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC0); \
     WRITE_REGISTER_ULONG(0xC0, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp29r
//
// Return the value of register BKP29R
//
// Notes : Register Bkp29r at offset 0xC4
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_2_9R( y) \
     WRITE_REGISTER_ULONG( 0xC4 , y)

#define SET_BITS_BKP_2_9R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC4); \
     WRITE_REGISTER_ULONG( 0xC4 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_2_9R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC4); \
     WRITE_REGISTER_ULONG( 0xC4 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_2_9R() \
     READ_REGISTER_ULONG(0xC4)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp29r
//
// Return the value of register BKP_2_9R
//
// Notes : Register backup register (BKP29R) at the offset 0xC4, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_2_9R_REG 0xC4

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0xC4) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC4); \
     WRITE_REGISTER_ULONG(0xC4, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp30r
//
// Return the value of register BKP30R
//
// Notes : Register Bkp30r at offset 0xC8
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_3_0R( y) \
     WRITE_REGISTER_ULONG( 0xC8 , y)

#define SET_BITS_BKP_3_0R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC8); \
     WRITE_REGISTER_ULONG( 0xC8 , val |  mask ); \
   }

#define CLEAR_BITS_BKP_3_0R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xC8); \
     WRITE_REGISTER_ULONG( 0xC8 , val & ~mask ); \
   }

#define READ_REGISTER_BKP_3_0R() \
     READ_REGISTER_ULONG(0xC8)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp30r
//
// Return the value of register BKP_3_0R
//
// Notes : Register backup register (BKP30R) at the offset 0xC8, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_3_0R_REG 0xC8

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0xC8) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xC8); \
     WRITE_REGISTER_ULONG(0xC8, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp31r
//
// Return the value of register BKP31R
//
// Notes : Register Bkp31r at offset 0xCC
//
/////////////////////////////////////////////////////////////////////////
#define WRITE_REGISTER_BKP_3_1R( y) \
     WRITE_REGISTER_ULONG( 0xCC , y)

#define SET_BITS_BKP_3_1R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xCC); \
     WRITE_REGISTER_ULONG( 0xCC , val |  mask ); \
   }

#define CLEAR_BITS_BKP_3_1R(mask) \
   {\
     ULONG val = READ_REGISTER_ULONG(0xCC); \
     WRITE_REGISTER_ULONG( 0xCC , val & ~mask ); \
   }

#define READ_REGISTER_BKP_3_1R() \
     READ_REGISTER_ULONG(0xCC)

/////////////////////////////////////////////////////////////////////////
//
// Function : Bkp31r
//
// Return the value of register BKP_3_1R
//
// Notes : Register backup register (BKP31R) at the offset 0xCC, Bits 0:31

//
/////////////////////////////////////////////////////////////////////////

    // 
    // BKP 
    // 
#define BKP_MASK 0xFFFFFFFFU
#define BKP_OFFSET 31
#define BKP_START_BIT 0
#define BKP_WIDTH 32


#define BKP_3_1R_REG 0xCC

#define READ_BKP() \
   ((READ_REGISTER_ULONG(0xCC) & BKP_MASK)  >> BKP_START_BIT)

#define WRITE_BKP(val) \
   {\
     ULONG OldValue = READ_REGISTER_ULONG( 0xCC); \
     WRITE_REGISTER_ULONG(0xCC, (OldValue & ~ BKP_MASK) | ((val << BKP_START_BIT) & BKP_MASK )); \
   } 

