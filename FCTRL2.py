import sys

iterations = int(raw_input())
for line in sys.stdin:
    num = int(line)
    fact=1
    while(num>=1):
        fact *= num
        num -= 1
    print fact

