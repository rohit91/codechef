T = int(raw_input())

for i in range(T):
    N = int(raw_input())
    s = raw_input()
    if 'Y' in s:
        print 'NOT INDIAN'
    elif 'I' in s:
        print 'INDIAN'
    else:
        print 'NOT SURE'
