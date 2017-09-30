/******************************************************************************/
/*@F_NAME:           lcfg_config.h                                            */
/*@F_PURPOSE:        configuration header file for GAC A10                    */
/*@F_CREATED_BY:     Automatic                                                */
/*@F_CREATION_DATE:  2017/7/4                                                 */
/*@F_MPROC_TYPE:     up Independent                                           */
/************************************** (C) Copyright 2018 Magneti Marelli ****/
 
/* THIS FILE IS GENERATED AUTOMATICALLY ! DON'T MAKE ANY MANUAL CHANGES !     */
 
#ifndef LCFG_CONFIG_H
#define LCFG_CONFIG_H
 
/*______ I N C L U D E - F I L E S ___________________________________________*/
 
#include "type.h"
#include "vers_config_eep.h"
#include "syst_config.h"
 
 
/*______ L O C A L - D E F I N E S  __________________________________________*/
 
 
/*______ L O C A L - T Y P E S _______________________________________________*/
typedef ubyte Std_ReturnType;

#pragma pack(1)


typedef struct {
    ubyte CONFIG_ENGINE_TYPE : 2;
    ubyte CONFIG_TRANSMISSION_TYPE : 2;
    ubyte CONFIG_DRIVE_TYPE : 2;
    ubyte CONFIG_STEERING_SYSTEM_TYPE : 2;
    ubyte CONFIG_SRS : 1;
    ubyte CONFIG_ABS : 1;
    ubyte CONFIG_TPMS : 1;
    ubyte CONFIG_RPA : 1;
    ubyte CONFIG_ROOF : 1;
    ubyte CONFIG_ESP : 1;
    ubyte CONFIG_DRL : 1;
    ubyte CONFIG_CRUISE : 1;
    ubyte CONFIG_START_STOP_SYSTEM : 1;
    ubyte CONFIG_PEPS : 1;
    ubyte CONFIG_RTS : 1;
    ubyte CONFIG_SVM : 1;
    ubyte CONFIG_MSM : 1;
    ubyte CONFIG_EPB_AUTOHOLD : 1;
    ubyte CONFIG_BRAKE_TYPE : 1;
    ubyte CONFIG_GSM : 1;
    ubyte RESERVED0 : 1;
    ubyte CONFIG_ESP_HBC : 1;
    ubyte CONFIG_SBM : 1;
    ubyte CONFIG_FOURWINDOWLIFT_ANTIPINCH : 1;
    ubyte CONFIG_ESCL : 1;
    ubyte CONFIG_FRONT_PASSENGER_SEAT_SENSOR : 1;
    ubyte CONFIG_AFS : 2;
    ubyte RESERVED1;
    ubyte RESERVED2 : 1;
    ubyte RESERVED3 : 1;
    ubyte CONFIG_NVS : 1;
    ubyte CONFIG_APA : 1;
    ubyte CONFIG_LDW : 1;
    ubyte CONFIG_FCW : 1;
    ubyte CONFIG_BSD : 1;
    ubyte CONFIG_ATS : 1;
    ubyte RESERVED4 : 1;
    ubyte RESERVED5 : 1;
    ubyte RESERVED6 : 1;
    ubyte CONFIG_DFM : 1;
    ubyte CONFIG_HMA : 1;
    ubyte CONFIG_TSR : 1;
    ubyte CONFIG_AEB : 1;
    ubyte CONFIG_ACC : 1;
    ubyte RESERVED7;
    ubyte RESERVED8;
    ubyte RESERVED9;
    ubyte RESERVED10;
    ushort ODO_PULSES_PER_KILOMETER_DIV8;
} LCFG_Configuration_calibration;

