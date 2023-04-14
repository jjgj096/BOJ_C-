#include <stdio.h>

int abs(int c){
    c>0?c:-c;
    return c;
}

int main(void){
    int n;
    scanf("%d", &n);

    if(n<100){  //2자리수
        printf("%d\n", n);
    }

    else if(n<1000){
        int a,b,c;
        int count = 99;
        for(int i =100; i<=n; i++){
            a = i/100;
            b = (i - a*100)/10;
            c = i - a*100 - b*10;
            if(abs(c-b) == abs(b-a)) count++;
            //if(2*b==a+c) 등차중앙
        }
        printf("%d\n", count);
    }

    else printf("144\n");
}