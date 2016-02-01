T = int(raw_input())

for i in range(T):
    a, b = map(int, raw_input().split())
    if a > b:
        print '>'
    elif a < b:
        print '<'
    else:
        print '='
        
