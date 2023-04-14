#include <stdio.h>

int main(void){
    int n;
    int max=0;
    int sum=0;
    int score;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &score);
        sum += score;
        if(score > max){
            max = score;
        }
    }

    printf("%f\n", 100.0*sum/n/max);
    //(각 점수)/max *100 해서 다 더해서 n으로 나눈다.
    // = 각 점수 sum 해서 sum/n/max *100과 같음.
    return 0;
}