/******************************************************************************/
/*@F_NAME:           lcfg_config.c                                            */
/*@F_PURPOSE:        configuration file for GAC A10                           */
/*@F_CREATED_BY:     Automatic                                                */
/*@F_CREATION_DATE:  2017/7/4                                                 */
/*@F_MPROC_TYPE:     up Independent                                           */
/************************************** (C) Copyright 2018 Magneti Marelli ****/
 
/* THIS FILE IS GENERATED AUTOMATICALLY ! DON'T MAKE ANY MANUAL CHANGES !     */
 
/*______ I N C L U D E - F I L E S ___________________________________________*/
 
#include "type.h"
#include "string.h"
#include "lcfg_appl.h"
#include "lcfggw_appl.h"
 
 
/*______ L O C A L - D E F I N E S  __________________________________________*/
 
 
/*______ L O C A L - T Y P E S _______________________________________________*/
 
 
/*______ G L O B A L - D A T A _______________________________________________*/
 
/*______ P R I V A T E - D A T A _____________________________________________*/
 
 
/*______ L O C A L - D A T A _________________________________________________*/
 
 
/*______ L O C A L - M A C R O S _____________________________________________*/
 
 
/*______ I M P O R T - F U N C T I O N S - P R O T O T Y P E S _______________*/
 
 
/*______ L O C A L - F U N C T I O N S - P R O T O T Y P E S _________________*/
 
 
/*______ G L O B A L - F U N C T I O N S _____________________________________*/

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_ENGINE_TYPE                               */
/* Role           : Get CONFIG_ENGINE_TYPE                                    */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_ENGINE_TYPE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_ENGINE_TYPE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_TRANSMISSION_TYPE                         */
/* Role           : Get CONFIG_TRANSMISSION_TYPE                              */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_TRANSMISSION_TYPE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_TRANSMISSION_TYPE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_DRIVE_TYPE                                */
/* Role           : Get CONFIG_DRIVE_TYPE                                     */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_DRIVE_TYPE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_DRIVE_TYPE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_STEERING_SYSTEM_TYPE                      */
/* Role           : Get CONFIG_STEERING_SYSTEM_TYPE                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_STEERING_SYSTEM_TYPE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_STEERING_SYSTEM_TYPE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_SRS                                       */
/* Role           : Get CONFIG_SRS                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_SRS(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_SRS;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_ABS                                       */
/* Role           : Get CONFIG_ABS                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_ABS(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_ABS;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_TPMS                                      */
/* Role           : Get CONFIG_TPMS                                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_TPMS(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_TPMS;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_RPA                                       */
/* Role           : Get CONFIG_RPA                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_RPA(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_RPA;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_ROOF                                      */
/* Role           : Get CONFIG_ROOF                                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_ROOF(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_ROOF;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_ESP                                       */
/* Role           : Get CONFIG_ESP                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_ESP(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_ESP;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_DRL                                       */
/* Role           : Get CONFIG_DRL                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_DRL(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_DRL;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_CRUISE                                    */
/* Role           : Get CONFIG_CRUISE                                         */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_CRUISE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_CRUISE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_START_STOP_SYSTEM                         */
/* Role           : Get CONFIG_START_STOP_SYSTEM                              */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_START_STOP_SYSTEM(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_START_STOP_SYSTEM;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_PEPS                                      */
/* Role           : Get CONFIG_PEPS                                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_PEPS(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_PEPS;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_RTS                                       */
/* Role           : Get CONFIG_RTS                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_RTS(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_RTS;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_SVM                                       */
/* Role           : Get CONFIG_SVM                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_SVM(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_SVM;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_MSM                                       */
/* Role           : Get CONFIG_MSM                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_MSM(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_MSM;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_EPB_AUTOHOLD                              */
/* Role           : Get CONFIG_EPB_AUTOHOLD                                   */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_EPB_AUTOHOLD(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_EPB_AUTOHOLD;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_BRAKE_TYPE                                */
/* Role           : Get CONFIG_BRAKE_TYPE                                     */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_BRAKE_TYPE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_BRAKE_TYPE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_GSM                                       */
/* Role           : Get CONFIG_GSM                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_GSM(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_GSM;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_ESP_HBC                                   */
/* Role           : Get CONFIG_ESP_HBC                                        */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_ESP_HBC(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_ESP_HBC;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_SBM                                       */
/* Role           : Get CONFIG_SBM                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_SBM(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_SBM;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_FOURWINDOWLIFT_ANTIPINCH                  */
/* Role           : Get CONFIG_FOURWINDOWLIFT_ANTIPINCH                       */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_FOURWINDOWLIFT_ANTIPINCH(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_FOURWINDOWLIFT_ANTIPINCH;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_ESCL                                      */
/* Role           : Get CONFIG_ESCL                                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_ESCL(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_ESCL;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_FRONT_PASSENGER_SEAT_SENSOR               */
/* Role           : Get CONFIG_FRONT_PASSENGER_SEAT_SENSOR                    */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_FRONT_PASSENGER_SEAT_SENSOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_FRONT_PASSENGER_SEAT_SENSOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_AFS                                       */
/* Role           : Get CONFIG_AFS                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_AFS(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_AFS;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_NVS                                       */
/* Role           : Get CONFIG_NVS                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_NVS(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_NVS;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_APA                                       */
/* Role           : Get CONFIG_APA                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_APA(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_APA;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_LDW                                       */
/* Role           : Get CONFIG_LDW                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_LDW(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_LDW;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_FCW                                       */
/* Role           : Get CONFIG_FCW                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_FCW(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_FCW;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_BSD                                       */
/* Role           : Get CONFIG_BSD                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_BSD(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_BSD;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_ATS                                       */
/* Role           : Get CONFIG_ATS                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_ATS(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_ATS;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_DFM                                       */
/* Role           : Get CONFIG_DFM                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_DFM(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_DFM;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_HMA                                       */
/* Role           : Get CONFIG_HMA                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_HMA(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_HMA;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_TSR                                       */
/* Role           : Get CONFIG_TSR                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_TSR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_TSR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_AEB                                       */
/* Role           : Get CONFIG_AEB                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_AEB(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_AEB;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_ACC                                       */
/* Role           : Get CONFIG_ACC                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_ACC(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_ACC;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_ODO_PULSES_PER_KILOMETER_DIV8                    */
/* Role           : Get ODO_PULSES_PER_KILOMETER_DIV8                         */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_ODO_PULSES_PER_KILOMETER_DIV8(ushort *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Configuration_calibration * config_data = (LCFG_Configuration_calibration *)VERS_GetConfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = SYST_ByteSeqBigEndianToUshort((ubyte *)&config_data->ODO_PULSES_PER_KILOMETER_DIV8);
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_FUELTANK_TYPE                             */
/* Role           : Get CONFIG_FUELTANK_TYPE                                  */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_FUELTANK_TYPE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Menu_AND_Configuration_calibration * config_data = (LCFG_Menu_AND_Configuration_calibration *)VERS_GetMenuconfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_FUELTANK_TYPE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_OilFillerdisplay                          */
/* Role           : Get CONFIG_OilFillerdisplay                               */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_OilFillerdisplay(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Menu_AND_Configuration_calibration * config_data = (LCFG_Menu_AND_Configuration_calibration *)VERS_GetMenuconfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_OilFillerdisplay;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_VR                                        */
/* Role           : Get CONFIG_VR                                             */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_VR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Menu_AND_Configuration_calibration * config_data = (LCFG_Menu_AND_Configuration_calibration *)VERS_GetMenuconfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_VR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_DRIVEMODE                                 */
/* Role           : Get CONFIG_DRIVEMODE                                      */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_DRIVEMODE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Menu_AND_Configuration_calibration * config_data = (LCFG_Menu_AND_Configuration_calibration *)VERS_GetMenuconfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_DRIVEMODE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_REAR_PASSENGER_SEAT_SENSOR                */
/* Role           : Get CONFIG_REAR_PASSENGER_SEAT_SENSOR                     */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_REAR_PASSENGER_SEAT_SENSOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Menu_AND_Configuration_calibration * config_data = (LCFG_Menu_AND_Configuration_calibration *)VERS_GetMenuconfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_REAR_PASSENGER_SEAT_SENSOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_NAV                                       */
/* Role           : Get CONFIG_NAV                                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_NAV(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Menu_AND_Configuration_calibration * config_data = (LCFG_Menu_AND_Configuration_calibration *)VERS_GetMenuconfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_NAV;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_MEDIA                                     */
/* Role           : Get CONFIG_MEDIA                                          */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_MEDIA(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Menu_AND_Configuration_calibration * config_data = (LCFG_Menu_AND_Configuration_calibration *)VERS_GetMenuconfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_MEDIA;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_PHONE                                     */
/* Role           : Get CONFIG_PHONE                                          */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_PHONE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Menu_AND_Configuration_calibration * config_data = (LCFG_Menu_AND_Configuration_calibration *)VERS_GetMenuconfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_PHONE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_DEFAULT_SOUNDVOLUME                       */
/* Role           : Get CONFIG_DEFAULT_SOUNDVOLUME                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_DEFAULT_SOUNDVOLUME(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Menu_AND_Configuration_calibration * config_data = (LCFG_Menu_AND_Configuration_calibration *)VERS_GetMenuconfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_DEFAULT_SOUNDVOLUME;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_TIME_MODE                                 */
/* Role           : Get CONFIG_TIME_MODE                                      */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_TIME_MODE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Menu_AND_Configuration_calibration * config_data = (LCFG_Menu_AND_Configuration_calibration *)VERS_GetMenuconfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_TIME_MODE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_DISPLAY_UNIT_DEFAULT_TEMPERATURE          */
/* Role           : Get CONFIG_DISPLAY_UNIT_DEFAULT_TEMPERATURE               */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_DISPLAY_UNIT_DEFAULT_TEMPERATURE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Menu_AND_Configuration_calibration * config_data = (LCFG_Menu_AND_Configuration_calibration *)VERS_GetMenuconfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_DISPLAY_UNIT_DEFAULT_TEMPERATURE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_DEFAULT_THEME                             */
/* Role           : Get CONFIG_DEFAULT_THEME                                  */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_DEFAULT_THEME(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Menu_AND_Configuration_calibration * config_data = (LCFG_Menu_AND_Configuration_calibration *)VERS_GetMenuconfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_DEFAULT_THEME;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_DEFAULT_BRIGHTNESS                        */
/* Role           : Get CONFIG_DEFAULT_BRIGHTNESS                             */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_DEFAULT_BRIGHTNESS(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Menu_AND_Configuration_calibration * config_data = (LCFG_Menu_AND_Configuration_calibration *)VERS_GetMenuconfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_DEFAULT_BRIGHTNESS;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_DISPLAY_LANGUAGE                          */
/* Role           : Get CONFIG_DISPLAY_LANGUAGE                               */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_DISPLAY_LANGUAGE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Menu_AND_Configuration_calibration * config_data = (LCFG_Menu_AND_Configuration_calibration *)VERS_GetMenuconfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_DISPLAY_LANGUAGE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_DISPLAY_UNIT_DEFAULT_FUEL_ECONOMY_DISTANCE*/
/* Role           : Get CONFIG_DISPLAY_UNIT_DEFAULT_FUEL_ECONOMY_DISTANCE     */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_DISPLAY_UNIT_DEFAULT_FUEL_ECONOMY_DISTANCE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Menu_AND_Configuration_calibration * config_data = (LCFG_Menu_AND_Configuration_calibration *)VERS_GetMenuconfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_DISPLAY_UNIT_DEFAULT_FUEL_ECONOMY_DISTANCE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_DISPLAY_UNIT_DEFAULT_PRESSURE             */
/* Role           : Get CONFIG_DISPLAY_UNIT_DEFAULT_PRESSURE                  */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_DISPLAY_UNIT_DEFAULT_PRESSURE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Menu_AND_Configuration_calibration * config_data = (LCFG_Menu_AND_Configuration_calibration *)VERS_GetMenuconfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_DISPLAY_UNIT_DEFAULT_PRESSURE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_VEHICLE                                   */
/* Role           : Get CONFIG_VEHICLE                                        */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_VEHICLE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Menu_AND_Configuration_calibration * config_data = (LCFG_Menu_AND_Configuration_calibration *)VERS_GetMenuconfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_VEHICLE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CONFIG_AREA                                      */
/* Role           : Get CONFIG_AREA                                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CONFIG_AREA(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Menu_AND_Configuration_calibration * config_data = (LCFG_Menu_AND_Configuration_calibration *)VERS_GetMenuconfigcalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CONFIG_AREA;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_OIL_PRESSURE_LOW_INDICATOR              */
/* Role           : Get FUNCTION_OIL_PRESSURE_LOW_INDICATOR                   */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_OIL_PRESSURE_LOW_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_OIL_PRESSURE_LOW_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_CHARGING_INDICATOR                      */
/* Role           : Get FUNCTION_CHARGING_INDICATOR                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_CHARGING_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_CHARGING_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_WASHER_FLUID_LOW_INDICATOR              */
/* Role           : Get FUNCTION_WASHER_FLUID_LOW_INDICATOR                   */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_WASHER_FLUID_LOW_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_WASHER_FLUID_LOW_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_BRAKE_INDICATOR                         */
/* Role           : Get FUNCTION_BRAKE_INDICATOR                              */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_BRAKE_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_BRAKE_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_EMISSION_INDICATOR                      */
/* Role           : Get FUNCTION_EMISSION_INDICATOR                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_EMISSION_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_EMISSION_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_ENGINE_FAULT_INDICATOR                  */
/* Role           : Get FUNCTION_ENGINE_FAULT_INDICATOR                       */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_ENGINE_FAULT_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_ENGINE_FAULT_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_ENGINE_COOLANT_TEMP_HIGH_INDICATOR      */
/* Role           : Get FUNCTION_ENGINE_COOLANT_TEMP_HIGH_INDICATOR           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_ENGINE_COOLANT_TEMP_HIGH_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_ENGINE_COOLANT_TEMP_HIGH_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_FUEL_LEVEL_LOW_INDICATOR                */
/* Role           : Get FUNCTION_FUEL_LEVEL_LOW_INDICATOR                     */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_FUEL_LEVEL_LOW_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_FUEL_LEVEL_LOW_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_AIRBAG_INDICATOR                        */
/* Role           : Get FUNCTION_AIRBAG_INDICATOR                             */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_AIRBAG_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_AIRBAG_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DRIVER_SEATBELT_INDICATOR               */
/* Role           : Get FUNCTION_DRIVER_SEATBELT_INDICATOR                    */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DRIVER_SEATBELT_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DRIVER_SEATBELT_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_FRONT_PASSENGER_SEATBELT_INDICATOR      */
/* Role           : Get FUNCTION_FRONT_PASSENGER_SEATBELT_INDICATOR           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_FRONT_PASSENGER_SEATBELT_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_FRONT_PASSENGER_SEATBELT_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_CRUISE_INDICATOR                        */
/* Role           : Get FUNCTION_CRUISE_INDICATOR                             */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_CRUISE_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_CRUISE_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_ABS_INDICATOR                           */
/* Role           : Get FUNCTION_ABS_INDICATOR                                */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_ABS_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_ABS_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_ESP_INDICATOR                           */
/* Role           : Get FUNCTION_ESP_INDICATOR                                */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_ESP_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_ESP_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_ESP_OFF_INDICATOR                       */
/* Role           : Get FUNCTION_ESP_OFF_INDICATOR                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_ESP_OFF_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_ESP_OFF_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_HDC_INDICATOR                           */
/* Role           : Get FUNCTION_HDC_INDICATOR                                */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_HDC_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_HDC_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_FRONT_FOG_INDICATOR                     */
/* Role           : Get FUNCTION_FRONT_FOG_INDICATOR                          */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_FRONT_FOG_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_FRONT_FOG_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_REAR_FOG_INDICATOR                      */
/* Role           : Get FUNCTION_REAR_FOG_INDICATOR                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_REAR_FOG_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_REAR_FOG_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_LEFT_TURN_INDICATOR                     */
/* Role           : Get FUNCTION_LEFT_TURN_INDICATOR                          */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_LEFT_TURN_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_LEFT_TURN_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_RIGHT_TURN_INDICATOR                    */
/* Role           : Get FUNCTION_RIGHT_TURN_INDICATOR                         */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_RIGHT_TURN_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_RIGHT_TURN_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_PARKING_INDICATOR                       */
/* Role           : Get FUNCTION_PARKING_INDICATOR                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_PARKING_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_PARKING_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_HIGH_BEAM_INDICATOR                     */
/* Role           : Get FUNCTION_HIGH_BEAM_INDICATOR                          */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_HIGH_BEAM_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_HIGH_BEAM_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_SECURITY_INDICATOR                      */
/* Role           : Get FUNCTION_SECURITY_INDICATOR                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_SECURITY_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_SECURITY_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_TPMS_INDICATOR                          */
/* Role           : Get FUNCTION_TPMS_INDICATOR                               */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_TPMS_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_TPMS_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_TRANSMISSION_INDICATOR                  */
/* Role           : Get FUNCTION_TRANSMISSION_INDICATOR                       */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_TRANSMISSION_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_TRANSMISSION_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_TRANSPORT_MODE_INDICATOR                */
/* Role           : Get FUNCTION_TRANSPORT_MODE_INDICATOR                     */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_TRANSPORT_MODE_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_TRANSPORT_MODE_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_AFS_INDICATOR                           */
/* Role           : Get FUNCTION_AFS_INDICATOR                                */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_AFS_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_AFS_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_AFS_OFF_INDICATOR                       */
/* Role           : Get FUNCTION_AFS_OFF_INDICATOR                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_AFS_OFF_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_AFS_OFF_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_4WD_AUTO_MODE_INDICATOR                 */
/* Role           : Get FUNCTION_4WD_AUTO_MODE_INDICATOR                      */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_4WD_AUTO_MODE_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_4WD_AUTO_MODE_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_4WD_LOCK_MODE_INDICATOR                 */
/* Role           : Get FUNCTION_4WD_LOCK_MODE_INDICATOR                      */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_4WD_LOCK_MODE_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_4WD_LOCK_MODE_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_EPB_STATE_INDICATOR                     */
/* Role           : Get FUNCTION_EPB_STATE_INDICATOR                          */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_EPB_STATE_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_EPB_STATE_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_EPB_FAULT_INDICATOR                     */
/* Role           : Get FUNCTION_EPB_FAULT_INDICATOR                          */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_EPB_FAULT_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_EPB_FAULT_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DOOR_AJAR_INDICATOR                     */
/* Role           : Get FUNCTION_DOOR_AJAR_INDICATOR                          */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DOOR_AJAR_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DOOR_AJAR_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_AUTO_MODE_INDICATOR                     */
/* Role           : Get FUNCTION_AUTO_MODE_INDICATOR                          */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_AUTO_MODE_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_AUTO_MODE_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_AUTOSTOP_INDICATOR                      */
/* Role           : Get FUNCTION_AUTOSTOP_INDICATOR                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_AUTOSTOP_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_AUTOSTOP_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_START_STOP_SYSTEM_ACTIVE_INDICATOR      */
/* Role           : Get FUNCTION_START_STOP_SYSTEM_ACTIVE_INDICATOR           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_START_STOP_SYSTEM_ACTIVE_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_START_STOP_SYSTEM_ACTIVE_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_START_STOP_SYSTEM_FAULT_INDICATOR       */
/* Role           : Get FUNCTION_START_STOP_SYSTEM_FAULT_INDICATOR            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_START_STOP_SYSTEM_FAULT_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_START_STOP_SYSTEM_FAULT_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_EHPS_INDICATOR                          */
/* Role           : Get FUNCTION_EHPS_INDICATOR                               */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_EHPS_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_EHPS_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_ESCL_STATE_INDICATOR                    */
/* Role           : Get FUNCTION_ESCL_STATE_INDICATOR                         */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_ESCL_STATE_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_ESCL_STATE_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_PEPS_KEY_STATE_INDICATOR                */
/* Role           : Get FUNCTION_PEPS_KEY_STATE_INDICATOR                     */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_PEPS_KEY_STATE_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_PEPS_KEY_STATE_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_LDW_STATUS_INDICATOR                    */
/* Role           : Get FUNCTION_LDW_STATUS_INDICATOR                         */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_LDW_STATUS_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_LDW_STATUS_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_FCW_STATUS_INDICATOR                    */
/* Role           : Get FUNCTION_FCW_STATUS_INDICATOR                         */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_FCW_STATUS_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_FCW_STATUS_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_BSD_STATUS_INDICATOR                    */
/* Role           : Get FUNCTION_BSD_STATUS_INDICATOR                         */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_BSD_STATUS_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_BSD_STATUS_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_HMA_INDICATOR                           */
/* Role           : Get FUNCTION_HMA_INDICATOR                                */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_HMA_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_HMA_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_TSR_BUZZER                              */
/* Role           : Get FUNCTION_TSR_BUZZER                                   */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_TSR_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_TSR_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_WINTER_MODE_INDICATOR                   */
/* Role           : Get FUNCTION_WINTER_MODE_INDICATOR                        */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_WINTER_MODE_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_WINTER_MODE_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_ECO_MODE_INDICATOR                      */
/* Role           : Get FUNCTION_ECO_MODE_INDICATOR                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_ECO_MODE_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_ECO_MODE_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_SPORT_MODE_INDICATOR                    */
/* Role           : Get FUNCTION_SPORT_MODE_INDICATOR                         */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_SPORT_MODE_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_SPORT_MODE_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_NORMAL_MODE_INDICATOR                   */
/* Role           : Get FUNCTION_NORMAL_MODE_INDICATOR                        */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_NORMAL_MODE_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_NORMAL_MODE_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_MANUAL_MODE_INDICATOR                   */
/* Role           : Get FUNCTION_MANUAL_MODE_INDICATOR                        */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_MANUAL_MODE_INDICATOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_MANUAL_MODE_INDICATOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_TURN_BUZZER                             */
/* Role           : Get FUNCTION_TURN_BUZZER                                  */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_TURN_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_TURN_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DRIVER_SEATBELT_UNFASTENED_BUZZER       */
/* Role           : Get FUNCTION_DRIVER_SEATBELT_UNFASTENED_BUZZER            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DRIVER_SEATBELT_UNFASTENED_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DRIVER_SEATBELT_UNFASTENED_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_FRONT_PASSENGER_SEATBELT_UNFASTENED_BUZZER*/
/* Role           : Get FUNCTION_FRONT_PASSENGER_SEATBELT_UNFASTENED_BUZZER   */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_FRONT_PASSENGER_SEATBELT_UNFASTENED_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_FRONT_PASSENGER_SEATBELT_UNFASTENED_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_HAND_BRAKE_UNRELEASED_BUZZER            */
/* Role           : Get FUNCTION_HAND_BRAKE_UNRELEASED_BUZZER                 */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_HAND_BRAKE_UNRELEASED_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_HAND_BRAKE_UNRELEASED_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DOOR_AJAR_BUZZER                        */
/* Role           : Get FUNCTION_DOOR_AJAR_BUZZER                             */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DOOR_AJAR_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DOOR_AJAR_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_LAMP_LEFT_ON_BUZZER                     */
/* Role           : Get FUNCTION_LAMP_LEFT_ON_BUZZER                          */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_LAMP_LEFT_ON_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_LAMP_LEFT_ON_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_SUN_ROOF_OPEN_BUZZER                    */
/* Role           : Get FUNCTION_SUN_ROOF_OPEN_BUZZER                         */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_SUN_ROOF_OPEN_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_SUN_ROOF_OPEN_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_TPMS_FAULT_BUZZER                       */
/* Role           : Get FUNCTION_TPMS_FAULT_BUZZER                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_TPMS_FAULT_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_TPMS_FAULT_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_EPB_FAULT_BUZZER                        */
/* Role           : Get FUNCTION_EPB_FAULT_BUZZER                             */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_EPB_FAULT_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_EPB_FAULT_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_PEPS_FAULT_BUZZER                       */
/* Role           : Get FUNCTION_PEPS_FAULT_BUZZER                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_PEPS_FAULT_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_PEPS_FAULT_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_KEY_IN_BUZZER                           */
/* Role           : Get FUNCTION_KEY_IN_BUZZER                                */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_KEY_IN_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_KEY_IN_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_SHIFT_TO_GEAR_P_BUZZER                  */
/* Role           : Get FUNCTION_SHIFT_TO_GEAR_P_BUZZER                       */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_SHIFT_TO_GEAR_P_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_SHIFT_TO_GEAR_P_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_SHIFT_TO_GEAR_N_BUZZER                  */
/* Role           : Get FUNCTION_SHIFT_TO_GEAR_N_BUZZER                       */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_SHIFT_TO_GEAR_N_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_SHIFT_TO_GEAR_N_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_TRANSMISSION_FAULT_BUZZER               */
/* Role           : Get FUNCTION_TRANSMISSION_FAULT_BUZZER                    */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_TRANSMISSION_FAULT_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_TRANSMISSION_FAULT_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_FOB_BATTERY_LOW_BUZZER                  */
/* Role           : Get FUNCTION_FOB_BATTERY_LOW_BUZZER                       */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_FOB_BATTERY_LOW_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_FOB_BATTERY_LOW_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_OVER_SPEED_BUZZER                       */
/* Role           : Get FUNCTION_OVER_SPEED_BUZZER                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_OVER_SPEED_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_OVER_SPEED_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_ENGINE_COOLANT_TEMP_HIGH_BUZZER         */
/* Role           : Get FUNCTION_ENGINE_COOLANT_TEMP_HIGH_BUZZER              */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_ENGINE_COOLANT_TEMP_HIGH_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_ENGINE_COOLANT_TEMP_HIGH_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_GSM_FAULT_BUZZER                        */
/* Role           : Get FUNCTION_GSM_FAULT_BUZZER                             */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_GSM_FAULT_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_GSM_FAULT_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_RTS_FAULT_BUZZER                        */
/* Role           : Get FUNCTION_RTS_FAULT_BUZZER                             */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_RTS_FAULT_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_RTS_FAULT_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_LDW_BUZZER                              */
/* Role           : Get FUNCTION_LDW_BUZZER                                   */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_LDW_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_LDW_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_FCW_BUZZER                              */
/* Role           : Get FUNCTION_FCW_BUZZER                                   */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_FCW_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_FCW_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_BSD_BUZZER                              */
/* Role           : Get FUNCTION_BSD_BUZZER                                   */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_BSD_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_BSD_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_AUTOHOLD_BUZZER                         */
/* Role           : Get FUNCTION_AUTOHOLD_BUZZER                              */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_AUTOHOLD_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_AUTOHOLD_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_ACC_BUZZER                              */
/* Role           : Get FUNCTION_ACC_BUZZER                                   */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_ACC_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_ACC_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_LOWBATPREWARN_BUZZER                    */
/* Role           : Get FUNCTION_LOWBATPREWARN_BUZZER                         */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_LOWBATPREWARN_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_LOWBATPREWARN_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_AEB_BUZZER                              */
/* Role           : Get FUNCTION_AEB_BUZZER                                   */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_AEB_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_AEB_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_NVS_BUZZER                              */
/* Role           : Get FUNCTION_NVS_BUZZER                                   */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_NVS_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_NVS_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_ATS_BUZZER                              */
/* Role           : Get FUNCTION_ATS_BUZZER                                   */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_ATS_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_ATS_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_APA_BUZZER                              */
/* Role           : Get FUNCTION_APA_BUZZER                                   */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_APA_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_APA_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_REAR_PASSENGER_SEATBELT_UNFASTENED_BUZZER*/
/* Role           : Get FUNCTION_REAR_PASSENGER_SEATBELT_UNFASTENED_BUZZER    */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_REAR_PASSENGER_SEATBELT_UNFASTENED_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_REAR_PASSENGER_SEATBELT_UNFASTENED_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_WINDOW_OPEN_BUZZER                      */
/* Role           : Get FUNCTION_WINDOW_OPEN_BUZZER                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_WINDOW_OPEN_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_WINDOW_OPEN_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_HDC_BUZZER                              */
/* Role           : Get FUNCTION_HDC_BUZZER                                   */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_HDC_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_HDC_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_LIGHTFAULT_BUZZER                       */
/* Role           : Get FUNCTION_LIGHTFAULT_BUZZER                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_LIGHTFAULT_BUZZER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_LIGHTFAULT_BUZZER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_TSR_BUZZER2                             */
/* Role           : Get FUNCTION_TSR_BUZZER2                                  */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_TSR_BUZZER2(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_TSR_BUZZER2;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_OAT                                 */
/* Role           : Get FUNCTION_DIC_OAT                                      */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_OAT(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_OAT;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_FR                                  */
/* Role           : Get FUNCTION_DIC_FR                                       */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_FR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_FR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_IFE                                 */
/* Role           : Get FUNCTION_DIC_IFE                                      */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_IFE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_IFE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_IVS                                 */
/* Role           : Get FUNCTION_DIC_IVS                                      */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_IVS(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_IVS;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_BV                                  */
/* Role           : Get FUNCTION_DIC_BV                                       */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_BV(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_BV;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_LONGTMEMORY                         */
/* Role           : Get FUNCTION_DIC_LONGTMEMORY                              */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_LONGTMEMORY(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_LONGTMEMORY;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_SHORTMEMORY                         */
/* Role           : Get FUNCTION_DIC_SHORTMEMORY                              */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_SHORTMEMORY(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_SHORTMEMORY;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_ECO                                 */
/* Role           : Get FUNCTION_DIC_ECO                                      */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_ECO(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_ECO;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_AFE1                                */
/* Role           : Get FUNCTION_DIC_AFE1                                     */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_AFE1(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_AFE1;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_AFE2                                */
/* Role           : Get FUNCTION_DIC_AFE2                                     */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_AFE2(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_AFE2;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_DT1                                 */
/* Role           : Get FUNCTION_DIC_DT1                                      */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_DT1(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_DT1;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_DT2                                 */
/* Role           : Get FUNCTION_DIC_DT2                                      */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_DT2(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_DT2;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_AVS1                                */
/* Role           : Get FUNCTION_DIC_AVS1                                     */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_AVS1(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_AVS1;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_AVS2                                */
/* Role           : Get FUNCTION_DIC_AVS2                                     */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_AVS2(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_AVS2;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_DD1                                 */
/* Role           : Get FUNCTION_DIC_DD1                                      */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_DD1(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_DD1;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_DD2                                 */
/* Role           : Get FUNCTION_DIC_DD2                                      */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_DD2(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_DD2;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_SOC                                 */
/* Role           : Get FUNCTION_DIC_SOC                                      */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_SOC(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_SOC;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_TIME                                */
/* Role           : Get FUNCTION_DIC_TIME                                     */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_TIME(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_TIME;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_SAFETYNOTICE                        */
/* Role           : Get FUNCTION_DIC_SAFETYNOTICE                             */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_SAFETYNOTICE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_SAFETYNOTICE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_SERVICE                             */
/* Role           : Get FUNCTION_DIC_SERVICE                                  */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_SERVICE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_SERVICE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_TP                                  */
/* Role           : Get FUNCTION_DIC_TP                                       */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_TP(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_TP;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_FUNCTION_DIC_TT                                  */
/* Role           : Get FUNCTION_DIC_TT                                       */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_FUNCTION_DIC_TT(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Function_calibration * config_data = (LCFG_Function_calibration *)VERS_GetFunctioncalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->FUNCTION_DIC_TT;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_IND_BULBCHECK_TIME                               */
/* Role           : Get IND_BULBCHECK_TIME                                    */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_IND_BULBCHECK_TIME(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->IND_BULBCHECK_TIME;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_IND_BULBCHECK_SRS_TIME                           */
/* Role           : Get IND_BULBCHECK_SRS_TIME                                */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_IND_BULBCHECK_SRS_TIME(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->IND_BULBCHECK_SRS_TIME;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_IND_OVERSPEED_ARABIC_ON_SPEED                    */
/* Role           : Get IND_OVERSPEED_ARABIC_ON_SPEED                         */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_IND_OVERSPEED_ARABIC_ON_SPEED(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->IND_OVERSPEED_ARABIC_ON_SPEED;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_IND_SAFETYNOTICE_ON_SPEED                        */
/* Role           : Get IND_SAFETYNOTICE_ON_SPEED                             */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_IND_SAFETYNOTICE_ON_SPEED(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->IND_SAFETYNOTICE_ON_SPEED;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_IND_SAFETYNOTICE_OFF_SPEED                       */
/* Role           : Get IND_SAFETYNOTICE_OFF_SPEED                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_IND_SAFETYNOTICE_OFF_SPEED(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->IND_SAFETYNOTICE_OFF_SPEED;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_ODO_PULSES_FILTER_FACTOR                         */
/* Role           : Get ODO_PULSES_FILTER_FACTOR                              */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_ODO_PULSES_FILTER_FACTOR(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->ODO_PULSES_FILTER_FACTOR;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_IND_SEATBELT_CHIME_ON_SPEED                      */
/* Role           : Get IND_SEATBELT_CHIME_ON_SPEED                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_IND_SEATBELT_CHIME_ON_SPEED(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->IND_SEATBELT_CHIME_ON_SPEED;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_IND_SEATBELT_CHIME_OFF_SPEED                     */
/* Role           : Get IND_SEATBELT_CHIME_OFF_SPEED                          */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_IND_SEATBELT_CHIME_OFF_SPEED(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->IND_SEATBELT_CHIME_OFF_SPEED;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_IND_DOORAJAR_CHIME_OFF_SPEED                     */
/* Role           : Get IND_DOORAJAR_CHIME_OFF_SPEED                          */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_IND_DOORAJAR_CHIME_OFF_SPEED(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->IND_DOORAJAR_CHIME_OFF_SPEED;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_IND_DOORAJAR_CHIME_ON_SPEED                      */
/* Role           : Get IND_DOORAJAR_CHIME_ON_SPEED                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_IND_DOORAJAR_CHIME_ON_SPEED(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->IND_DOORAJAR_CHIME_ON_SPEED;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_IND_HANDBRAKE_CHM_OFF_SPEED                      */
/* Role           : Get IND_HANDBRAKE_CHM_OFF_SPEED                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_IND_HANDBRAKE_CHM_OFF_SPEED(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->IND_HANDBRAKE_CHM_OFF_SPEED;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_IND_HANDBRAKE_CHM_ON_SPEED                       */
/* Role           : Get IND_HANDBRAKE_CHM_ON_SPEED                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_IND_HANDBRAKE_CHM_ON_SPEED(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->IND_HANDBRAKE_CHM_ON_SPEED;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_IND_OVERSPEED_CHM_ON_SPEED                       */
/* Role           : Get IND_OVERSPEED_CHM_ON_SPEED                            */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_IND_OVERSPEED_CHM_ON_SPEED(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->IND_OVERSPEED_CHM_ON_SPEED;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_IND_OVERSPEED_CHM_OFF_SPEED                      */
/* Role           : Get IND_OVERSPEED_CHM_OFF_SPEED                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_IND_OVERSPEED_CHM_OFF_SPEED(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->IND_OVERSPEED_CHM_OFF_SPEED;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_VEH_INFO_NAV_PRESS                           */
/* Role           : Get DIC_VEH_INFO_NAV_PRESS                                */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_VEH_INFO_NAV_PRESS(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_VEH_INFO_NAV_PRESS;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_OAT_REFRESH                                  */
/* Role           : Get DIC_OAT_REFRESH                                       */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_OAT_REFRESH(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_OAT_REFRESH;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_OAT_FILTER                                   */
/* Role           : Get DIC_OAT_FILTER                                        */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_OAT_FILTER(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_OAT_FILTER;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_FR_REFRESH                                   */
/* Role           : Get DIC_FR_REFRESH                                        */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_FR_REFRESH(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_FR_REFRESH;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_FR_HIGH_VALUE                                */
/* Role           : Get DIC_FR_HIGH_VALUE                                     */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_FR_HIGH_VALUE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_FR_HIGH_VALUE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_FR_LOW_VALUE                                 */
/* Role           : Get DIC_FR_LOW_VALUE                                      */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_FR_LOW_VALUE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_FR_LOW_VALUE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_FR_HIGH_PERCENT                              */
/* Role           : Get DIC_FR_HIGH_PERCENT                                   */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_FR_HIGH_PERCENT(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_FR_HIGH_PERCENT;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_FR_LOW_PERCENT                               */
/* Role           : Get DIC_FR_LOW_PERCENT                                    */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_FR_LOW_PERCENT(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_FR_LOW_PERCENT;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_IFE_REFRESH                                  */
/* Role           : Get DIC_IFE_REFRESH                                       */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_IFE_REFRESH(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_IFE_REFRESH;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_IFE_SCALE                                    */
/* Role           : Get DIC_IFE_SCALE                                         */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_IFE_SCALE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_IFE_SCALE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_IFE_MAX                                      */
/* Role           : Get DIC_IFE_MAX                                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_IFE_MAX(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_IFE_MAX;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_IFE_LOWSPEED                                 */
/* Role           : Get DIC_IFE_LOWSPEED                                      */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_IFE_LOWSPEED(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_IFE_LOWSPEED;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_AFE_REFRESH                                  */
/* Role           : Get DIC_AFE_REFRESH                                       */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_AFE_REFRESH(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_AFE_REFRESH;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_AFE_RESET_PRESS                              */
/* Role           : Get DIC_AFE_RESET_PRESS                                   */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_AFE_RESET_PRESS(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_AFE_RESET_PRESS;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_AFE_SCALE                                    */
/* Role           : Get DIC_AFE_SCALE                                         */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_AFE_SCALE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_AFE_SCALE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_AFE_MAX                                      */
/* Role           : Get DIC_AFE_MAX                                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_AFE_MAX(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_AFE_MAX;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_DT_REFRESH                                   */
/* Role           : Get DIC_DT_REFRESH                                        */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_DT_REFRESH(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_DT_REFRESH;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_DT_RESET_PRESS                               */
/* Role           : Get DIC_DT_RESET_PRESS                                    */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_DT_RESET_PRESS(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_DT_RESET_PRESS;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_AVS_REFRESH                                  */
/* Role           : Get DIC_AVS_REFRESH                                       */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_AVS_REFRESH(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_AVS_REFRESH;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_AVS_RESET_PRESS                              */
/* Role           : Get DIC_AVS_RESET_PRESS                                   */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_AVS_RESET_PRESS(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_AVS_RESET_PRESS;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_AVS_SCALE                                    */
/* Role           : Get DIC_AVS_SCALE                                         */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_AVS_SCALE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_AVS_SCALE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_AVS_MAX                                      */
/* Role           : Get DIC_AVS_MAX                                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_AVS_MAX(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_AVS_MAX;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_DD_RESET_PRESS                               */
/* Role           : Get DIC_DD_RESET_PRESS                                    */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_DD_RESET_PRESS(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_DD_RESET_PRESS;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_AFTER_RESET_RESET_PRESS                      */
/* Role           : Get DIC_AFTER_RESET_RESET_PRESS                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_AFTER_RESET_RESET_PRESS(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_AFTER_RESET_RESET_PRESS;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_IVS_MAX                                      */
/* Role           : Get DIC_IVS_MAX                                           */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_IVS_MAX(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_IVS_MAX;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_IVS_REFRESH                                  */
/* Role           : Get DIC_IVS_REFRESH                                       */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_IVS_REFRESH(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_IVS_REFRESH;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_BV_REFRESH                                   */
/* Role           : Get DIC_BV_REFRESH                                        */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_BV_REFRESH(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_BV_REFRESH;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_WARNING_DISPLAY_TIME                         */
/* Role           : Get DIC_WARNING_DISPLAY_TIME                              */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_WARNING_DISPLAY_TIME(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_WARNING_DISPLAY_TIME;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_DIC_WARNING_MIN_DISPLAY_TIME                     */
/* Role           : Get DIC_WARNING_MIN_DISPLAY_TIME                          */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_DIC_WARNING_MIN_DISPLAY_TIME(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->DIC_WARNING_MIN_DISPLAY_TIME;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_IND_WFL_LOW_TIME                                 */
/* Role           : Get IND_WFL_LOW_TIME                                      */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_IND_WFL_LOW_TIME(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->IND_WFL_LOW_TIME;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CFC_INIT_VALUE                                   */
/* Role           : Get CFC_INIT_VALUE                                        */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CFC_INIT_VALUE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->CFC_INIT_VALUE;
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_SLEEPREADY_ATOB_TIME                             */
/* Role           : Get SLEEPREADY_ATOB_TIME                                  */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_SLEEPREADY_ATOB_TIME(ushort *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = SYST_ByteSeqBigEndianToUshort((ubyte *)&config_data->SLEEPREADY_ATOB_TIME);
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_SLEEPREADY_ATOSLEEP_TIME                         */
/* Role           : Get SLEEPREADY_ATOSLEEP_TIME                              */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_SLEEPREADY_ATOSLEEP_TIME(ushort *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = SYST_ByteSeqBigEndianToUshort((ubyte *)&config_data->SLEEPREADY_ATOSLEEP_TIME);
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_SLEEPREADY_BTOSLEEP_TIME                         */
/* Role           : Get SLEEPREADY_BTOSLEEP_TIME                              */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_SLEEPREADY_BTOSLEEP_TIME(ushort *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Parameter_calibration * config_data = (LCFG_Parameter_calibration *)VERS_GetParametercalibration();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = SYST_ByteSeqBigEndianToUshort((ubyte *)&config_data->SLEEPREADY_BTOSLEEP_TIME);
    ret = OK;
  }
  return ret;
}

/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_Mode                                             */
/* Role           : Get Mode                                                  */
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_Mode(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  LCFG_Cluster_Mode * config_data = (LCFG_Cluster_Mode *)VERS_GetClustermode();

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    *pValue = config_data->Mode;
    ret = OK;
  }
  return ret;
}

/*______ P R I V A T E - F U N C T I O N S ___________________________________*/
 
 
/*______ L O C A L - F U N C T I O N S _______________________________________*/
 
 
/*______ E N D _____ (lcfg_config.c) _________________________________________*/
