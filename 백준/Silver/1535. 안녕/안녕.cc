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

    int N;
    int arr[101][101] = {};
    int health[100] = {};
    int happy[100] = {};
    cin >> N;

    for (int i = 1; i <= N; i++)
        cin >> health[i];
    for (int i = 1; i <= N; i++)
        cin >> happy[i];

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= 100; j++)
        {
            if (j > health[i]) // 이 체력에서 기뻐할 수 있는가
            {
                arr[i][j] = max((happy[i] + arr[i - 1][j - health[i]]), arr[i - 1][j]);
            }
            else
                arr[i][j] = arr[i - 1][j];
        }
    }

    cout << arr[N][100];
}
