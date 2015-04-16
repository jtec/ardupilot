// -*- tab-width: 4; Mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*-

// This file is just a placeholder for your configuration file.  If
// you wish to change any of the setup parameters from their default
// values, place the appropriate #define statements here.

// If you used to define your CONFIG_APM_HARDWARE setting here, it is no
// longer valid! You should switch to using CONFIG_HAL_BOARD via the HAL_BOARD
// flag in your local config.mk instead.

// #define HIL_MODE			HIL_MODE_DISABLED
// #define GCS_PORT			3
// #define SERIAL0_BAUD                             57600
// #define SERIAL3_BAUD                             57600
// #define LOG_ATTITUDE_MED                         DISABLED
// #define LOG_GPS                                  DISABLED
// #define LOG_CMD                                  DISABLED

// uncomment the lines below to disable features (flash sizes listed are for APM2 boards and will underestimate savings on Pixhawk and other boards)
#define LOGGING_ENABLED       DISABLED            // disable dataflash logging to save 11K of flash space
#define MOUNT                 DISABLED            // disable the camera gimbal to save 8K of flash space
#define AUTOTUNE_ENABLED      DISABLED            // disable the auto tune functionality to save 7k of flash
#define AC_FENCE              DISABLED            // disable fence to save 2k of flash
#define CAMERA                DISABLED            // disable camera trigger to save 1k of flash
#define CONFIG_SONAR          DISABLED            // disable sonar to save 1k of flash
#define POSHOLD_ENABLED       DISABLED            // disable PosHold flight mode to save 4.5k of flash
#define AC_RALLY              DISABLED            // disable rally points to save 2k of flash, and also frees rally point EEPROM for more mission commands
#define PARACHUTE             DISABLED            // disable parachute release to save 1k of flash
#define EPM_ENABLED           DISABLED            // disable epm cargo gripper to save 500bytes of flash
#define CLI_ENABLED           DISABLED            // disable the CLI (command-line-interface) to save 21K of flash space
#define NAV_GUIDED            DISABLED            // disable external navigation computer ability to control vehicle through MAV_CMD_NAV_GUIDED mission commands
#define OPTFLOW               DISABLED            // disable optical flow sensor to save 5K of flash space
#define FRSKY_TELEM_ENABLED   DISABLED            // disable FRSky telemetry

// features below are disabled by default on all boards
//#define SPRAYER               ENABLED             // enable the crop sprayer feature (two ESC controlled pumps the speed of which depends upon the vehicle's horizontal velocity)


