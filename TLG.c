#include <stdio.h>

int main()
{
    long rounds=0, winner=0, maxLead=0, i=0, total1=0, total2=0, data1=0, data2=0;
    scanf("%ld", &rounds);
    
    for(i=0; i<rounds; i++)
    {
        scanf("%ld %ld", &data1, &data2);
        total1 += data1;
        total2 += data2;
        
        if (total1 - total2 > maxLead)
        {
            winner = 1;
            maxLead = total1-total2;
        }
        else if (total2 - total1 > maxLead)
        {
            winner = 2;
            maxLead = total2 - total1;
        }
    }
    
    printf("%ld %ld\n", winner, maxLead);
    
    return 0;
}
