#include <iostream>
#include <vector>

void mergesrt(std::vector<unsigned long long>&, unsigned long long, unsigned long long);
void combine(std::vector<unsigned long long>&, unsigned long long, unsigned long long);

int main()
{
    unsigned long long RANGE=0, i=0;
    std::cin >> RANGE;
    
    std::vector<unsigned long long> a(RANGE);
    
    // Read inputs
    for (i=0; i<RANGE; i++)
        std::cin >> a[i];
    
    // Merge sort
    mergesrt(a, 0, RANGE);
    
    // Display
    for(i=0; i<RANGE; i++)
        std::cout << a[i] << "\n";
    
    return 0;
}


/* Mergrsrt Function
 *      Actual Merge-sort implementation. Recursive function
 * 
 * Parameters ::
 *      a    : Reference to original vector
 *      lower: Lower index of array. Is inclusive
 *      upper: Upper bound of array. Is exclusive, that is valid array
 *             index is only till upper-1
 */
void mergesrt(std::vector<unsigned long long>& a, unsigned long long lower, unsigned long long upper)
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
void combine(std::vector<unsigned long long>& a, unsigned long long lower, unsigned long long upper)
{
    unsigned long long i=0, j=0, k=0, mid=0;
    mid = (lower + upper)/2;
    
    std::vector<unsigned long long> result(upper-lower);
    
    // Merge 
    for(i=lower, j=mid, k=0; i<mid && j<upper; )
    {
        if (a[i] < a[j])
            result[k++] = a[i++];
        else
            result[k++] = a[j++];
    }
    
    // Copy remaining elements
    while(i<mid)
        result[k++] = a[i++];
    
    while(j<upper)
        result[k++] = a[j++];
    
    // Copy combined vector onto original vector
    for(k=0; k<(upper-lower); k++)
        a[lower+k] = result[k];
}
