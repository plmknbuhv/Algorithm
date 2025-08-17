#include <iostream>
#include <utility>
#include <unordered_map>
#include <set>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

int arr[1030][1030];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int arr[501][501];
    cin >> N;

    for (int i = 0; i < N; i++)
        for (int j = 0; j <= i; j++)
            cin >> arr[i][j];

    for (int i = 1; i < N; i++)
        for (int j = 0; j <= i; j++)
        {
            int temp = 0;

            if (j > 0 && temp < arr[i - 1][j - 1] + arr[i][j])
                temp = arr[i - 1][j - 1] + arr[i][j];
            if (j < i && temp < arr[i - 1][j] + arr[i][j])
                temp = arr[i - 1][j] + arr[i][j];

            arr[i][j] = temp;
        }
    int result = 0;
    for (int i = 0; i < N; i++)
    {
        if (result < arr[N - 1][i])
            result = arr[N - 1][i];
    }

    cout << result;
}
