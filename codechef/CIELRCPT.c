#include <stdio.h>

int main() {

    unsigned T, N, i, res;
    scanf("%u", &T);
    
    for(i=0; i<T; i++) {
        scanf("%u", &N);
        res = 0;
        
        while(N>0) {
            if (N>2048) {
                res += N/2048;
                N = N % 2048;
                continue;
            }
            res += N & 0x01;
            N = N >> 1;
        }
        printf("%u\n", res);
    }
    return 0;
}
