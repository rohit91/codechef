#include <stdio.h>

int main() {
    unsigned long long T, A, B, tA, tB, i, temp, gcd, lcm;
    scanf("%llu", &T);
    for(i=0; i<T; i++) {
        scanf("%llu %llu", &A, &B);
        tA = A;
        tB = B;
        while(tB != tA) {
            if (tA > tB)
                tA = tA - tB;
            else 
                tB = tB - tA;
        }
        gcd = tA;
        lcm = (A*B)/gcd;
        printf("%llu %llu\n", gcd, lcm);
    }
    return 0;
}
