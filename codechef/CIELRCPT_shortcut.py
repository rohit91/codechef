for i in range(int(raw_input())):
    n = int(raw_input())
    total = 0
    if n > 2048:
        total += n/2048
        n = n % 2048
    total += bin(n)[2:].count('1')
    print total
