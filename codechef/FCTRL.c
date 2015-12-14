#include <stdio.h>

int factors(long long unsigned int num, long long unsigned int *fact5, long long unsigned int *fact2){
    if (num == 0){
        *fact5 = 0;
        *fact2 = 0;
        return 0;
    }
    long long unsigned int temp_fact5, temp_fact2, *ptr_temp_fact5, *ptr_temp_fact2;
    temp_fact5 = 0;
    temp_fact2 = 0;
    ptr_temp_fact5 = &temp_fact5;
    ptr_temp_fact2 = &temp_fact2;
    
    if (num % 10 == 0){
        factors(num/10, ptr_temp_fact5, ptr_temp_fact2);
        *fact5 = 1 + (*ptr_temp_fact5);
        *fact2 = 1 + (*ptr_temp_fact2);
        return 0;
    }
    else if (num % 10 == 5){
        factors(num/5, ptr_temp_fact5, ptr_temp_fact2);
        *fact5 = 1 + (*ptr_temp_fact5);
        *fact2 = 0 + (*ptr_temp_fact2);
        return 0;
    }
    else if (num % 2 == 0){
        factors(num/2, ptr_temp_fact5, ptr_temp_fact2);
        *fact5 = 0 + (*ptr_temp_fact5);
        *fact2 = 1 + (*ptr_temp_fact2);
        return 0;
    }
    else{
        *fact5 = 0;
        *fact2 = 0;
        return 0;
    }
}
int main(){
    long long unsigned int num = 0;
    long long unsigned int temp_fact5, temp_fact2, *ptr_temp_fact5, *ptr_temp_fact2;
    temp_fact5=0;
    temp_fact2=0;
    ptr_temp_fact5 = &temp_fact5;
    ptr_temp_fact2 = &temp_fact2;
    
    int inpCnt = 0;
    scanf("%d", &inpCnt);
    
    long long unsigned int fact5, fact2;
    long long unsigned int i = 1;
    int count = 0;
    for (count=0; count<inpCnt; count++)
    {
    fact5=0;
    fact2=0;
    scanf("%llu", &num);
    
    for (i=1; i<= num; i++)
    {
        temp_fact5=0;
        temp_fact2=0;
        ptr_temp_fact5 = &temp_fact5;
        ptr_temp_fact2 = &temp_fact2;
        factors(i, ptr_temp_fact5, ptr_temp_fact2);
        fact5 += temp_fact5;
        fact2 += temp_fact2;
    }
    
    if (fact5<fact2)
        printf("%llu\n", fact5);
    else
        printf("%llu\n", fact2);
    }
    return 0;
}
    
