#include <iostream>

using namespace std;

int main() {
    
    unsigned long long T, N, i;
    
    cin >> T;
    
    for(i=0; i<T; i++) {
        cin >> N;
        cout << N/2 + 1 << "\n";
    }
    
    return 0;
}
