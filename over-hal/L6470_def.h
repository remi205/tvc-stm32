
// constant definitions for overcurrent thresholds. Write these values to
//  register dSPIN_OCD_TH to set the level at which an overcurrent even occurs.
#define OCD_TH_375mA  0x00
#define OCD_TH_750mA  0x01
#define OCD_TH_1125mA 0x02
#define OCD_TH_1500mA 0x03
#define OCD_TH_1875mA 0x04
#define OCD_TH_2250mA 0x05
#define OCD_TH_2625mA 0x06
#define OCD_TH_3000mA 0x07
#define OCD_TH_3375mA 0x08
#define OCD_TH_3750mA 0x09
#define OCD_TH_4125mA 0x0A
#define OCD_TH_4500mA 0x0B
#define OCD_TH_4875mA 0x0C
#define OCD_TH_5250mA 0x0D
#define OCD_TH_5625mA 0x0E
#define OCD_TH_6000mA 0x0F

// STEP_MODE option values.
// First comes the "microsteps per step" options...
#define STEP_MODE_STEP_SEL 0x07  // Mask for these bits only.
#define STEP_SEL_1     0x00
#define STEP_SEL_1_2   0x01
#define STEP_SEL_1_4   0x02
#define STEP_SEL_1_8   0x03
#define STEP_SEL_1_16  0x04
#define STEP_SEL_1_32  0x05
#define STEP_SEL_1_64  0x06
#define STEP_SEL_1_128 0x07

// ...next, define the SYNC_EN bit. When set, the BUSYN pin will instead
//  output a clock related to the full-step frequency as defined by the
//  SYNC_SEL bits below.
#define STEP_MODE_SYNC_EN	 0x80  // Mask for this bit
#define SYNC_EN 0x80

// ...last, define the SYNC_SEL modes. The clock output is defined by
//  the full-step frequency and the value in these bits- see the datasheet
//  for a matrix describing that relationship (page 46).
#define STEP_MODE_SYNC_SEL 0x70
#define SYNC_SEL_1_2 0x00
#define SYNC_SEL_1   0x10
#define SYNC_SEL_2   0x20
#define SYNC_SEL_4   0x30
#define SYNC_SEL_8   0x40
#define SYNC_SEL_16  0x50
#define SYNC_SEL_32  0x60
#define SYNC_SEL_64  0x70

// Bit names for the ALARM_EN register.
//  Each of these bits defines one potential alarm condition.
//  When one of these conditions occurs and the respective bit in ALARM_EN is set,
//  the FLAG pin will go low. The register must be queried to determine which event
//  caused the alarm.
#define ALARM_EN_OVERCURRENT       0x01
#define ALARM_EN_THERMAL_SHUTDOWN  0x02
#define ALARM_EN_THERMAL_WARNING   0x04
#define ALARM_EN_UNDER_VOLTAGE     0x08
#define ALARM_EN_STALL_DET_A       0x10
#define ALARM_EN_STALL_DET_B       0x20
#define ALARM_EN_SW_TURN_ON        0x40
#define ALARM_EN_WRONG_NPERF_CMD   0x80

// CONFIG register renames.

// Oscillator options.
// The dSPIN needs to know what the clock frequency is because it uses that for some
//  calculations during operation.
#define CONFIG_OSC_SEL                 0x000F // Mask for this bit field.
#define CONFIG_INT_16MHZ               0x0000 // Internal 16MHz, no output
#define CONFIG_INT_16MHZ_OSCOUT_2MHZ   0x0008 // Default; internal 16MHz, 2MHz output
#define CONFIG_INT_16MHZ_OSCOUT_4MHZ   0x0009 // Internal 16MHz, 4MHz output
#define CONFIG_INT_16MHZ_OSCOUT_8MHZ   0x000A // Internal 16MHz, 8MHz output
#define CONFIG_INT_16MHZ_OSCOUT_16MHZ  0x000B // Internal 16MHz, 16MHz output
#define CONFIG_EXT_8MHZ_XTAL_DRIVE     0x0004 // External 8MHz crystal
#define CONFIG_EXT_16MHZ_XTAL_DRIVE    0x0005 // External 16MHz crystal
#define CONFIG_EXT_24MHZ_XTAL_DRIVE    0x0006 // External 24MHz crystal
#define CONFIG_EXT_32MHZ_XTAL_DRIVE    0x0007 // External 32MHz crystal
#define CONFIG_EXT_8MHZ_OSCOUT_INVERT  0x000C // External 8MHz crystal, output inverted
#define CONFIG_EXT_16MHZ_OSCOUT_INVERT 0x000D // External 16MHz crystal, output inverted
#define CONFIG_EXT_24MHZ_OSCOUT_INVERT 0x000E // External 24MHz crystal, output inverted
#define CONFIG_EXT_32MHZ_OSCOUT_INVERT 0x000F // External 32MHz crystal, output inverted

