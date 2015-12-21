import sys

RANGE = int(raw_input())

a = []
for line in sys.stdin:
    a.append(int(line))
    
def mergesort(a, len_a):
    if len_a == 1:
        return a
    
    len_b = len_a/2 - 0
    b = mergesort(a[0 : len_a/2], len_b)
    
    len_c = len_a - len_b
    c = mergesort(a[len_a/2 : ], len_c)
    
    return combine(b, len_b, c, len_c)
    
def combine(a, len_a, b, len_b):
    res=[]
    i,j = 0,0
    
    while((i < len_a) and (j < len_b)):
        if a[i] < b[j]:
            res.append(a[i])
            i += 1
        else:
            res.append(b[j])
            j += 1
            
    while(i<len_a):
        res.append(a[i])
        i += 1
    
    while(j<len_b):
        res.append(b[j])
        j += 1
    return res

res = mergesort(a, RANGE)
for i in res:
    print i
