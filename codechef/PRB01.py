T = int(raw_input())

for i in range(T):
    n = int(raw_input())
    prime = True
    for j in range(2, n/2 + 1):
        if n % j == 0:
            prime = False
            break
    print 'yes' if prime else 'no'
    
