#include <stdio.h>

int main(void){
    int c;
    scanf("%d", &c);
    int n;
    for(int i=0; i<c; i++){ //test case 개수
        scanf("%d", &n);
        int score[n];
        for(int i=0; i<n; i++){
            scanf("%d", &score[i]);
        }
        int sum=0;
        int mean;
        for(int a=0; a<n; a++){
            sum = sum + score[a];
        }
        mean = sum/n;
        int count=0;
        for(int a=0; a<n; a++){
            if(score[a]>mean){
                count++;
            }
        }
        float per;
        per = 100*count/(float)n;
        printf("%.3f%%\n", per); //%% 두번이 한개
    }
    return 0;
}