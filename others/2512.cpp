#include <stdio.h>

int n;
int N[10000];
int cash;
long long tmp;

int check(int mid)
{
    tmp = 0;
    for(int i=0; i<n; i++){
        if(N[i]<mid) tmp += N[i];
        else tmp += mid;
    }

    if (tmp>cash)   //예산을 넘어간 경우
    {
        return 1;
    }

    else if(tmp<cash)  //예산보다 적게 쓴 경우?
    {
        return 0;
    }
}

int main()
{
    int max=0;
    int sum=0;
    scanf("%d", &n);
    if(n<3 || n>10000)
    {
        printf("입력오류\n");
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        scanf("%d ", &N[i]);
        if(N[i]>max) max = N[i];
        sum += N[i];
    }
    scanf("%d", &cash);

    if(sum <= cash) //sum보다 예산이 클 경우
    {
        printf("%d", max);
        return 0;
    }

    int low=1;
    int high = max;
    int mid;

    while(low+1<high)
    {
        mid = (low+high)/2;
        if(check(mid)) high=mid;
        else low = mid;
    }

    printf("%d\n", low);

    return 0;
}