T = int(raw_input())

for i in range(T):
    a,b,c = map(int, raw_input().split())
    if a > b and a > c:
        print b if b > c else c
    elif a < b and a < c:
        print c if b > c else b
    else:
        print a
        
