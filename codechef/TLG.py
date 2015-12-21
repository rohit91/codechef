import sys

rounds = int(raw_input())
maxLead = 0
winner = 1
total = [0,0]

for line in sys.stdin:
    rec = map(int, line.split())
    total[0] += rec[0]
    total[1] += rec[1]
    diff = total[0] - total[1]
    if (diff > maxLead):
        winner = 1
        maxLead = diff
    elif (-diff > maxLead):
        winner = 2
        maxLead = -diff
    
print winner, maxLead
