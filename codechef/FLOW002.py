T = int(raw_input())

for i in range(T):
    A, B = map(int, raw_input().split())
    print (A - (A//B)*B)
    #print A % B
