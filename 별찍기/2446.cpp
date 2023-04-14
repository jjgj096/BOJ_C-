#include <stdio.h>

int main(void){
    int n;
    int a;
    scanf("%d", &n);

    for(int i=1; i<=2*n-1; i++){
    if(i>n){
        for(int j=0; j<(2*n-1)-i; j++)
            printf(" ");
        for(int j=0; j<2*(i-n+1)-1; j++)
            printf("*");
    }

    else{
        for(int j=0; j<i-1; j++)
            printf(" ");
        for(int j=0; j< 2*(n+1-i)-1; j++)
            printf("*");
    }
    printf("\n");
    }
    return 0;
}
