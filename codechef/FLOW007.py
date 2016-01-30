T = int(raw_input())

for i in range(T):
    n = int(raw_input())
    rev = 0
    while(n>0):
        rev = (rev * 10) + (n % 10)
        n = n / 10
    print rev
