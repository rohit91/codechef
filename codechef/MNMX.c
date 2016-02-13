#include <stdio.h>

#define inp getchar_unlocked
 
typedef long long int lld;
 
inline lld input()
{
    lld num = 0;
    char s = inp();
    while(s<'0'||s>'9') s = inp();
    while(s>='0'&&s<='9') num = (num<<3) + (num<<1) + (s-'0'), s = inp();
    return num;
}

int main()
{
    long long T, N, x[50000], i, j, small, cost, delKey, length;
    T = input();
    while(T--)
    {
        N = input();
        for (i=0; i<N; i++)
            x[i] = input();
        
        cost = 0;
        length = N;
        
        while(length != 1)
        {
            small = 0;
            for (i=0; i<N; i++)
                if (x[i] < x[small])
                    small = i;
            cost += x[small];
            
            if (small==0)
                delKey = small + 1;
            else if (small == length-1)
                delKey = small - 1;
            else
            {
                if (x[small-1] > x[small+1])
                    delKey= small - 1;
                else
                    delKey = small + 1;
            }
            
            if (delKey == length-1)
                length--;
            else
            {
                for (j=delKey; j<length-1; j++)
                    x[j] = x[j+1];
                length--;
            }
        }
        printf("%lld\n", cost);
    }
    
    return 0;
}
    
