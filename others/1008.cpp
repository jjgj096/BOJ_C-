#include <stdio.h>
int main(void){
    int a,b;
    scanf("%d %d", &a, &b);

    double result;
    result = a / (double)b;
    printf("%.9f", result);

    return 0;
}