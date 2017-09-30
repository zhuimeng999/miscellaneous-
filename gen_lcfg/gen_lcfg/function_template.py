# -*- coding: UTF-8 -*-

'''
Created on 2017年8月2日

@author: f12160c
'''

function_template_ubyte = \
'''
/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_{config_field: <49}*/
/* Role           : Get {config_field: <54}*/
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_{config_field}({config_type} *pValue)
{{
  Std_ReturnType ret = OK;
  LCFG_{config_name} * config_data = (LCFG_{config_name} *){config_var};

  if (NULL == pValue)
  {{
    ret = NOK;
  }}
  else
  {{
    *pValue = config_data->{config_field};
    ret = OK;
  }}
  return ret;
}}
'''

function_template_ushort = \
'''
/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_{config_field: <49}*/
/* Role           : Get {config_field: <54}*/
/* Interface      : (R) return value = configure data structure               */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_{config_field}({config_type} *pValue)
{{
  Std_ReturnType ret = OK;
  LCFG_{config_name} * config_data = (LCFG_{config_name} *){config_var};

  if (NULL == pValue)
  {{
    ret = NOK;
  }}
  else
  {{
    *pValue = SYST_ByteSeqBigEndianToUshort((ubyte *)&config_data->{config_field});
    ret = OK;
  }}
  return ret;
}}
'''

function_template_memcpy = \
'''
/*----------------------------------------------------------------------------*/
/* Name           : LCFG_Get_CFC_INIT_VALUE                                   */
/* Role : Get LCFG:default fuel         comsuption                            */
/* Interface      : (R) return value = config data structure                  */
/* Pre-condition  : none                                                      */
/* Constraints    : none                                                      */
/* Behavior       :                                                           */
/*----------------------------------------------------------------------------*/
Std_ReturnType LCFG_Get_CFC_INIT_VALUE(ubyte *pValue)
{
  Std_ReturnType ret = OK;
  ubyte DefVal[] = LCFG_CFC_INIT_VALUE_DefVal;

  if (NULL == pValue)
  {
    ret = NOK;
  }
  else
  {
    if (FALSE == LCFGGW_GetDataState())
    {
      memcpy(pValue, DefVal, sizeof(DefVal));
    }
    else
    {
      memcpy(pValue, LCFG_ConfigData->CFC_INIT_VALUE,\
                 sizeof(LCFG_ConfigData->CFC_INIT_VALUE));
    }
    ret = OK;
  }
  return ret;
}
'''

class function_template:
    def __init__(self):
        pass
    
    @staticmethod
    def format(*args, **kwargs):
        if kwargs['config_type'] == 'ubyte':
            return function_template_ubyte.format(*args, **kwargs)
        elif kwargs['config_type'] == 'ushort':
            return function_template_ushort.format(*args, **kwargs)
        else:
            print("error")
            print(args, ' ', kwargs)
            exit()
        
if __name__ == '__main__':
    pass