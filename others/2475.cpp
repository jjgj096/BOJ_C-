#include <stdio.h>

int main(void){
    int num;
    int sum=0;

    for(int i=0; i<5; i++){
        scanf("%d", &num);
        sum += num*num;
    }

    printf("%d\n", sum%10);
    return 0;
}