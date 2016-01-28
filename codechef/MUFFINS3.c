#include <stdio.h>

int main() {

    unsigned long long T, N, i;
    
    scanf("%llu", &T);
    
    for(i=0; i<T; i++) {
        scanf("%llu", &N);
        printf("%llu\n", N/2 + 1);
    }
    
    return 0;
}
