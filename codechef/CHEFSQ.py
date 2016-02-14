T = int(raw_input())

for it in range(T):
    len_a = int(raw_input())
    a = map(int, raw_input().split())
    
    len_f = int(raw_input())
    f = map(int, raw_input().split())
    
    a_str = ''.join(map(str, a))
    f_str = ''.join(map(str, f))
    
    isSub = f_str in a_str
        
    print "Yes" if  isSub else "No"
