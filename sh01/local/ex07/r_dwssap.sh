cat /etc/passwd | sed '/^#/d' | awk 'NR%2==1' | sed 's/:\*:.*//' | rev | sort -r
