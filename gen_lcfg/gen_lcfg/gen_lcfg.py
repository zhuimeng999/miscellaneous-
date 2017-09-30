# -*- coding: UTF-8 -*-

'''
Created on 2017/07/28

@author: f12160c
'''

import xlrd
import re
from struct_template import struct_template
from function_template import function_template
from src_file_template import src_file_template
from header_template import header_template

preTypeDefSize = { 'ubyte' : 1, 'ushort' : 2, 'ulong' : 4 }
didFileName = "D:\\lucius_files\\work\\task3\\A10_A06_A35_功能规范附录文件_V1.1_20170614.xls"

wb = None
didSheet = None
mergedCells = None

eepConfigFileName = "D:\\lucius_files\\work\\task3\\view\\mmgz.GAC_A10_IC\\GAC_A10_MCU\A10_CLIENT_MCU_cfg\\eepc_generator.xls"
eepConfigWb = None
eepConfigSt = None
eepVarSet = {}

def InitEepConfig():
    eepConfigWb = xlrd.open_workbook(filename = eepConfigFileName, formatting_info=True)
    eepConfigSt = eepConfigWb.sheet_by_name('Variables')

    for index in range(1, eepConfigSt.nrows):
        key = eepConfigSt.cell_value(index, 1)
        if key == '' or key == None:
            continue
        assert isinstance(key, str)
        key = key.strip()
        value = eepConfigSt.cell_value(index, 2)
        assert isinstance(value, str)        
        value = value.strip()
        eepVarSet[key] = value
        
def getEepConfigVarName(didNumber):
    findCount = 0
    varName = None
    for key, value in eepVarSet.items():
        if didNumber in value:
            varName = key
            findCount += 1
    if findCount != 1:
        print('find ', didNumber, ' total ', findCount)
    return 'VERS_Get' + varName.capitalize() + '()'

def print_all(obj):
    print('\n'.join(['%s:%s' % item for item in obj.__dict__.items()]))
    
class dataInfo:
    def __init__(self):
        pass
    def __str__(self):
        return "str"
    
def getCellType(row, col):
    processedFlag = 0
    dataStruct = dataInfo()
    
    index = row
    for crange in mergedCells:
        rs, re, cs, ce = crange
        if rs == index and cs == col and ce == (col + 1):
            dataStruct.rs = rs
            dataStruct.re = re
            dataStruct.index = index
            processedFlag = 1
        elif rs < index < re and cs == col and ce == (col + 1):
#                print(index, " ignore")
            processedFlag = 2
            continue
    if processedFlag == 0:
        dataStruct.rs = index
        dataStruct.re = index + 1
        dataStruct.index = index
    return dataStruct, processedFlag

def fillBitInfo(subData):
    subData.bitInfos = []
    for index in range(subData.rs, subData.re):
        bitInfo = dataInfo()
        bitInfo.bit = didSheet.cell_value(index, 5)
        assert bitInfo.bit != None
        bitInfo.desc = didSheet.cell_value(index, 6)
        xfx = didSheet.cell_xf_index(index, 6)
        xf = wb.xf_list[xfx]
        font = wb.font_list[xf.font_index]
        bitInfo.struck_out = font.struck_out
        if font.struck_out == 1:
            print('bit field: ', bitInfo.desc, '[', index, ']', "struck out")
        subData.bitInfos.append(bitInfo)
    
def fillBytesConfig( dataStruct ):
        dataStruct.byteInfos = []
        for index in range(dataStruct.rs, dataStruct.re):
            subData, processedFlag = getCellType(index, 4)
            if processedFlag == 2:
                continue
            
            subData.byte = didSheet.cell_value(index, 4)
            fillBitInfo(subData)
            dataStruct.byteInfos.append(subData)
            
def getDataList():
    dataList = []
