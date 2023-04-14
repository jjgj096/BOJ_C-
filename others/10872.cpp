#include <stdio.h>
int fac(int v){
    if(v<=1) return 1;
    return v*fac(v-1);
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d\n", fac(n));
    return 0;
}