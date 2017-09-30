#!/bin/awk -f

function strim(str){
	sub(/\/\*.*\*\//," ", str);
	sub(/^[[:blank:]]*/,"", str);
	sub(/[[:blank:]]*$/,"", str);
	gsub(/[[:blank:]]+/," ", str);
	return str;
}

BEGIN {
	startFlag = 0;
	str = "";
	offset = 0;
}

{
	if(startFlag == 0) {
		if($0 ~ /^struct JNINativeInterface_ {$/){
			print "find at:" FNR
			startFlag = 1;
		}
	}
	else if(startFlag == 1)
	{
		if($0 ~ /^};$/){
			print "stop at:" FNR
			startFlag = 2;
		}
		else {
			str = str" "$0
			if($0 ~ /;$/){
				str = strim(str)
				if(str ~ /^[_a-zA-Z][_0-9a-zA-Z]* \*[_a-zA-Z][_0-9a-zA-Z]*;/){
					name = gensub(/^[_a-zA-Z][_0-9a-zA-Z]* \*?([_a-zA-Z][_0-9a-zA-Z]*);/, "\\1", "g", str)
					printf("var %s offset %d\n", name, offset);
					offset += 4;
				}
				else if(str ~ /^(const )?[_a-zA-Z][_0-9a-zA-Z]*(\*? | \*?) ?\(.*\*([_a-zA-Z][_0-9a-zA-Z]*)\) *\(.*\);$/){
					name = gensub(/^(const )?[_a-zA-Z][_0-9a-zA-Z]*(\*? | \*?) ?\(.*\*([_a-zA-Z][_0-9a-zA-Z]*)\) *\(.*\);$/, "\\3", "g", str);
					printf("fun %s offset %d\n", name, offset);
					offset += 4;
				}
				else {
					print "error "
					print str
					exit
				}
				str = ""
			}
		}
	}
	else {
	}
}