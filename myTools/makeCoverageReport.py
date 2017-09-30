#!python

import os,sys

def makeCoverageReport():
        storePath = os.environ["PATH"]
#        os.environ["PATH"] = "D:\\lucius_files\\Programs\\msys64\\usr\\bin;"\
#                             "D:\\lucius_files\\Programs\\msys64\\mingw64\\bin;"
        os.environ["PATH"] = "C:\\MinGW\\bin;"\
                               "C:\\MinGW\\msys\\1.0\\bin;"\
                               "C:\\MinGW\\msys\\1.0\\local\\bin;" + os.environ["PATH"]

        working_dir = os.path.join(sys.argv[1],sys.argv[2])
        project_name = os.path.basename(sys.argv[1])
        info_file = sys.argv[2] + "/" + project_name + ".info"  #this must be linux style path
        print("###########" + info_file)
                
        shell_lcov = 'perl "/d/lucius_files/work/myTools/lcov" '
#        shell_lcov = 'perl "D:\lucius_files\work\myTools\lcov" '
        shell_lcov += ' --rc lcov_branch_coverage=1 ' #--rc SETTING=VALUE          Override configuration file setting
        shell_lcov += ' --capture '
        shell_lcov += ' --directory ' + '"' + working_dir + '"'
        shell_lcov += ' --output-file ' + '"' + info_file + '"'
        print("#########" + project_name)


        shell_genhtml = 'perl "/d/lucius_files/work/myTools/genhtml" '
#        shell_genhtml = 'perl "D:\lucius_files\work\myTools\genhtml" '
        shell_genhtml += ' --branch-coverage '
        shell_genhtml += ' --o ' + '"' + working_dir + "\\" + "Coverage Report" + '" '
        shell_genhtml += '"' + info_file + '"'
                                
        if os.system(shell_lcov):
                print("lcov error")
        else:
                print("lcov success")

        if os.system(shell_genhtml):
                print("genhtml error")
        else:
                print("genhtml success")

        os.environ["PATH"] = storePath
        
if __name__ == '__main__':
	makeCoverageReport()
