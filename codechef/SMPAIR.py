T = int(raw_input())

for i in range(T):
    N = int(raw_input())
    a = map(int, raw_input().split())
    for j in range(2):
        smallest = j
        for k in range(1+j, N):
            if a[k] < a[smallest]:
                smallest = k
        temp = a[j]
        a[j] = a[smallest]
        a[smallest] = temp
    print a[0] + a[1]
