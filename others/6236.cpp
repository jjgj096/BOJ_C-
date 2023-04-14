#include <stdio.h>

int N[100000];  //일별 사용해야할 금액
int n, m;

int check(int mid)
{
    int count=1;
    int fill=mid;

    for(int i=0; i<n; i++){
        if(N[i]>fill) return 0; // 못사는경우.

        if(N[i]>mid)
        {
            mid = fill;
            count++;
        }
        mid -= N[i];
    }

    if(count<=m) return 1;
    else return 0;
}

int main()
{
    scanf("%d %d", &n, &m);

    if(m>n || m<1 || n<1)   //입력 예외처리
    {
        printf("올바르지 않은 입력.\n");
        return 0;
    }

    int sum=0;
    for(int i=0; i<n; i++)  //사용할 금액 저장.
    {
        scanf("%d", &N[i]);
        sum += N[i];
    }
    int low=1;
    int high=sum;
    int mid;

    while(low+1<high)
    {
        mid=(low+high)/2;
        if(check(mid)) high=mid;
        else low = mid;
    }

    printf("%d\n", high);
    return 0;
}
