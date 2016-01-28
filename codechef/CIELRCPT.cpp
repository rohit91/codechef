#include <iostream>

using namespace std;

int main() {
    
    unsigned T, N, i, res;
    cin >> T;
    
    for(i=0; i<T; i++) {
        cin >> N;
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
        cout << res << "\n";
    }
    return 0;
}
