import sys

nums = map(int, raw_input().split())
count = 0

for line in sys.stdin:
	if int(line) % nums[1] == 0:
		count += 1

print count
	
