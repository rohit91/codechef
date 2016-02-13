# IMPORTANT: Don't use this solution. Very slow and useless, though 
#            gives correct output. 
# 
# INSTEAD, use solution in file: MNMX_fastest_possible_approach.py 

#import random

#x = range(11)
#random.shuffle(x)
#x = [0, 6, 3, 9, 7, 8, 10, 2, 4, 1, 5]
#x = [3, 4]
#x = [4, 2, 5]

T = int(raw_input())

for i in range(T):
    N = int(raw_input())
    x = map(int, raw_input().split())
    
    cost = 0
    while(len(x) != 1):
        small = x.index(min(x))
        cost += x[small]
        if small == 0:
            x.pop(small + 1)
        elif small == len(x) - 1:
            x.pop(small - 1)
        else:
            if x[small-1] > x[small + 1]:
                x.pop(small - 1)
            else:
                x.pop(small + 1)
    print cost
