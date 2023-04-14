#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int b=0; b<i; b++)
            printf(" ");
        for(int a=0; a<n-i; a++)
            printf("*");
        printf("\n");
    }
    return 0;
}