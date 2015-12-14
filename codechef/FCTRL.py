import sys

T = int(raw_input())
inputs = []

for line in sys.stdin:
	inputs.append(int(line))

def factors(num):
    if num == 0:
        return (0,0)
    
    if num % 10 == 0:
        result = factors(num/10)
        return (1 + result[0], 1 + result[1]) 
    elif num % 10 == 5:
        result = factors(num/5)
        return (1 + result[0], result[1]) 
    elif num % 2 == 0:
        result = factors(num/2)
        return (result[0], 1 + result[1]) 
    else:
        return (0,0)

def numTrailingZeros(num):
    fact5, fact2 = 0,0 
    for i in range(1, num + 1):
        result = factors(i)
        fact5 += result[0]
        fact2 += result[1]
    return min(fact5, fact2)

for i in range(T):
	print numTrailingZeros(inputs[i])


