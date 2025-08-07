#include <iostream>
#include <utility>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long N, M, B, result = 9999999999, resultIdx;
    int arr[501][501];
    cin >> N >> M >> B;

    for (int j = 0; j < N; j++)
        for (int k = 0; k < M; k++)
            cin >> arr[j][k];

    for (int i = 256; i >= 0; i--)
    {
        int tempB = B;
        int T = 0;

        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < M; k++)
            {
                if (arr[j][k] > i)
                {
                    int temp = arr[j][k] - i;
                    tempB += temp;
                    T += temp * 2;
                }
                else if (arr[j][k] < i)
                {
                    int temp = i - arr[j][k];
                    tempB -= temp;
                    T += temp;
                }
            }
        }

        if (tempB >= 0 && result > T)
        {
            resultIdx = i;
            result = T;
        }
    }

    cout << result << " " << resultIdx;
}
