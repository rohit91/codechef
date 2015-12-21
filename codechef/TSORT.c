#include <stdio.h>
#include <stdlib.h>

void mergesrt(unsigned long long int *, unsigned long long int, unsigned long long int);
void combine(unsigned long long int *, unsigned long long int, unsigned long long int);

int main()
{
    unsigned long long int RANGE=0, i=0;
    scanf("%llu", &RANGE);
    //printf("Range: %llu\n", RANGE);
    unsigned long long int *a, *a_temp;
    a = (unsigned long long int*) malloc(RANGE * sizeof(unsigned long long int));
        
    // Input 
    for(i=0; i<RANGE; i++)
        scanf("%llu", a+i);

    // Merge sort
    mergesrt(a, 0, RANGE);
    
    // Display
    for(i=0; i<RANGE; i++)
        printf("%llu\n", *(a+i));
        
    // Free memory
    free(a);
    
    return 0;
}

/* Mergrsrt Function
 *      Actual Merge-sort implementation. Recursive function
 * 
 * Parameters ::
 *      a    : Pointer to original array
 *      lower: Lower index of array. Is inclusive
 *      upper: Upper bound of array. Is exclusive, that is valid array
 *             index is only till upper-1
 */
void mergesrt(unsigned long long int *a, unsigned long long int lower, unsigned long long int upper)
{   
    // End-of-recursion condition
    if (lower == upper -1)
        return;
        
    unsigned long long int mid = (lower + upper)/2;
        
    mergesrt(a, lower, mid);
    mergesrt(a, mid, upper);
    
    combine(a, lower, upper);
}


/* combine Function
 *      Merges to sorted arrays into a final sorted array, in same array
 * 
 * Parameters ::
 *      a    : Pointer to original array
 *      lower: Lower index of array. Is inclusive
 *      upper: Upper bound of array. Is exclusive, that is valid array
 *             index is only till upper-1
 */
void combine(unsigned long long int *a, unsigned long long int lower, unsigned long long int upper)
{
    unsigned long long int i =0, j=0, k=0, mid=0;
    mid = (lower + upper)/2;
    
    unsigned long long int *result;
    result = (unsigned long long int*) malloc( (upper-lower) * sizeof(unsigned long long int));
    
    // Merge arrays
    for(i=lower, j=mid, k=0; i<mid && j<upper; )
    {
        if (*(a+i) < *(a+j))
            *(result + k++) = *(a + i++);
        else
            *(result + k++) = *(a + j++);
    }
    
    // Copy remaining elements
    while(i<mid)
        *(result + k++) = *(a + i++);
    
    while(j<upper)
        *(result + k++) = *(a + j++);
    
    // Copy combined array onto original array
    for(k=0; k<(upper-lower); k++)
        *(a+lower+k) = *(result+k);
    
    // Free temporary array memory
    free(result);
}
