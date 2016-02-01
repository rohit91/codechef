T = int(raw_input())

for i in range(T):
    n = int(raw_input())
    rev = 0
    temp = n
    while temp:
        rev = (rev * 10) + (temp % 10)
        temp /= 10
    if rev != n:
        print "losses"
    else:
        print "wins"
