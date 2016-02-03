#include <stdio.h>

int main() {
    unsigned long T, L, R, i, j, res, total, temp;
    scanf("%lu", &T);
    for(i=0; i<T; i++) {
        scanf("%lu %lu", &L, &R);
        total = 0;
        for(j=L; j <= R; j++) {
            temp = j;
            res = 0;
            while(temp > 0) {
                res = res*10 + (temp%10);
                temp /= 10;
            }
            if (res==j)
                total += j;
        }
        printf("%lu\n", total);
    }
    return 0;
}