// Configure the functionality of the external switch input
#define CONFIG_SW_MODE                 0x0010 // Mask for this bit.
#define CONFIG_SW_HARD_STOP            0x0000 // Default; hard stop motor on switch.
#define CONFIG_SW_USER                 0x0010 // Tie to the GoUntil and ReleaseSW
                                                    //  commands to provide jog function.
                                                    //  See page 25 of datasheet.

// Configure the motor voltage compensation mode (see page 34 of datasheet)
#define CONFIG_EN_VSCOMP               0x0020  // Mask for this bit.
#define CONFIG_VS_COMP_DISABLE         0x0000  // Disable motor voltage compensation.
#define CONFIG_VS_COMP_ENABLE          0x0020  // Enable motor voltage compensation.

// Configure overcurrent detection event handling
#define CONFIG_OC_SD                   0x0080  // Mask for this bit.
#define CONFIG_OC_SD_DISABLE           0x0000  // Bridges do NOT shutdown on OC detect
#define CONFIG_OC_SD_ENABLE            0x0080  // Bridges shutdown on OC detect

// Configure the slew rate of the power bridge output
#define CONFIG_POW_SR                  0x0300  // Mask for this bit field.
#define CONFIG_SR_180V_us              0x0000  // 180V/us
#define CONFIG_SR_290V_us              0x0200  // 290V/us
#define CONFIG_SR_530V_us              0x0300  // 530V/us

// Integer divisors for PWM sinewave generation
//  See page 32 of the datasheet for more information on this.
#define CONFIG_F_PWM_DEC               0x1C00      // mask for this bit field
#define CONFIG_PWM_MUL_0_625           (0x00)<<10
#define CONFIG_PWM_MUL_0_75            (0x01)<<10
#define CONFIG_PWM_MUL_0_875           (0x02)<<10
#define CONFIG_PWM_MUL_1               (0x03)<<10
#define CONFIG_PWM_MUL_1_25            (0x04)<<10
#define CONFIG_PWM_MUL_1_5             (0x05)<<10
#define CONFIG_PWM_MUL_1_75            (0x06)<<10
#define CONFIG_PWM_MUL_2               (0x07)<<10

// Multiplier for the PWM sinewave frequency
#define CONFIG_F_PWM_INT               0xE000     // mask for this bit field.
#define CONFIG_PWM_DIV_1               (0x00)<<13
#define CONFIG_PWM_DIV_2               (0x01)<<13
#define CONFIG_PWM_DIV_3               (0x02)<<13
#define CONFIG_PWM_DIV_4               (0x03)<<13
#define CONFIG_PWM_DIV_5               (0x04)<<13
#define CONFIG_PWM_DIV_6               (0x05)<<13
#define CONFIG_PWM_DIV_7               (0x06)<<13

// Status register bit renames- read-only bits conferring information about the
//  device to the user.
#define STATUS_HIZ                     0x0001 // high when bridges are in HiZ mode
#define STATUS_BUSY                    0x0002 // mirrors BUSY pin
#define STATUS_SW_F                    0x0004 // low when switch open, high when closed
#define STATUS_SW_EVN                  0x0008 // active high, set on switch falling edge,
                                                    //  cleared by reading STATUS
#define STATUS_DIR                     0x0010 // Indicates current motor direction.
                                                    //  High is FWD, Low is REV.
#define STATUS_NOTPERF_CMD             0x0080 // Last command not performed.
#define STATUS_WRONG_CMD               0x0100 // Last command not valid.
#define STATUS_UVLO                    0x0200 // Undervoltage lockout is active
#define STATUS_TH_WRN                  0x0400 // Thermal warning
#define STATUS_TH_SD                   0x0800 // Thermal shutdown
#define STATUS_OCD                     0x1000 // Overcurrent detected
#define STATUS_STEP_LOSS_A             0x2000 // Stall detected on A bridge
#define STATUS_STEP_LOSS_B             0x4000 // Stall detected on B bridge
#define STATUS_SCK_MOD                 0x8000 // Step clock mode is active