#    for index in range(3, didSheet.nrows):
    for index in range(3, 281):
        dataStruct, processedFlag = getCellType(index, 1)
        if processedFlag == 2:
            continue
        
        dataStruct.didNumber = didSheet.cell_value(index, 1)
        dataStruct.descript = didSheet.cell_value(index, 2)
        dataStruct.length = didSheet.cell_value(index, 3)
        xfx = didSheet.cell_xf_index(index, 1)
        xf = wb.xf_list[xfx]
        font = wb.font_list[xf.font_index]
        if font.struck_out == 1:
            print("struck out")
            continue
        else:
            fillBytesConfig(dataStruct)
            dataList.append(dataStruct)
#            print_all(dataStruct)
    return dataList

def formatBitInfos(bitInfo):
    if isinstance(bitInfo.bit, float):
        bitInfo.bitStart = int(bitInfo.bit)
        assert bitInfo.bitStart == bitInfo.bit
        bitInfo.bitWidth = 1
    elif isinstance(bitInfo.bit, str):
        if '-' in bitInfo.bit:
            tmp = bitInfo.bit.split('-')
            assert re.match(r'^[0-9]+$', tmp[0])
            assert re.match(r'^[0-9]+$', tmp[1])
            bitInfo.bitStart = int(tmp[1])
            bitInfo.bitEnd = int(tmp[0])
            assert bitInfo.bitStart != bitInfo.bitEnd
            if bitInfo.bitStart > bitInfo.bitEnd:
                tmpStore = bitInfo.bitEnd
                bitInfo.bitEnd = bitInfo.bitStart
                bitInfo.bitStart = tmpStore
            bitInfo.bitWidth = bitInfo.bitEnd - bitInfo.bitStart + 1
        elif bitInfo.bit == "":
            bitInfo.bitStart = 0
        else:
            bitInfo.bitStart = int(bitInfo.bit)
            assert re.match(r'^[0-9]+$', bitInfo.bit)
            bitInfo.bitWidth = 1
    else:
        print_all(bitInfo)
        exit()
    name = re.sub(r' +', ' ', bitInfo.desc.strip())
    name = name.replace(' ', '_')
    name = name.replace('+', '_')
    name = name.replace('＆', '_')
    name = name.replace('&', '_')
    name = name.replace('/', '_DIV')
    name = re.sub(r'_+', '_', name)
    if bitInfo.struck_out == 1 or name == '':
        bitInfo.subDataDesc = 'RESERVED'
    else:
        bitInfo.subDataDesc = name

def formatByteInfos(byteInfo):
    if isinstance(byteInfo.byte, float):
        byteInfo.byteStart = int(byteInfo.byte)
        assert byteInfo.byteStart == byteInfo.byte
        byteInfo.byteWidth = 1
    elif isinstance(byteInfo.byte, str):
        if '-' in byteInfo.byte:
            tmp = byteInfo.byte.split('-')
            assert re.match(r'^[0-9]+$', tmp[0])
            assert re.match(r'^[0-9]+$', tmp[1])
            byteInfo.byteStart = int(tmp[0])
            byteInfo.byteEnd = int(tmp[1])
            assert byteInfo.byteStart != byteInfo.byteEnd
            if byteInfo.byteStart > byteInfo.byteEnd:
                tmpStore = byteInfo.byteEnd
                byteInfo.byteEnd = byteInfo.byteStart
                byteInfo.byteStart = tmpStore
            byteInfo.byteWidth = byteInfo.byteEnd - byteInfo.byteStart + 1
        else:
            byteInfo.byteStart = int(byteInfo.byte)
            assert re.match(r'^[0-9]+$', byteInfo.byte)
            byteInfo.byteWidth = 1
    else:
        print_all(byteInfo)
        exit()
    for bitInfo in byteInfo.bitInfos:
        formatBitInfos(bitInfo)
    byteInfo.bitInfos.sort(key = lambda elm : elm.bitStart)
        
