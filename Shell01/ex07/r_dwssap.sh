#!/bin/bash
cat /etc/passwd | grep -v '#' | sed -n 'n;p'  | sed -e 's;\(:\).*;;'  | rev | sort -r | sed -n ''${FT_LINE1}','${FT_LINE2}'p' | tr '\n' ',' | sed  's/,/, /g' | sed 's/, $/./g' | tr -d '\n'
