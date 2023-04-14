#include <stdio.h>
int main(void){
    int max = 0;
    int pos = 0;
    int num;

    for(int i=0; i<9; i++){
        scanf("%d", &num);
        if(num>max) {
            max = num;
            pos = i+1;
        }
    }
    printf("%d\n", max);
    printf("%d\n", pos);
    return 0;
}