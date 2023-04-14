#include <stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    int num[n];
    int min;
    int max;

    for(int i=0; i<n; i++){
        scanf("%d", &num[i]);
        if(i==0){ 
            min = num[i];
            max = num[i];
        }
        if (num[i]>max) max = num[i];
        if (num[i]<min) min = num[i];
    }
    printf("%d %d\n", min, max);
    return 0;
}