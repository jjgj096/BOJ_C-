#include <stdio.h>
int board[6561][6561];
int n;
void star(int v){
    if(v==1) return;

    for(int x=v/3; x<n; x+=v){
        for(int y=v/3; y<n; y+=v){
            for(int i=x; i<x+v/3; i++){
                for(int j=y; j<y+v/3; j++){
                    //printf("%d %d\n", i,j);
                    board[i][j]=0;
                }
            }
        }
    }

    star(v/3);
    return;
}

int main(void){
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            board[i][j]=1;
        }
    }
    star(n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(board[i][j]==1) printf("*");
            else if(board[i][j]==0) printf(" ");
        }
        printf("\n");
    }
    

    return 0;
}