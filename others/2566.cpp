#include <stdio.h>
int main(void){
    int i,j;
    int board[9][9];

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            scanf("%d", &board[i][j]);
        }
    }

    int max = 0;    //-1도 방법.
    int maxi=1, maxj=1;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(board[i][j]>max) {
                max = board[i][j];
                maxi = i+1;
                maxj = j+1;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d\n", maxi, maxj);
    return 0;
}

//메모리 제한이 있으면 배열 X -> 물어봄과 동시에 비교.