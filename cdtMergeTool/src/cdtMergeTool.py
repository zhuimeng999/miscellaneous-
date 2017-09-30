'''
Created on 2017/05/25

@author: lucius
'''

import os
from bs4 import BeautifulSoup
import logging

cdtListOpt = '<listOptionValue builtIn="false" value=""/>'
cdtExcludeEntry = '<entry excluding="" flags="VALUE_WORKSPACE_PATH|RESOLVED" kind="sourcePath" name=""/>'

f1xPath = "D:\\lucius_files\\work\\task3\\view\\mmgz.GAC_A10_IC"
dx4Path = "D:\\lucius_files\\work\\task3\\merge_work\\mmgz.GAC_A10_IC\\GAC_A10_MCU"
newProjPath = "D:\\lucius_files\\Projects\\Workspace\\merge_f1x_1"

def getDebugConf(bsHandle):
    debugConf = bsHandle.select("configuration[name=Debug_F1L]")
    if(len(debugConf) == 0):
        debugConf = bsHandle.select("configuration[name=_Debug]")
    if(len(debugConf) == 0):
        debugConf = bsHandle.select("configuration[name=Debug]")
    assert(len(debugConf) == 1)
    
    return debugConf[0]

def getExludingFromConf(bsHandle):
    sourceEntries = bsHandle.find_all("sourceEntries")
    assert(len(sourceEntries) == 1)
    exludeEntry = sourceEntries[0].find_all("entry")
    assert(len(exludeEntry) == 1)

    return exludeEntry[0]

def normalExlude(projRoot, pathExcludes):
    curLog = logging.getLogger("merge")
    excludesNew = []
    for pathExclude in pathExcludes:
        tmp = os.path.join(projRoot, pathExclude)
        tmp = os.path.normpath(tmp)
        if(os.path.isdir(tmp)):
            relPath = os.path.normpath(os.path.relpath(tmp, projRoot))
            if relPath not in excludesNew:
                excludesNew.append(relPath)
            else:
                curLog.info("dup:"+relPath)
        elif(os.path.isfile(tmp)):
            fileExt = os.path.splitext(tmp)[1]
            if((fileExt == ".c") or (fileExt == ".cas") or (fileExt == ".800") 
                                or (fileExt == ".850") or (fileExt == ".asm")):
                relPath = os.path.normpath(os.path.relpath(tmp, projRoot))
                if relPath not in excludesNew:
                    excludesNew.append(relPath)
                else:
                    curLog.info("dup:"+relPath)
            else:
                if(fileExt != ".h"):
                    if(fileExt != ".cdd" and fileExt != ".xls"):
                        print(tmp)
                        exit()
                curLog.info("dont need:" + tmp)
        elif(os.path.exists(tmp)):
            curLog.info("file " + tmp + " is unrecognized")
        else:
            curLog.info("path " + tmp + " is not exist")
    return excludesNew

def mergeExludes(f1xDebugConf, dx4DebugConf):
    f1xExcludeEntry = getExludingFromConf(f1xDebugConf)
    f1xExclude = f1xExcludeEntry.attrs["excluding"].split("|")
    f1xExcludeNew = normalExlude(f1xPath, f1xExclude)
    
    dx4ExcludeEntry = getExludingFromConf(dx4DebugConf)
    dx4Exclude = dx4ExcludeEntry.attrs["excluding"].split("|")
    dx4ExcludeNew = normalExlude(dx4Path, dx4Exclude)

    exludeNew = list(set(f1xExcludeNew) | (set(dx4ExcludeNew)))
    exludeNew.sort()
    
    f1xExcludeEntry.attrs["excluding"] = "|".join(exludeNew).replace("\\", "/")
    print(f1xExcludeEntry)

def getIncludesFromConf(confBS):
    curIncludes = confBS.select('tool[id*="c.compiler"] option[name="Include paths (-I)"] listOptionValue')
    print(len(curIncludes))
    
    incPaths = []
    for incElem in curIncludes:
        incElemPath = incElem.attrs["value"]
        incPath = ""
        if(incElemPath[0:30] == '"${workspace_loc:/${ProjName}/'):
            incPath = incElemPath[30:-2]
        elif(incElemPath[0:36] == '"${workspace_loc:/RH850_F1L_PORTING/'):
            incPath = incElemPath[36:-2]
        else:
            print("print error prefix:" + incElemPath[0:30])
            exit()
        incPaths.append(incPath)
    return incPaths

