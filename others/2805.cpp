#include <stdio.h>
#include <algorithm>
using namespace std;

int h[1000000];
int n, k;

int binary(int low, int high){
    int mid = (low+high+1)/2;
    if(low+1>=high){
        return low;
    }
    long long sum=0; 
    long long diff;

    for(int i=0; i<n; i++){
        diff = h[i] - mid;
        if(diff< 0) continue;
        else sum += diff;
    }
    // printf("%lld \n", sum);

    if(sum >= k) 
    return binary(mid, high);
    else 
    return binary(low, mid);

}

int main(void){
    scanf("%d %d", &n, &k);

    for(int i=0; i<n; i++){
        scanf("%d", &h[i]);
    }

    sort(h, h+n);
    int a = h[n-1]; 
    int res = binary(0, a);
    printf("%d\n", res);
}