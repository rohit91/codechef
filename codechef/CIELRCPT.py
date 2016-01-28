for i in range(int(raw_input())):
    n = int(raw_input())
    total = 0
    while(n>0):
        if n > 2048:
            total += n/2048
            n = n % 2048
            continue
        total += n & 0x01
        n = n >> 1
    print total
