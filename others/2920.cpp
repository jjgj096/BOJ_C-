#include <stdio.h>

int main(void){
    int as=1, de=1;
    int num[8];
    for(int i=0; i<8; i++){
        scanf("%d", &num[i]);
    }
    for(int i=0; i<8; i++){
        if(num[i] != i+1){
            as = 0;
            break;
        }
    }
    for(int i=0; i<8; i++){
        if(num[i] != 8-i){
            de = 0;
            break;
        }
    }

    if(as == 0 && de==0) printf("mixed\n");
    else if(as == 1) printf("ascending\n");
    else if(de == 1) printf("descending\n");
    return 0;
}