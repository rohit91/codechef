/* FCTRL:
 * Find the number of trailing zeros in the factorial of a number
 * For number of zeros, we have to find number of 10 as factor of given
 * number. Since 10 itself has 2 and 5 as factors. We can find the no. 
 * of 10s by finding the total numbers of 2s and 5s as factors and
 * using min(no. of 2s, no. of 5s) to get total number of 10 as factors
 * 
 * In case of factorial, it is guaranteed that a given number has always
 * higher number of 2s as factors than 5s. Hence it is sufficient to 
 * find the number of 5s as factors of a given number to get the no. of
 * trailing zeros in the factorial of the given number. 
 * 
 * Hence, below code finds no. of 5 as factor in factorial of a number
 */

#include <stdio.h>

int main(){
    
    long long unsigned int fact5, num = 0;
        
    int inpCnt = 0;
    scanf("%d", &inpCnt);
    
    int count = 0;
    for (count=0; count<inpCnt; count++)
    {
        fact5=0;
        scanf("%llu", &num);
        
        /* First check for factors of 5, then 25, then 125 and so on
         * Like 623! has total 623/5 = 124
         *                   + 623/25 = 24
         *                   + 623/125 = 4
         *                  ----------------
         *                              152 trailing zeros
         * Stop loop when factCheck becomes > given number
         */
         
        int factCheck = 5;
        while ( factCheck <= num){
            fact5 += num/factCheck;
            factCheck *= 5;
        }
        
        printf("%llu\n", fact5);
    }

    return 0;
}
    
