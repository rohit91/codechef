T = int(raw_input())

for i in range(T):
    N = int(raw_input())
    total = 0
    total += N % 10
    N /= 10
    while(N>0):
        if N < 10:
            total += N % 10
        N /= 10
    print total