def normalIncludes(projRoot, pathIncludes):
    curLog = logging.getLogger("merge")
    includesNew = []
    for pathInclude in pathIncludes:
        tmp = os.path.join(projRoot, pathInclude)
        tmp = os.path.normpath(tmp)
        if(os.path.isdir(tmp)):
            relPath = os.path.normpath(os.path.relpath(tmp, projRoot))
            if relPath not in includesNew:
                includesNew.append(relPath)
            else:
                curLog.info("dup:"+ relPath)
        elif(os.path.exists(tmp)):
            curLog.info("file " + tmp + " is not dir")
        else:
            curLog.info("path " + tmp + " is not exist")
    return includesNew

def mergeIncludes(f1xDebugConf, dx4DebugConf):
    f1xIncludes = getIncludesFromConf(f1xDebugConf)
    f1xIncludesNew = normalIncludes(f1xPath, f1xIncludes)
    
    dx4Includes = getIncludesFromConf(dx4DebugConf)
    dx4IncludesNew = normalIncludes(dx4Path, dx4Includes)
    
    includeNew = list(set(f1xIncludesNew) | (set(dx4IncludesNew)))
    includeNew.sort()
    for incPath in includeNew:
        incStr = '"${workspace_loc:/${ProjName}/' + incPath + '}"'
        tag = BeautifulSoup(cdtListOpt, "xml")
        tag.listOptionValue.attrs["value"] = incStr.replace("\\","/")
        print(tag.listOptionValue)
        
def getMacroFromFolderInfo(folderInfoBS):
    macroOptions = folderInfoBS.select('tool[id*="c.compiler"] option[name="Defined symbols (-D)"]')
    if(len(macroOptions) == 0):
        return [];
    assert(len(macroOptions) == 1)
    macrosTags = macroOptions[0].find_all("listOptionValue")
    
    macroList = []
    for macroTag in macrosTags:
        macroStr = macroTag.attrs["value"]
        if macroStr not in macroList:
            macroList.append(macroStr)
        else:
            print("dup macro:"+macroStr)
    return macroList

def getMacroFromConf(confBS):
    folderInfos = confBS.find_all("folderInfo")
    macroList = getMacroFromFolderInfo(folderInfos[0])
    for folderInfo in folderInfos:
        additionMacroList = getMacroFromFolderInfo(folderInfo)
        if(additionMacroList == []):
            pass
        elif(set(macroList) !=  set(additionMacroList)):
            print(macroList)
            print(additionMacroList)
            exit()
    macroList = list(set(macroList))
    macroList.sort()
    for macroName in macroList:
        newTag = BeautifulSoup(cdtListOpt, "xml")
        newTag.listOptionValue.attrs["value"] = macroName
        print(newTag.listOptionValue)

def cdtMergeTool():
    f1xBS = BeautifulSoup(open(os.path.join(f1xPath, ".cproject")), "xml")
    f1xDebugConf = getDebugConf(f1xBS)
    
    dx4BS = BeautifulSoup(open(os.path.join(dx4Path, ".cproject")), "xml")
    dx4DebugConf = getDebugConf(dx4BS)
    
    mergeExludes(f1xDebugConf, dx4DebugConf)
    mergeIncludes(f1xDebugConf, dx4DebugConf)
    getMacroFromConf(f1xDebugConf)

def cleanPathAndExclude():
    clrBS = BeautifulSoup(open(os.path.join(newProjPath, ".cproject")), "xml")
    clrConf = getDebugConf(clrBS)
    clrIncludes = getIncludesFromConf(clrConf)
    clrIncludesNew = normalIncludes(newProjPath, clrIncludes)
    
    includeNew = list(set(clrIncludesNew))
    includeNew.sort()
    for incPath in includeNew:
        incStr = '"${workspace_loc:/${ProjName}/' + incPath + '}"'
        tag = BeautifulSoup(cdtListOpt, "xml")
        tag.listOptionValue.attrs["value"] = incStr.replace("\\","/")
        print(tag.listOptionValue)
    
    clrExcludeEntry = getExludingFromConf(clrConf)
    clrExclude = clrExcludeEntry.attrs["excluding"].split("|")
    clrExcludeNew = normalExlude(newProjPath, clrExclude)

    exludeNew = list(set(clrExcludeNew))
    exludeNew.sort()
    
    exludeEntryNew = BeautifulSoup(cdtExcludeEntry, "xml")
    exludeEntryNew.entry.attrs["excluding"] = "|".join(exludeNew).replace("\\", "/")
    print(exludeEntryNew.entry)

if __name__ == '__main__':
    '''
    config log
    '''
    curLog = logging.getLogger("merge")
    curLog.setLevel(logging.DEBUG)
    consoleHandler = logging.StreamHandler()
    consoleHandler.setLevel(logging.DEBUG)
    curLog.addHandler(consoleHandler)
    
    #cdtMergeTool()
    cleanPathAndExclude()