// Status register motor status field
#define STATUS_MOT_STATUS                0x0060      // field mask
#define STATUS_MOT_STATUS_STOPPED       (0x0000)<<13 // Motor stopped
#define STATUS_MOT_STATUS_ACCELERATION  (0x0001)<<13 // Motor accelerating
#define STATUS_MOT_STATUS_DECELERATION  (0x0002)<<13 // Motor decelerating
#define STATUS_MOT_STATUS_CONST_SPD     (0x0003)<<13 // Motor at constant speed

// Register address redefines.
//  See the Param_Handler() function for more info about these.
#define ABS_POS              0x01
#define EL_POS               0x02
#define MARK                 0x03
#define SPEED                0x04
#define ACC                  0x05
#define DEC                  0x06
#define MAX_SPEED            0x07
#define MIN_SPEED            0x08
#define FS_SPD               0x15
#define KVAL_HOLD            0x09
#define KVAL_RUN             0x0A
#define KVAL_ACC             0x0B
#define KVAL_DEC             0x0C
#define INT_SPD              0x0D
#define ST_SLP               0x0E
#define FN_SLP_ACC           0x0F
#define FN_SLP_DEC           0x10
#define K_THERM              0x11
#define ADC_OUT              0x12
#define OCD_TH               0x13
#define STALL_TH             0x14
#define STEP_MODE            0x16
#define ALARM_EN             0x17
#define CONFIG               0x18
#define STATUS               0x19

//dSPIN commands
#define NOP                  0x00
#define SET_PARAM            0x00
#define GET_PARAM            0x20
#define RUN                  0x50
#define STEP_CLOCK           0x58
#define MOVE                 0x40
#define GOTO                 0x60
#define GOTO_DIR             0x68
#define GO_UNTIL             0x82
#define RELEASE_SW           0x92
#define GO_HOME              0x70
#define GO_MARK              0x78
#define RESET_POS            0xD8
#define RESET_DEVICE         0xC0
#define SOFT_STOP            0xB0
#define HARD_STOP            0xB8
#define SOFT_HIZ             0xA0
#define HARD_HIZ             0xA8
#define GET_STATUS           0xD0

/* dSPIN direction options */
#define FWD  0x01
#define REV  0x00

/* dSPIN action options */
#define ACTION_RESET  0x00
#define ACTION_COPY   0x01



/* Register : ACC */
/* Acceleration rate in step/s2, range 14.55 to 59590 steps/s2 */
#define dSPIN_CONF_PARAM_ACC (2008.164)

/* Register : DEC */
/* Deceleration rate in step/s2, range 14.55 to 59590 steps/s2 */
#define dSPIN_CONF_PARAM_DEC (2008.164)

/* Register : MAX_SPEED */
/* Maximum speed in step/s, range 15.25 to 15610 steps/s */
#define dSPIN_CONF_PARAM_MAX_SPEED (991.821)

/* Register : MIN_SPEED */
/* Minimum speed in step/s, range 0 to 976.3 steps/s */
#define dSPIN_CONF_PARAM_MIN_SPEED (0)

/* Register : FS_SPD */
/* Full step speed in step/s, range 7.63 to 15625 steps/s */
#define dSPIN_CONF_PARAM_FS_SPD (595.093)

  /************************ Phase Current Control *****************************/

/* Register : KVAL_HOLD */
/* Hold duty cycle (torque) in %, range 0 to 99.6% */
#define dSPIN_CONF_PARAM_KVAL_HOLD 16.02

/* Register : KVAL_RUN */
/* Run duty cycle (torque) in %, range 0 to 99.6% */
#define dSPIN_CONF_PARAM_KVAL_RUN (16.02)

/* Register : KVAL_ACC */
/* Acceleration duty cycle (torque) in %, range 0 to 99.6% */
#define dSPIN_CONF_PARAM_KVAL_ACC (16.02)

/* Register : KVAL_DEC */
/* Deceleration duty cycle (torque) in %, range 0 to 99.6% */
#define dSPIN_CONF_PARAM_KVAL_DEC (16.02)

/* Register : CONFIG - field : EN_VSCOMP */
/* Motor Supply Voltage Compensation enabling , enum dSPIN_CONFIG_EN_VSCOMP_TypeDef */
#define dSPIN_CONF_PARAM_VS_COMP (dSPIN_CONFIG_VS_COMP_DISABLE)

/* Register : MIN_SPEED - field : LSPD_OPT */
/* Low speed optimization bit, enum dSPIN_LSPD_OPT_TypeDef */
#define dSPIN_CONF_PARAM_LSPD_BIT (dSPIN_LSPD_OPT_OFF)

/* Register : K_THERM */
/* Thermal compensation param, range 1 to 1.46875 */
#define dSPIN_CONF_PARAM_K_THERM (1)

