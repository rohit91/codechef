# NOTES: XOR is commutative and associative, the result of XOR of 
#        shortest sequence of Points will be same as result of XOR of
#        increasing sequence of points. 
#        So for example for, N = 3, just do 1 xor 2 xor 3

T = int(raw_input())

for i in range(T):
    N = int(raw_input())
    p = []
    for j in range(N):
        p.append(map(int, raw_input().split()))
    res = 0
    for j in range(1, N+1):
        res = res ^ j
    print res
