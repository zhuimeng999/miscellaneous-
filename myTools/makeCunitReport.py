#!/bin/python

import sys
import getopt
import xml.dom.minidom
import os
from bs4 import BeautifulSoup
import re

def delete_file_folder(src):
    if os.path.isfile(src):  
        try:  
            os.remove(src)  
        except:  
            pass
    elif os.path.isdir(src):  
        for item in os.listdir(src):  
            itemsrc=os.path.join(src,item)  
            delete_file_folder(itemsrc)  
        try:  
            os.rmdir(src)  
        except:  
            pass
            
def copy_file(src,dst):
    fp1 = open(src, "rb")
    fp2 = open(os.path.join(dst,os.path.basename(src)), "wb")
    size = os.path.getsize(src)
    
    fp2.write(fp1.read(size))
    fp2.close()
    fp1.close()
    
def create_index(src, dst, xmlDataFile, project_name):
    xmlData = BeautifulSoup(open(xmlDataFile), "xml")
    soup = BeautifulSoup(open(src), "html.parser")
    soup.html.body.h3.font.string = "Project: " + project_name
#    soup.find(href=re.compile(r"-Listing.xml"))['href'] = project_name + '-Listing.xml'
#    soup.find(href=re.compile("-Results.xml"))['href'] = project_name + '-Results.xml'

    dataNode = xmlData.find(text=re.compile(r'Test Cases')).parent.parent
    print(dataNode)
	
    temp = soup.select("table tr > tr:nth-of-type(1)")[0]
    totalTemp = soup.select("table tr > tr:nth-of-type(2)")[0]

    tdNext = temp.td
    tdTotalNext = totalTemp.select("td:nth-of-type(4)")[0]
    tdNext.font.string = project_name
    tdNext = tdNext.next_sibling
    tdNext.a['href'] = project_name + '-Listing.xml'
    tdNext = tdNext.next_sibling
    tdNext.a['href'] = project_name + '-Results.xml'
	
    tdNext = tdNext.next_sibling
    tdNext.font.string = dataNode.TOTAL.string
    tdTotalNext.font.string =  tdNext.font.string
	
    tdNext = tdNext.next_sibling
    tdTotalNext =  tdTotalNext.next_sibling
    tdNext.font.string = dataNode.RUN.string
    tdTotalNext.font.string =  tdNext.font.string
	
    tdNext = tdNext.next_sibling
    tdTotalNext =  tdTotalNext.next_sibling
    tdNext.font.string = dataNode.SUCCEEDED.string
    tdTotalNext.font.string =  tdNext.font.string
	
    tdNext = tdNext.next_sibling
    tdTotalNext =  tdTotalNext.next_sibling
    tdNext.font.string = dataNode.FAILED.string
    tdTotalNext.font.string =  tdNext.font.string
	
    tdNext = tdNext.next_sibling
    tdTotalNext =  tdTotalNext.next_sibling
    tdNext.font.string = dataNode.INACTIVE.string
    tdTotalNext.font.string =  tdNext.font.string

    indexOutput = open(os.path.join(dst,os.path.basename(src)), "wb")
    indexOutput.write(str(soup.prettify()).encode())
    
def copy_resource(dst, xmlDataFile, project_name):
    cur_dir = os.path.dirname(__file__)
    res_dir = os.path.join(cur_dir, 'cunit resource')
    if( not os.path.isdir(res_dir)):
        print("no resource dir found"," ",res_dir)
        exit()
    copy_file(os.path.join(res_dir, "CUnit-List.dtd"), dst)
    copy_file(os.path.join(res_dir, "CUnit-List.xsl"), dst)
    copy_file(os.path.join(res_dir, "CUnit-Run.dtd"), dst)
    copy_file(os.path.join(res_dir, "CUnit-Run.xsl"), dst)
    copy_file(os.path.join(res_dir, "Memory-Dump.dtd"), dst)
    copy_file(os.path.join(res_dir, "Memory-Dump.xsl"), dst)
    create_index(os.path.join(res_dir, "index.html"), dst, xmlDataFile, project_name)
    
def makeCunitReport(working_dir, project_name):
    cunitOutputDir = os.path.join(working_dir,'Cunit Report')
    if(os.path.isdir(cunitOutputDir)):
        delete_file_folder(cunitOutputDir)
    os.mkdir(cunitOutputDir)
    
    copy_file(os.path.join(working_dir, project_name+"-Results.xml"), cunitOutputDir)
    copy_file(os.path.join(working_dir, project_name+"-Listing.xml"), cunitOutputDir)
    copy_resource(cunitOutputDir, os.path.join(working_dir, project_name+"-Results.xml"), project_name)
    
    
if __name__ == '__main__':
    try:
        opts,args = getopt.getopt(sys.argv[1:],"")
    except getopt.GetoptError:
        print(getopt.GetoptError.msg)

    if len(args) != 2:
        print("len(args) must  equal to 2")
        exit()
    elif not os.path.isdir(args[0]):
        print("you must build your project befer call this script")
        exit()

        working_dir = os.path.join(args[0],args[1])
    print("start processing ")
    makeCunitReport(args[0], args[1])
    print("cunit report complete")