/* Register : INT_SPEED */
/* Intersect speed settings for BEMF compensation in steps/s, range 0 to 3906 steps/s */
#define dSPIN_CONF_PARAM_INT_SPD (61.512)

/* Register : ST_SLP */
/* BEMF start slope settings for BEMF compensation in % step/s, range 0 to 0.4% s/step */
#define dSPIN_CONF_PARAM_ST_SLP (0.03815)

/* Register : FN_SLP_ACC */
/* BEMF final acc slope settings for BEMF compensation in % step/s, range 0 to 0.4% s/step  */
#define dSPIN_CONF_PARAM_FN_SLP_ACC (0.06256)

/* Register : FN_SLP_DEC */
/* BEMF final dec slope settings for BEMF compensation in % step/s, range 0 to 0.4% s/step */
#define dSPIN_CONF_PARAM_FN_SLP_DEC (0.06256)

/* Register : CONFIG - field : F_PWM_INT */
/* PWM Frequency Integer division, enum dSPIN_CONFIG_F_PWM_INT_TypeDef */
#define dSPIN_CONF_PARAM_PWM_DIV (dSPIN_CONFIG_PWM_DIV_2)

/* Register : CONFIG - field : F_PWM_DEC */
/* PWM Frequency Integer Multiplier, enum dSPIN_CONFIG_F_PWM_INT_TypeDef */
#define dSPIN_CONF_PARAM_PWM_MUL (dSPIN_CONFIG_PWM_MUL_1)

/******************************* Others *************************************/
/* Register : OCD_TH */
/* Overcurrent threshold settings via enum dSPIN_OCD_TH_TypeDef */
#define dSPIN_CONF_PARAM_OCD_TH (dSPIN_OCD_TH_3375mA)

/* Register : STALL_TH */
/* Stall threshold settings in mA, range 31.25mA to 4000mA */
#define dSPIN_CONF_PARAM_STALL_TH (2031.25)

/* Register : ALARM_EN */
/* Alarm settings via bitmap enum dSPIN_ALARM_EN_TypeDef */
#define dSPIN_CONF_PARAM_ALARM_EN (dSPIN_ALARM_EN_OVERCURRENT | dSPIN_ALARM_EN_THERMAL_SHUTDOWN | dSPIN_ALARM_EN_THERMAL_WARNING | dSPIN_ALARM_EN_UNDER_VOLTAGE | dSPIN_ALARM_EN_STALL_DET_A | dSPIN_ALARM_EN_STALL_DET_B | dSPIN_ALARM_EN_SW_TURN_ON | dSPIN_ALARM_EN_WRONG_NPERF_CMD)

/* Register : STEP_MODE - field : STEP_MODE */
/* Step mode settings via enum dSPIN_STEP_SEL_TypeDef */
#define dSPIN_CONF_PARAM_STEP_MODE (dSPIN_STEP_SEL_1_128)

/* Register : STEP_MODE - Field : SYNC_MODE and SYNC_EN */
/* Synch. Mode settings via enum dSPIN_SYNC_SEL_TypeDef */
#define dSPIN_CONF_PARAM_SYNC_MODE (dSPIN_SYNC_SEL_DISABLED)

/* Register : CONFIG - field : POW_SR */
/* Slew rate, enum dSPIN_CONFIG_POW_SR_TypeDef */
#define dSPIN_CONF_PARAM_SR (dSPIN_CONFIG_SR_110V_us)

/* Register : CONFIG - field : OC_SD */
/* Over current shutwdown enabling, enum dSPIN_CONFIG_OC_SD_TypeDef */
#define dSPIN_CONF_PARAM_OC_SD (dSPIN_CONFIG_OC_SD_DISABLE)

/* Register : CONFIG - field : SW_MODE */
/* External switch hard stop interrupt mode, enum dSPIN_CONFIG_SW_MODE_TypeDef */
#define dSPIN_CONF_PARAM_SW_MODE 	(dSPIN_CONFIG_SW_HARD_STOP)

/* Register : CONFIG - field : OSC_CLK_SEL */
/* Clock setting , enum dSPIN_CONFIG_OSC_MGMT_TypeDef */
#define dSPIN_CONF_PARAM_CLOCK_SETTING (dSPIN_CONFIG_INT_16MHZ_OSCOUT_2MHZ)

//The ABS_POS register contains the current motor absolute position in agreement with the 
///selected step mode; the stored value unit is equal to the selected step mode (full, half, 
//quarter, etc.). The value is in 2's complement format and it ranges from -221 to +221-1.

//
