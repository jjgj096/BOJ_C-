#include <stdio.h>

char arr[3072][6143];

void star(int len, int row, int col)
{
    if (len == 3){  //가장 최하위 조건까지 star 재귀적으로 호출.
        arr[row][col] = '*';
        arr[row + 1][col - 1] = '*';
        arr[row + 1][col + 1] = '*';

        for(int i = 0; i < 5; i++){ //밑에 * 5개
            arr[row + 2][col - 2 + i] = '*';
        }
        return;  
    }
        
    // 하위 삼각형들의 시작점을 호출.
    star(len / 2, row, col); 
    star(len / 2, row + len / 2, col - len / 2); 
    star(len / 2, row + len / 2, col + len / 2);  
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2 * n - 1; j++){
            arr[i][j] = ' ';
        }
    }
    
    star(n, 0, n - 1);  //입력 받은 n 과 가장 큰 삼각형의 위 꼭짓점.
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2 * n - 1; j++){
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}