typedef struct {
    ubyte RESERVED0 : 1;
    ubyte RESERVED1 : 3;
    ubyte CONFIG_FUELTANK_TYPE : 2;
    ubyte CONFIG_OilFillerdisplay : 2;
    ubyte RESERVED2 : 1;
    ubyte RESERVED3 : 1;
    ubyte RESERVED4 : 1;
    ubyte RESERVED5 : 1;
    ubyte CONFIG_VR : 1;
    ubyte CONFIG_DRIVEMODE : 1;
    ubyte CONFIG_REAR_PASSENGER_SEAT_SENSOR : 2;
    ubyte RESERVED6 : 4;
    ubyte RESERVED7 : 1;
    ubyte CONFIG_NAV : 1;
    ubyte CONFIG_MEDIA : 1;
    ubyte CONFIG_PHONE : 1;
    ubyte RESERVED8;
    ubyte RESERVED9;
    ubyte CONFIG_DEFAULT_SOUNDVOLUME : 3;
    ubyte CONFIG_TIME_MODE : 1;
    ubyte RESERVED10 : 4;
    ubyte CONFIG_DISPLAY_UNIT_DEFAULT_TEMPERATURE : 1;
    ubyte CONFIG_DEFAULT_THEME : 3;
    ubyte CONFIG_DEFAULT_BRIGHTNESS : 4;
    ubyte CONFIG_DISPLAY_LANGUAGE : 4;
    ubyte CONFIG_DISPLAY_UNIT_DEFAULT_FUEL_ECONOMY_DISTANCE : 2;
    ubyte CONFIG_DISPLAY_UNIT_DEFAULT_PRESSURE : 2;
    ubyte CONFIG_VEHICLE : 4;
    ubyte CONFIG_AREA : 4;
} LCFG_Menu_AND_Configuration_calibration;

