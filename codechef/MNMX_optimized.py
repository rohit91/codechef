# IMPORTANT: Don't use this solution. Very slow and useless, though 
#            gives correct output. 
# 
# INSTEAD, use solution in file: MNMX_fastest_possible_approach.py 

T = int(raw_input())

for i in range(T):
    N = int(raw_input())
    x = map(int, raw_input().split())
    
    cost = 0
    length  = N
    while(length != 1):
        
        # Find smallest element
        small = 0
        for j in range(length):
            if (x[j] < x[small]):
                small = j
        cost += x[small]
        
        #Compare and minimize cost
        if small == 0:
            delKey = small + 1
        elif small == length - 1:
            delKey = small - 1
        else:
            if x[small-1] > x[small+1]:
                delKey= small - 1
            else:
                delKey = small + 1
        
        # Delete array item at index delKey and move the array contents 
        if delKey == length-1:
            length -= 1  
        else:
            for j in range(delKey, length-1):
                x[j] = x[j+1]
            length -= 1
        
    print cost
