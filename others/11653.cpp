#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        return 0;
    }

    int cur = 2;
    while (n != 1)
    {
        while (n % cur == 0)
        {
            cout << cur << '\n';
            n /= cur;
        }
        cur++;
    }

    return 0;
}