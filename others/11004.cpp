#include <iostream> //stdio
#include <algorithm> //알고리즘 담겨있음.
using namespace std; //std:: 생략가능

int n,k;
int num[5000000];
int main(void){
    scanf("%d %d", &n, &k);

    for(int i=0; i<n; i++){
        scanf("%d", &num[i]);
    }

    sort(num, num+n); //첫 주소 , 아무것도 없는 처음 주소

    printf("%d\n", num[k-1]);
}