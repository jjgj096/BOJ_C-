#include <stdio.h>

int main(void){
    int n;
    int a;
    scanf("%d", &n);

    for(int i=1; i<=2*n-1; i++){
    if(i>n){
        a = 2*n-i;
        for(int j=0; j<a; j++)
            printf("*");
        for(int b=0; b<2*n-2*a; b++)
            printf(" ");
        for(int j=0; j<a; j++)
            printf("*");
    }

    else{
      for(int j=0; j<i; j++)
        printf("*");
      for(int a=0; a<2*n-2*i; a++)
        printf(" ");
      for(int j=0; j<i; j++)
        printf("*");
    }
    printf("\n");
    }

    return 0;
}