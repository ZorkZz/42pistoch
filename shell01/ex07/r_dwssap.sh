cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | rev | sort -r | cut -d "*" -f2 | cut -d ":" -f2 | sed "${FT_LINE1},${FT_LINE2}p" | tr "\n" " " | sed 's/,$/./' | sed 's/,/, /g'
 
