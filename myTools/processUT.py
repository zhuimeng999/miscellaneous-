#!/bin/python3.4m 
import sys
import getopt
import xml.dom.minidom
from pyh import *
import os

def createDom():
	if os.path.isfile("index.html"):
		os.remove("index.html")
	page = PyH('CUnit - Automated Test Run Summary Report')
	page.head << charset
	page.body.attributes['bgcolor'] = "#F5F5F5"
	page << h2("CUnit - Automated Test Run Summary Report",style="font-family:Arial",align="center")
	page << h3(align="center") << '<font face="Arial">Project: MmCUnit</font>  <font face="Arial"> Version: SW2.0</font>'
	
	myTable = page << table(cols="4",width="90%",align="center")
	myTr1 = tr(align="center",bgcolor="LightSteelBlue")
	myTr1 << td('<font face="Verdana">Test Cases </font>')
	myTr1 << td('<font face="Verdana"> Plan</font>')
	myTr1 << td('<font face="Verdana">Result</font>')
	myTr1 << td('<font face="Verdana"> Total</font>')
	myTr1 << td('<font face="Verdana"> Run</font>')
	myTr1 << td('<font face="Verdana"> Succeeded</font>')
	myTr1 << td('<font face="Verdana"> Failed </font>')
	myTr1 << td('<font face="Verdana">Inactive</font>')
	
	myTr2 = tr(align="center",bgcolor="#CBD9EA")
	myTr2 << td('<font face="Calibri"><B>TACM</B></font>')
	myTr2 << td('<a href="TACM-Listing.xml"><font face="Calibri">PLAN</font></a>')
	myTr2 << td('<a href="TACM-Results.xml"><font face="Calibri">RESULT</font></a>')
	myTr2 << td('<font face="Calibri">2</font> </td><td> <font face="Calibri">2</font>')
	myTr2 << td('<font face="Calibri">2</font> </td><td> <font face="Calibri">0</font>')
	myTr2 << td('<font face="Calibri">0</font>')
	
	myTable << myTr1
	page.printOut()
	
def main():
	# 使用minidom解析器打开 XML 文档
	DOMTree = xml.dom.minidom.parse("TACM-Results.xml")
	
	print(DOMTree)
	collection = DOMTree.documentElement
	print(collection)

	createDom()

if __name__ == '__main__':
	try:
		opts,args = getopt.getopt(sys.argv[1:],'f:')
	except getopt.GetoptError:
		print(getopt.GetoptError)
	main()