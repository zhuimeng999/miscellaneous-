#!/bin/python
import os,sys

srcLocPrefix = "D:\\lucius_files\\Projects\\Workspace"
#dstLocPrefix = "D:\\lucius_files\\work\\task3\\mmgz.GAC_A10_IC\\GAC_A10_MCU\\PTF_GAC\\Application"
dstLocPrefix = "D:\\lucius_files\\work\\task3\\merge_work\\mmgz.GAC_A10_IC\\GAC_A10_MCU\\PTF_GAC\\Application"
#dstLocPrefix = "D:\\lucius_files\\Projects\\Workspace\\merge_f1x_1\\PTF_GAC\\Application"
dirList=["Sources","PublicInt","Dev","config"]
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
				
	shell_xcopy = 'xcopy /E /I /D /Y '
	shell_xcopy += '"' + os.path.join(srcLocPrefix, projectName, dirConfig) + '" '
	shell_xcopy += '"' + os.path.join(dstLocPrefix, projectConfig) + '" '
	print(shell_xcopy)
	if os.system(shell_xcopy):
		print("xcopy error")
	else:
		print("xcopy success")
		
	

if __name__ == '__main__':
	main()
