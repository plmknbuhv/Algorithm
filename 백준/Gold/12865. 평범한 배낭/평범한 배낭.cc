#include <iostream>
#include <utility>
#include <unordered_map>
#include <set>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

int arr[101][2] = {};
int arr2[101][100001] = {};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K, W, V;

    cin >> N >> K;

    for (int i = 1; i <= N; i++)
    {
        cin >> W >> V;
        arr[i][0] = W;
        arr[i][1] = V;
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= K; j++)
        {
            if (j < arr[i][0])
                arr2[i][j] = arr2[i-1][j];
            else
            {
                arr2[i][j] = max(arr2[i-1][j - arr[i][0]] + arr[i][1], arr2[i - 1][j]);
            }
        }
    }

    cout << arr2[N][K];
}
