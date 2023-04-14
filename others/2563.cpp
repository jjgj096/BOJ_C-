#include <stdio.h>
#define N 100

int main(void){
    int n;
    scanf("%d", &n);

    int sq[N][N] = {0};
    int x,y;
    for(int i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        for(int i=x; i<x+10; i++){
            for(int j=y; j<y+10; j++){
                sq[i][j] = 1;
            }
        }
    }

    int count=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(sq[i][j] == 1) count++;
        }
    }
    printf("%d\n", count);
    return 0;
}