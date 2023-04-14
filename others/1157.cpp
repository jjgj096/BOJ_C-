#include <stdio.h>
#include <string.h>
#include <stdlib.h> //atoi, malloc

int main(void){
    int len=0;
    char name[1000000];
    scanf("%s", name);
    len = strlen(name);
    //\n을 만나기 전까지의 길이 반환

    ///ABC
    int a[123]={0};
    for(int i=0; i<len; i++){
        int b;
        b = name[i];
        a[b]++;
    }
    int max=0;
    int p=0;
    for(int i=65; i<91; i++){
        a[i] = a[i]+ a[i+32];
        if (a[i]>max){
            p = i;
            max = a[i];
        }
        else if(a[i]==max){
            p = 63;
        }
    }
    printf("%c\n", p);
    return 0;
}
