T = int(raw_input())

for i in range(T):
    L, R = map(int, raw_input().split())
    total = 0
    for j in range(L, R + 1):
        temp = j
        res = 0
        while temp>0:
            res = res*10 + (temp%10)
            temp /= 10
        total += j if (res==j) else 0
    print total