typedef struct {
    ubyte FUNCTION_OIL_PRESSURE_LOW_INDICATOR : 1;
    ubyte FUNCTION_CHARGING_INDICATOR : 1;
    ubyte FUNCTION_WASHER_FLUID_LOW_INDICATOR : 1;
    ubyte FUNCTION_BRAKE_INDICATOR : 1;
    ubyte FUNCTION_EMISSION_INDICATOR : 1;
    ubyte FUNCTION_ENGINE_FAULT_INDICATOR : 1;
    ubyte FUNCTION_ENGINE_COOLANT_TEMP_HIGH_INDICATOR : 1;
    ubyte FUNCTION_FUEL_LEVEL_LOW_INDICATOR : 1;
    ubyte FUNCTION_AIRBAG_INDICATOR : 1;
    ubyte FUNCTION_DRIVER_SEATBELT_INDICATOR : 1;
    ubyte FUNCTION_FRONT_PASSENGER_SEATBELT_INDICATOR : 1;
    ubyte FUNCTION_CRUISE_INDICATOR : 1;
    ubyte FUNCTION_ABS_INDICATOR : 1;
    ubyte FUNCTION_ESP_INDICATOR : 1;
    ubyte FUNCTION_ESP_OFF_INDICATOR : 1;
    ubyte FUNCTION_HDC_INDICATOR : 1;
    ubyte FUNCTION_FRONT_FOG_INDICATOR : 1;
    ubyte FUNCTION_REAR_FOG_INDICATOR : 1;
    ubyte FUNCTION_LEFT_TURN_INDICATOR : 1;
    ubyte FUNCTION_RIGHT_TURN_INDICATOR : 1;
    ubyte FUNCTION_PARKING_INDICATOR : 1;
    ubyte FUNCTION_HIGH_BEAM_INDICATOR : 1;
    ubyte FUNCTION_SECURITY_INDICATOR : 1;
    ubyte FUNCTION_TPMS_INDICATOR : 1;
    ubyte FUNCTION_TRANSMISSION_INDICATOR : 1;
    ubyte FUNCTION_TRANSPORT_MODE_INDICATOR : 1;
    ubyte FUNCTION_AFS_INDICATOR : 1;
    ubyte FUNCTION_AFS_OFF_INDICATOR : 1;
    ubyte FUNCTION_4WD_AUTO_MODE_INDICATOR : 1;
    ubyte FUNCTION_4WD_LOCK_MODE_INDICATOR : 1;
    ubyte FUNCTION_EPB_STATE_INDICATOR : 1;
    ubyte FUNCTION_EPB_FAULT_INDICATOR : 1;
    ubyte FUNCTION_DOOR_AJAR_INDICATOR : 1;
    ubyte FUNCTION_AUTO_MODE_INDICATOR : 1;
    ubyte FUNCTION_AUTOSTOP_INDICATOR : 1;
    ubyte FUNCTION_START_STOP_SYSTEM_ACTIVE_INDICATOR : 1;
    ubyte FUNCTION_START_STOP_SYSTEM_FAULT_INDICATOR : 1;
    ubyte FUNCTION_EHPS_INDICATOR : 1;
    ubyte FUNCTION_ESCL_STATE_INDICATOR : 1;
    ubyte FUNCTION_PEPS_KEY_STATE_INDICATOR : 1;
    ubyte RESERVED0 : 1;
    ubyte RESERVED1 : 1;
    ubyte RESERVED2 : 1;
    ubyte FUNCTION_LDW_STATUS_INDICATOR : 1;
    ubyte FUNCTION_FCW_STATUS_INDICATOR : 1;
    ubyte FUNCTION_BSD_STATUS_INDICATOR : 1;
    ubyte FUNCTION_HMA_INDICATOR : 1;
    ubyte FUNCTION_TSR_BUZZER : 1;
    ubyte FUNCTION_WINTER_MODE_INDICATOR : 1;
    ubyte FUNCTION_ECO_MODE_INDICATOR : 1;
    ubyte FUNCTION_SPORT_MODE_INDICATOR : 1;
    ubyte FUNCTION_NORMAL_MODE_INDICATOR : 1;
    ubyte FUNCTION_MANUAL_MODE_INDICATOR : 1;
    ubyte RESERVED3 : 1;
    ubyte RESERVED4 : 1;
    ubyte RESERVED5 : 1;
    ubyte RESERVED6;
    ubyte RESERVED7;
    ubyte FUNCTION_TURN_BUZZER : 1;
    ubyte FUNCTION_DRIVER_SEATBELT_UNFASTENED_BUZZER : 1;
    ubyte FUNCTION_FRONT_PASSENGER_SEATBELT_UNFASTENED_BUZZER : 1;
    ubyte FUNCTION_HAND_BRAKE_UNRELEASED_BUZZER : 1;
    ubyte FUNCTION_DOOR_AJAR_BUZZER : 1;
    ubyte FUNCTION_LAMP_LEFT_ON_BUZZER : 1;
    ubyte FUNCTION_SUN_ROOF_OPEN_BUZZER : 1;
    ubyte FUNCTION_TPMS_FAULT_BUZZER : 1;
    ubyte FUNCTION_EPB_FAULT_BUZZER : 1;
    ubyte FUNCTION_PEPS_FAULT_BUZZER : 1;
    ubyte FUNCTION_KEY_IN_BUZZER : 1;
    ubyte FUNCTION_SHIFT_TO_GEAR_P_BUZZER : 1;
    ubyte FUNCTION_SHIFT_TO_GEAR_N_BUZZER : 1;
    ubyte FUNCTION_TRANSMISSION_FAULT_BUZZER : 1;
    ubyte FUNCTION_FOB_BATTERY_LOW_BUZZER : 1;
    ubyte FUNCTION_OVER_SPEED_BUZZER : 1;
    ubyte FUNCTION_ENGINE_COOLANT_TEMP_HIGH_BUZZER : 1;
    ubyte FUNCTION_GSM_FAULT_BUZZER : 1;
    ubyte FUNCTION_RTS_FAULT_BUZZER : 1;
    ubyte FUNCTION_LDW_BUZZER : 1;
    ubyte FUNCTION_FCW_BUZZER : 1;
    ubyte FUNCTION_BSD_BUZZER : 1;
    ubyte FUNCTION_AUTOHOLD_BUZZER : 1;
    ubyte FUNCTION_ACC_BUZZER : 1;
    ubyte FUNCTION_LOWBATPREWARN_BUZZER : 1;
    ubyte FUNCTION_AEB_BUZZER : 1;
    ubyte FUNCTION_NVS_BUZZER : 1;
    ubyte FUNCTION_ATS_BUZZER : 1;
    ubyte FUNCTION_APA_BUZZER : 1;
    ubyte FUNCTION_REAR_PASSENGER_SEATBELT_UNFASTENED_BUZZER : 1;
    ubyte FUNCTION_WINDOW_OPEN_BUZZER : 1;
    ubyte FUNCTION_HDC_BUZZER : 1;
    ubyte RESERVED8 : 1;
    ubyte RESERVED9 : 1;
    ubyte RESERVED10 : 1;
    ubyte RESERVED11 : 1;
    ubyte RESERVED12 : 1;
    ubyte RESERVED13 : 1;
    ubyte FUNCTION_LIGHTFAULT_BUZZER : 1;
    ubyte FUNCTION_TSR_BUZZER2 : 1;
    ubyte RESERVED14;
    ubyte RESERVED15;
    ubyte RESERVED16;
    ubyte FUNCTION_DIC_OAT : 1;
    ubyte FUNCTION_DIC_FR : 1;
    ubyte FUNCTION_DIC_IFE : 1;
    ubyte FUNCTION_DIC_IVS : 1;
    ubyte FUNCTION_DIC_BV : 1;
    ubyte FUNCTION_DIC_LONGTMEMORY : 1;
    ubyte FUNCTION_DIC_SHORTMEMORY : 1;
    ubyte FUNCTION_DIC_ECO : 1;
    ubyte FUNCTION_DIC_AFE1 : 1;
    ubyte FUNCTION_DIC_AFE2 : 1;
    ubyte FUNCTION_DIC_DT1 : 1;
    ubyte FUNCTION_DIC_DT2 : 1;
    ubyte FUNCTION_DIC_AVS1 : 1;
    ubyte FUNCTION_DIC_AVS2 : 1;
    ubyte FUNCTION_DIC_DD1 : 1;
    ubyte FUNCTION_DIC_DD2 : 1;
    ubyte FUNCTION_DIC_SOC : 1;
    ubyte FUNCTION_DIC_TIME : 1;
    ubyte FUNCTION_DIC_SAFETYNOTICE : 1;
    ubyte FUNCTION_DIC_SERVICE : 1;
    ubyte RESERVED17 : 1;
    ubyte RESERVED18 : 1;
    ubyte FUNCTION_DIC_TP : 1;
    ubyte FUNCTION_DIC_TT : 1;
    ubyte RESERVED19;
} LCFG_Function_calibration;

