import sys
 
for line in sys.stdin:
    if 0 <= int(line) <= 99:
        if int(line) == 42:
    	    break
    	else:
    	    print int(line)
