# Mathematics: 
#   (AuB = A union B; AiB = A intersection B) 
#   AuB >= Max(A, B)
#   Also since AiB >=0 (Given in problem), 
#        therefore A+B-AuB >=0, 
#        hence AuB <= A+B
#   Range is: max(A,B) <= AuB <= A+B
# 
# Problem url: https://www.codechef.com/problems/REMISS

T = int(raw_input())

for i in range(T):
    nums = map(int, raw_input().split())
    print '{} {}'.format(max(nums), sum(nums))
