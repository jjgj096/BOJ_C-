#include <stdio.h>
#include <algorithm>
using namespace std;

int arr[100000];
int n;
void binary(int* v, int s, int e, int k){

    if (s>=e) { //s>=e
        printf("0\n");
        return;
    }
    int mid = (s+e)/2;

    if(v[mid]==k) {
        printf("1\n");
        return;
    }
    else if(v[mid]>k) binary(arr, s, mid, k);
    else binary(arr, mid+1, e, k);

}
int main(void){
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+n);

    int v;
    scanf("%d", &v);

    int a;

    for(int j=0; j<v; j++){
        scanf("%d", &a);

        binary(arr, 0, n, a);
    }

    return 0;
}