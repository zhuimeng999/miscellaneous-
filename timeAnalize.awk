#!/bin/awk -f

BEGIN {
	FS="\r\n";
	startLine = 0;
	IPLTime = 0;
	StartupTime = 0;
	logTime = 0;
	state = 0;
	print "time\tline\tIPLTime\tStartupTime\tlogTime"
}

{

	switch(state){
		case 0:
			matchRet = match($0,/IPL:QNX Neutrino Initial Program Loader for PTA0/);
			if(matchRet != 0){
				startLine = NR;
				state = 1;
			}
			break;
		case 1:
			matchRet = match($0,/^IPL total:@ ([0-9]+)ms \r?$/);
			if(matchRet){
				IPLTime = gensub(/^IPL total:@ ([0-9]+)ms \r?$/, "\\1", "g", $0)
				state = 2;
			}
			matchRet = match($0,/IPL:QNX Neutrino Initial Program Loader for PTA0/);
			if(matchRet != 0){
				print "internal error"
			}
			break;
		case 2:
			matchRet = match($0,/FullKZBLoadingEND ([0-9]*\.)?[0-9]+ ms/);
			if(matchRet){
				StartupTime = gensub(/\*+ FullKZBLoadingEND (([0-9]*\.)?[0-9]+) ms \*+/, "\\1", "g", $0)
				state = 3;
			}
			matchRet = match($0,/IPL:QNX Neutrino Initial Program Loader for PTA0/);
			if(matchRet != 0){
				print "internal error"
			}
			break;
		case 3:
			matchRet = match($0,/^LOG: fps: ([0-9]*\.)?[0-9]+\r?$/);
			if(matchRet){
				logTime++;
			}
			matchRet = match($0,/IPL:QNX Neutrino Initial Program Loader for PTA0/);
			if(matchRet != 0){
				time = IPLTime + logTime*1000 + StartupTime
				printf("%d\t%d\t%d\t%d\t\t%d\t\n",time/1000, startLine,IPLTime,StartupTime, logTime*1000)
				startLine = NR;
				logTime = 0
				state = 1;
			}
			break;
		default:
			print "internal error"
			state = 0;
			break;
	}
}