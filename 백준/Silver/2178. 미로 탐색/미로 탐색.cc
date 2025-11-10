#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N, M;
    int arr[101][101];
    int visit[101][101];
    cin >> N >> M;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            visit[i][j] = -1;
        }

    for (int i = 0; i < N; i++)
    {
        string temp;
        cin >> temp;
        for (int j = 0; j < M; j++)
        {
            arr[i][j] = temp[j] - '0';
        }
    }

    queue<pair<int, int>> q;
    q.push({0,0});
    visit[0][0] = 0;

    while (q.empty() == false)
    {
        pair<int, int> t = q.front(); q.pop();

        if (t.first == N - 1 && t.second == M - 1)
        {
            cout << visit[t.first][t.second] + 1;
            break;
        }

        if (t.first + 1 < N && visit[t.first + 1][t.second] == -1 && arr[t.first + 1][t.second] == 1)
        {
            visit[t.first + 1][t.second] = visit[t.first][t.second] + 1;
            q.push({t.first+1, t.second});
        }
        if (t.first - 1 >= 0 && visit[t.first - 1][t.second] == -1 && arr[t.first - 1][t.second] == 1)
        {
            visit[t.first - 1][t.second] = visit[t.first][t.second] + 1;
            q.push({ t.first - 1, t.second });
        }
        if (t.second + 1 < M && visit[t.first][t.second + 1] == -1 && arr[t.first][t.second+1] == 1)
        {
            visit[t.first][t.second + 1] = visit[t.first][t.second] + 1;
            q.push({ t.first, t.second + 1 });
        }
        if (t.second - 1 >= 0 && visit[t.first][t.second - 1] == -1 && arr[t.first][t.second - 1] == 1)
        {
            visit[t.first][t.second - 1] = visit[t.first][t.second] + 1;
            q.push({ t.first, t.second - 1 });
        }
    }
}
