#!/bin/bash
cat /etc/passwd | grep -v '#' | sed '1d'  | sed -e 's;\(:\).*;;'  | rev | sort -r | sed -n ''${FT_LINE1}'',''${FT_LINE2}'p' | tr '\n' ,
$FT_LINE3=$FT_LINE-1
echo ${FT_LINE3}
