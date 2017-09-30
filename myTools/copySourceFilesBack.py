#!/bin/python
import os,sys

dstLocPrefix = "D:\\lucius_files\\Projects\\Workspace"
srcLocPrefix = "D:\\lucius_files\\work\\task3\\merge_work\\mmgz.GAC_A10_IC\\GAC_A10_MCU\\PTF_GAC\\Application"
#srcLocPrefix = "D:\\lucius_files\\Projects\\Workspace\\merge_f1x_1\\PTF_GAC\\Application"
dirList=["Sources","PublicInt","Dev"]
dirConfig="config"
projectConfig="..\\..\\A10_CLIENT_MCU_cfg"

def main():
	projectName= sys.argv[1]
	for dirName in dirList:
		shell_xcopy = 'xcopy /E /I /D /Y '
		shell_xcopy += ' "' + os.path.join(srcLocPrefix, projectName, dirName) + '" '
		shell_xcopy += ' "' + os.path.join(dstLocPrefix, projectName, dirName) + '" '
		print(shell_xcopy)
		if os.system(shell_xcopy):
			print("xcopy error")
		else:
			print("xcopy success")

	configDir = os.path.join(srcLocPrefix, projectName, dirConfig)
	configFiles = os.listdir(configDir)
	for fileName in configFiles:
		fullFileName = os.path.join(configDir, fileName)
		if(os.path.isfile(fullFileName)):
			print("find config: " + fullFileName)
		else:
			print("not file " + fullFileName)
			exit()
		shell_xcopy = 'xcopy /E /I /D /Y '
		shell_xcopy += '"' + os.path.join(srcLocPrefix, projectConfig, fileName) + '" '
		shell_xcopy += '"' + os.path.join(dstLocPrefix, projectName, dirConfig, fileName) + '" '
		print(shell_xcopy)
		if os.system(shell_xcopy):
			print("xcopy error")
		else:
			print("xcopy success")

if __name__ == '__main__':
	main()
