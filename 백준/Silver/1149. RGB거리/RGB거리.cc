#include <iostream>
#include <utility>
#include <unordered_map>
#include <set>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int arr[1001][3];
    int memo[1001][3];
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];

    memo[0][0] = arr[0][0];
    memo[0][1] = arr[0][1];
    memo[0][2] = arr[0][2];

    for (int i = 1; i < N; i++)
    {
        memo[i][0] = min(memo[i-1][1], memo[i - 1][2]) + arr[i][0];
        memo[i][1] = min(memo[i-1][0], memo[i - 1][2]) + arr[i][1];
        memo[i][2] = min(memo[i-1][1], memo[i - 1][0]) + arr[i][2];
    }

    cout << min(memo[N - 1][2], min(memo[N - 1][1], memo[N - 1][0]));
}
