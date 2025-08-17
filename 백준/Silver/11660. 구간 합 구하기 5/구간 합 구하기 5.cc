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

    int N, M;
    int x1, y1, x2, y2, temp;
    cin >> N >> M;

    for (int i = 0; i < N+1; i++)
        for (int j = 0; j < N+1; j++)
        {
            if (i == 0 || j == 0)
                arr[i][j] = 0;
            else
            {
                cin >> temp;
                arr[i][j] = temp + arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
            }
        }

    for (int i = 0; i < M; i++)
    {   
        cin >> x1 >> y1 >> x2 >> y2;

        temp = arr[x2][y2] - arr[x1-1][y2] - arr[x2][y1 - 1] + arr[x1-1][y1-1];
        cout << temp << '\n';
    }
}
