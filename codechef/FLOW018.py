T = int(raw_input())

for i in range(T):
    n = int(raw_input())
    
    if n == 0:
        print 1
        continue
    
    fact = 1
    while(n>0):
        fact *= n
        n -= 1
    print fact
        