typedef struct {
    ubyte IND_BULBCHECK_TIME : 4;
    ubyte IND_BULBCHECK_SRS_TIME : 4;
    ubyte IND_OVERSPEED_ARABIC_ON_SPEED;
    ubyte IND_SAFETYNOTICE_ON_SPEED;
    ubyte IND_SAFETYNOTICE_OFF_SPEED;
    ubyte ODO_PULSES_FILTER_FACTOR;
    ubyte IND_SEATBELT_CHIME_ON_SPEED;
    ubyte IND_SEATBELT_CHIME_OFF_SPEED;
    ubyte IND_DOORAJAR_CHIME_OFF_SPEED : 4;
    ubyte IND_DOORAJAR_CHIME_ON_SPEED : 4;
    ubyte IND_HANDBRAKE_CHM_OFF_SPEED : 4;
    ubyte IND_HANDBRAKE_CHM_ON_SPEED : 4;
    ubyte IND_OVERSPEED_CHM_ON_SPEED;
    ubyte IND_OVERSPEED_CHM_OFF_SPEED;
    ubyte DIC_VEH_INFO_NAV_PRESS;
    ubyte DIC_OAT_REFRESH;
    ubyte DIC_OAT_FILTER;
    ubyte DIC_FR_REFRESH;
    ubyte DIC_FR_HIGH_VALUE;
    ubyte DIC_FR_LOW_VALUE;
    ubyte DIC_FR_HIGH_PERCENT;
    ubyte DIC_FR_LOW_PERCENT;
    ubyte DIC_IFE_REFRESH : 4;
    ubyte DIC_IFE_SCALE : 4;
    ubyte DIC_IFE_MAX;
    ubyte DIC_IFE_LOWSPEED;
    ubyte DIC_AFE_REFRESH;
    ubyte DIC_AFE_RESET_PRESS;
    ubyte DIC_AFE_SCALE;
    ubyte DIC_AFE_MAX;
    ubyte DIC_DT_REFRESH;
    ubyte DIC_DT_RESET_PRESS;
    ubyte DIC_AVS_REFRESH;
    ubyte DIC_AVS_RESET_PRESS;
    ubyte DIC_AVS_SCALE;
    ubyte DIC_AVS_MAX;
    ubyte DIC_DD_RESET_PRESS;
    ubyte DIC_AFTER_RESET_RESET_PRESS;
    ubyte DIC_IVS_MAX;
    ubyte DIC_IVS_REFRESH;
    ubyte DIC_BV_REFRESH;
    ubyte DIC_WARNING_DISPLAY_TIME : 4;
    ubyte DIC_WARNING_MIN_DISPLAY_TIME : 4;
    ubyte IND_WFL_LOW_TIME;
    ubyte CFC_INIT_VALUE;
    ushort SLEEPREADY_ATOB_TIME;
    ushort SLEEPREADY_ATOSLEEP_TIME;
    ushort SLEEPREADY_BTOSLEEP_TIME;
    ulong RESERVED0;
} LCFG_Parameter_calibration;