def formatDataList(dataList):
    for item in dataList:
        name = re.sub(r'^(?P<p1>.*)\n.*$', '\g<p1>', item.descript)
        name = re.sub(r' +',' ', name)
        name = name.strip()
        name = name.replace(' ','_')
        name = name.replace('+', '_AND_')
        name = name.replace('&', '_AND_')
        name = name.replace('/', '_DIV')
        item.structName = name
        item.structId = int(item.didNumber, 16)
        if isinstance(item.didNumber, str):
            assert re.match(r'^0x[0-9A-F]+$', item.didNumber)
        else:
            print_all(item)
            exit()
            
        item.structLength = int(item.length)
        if isinstance(item.length, float):
            assert item.length == item.structLength
        elif isinstance(item.length, str):
            assert re.match(r'^[0-9]+$', item.length)
        else:
            print_all(item)
            exit()
            
        for byteInfo in item.byteInfos:
            formatByteInfos(byteInfo)
        item.byteInfos.sort(key = lambda elm : elm.byteStart)
    dataList.sort(key = lambda elm : elm.structId)

def getFieldType(byteWidth):
    typeDef = None
    if byteWidth == 2:
        typeDef = 'ushort'
    elif byteWidth == 4:
        typeDef = 'ulong'
    else:
        typeDef = 'ubyte'
    return typeDef
            
def genCode(dataList):
    structDef = '#pragma pack(1)\n\n'
    protoDef = ''
    funDef = ''
    
    checkdid = 0
    InitEepConfig()
    for item in dataList:
        checkBytePreDict = 0
        
        structTemp = struct_template()
        structTemp.config_name = item.structName
        structTemp.config_size = item.structLength
        eep_var = getEepConfigVarName(item.didNumber)
        
        for byteInfo in item.byteInfos:
            checkBitPreDict = 0
            
            fieldType = getFieldType(byteInfo.byteWidth)
            if byteInfo.byteWidth == 3 or byteInfo.byteWidth > 4:
                assert len(byteInfo.bitInfos) == 1
            
            for bitInfo in byteInfo.bitInfos:
                if hasattr(bitInfo, 'bitWidth'):
                    bitWidth = bitInfo.bitWidth
                else:
                    assert len(byteInfo.bitInfos) == 1
                    bitWidth = byteInfo.byteWidth*8
                structTemp.append_field(fieldType, bitInfo.subDataDesc, bitInfo.bitStart, bitWidth)
                
                if bitInfo.subDataDesc != 'RESERVED':
                    protoDef += 'Std_ReturnType LCFG_Get_'
                    protoDef += bitInfo.subDataDesc
                    protoDef += '(' + fieldType + '*pValue);\n'
                    
                    assert bitWidth <= 8 or bitWidth == 16
                    funcTemp = function_template.format(config_name = item.structName,
                                                        config_type = fieldType,
                                                        config_field = bitInfo.subDataDesc,
                                                        config_var = eep_var)
                    funDef += funcTemp
                    
                '''check'''
                assert checkBitPreDict == bitInfo.bitStart
                checkBitPreDict += bitWidth
                
                
            ''' check '''
            assert (byteInfo.byteWidth*8) == checkBitPreDict
            assert checkBytePreDict == byteInfo.byteStart
            checkBytePreDict += byteInfo.byteWidth
        
        structTemp.config_size = checkBytePreDict
        structDef += str(structTemp)
        ''' check '''
        if checkBytePreDict != item.structLength :
            print('DID number:', item.didNumber, ' expect:', item.structLength, ' calculate:', checkBytePreDict)
        assert checkdid < item.structId
        checkdid = item.structId
        
    structDef += '#pragma pack()'
    
    headerFile = open('lcfg_config.h', 'w')
    headerContext = header_template.format(struct_def = structDef, proto_def = protoDef)
    headerFile.write(headerContext)
    headerFile.close()
    
    sourceFile = open('lcfg_config.c', 'w')
    sourceContext = src_file_template.format(fun_def = funDef)
    sourceFile.write(sourceContext)
    sourceFile.close()

if __name__ == '__main__':
    wb = xlrd.open_workbook(filename = didFileName, formatting_info=True)

    didSheet = wb.sheet_by_name('校准表')
    mergedCells = didSheet.merged_cells
    dataList = getDataList()
    formatDataList(dataList)
    genCode(dataList)

    
