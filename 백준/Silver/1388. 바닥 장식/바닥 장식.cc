#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool visit[100000];
    int N, M, result = 0;
    string input;
    string arr[1000];

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> input;
        arr[i] = input;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            result++;
            if (arr[i][j] == '-' && j - 1 >= 0 && arr[i][j-1] == '-')
                result--;
            else if (arr[i][j] == '|' && i - 1 >= 0 && arr[i-1][j] == '|')
                result--;
        }
    }

    cout << result;
}
