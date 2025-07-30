#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>
using namespace std;

long long K, N, M = 0;
long long*arr;

long long Check()
{
    long long left = 1, right = M, middle = 0;
    while (left <= right)
    {
        long long temp = 0;
        middle = (left + right) / 2;

        for (int i = 0; i < K; i++)
        {
            temp += arr[i] / middle;
        }

        if (temp < N)
            right = middle - 1;
        else
            left = middle + 1;
    }

    return right;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> K >> N;
    arr = new long long[K];

    for (int i = 0; i < K; i++)
    {
        cin >> arr[i];
        if (arr[i] > M)
            M = arr[i];
    }

    cout << Check();
}