typedef struct {
    ubyte Mode;
} LCFG_Cluster_Mode;

typedef struct {
    ubyte RESERVED0;
    ubyte RESERVED1;
    ubyte RESERVED2;
    ubyte RESERVED3;
    ushort RESERVED4;
    ushort RESERVED5;
    ubyte RESERVED6[3];
    ubyte RESERVED7[3];
    ubyte RESERVED8[3];
    ubyte RESERVED9[3];
    ubyte RESERVED10[3];
    ubyte RESERVED11[3];
    ubyte RESERVED12[3];
    ubyte RESERVED13[3];
    ubyte RESERVED14[3];
    ubyte RESERVED15[3];
    ubyte RESERVED16;
    ushort RESERVED17;
    ushort RESERVED18;
    ushort RESERVED19;
    ushort RESERVED20;
    ubyte RESERVED21;
    ubyte RESERVED22;
    ubyte RESERVED23;
} LCFG_Vech_Info_calibration;
#pragma pack()
 
/*______ G L O B A L - D A T A _______________________________________________*/


 
/*______ P R I V A T E - D A T A _____________________________________________*/
 
 
/*______ L O C A L - D A T A _________________________________________________*/
 
 
/*______ L O C A L - M A C R O S _____________________________________________*/
 
 
/*______ I M P O R T - F U N C T I O N S - P R O T O T Y P E S _______________*/
 
 
/*______ L O C A L - F U N C T I O N S - P R O T O T Y P E S _________________*/
 
 
/*______ G L O B A L - F U N C T I O N S _____________________________________*/

