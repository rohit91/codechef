import sys

numTestCases = int(raw_input())
#print(numTestCases)

for t in range(numTestCases):
    numRows = int(raw_input())
    #print (numRows)
    triangle = []
    for n in range(numRows):
        triangle.append( map(int, sys.stdin.readline().split()))
    #print (triangle)
    
    ## reverse the standard range output using [::-1]
    for i in range(numRows-1)[::-1]: 
        for j in range(i+1):
            triangle[i][j] += triangle[i+1][j] if triangle[i+1][j] > triangle[i+1][j+1] else triangle[i+1][j+1]
    #print(triangle)
    print(triangle[0][0])


        
    
    
