import math

T = int(raw_input())

for i in range(T):
    B, LS = map(int, raw_input().split())
    print '{} {}'.format(math.sqrt(LS**2 - B**2), math.sqrt(LS**2 + B**2))
