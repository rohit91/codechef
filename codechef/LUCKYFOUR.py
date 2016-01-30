T = int(raw_input())

for i in range(T):
    n = int(raw_input())
    count = 0
    while(n>0):
        if n%10 == 4:
            count += 1
        n /= 10
    print count