Std_ReturnType LCFG_Get_CONFIG_ENGINE_TYPE(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_TRANSMISSION_TYPE(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_DRIVE_TYPE(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_STEERING_SYSTEM_TYPE(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_SRS(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_ABS(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_TPMS(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_RPA(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_ROOF(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_ESP(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_DRL(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_CRUISE(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_START_STOP_SYSTEM(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_PEPS(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_RTS(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_SVM(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_MSM(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_EPB_AUTOHOLD(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_BRAKE_TYPE(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_GSM(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_ESP_HBC(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_SBM(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_FOURWINDOWLIFT_ANTIPINCH(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_ESCL(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_FRONT_PASSENGER_SEAT_SENSOR(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_AFS(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_NVS(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_APA(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_LDW(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_FCW(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_BSD(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_ATS(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_DFM(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_HMA(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_TSR(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_AEB(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_ACC(ubyte*pValue);
Std_ReturnType LCFG_Get_ODO_PULSES_PER_KILOMETER_DIV8(ushort*pValue);
Std_ReturnType LCFG_Get_CONFIG_FUELTANK_TYPE(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_OilFillerdisplay(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_VR(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_DRIVEMODE(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_REAR_PASSENGER_SEAT_SENSOR(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_NAV(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_MEDIA(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_PHONE(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_DEFAULT_SOUNDVOLUME(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_TIME_MODE(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_DISPLAY_UNIT_DEFAULT_TEMPERATURE(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_DEFAULT_THEME(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_DEFAULT_BRIGHTNESS(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_DISPLAY_LANGUAGE(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_DISPLAY_UNIT_DEFAULT_FUEL_ECONOMY_DISTANCE(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_DISPLAY_UNIT_DEFAULT_PRESSURE(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_VEHICLE(ubyte*pValue);
Std_ReturnType LCFG_Get_CONFIG_AREA(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_OIL_PRESSURE_LOW_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_CHARGING_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_WASHER_FLUID_LOW_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_BRAKE_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_EMISSION_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_ENGINE_FAULT_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_ENGINE_COOLANT_TEMP_HIGH_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_FUEL_LEVEL_LOW_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_AIRBAG_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DRIVER_SEATBELT_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_FRONT_PASSENGER_SEATBELT_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_CRUISE_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_ABS_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_ESP_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_ESP_OFF_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_HDC_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_FRONT_FOG_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_REAR_FOG_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_LEFT_TURN_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_RIGHT_TURN_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_PARKING_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_HIGH_BEAM_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_SECURITY_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_TPMS_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_TRANSMISSION_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_TRANSPORT_MODE_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_AFS_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_AFS_OFF_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_4WD_AUTO_MODE_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_4WD_LOCK_MODE_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_EPB_STATE_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_EPB_FAULT_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DOOR_AJAR_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_AUTO_MODE_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_AUTOSTOP_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_START_STOP_SYSTEM_ACTIVE_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_START_STOP_SYSTEM_FAULT_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_EHPS_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_ESCL_STATE_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_PEPS_KEY_STATE_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_LDW_STATUS_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_FCW_STATUS_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_BSD_STATUS_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_HMA_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_TSR_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_WINTER_MODE_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_ECO_MODE_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_SPORT_MODE_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_NORMAL_MODE_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_MANUAL_MODE_INDICATOR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_TURN_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DRIVER_SEATBELT_UNFASTENED_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_FRONT_PASSENGER_SEATBELT_UNFASTENED_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_HAND_BRAKE_UNRELEASED_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DOOR_AJAR_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_LAMP_LEFT_ON_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_SUN_ROOF_OPEN_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_TPMS_FAULT_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_EPB_FAULT_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_PEPS_FAULT_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_KEY_IN_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_SHIFT_TO_GEAR_P_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_SHIFT_TO_GEAR_N_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_TRANSMISSION_FAULT_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_FOB_BATTERY_LOW_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_OVER_SPEED_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_ENGINE_COOLANT_TEMP_HIGH_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_GSM_FAULT_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_RTS_FAULT_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_LDW_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_FCW_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_BSD_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_AUTOHOLD_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_ACC_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_LOWBATPREWARN_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_AEB_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_NVS_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_ATS_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_APA_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_REAR_PASSENGER_SEATBELT_UNFASTENED_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_WINDOW_OPEN_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_HDC_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_LIGHTFAULT_BUZZER(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_TSR_BUZZER2(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_OAT(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_FR(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_IFE(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_IVS(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_BV(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_LONGTMEMORY(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_SHORTMEMORY(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_ECO(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_AFE1(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_AFE2(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_DT1(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_DT2(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_AVS1(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_AVS2(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_DD1(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_DD2(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_SOC(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_TIME(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_SAFETYNOTICE(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_SERVICE(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_TP(ubyte*pValue);
Std_ReturnType LCFG_Get_FUNCTION_DIC_TT(ubyte*pValue);
Std_ReturnType LCFG_Get_IND_BULBCHECK_TIME(ubyte*pValue);
Std_ReturnType LCFG_Get_IND_BULBCHECK_SRS_TIME(ubyte*pValue);
Std_ReturnType LCFG_Get_IND_OVERSPEED_ARABIC_ON_SPEED(ubyte*pValue);
Std_ReturnType LCFG_Get_IND_SAFETYNOTICE_ON_SPEED(ubyte*pValue);
Std_ReturnType LCFG_Get_IND_SAFETYNOTICE_OFF_SPEED(ubyte*pValue);
Std_ReturnType LCFG_Get_ODO_PULSES_FILTER_FACTOR(ubyte*pValue);
Std_ReturnType LCFG_Get_IND_SEATBELT_CHIME_ON_SPEED(ubyte*pValue);
Std_ReturnType LCFG_Get_IND_SEATBELT_CHIME_OFF_SPEED(ubyte*pValue);
Std_ReturnType LCFG_Get_IND_DOORAJAR_CHIME_OFF_SPEED(ubyte*pValue);
Std_ReturnType LCFG_Get_IND_DOORAJAR_CHIME_ON_SPEED(ubyte*pValue);
Std_ReturnType LCFG_Get_IND_HANDBRAKE_CHM_OFF_SPEED(ubyte*pValue);
Std_ReturnType LCFG_Get_IND_HANDBRAKE_CHM_ON_SPEED(ubyte*pValue);
Std_ReturnType LCFG_Get_IND_OVERSPEED_CHM_ON_SPEED(ubyte*pValue);
Std_ReturnType LCFG_Get_IND_OVERSPEED_CHM_OFF_SPEED(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_VEH_INFO_NAV_PRESS(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_OAT_REFRESH(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_OAT_FILTER(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_FR_REFRESH(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_FR_HIGH_VALUE(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_FR_LOW_VALUE(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_FR_HIGH_PERCENT(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_FR_LOW_PERCENT(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_IFE_REFRESH(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_IFE_SCALE(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_IFE_MAX(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_IFE_LOWSPEED(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_AFE_REFRESH(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_AFE_RESET_PRESS(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_AFE_SCALE(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_AFE_MAX(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_DT_REFRESH(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_DT_RESET_PRESS(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_AVS_REFRESH(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_AVS_RESET_PRESS(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_AVS_SCALE(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_AVS_MAX(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_DD_RESET_PRESS(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_AFTER_RESET_RESET_PRESS(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_IVS_MAX(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_IVS_REFRESH(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_BV_REFRESH(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_WARNING_DISPLAY_TIME(ubyte*pValue);
Std_ReturnType LCFG_Get_DIC_WARNING_MIN_DISPLAY_TIME(ubyte*pValue);
Std_ReturnType LCFG_Get_IND_WFL_LOW_TIME(ubyte*pValue);
Std_ReturnType LCFG_Get_CFC_INIT_VALUE(ubyte*pValue);
Std_ReturnType LCFG_Get_SLEEPREADY_ATOB_TIME(ushort*pValue);
Std_ReturnType LCFG_Get_SLEEPREADY_ATOSLEEP_TIME(ushort*pValue);
Std_ReturnType LCFG_Get_SLEEPREADY_BTOSLEEP_TIME(ushort*pValue);
Std_ReturnType LCFG_Get_Mode(ubyte*pValue);


/*______ P R I V A T E - F U N C T I O N S ___________________________________*/
 
 
/*______ L O C A L - F U N C T I O N S _______________________________________*/
 
 
 
#endif /* LCFG_CONFIG_H */
/*______ E N D _____ (lcfg_config.h) _________________________________________*/
