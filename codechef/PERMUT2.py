import sys

n = int(raw_input())

while n != 0:
    flag = 1
    a = map(int, raw_input().split())
    
    for i in range(n):
        if a[a[i] - 1] != i+1:
            flag = 0
    
    print "ambiguous" if flag else "not ambiguous"
    n = int(raw_input())
