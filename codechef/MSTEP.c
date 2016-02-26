#include <stdio.h>
#include <stdlib.h>

#define inp getchar_unlocked

typedef long long int lld;

inline int input() {
    lld num = 0;
    char s = inp();
    while(s<'0'||s>'9') s = inp();
    while(s>='0'&&s<='9') num = (num<<3) + (num<<1) + (s-'0'), s = inp();
    return num;
}

typedef struct {
    int x, y;
} coord ;

int main() {
    int T, N, i, j, a, steps;
    
    coord curr, dest;
    coord *map;
    
    T = input();

    while(T--) {
        N  = input();
        map = (coord *) malloc(N*N * sizeof(coord));
        for(i=0; i<N; i++) {
            for(j=0; j<N; j++) {
                a = input();
                map[a-1].x = i;
                map[a-1].y = j;
            }
        }
               
        steps = 0;
        curr = map[0];
        for (i=1; i<N*N; i++) {
            dest = map[i];
            
            while(curr.x != dest.x) {
                if (curr.x < dest.x)
                    curr.x++;
                else
                    curr.x--;
                
                steps++;
            }
            
            while(curr.y != dest.y) {
                if (curr.y < dest.y) 
                    curr.y++;
                else
                    curr.y--;
                    
                steps++;
            }
            
        }
        free(map);
        printf("%d\n", steps);
    }
    return 0;
}
