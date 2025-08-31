#include <iostream>
#include <utility>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long N, result;
    cin >> N;
    long long arr[110][10] = {};

    for (int i = 1; i <= 9; i++)
    {
        arr[0][i] = 1;
    }

    for (long long i = 1; i <= N; i++)
    {
        for (long long j = 0; j <= 9; j++)
        {
            long long temp = 0;
            if (j - 1 >= 0)
                temp += arr[i-1][j-1];
            if (j + 1 <= 9)
                temp += arr[i-1][j+1];

            arr[i][j] = temp % 1000000000;
        }
    }
    long long sum = 0;
    for (int i = 0; i <= 9; i++)
        sum += arr[N-1][i];
    sum %= 1000000000;
    cout << sum;
}
