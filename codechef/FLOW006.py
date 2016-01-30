T = int(raw_input())

for i in range(T):
    n = int(raw_input())
    total = 0
    while(n>0):
        total += n%10
        n /= 10
    print total
