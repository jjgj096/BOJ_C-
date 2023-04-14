#include <stdio.h>

void sort(int* v, int n){
    int tmp;
    for(int i=1; i<n; i++){ 
        //v[i+1]을 잡고 위치 생각하기.
        for(int j=0; j<i; j++){
            if(v[j] > v[i]){
                tmp = v[i];
                for(int k=i-1; k>j-1; k--){
                    v[k+1] = v[k];
                }
                v[j] = tmp;
            }
        }
    }
}

int main(void){
    int a,b;
    scanf("%d %d", &a, &b);

    int score[a];
    for(int i=0; i<a; i++){
        scanf("%d", &score[i]);
    }

    sort(score, a);

    printf("%d\n", score[a-b]);

}