# Eucliean algorithm for GCD
import fractions 
T = int(raw_input())

for i in range(T):
    a, b = map(int, raw_input().split())
    '''
    temp_b = b
    temp_a = a
    while temp_b:
        temp = temp_b
        temp_b = temp_a % temp_b
        temp_a = temp
    res = temp_a
    '''
    res = fractions.gcd(a, b)
    lcm = (a*b)/res
    print '{} {}'.format(res, lcm)
    
