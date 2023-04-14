#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int card[N];
    int curMax = -1;

    for (int i = 0; i < N; i++)
    {
        cin >> card[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                // cout << card[i] << ' ';
                // cout << card[j] << ' ';
                // cout << card[k] << ' ';
                int sum = card[i] + card[j] + card[k];

                if (sum > curMax && sum <= M)
                {
                    curMax = sum;
                }
                if (curMax == M)
                {
                    cout << curMax << 'n';
                    return 0;
                }
            }
        }
    }
    cout << curMax << 'n';

    return 0;
}