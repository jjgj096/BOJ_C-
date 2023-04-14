#include <stdio.h>

void merge(int*, int, int);

void split(int* v, int a, int b){
    if((a-b)==0){   
        return;
    }
    int mid = (a+b)/2;
    split(v,a,mid);
    split(v,mid+1,b);

    merge(v,a,b);
}

void merge(int* v, int a, int b){
    int mid = (a+b)/2;
    int p=mid+1;
    int sorted[b+1];
    int j=a;

    for(int i=j; i<b+1; i++){
        if(p>b) sorted[i] = v[a++];
        else if(a>mid) sorted[i] = v[p++];
        else{
            if(v[p]<v[a] && a<=b) sorted[i] = v[p++];
            else if(v[a]<v[p] && a<=b) sorted[i] = v[a++];
        }
    }

    for(int i=j; i<b+1; i++){
        v[i] = sorted[i];
    }
}

int main(void){
    int f=0;
    int n;
    scanf("%d", &n);

    int num[n];

    for(int i=0; i<n; i++){
        scanf("%d", &num[i]);
    }

    split(num,f,n-1);

    for(int i=0; i<n; i++){
        printf("%d\n", num[i]);
    }
}