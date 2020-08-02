#!/bin/bash
cat /etc/passwd | grep -v '#' | sed '1d'  | sed -e 's;\(:\).*;;'  | rev | sort -r | sed -n ''${FT_LINE1}'',''${FT_LINE2}'p' | tr '\n' , | sed 's/,$/./g' | tr -d '\n'
