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

    int N, result = 1;
    int arr[1001];
    int memo[1001];
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    memo[0] = 1;

    for (int i = 1; i < N; i++)
    {
        int temp = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i] && temp < memo[j])
                temp = memo[j];
        }
        memo[i] = temp + 1;
        if (result < memo[i])
            result = memo[i];
    }

    cout << result;
}
