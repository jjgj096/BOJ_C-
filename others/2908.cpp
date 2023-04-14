#include <stdio.h>

int reverse(int v){
    int i,j,k;
    i = v/100;
    j = (v/10) % 10;
    k = v%10;

    return 100 * k + 10 * j + i;
}

int main(void){
    int a,b;
    scanf("%d %d", &a, &b);

    a = reverse(a);
    b = reverse(b);

    if(a>b) printf("%d\n", a);
    else if(a<b) printf("%d\n", b);

    return 0;
}