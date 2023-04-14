#include <stdio.h>
//선택정렬

void sort(int* v){

    for(int i=0; i<5; i++){
        int tmp;
        int min = i;
        for(int j=i; j<5; j++){
            if(v[min]>v[j]){
                min = j;
            }
        } 
        tmp = v[i];
        v[i] = v[min];
        v[min] = tmp;
    }
}

int main(void){
    int num[5];

    for(int i=0; i<5; i++){
        scanf("%d", &num[i]);
    }

    sort(num);

    int sum =0;
    int avg =0;
    for(int i=0; i<5; i++){
        sum += num[i];
        avg = sum / 5;
    }
    printf("%d\n", avg);
    printf("%d\n", num[2]);
}