T = int(raw_input())

for i in range(T):
    N = int(raw_input())
    total = 0
    for k in [100, 50, 10, 5, 2, 1]:
        total += N / k
        N %= k
    print total
