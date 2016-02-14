T = int(raw_input())

for it in range(T):
    len_a = int(raw_input())
    a = map(int, raw_input().split())
    
    len_f = int(raw_input())
    f = map(int, raw_input().split())
    
    isSub = False
    i, j = 0, 0
    while (i < len_a and j < len_f):
        if a[i] == f[j]:
            j += 1
            isSub = True
        elif isSub:
            isSub = False
            break
        i += 1
        
    print "Yes" if (isSub and j == len_f) else "No"
