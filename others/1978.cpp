#include <iostream>
#include <cmath>
using namespace std;

bool cehckPrime(int num)
{
    if (num == 1)
        return false;

    // sqrt => 제곱근 함수. cmath에 내장
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int primeNumCnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
    for (int i = 0; i < n; i++)
    {
        if (cehckPrime(arr[i]))
        {
            primeNumCnt++;
        }
    }
    cout << primeNumCnt << '\n';
    return 0;
}