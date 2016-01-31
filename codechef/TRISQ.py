T = int(raw_input())

for i in range(T):
    B = int(raw_input())
    total = 0
    while B >= 4:
        total += (2*((B-2)//2)) - 1
        B -= 4
    print total
