# -*- coding: UTF-8 -*-

'''
Created on 2017年8月2日

@author: f12160c
'''

from builtins import object
            
class struct_template(object):
    struct_template = \
'''
typedef struct {{
{field}
}} LCFG_{config_name};
'''
# '''
# typedef ubyte LCFG_{config_name}_SizeCheck[(sizeof(LCFG_{config_name}) - {config_size})?-1:1];
# '''
    struct_field_template = \
    '''    {field_type} {field_name} : {field_width};'''
    
    class struct_field:
        def __init__(self, field_type, field_name, field_start, field_width):
            self.field_type = field_type
            self.field_name = field_name
            self.field_start = field_start
            self.field_width = field_width
            
    def __init__(self):
        self.__fieldList = []
        self.config_name = ''
        self.config_size = 0
        
    @property
    def fieldList(self):
        return self.__fieldList
    
    def append_field(self, field_type, field_name, field_start, field_width):
        field = self.struct_field(field_type, field_name, field_start, field_width)
        self.__fieldList.append(field)
        
    def __str__(self):
        field_str = ''
        res_count = 0
        for _field in self.__fieldList:
            structField = _field.field_type
            if _field.field_name == None or _field.field_name == '' or _field.field_name == 'RESERVED':
                structField += ' RESERVED' + str(res_count)
                res_count += 1
            else:
                assert isinstance(_field.field_name, str)
                structField += ' '
                structField += _field.field_name
            assert _field.field_width <= 32
            if (_field.field_width > 32 or _field.field_width == 24) and _field.field_type == 'ubyte':
                assert _field.field_width%8 == 0
                assert _field.field_start == 0
                structField += ('[' + str(int(_field.field_width/8)) + ']')
            elif _field.field_start == 0 and _field.field_width == 8 and _field.field_type == 'ubyte':
                pass
            elif _field.field_start == 0 and _field.field_width == 16 and _field.field_type == 'ushort':
                pass
            elif _field.field_start == 0 and _field.field_width == 32 and _field.field_type == 'ulong':
                pass
            else:
                assert _field.field_width < 7
                structField += (' : ' + str(int(_field.field_width)))
            
            field_str += '    ' + structField + ';\n'
            
        field_str = field_str[0:-1]
        return self.struct_template.format(config_name = self.config_name,
                               config_size = self.config_size,
                               field = field_str)
    

if __name__ == '__main__':
    pass