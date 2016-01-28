import sys

T = int(raw_input())

for line in sys.stdin:
    N = int(line)
    print(N//2 + 1)
