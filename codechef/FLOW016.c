#include <stdio.h>

int main() {
    long long T, A, B, tA, tB, i, temp, gcd, lcm;
    scanf("%lld", &T);
    for(i=0; i<T; i++) {
        scanf("%lld %lld", &A, &B);
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
        printf("%lld %lld\n", gcd, lcm);
    }
    return 0;
}
