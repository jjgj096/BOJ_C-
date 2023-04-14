#include <stdio.h>
//버블정렬

void sort(int* v, int b){
    int tmp = 0;
    for(int i=b; i>0; i--){
        for(int j=0; j<b-1; j++){
            if(v[j+1] < v[j]){
                tmp = v[j];
                v[j] = v[j+1];
                v[j+1] = tmp;
            }
        }
    }
}

int main(void){
    int a;
    scanf("%d", &a);
    int num[a];

    for(int i=0; i<a; i++){
        scanf("%d", &num[i]);
    }

    sort(num, a);

    for(int i=0; i<a; i++){
        printf("%d\n", num[i]);
    }
}