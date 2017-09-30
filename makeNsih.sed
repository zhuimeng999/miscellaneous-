#!/usr/bin/sed -nf
1 s/^\xef\xbb\xbf//
s/\/\/.*//g
s/[[:space:]]*$//g
/^[[:space:]]*$/d
s/\([0-9A-F][0-9A-F]\)\([0-9A-F][0-9A-F]\)\([0-9A-F][0-9A-F]\)\([0-9A-F][0-9A-F]\)/\\x\4\\x\3\\x\2\\x\1/g
H
$ {g;s/\n//g;p}