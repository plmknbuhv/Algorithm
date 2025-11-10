#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int T, M, N, K;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int cnt = 0;
        cin >> M >> N >> K;
        bool visit[51][51] = {};
        int arr[51][51] = {};
        vector<pair<int, int>> vec;
        for (int j = 0; j < K; j++)
        {
            int t1, t2;
            cin >> t1 >> t2;
            arr[t1][t2] = 1;
            vec.push_back({t1, t2});
        }

        for (auto v : vec)
        {
            if (visit[v.first][v.second]) continue;
            cnt++;

            queue<pair<int, int>> que;
            que.push(v);
            visit[v.first][v.second] = true;

            while (que.empty() == false)
            {
                auto pair = que.front(); que.pop();

                if (pair.first + 1 < M && visit[pair.first + 1][pair.second] == false && arr[pair.first + 1][pair.second] == 1)
                {
                    visit[pair.first + 1][pair.second] = true;
                    que.push({ pair.first + 1, pair.second });
                }
                if (pair.first - 1 >= 0 && visit[pair.first - 1][pair.second] == false && arr[pair.first - 1][pair.second] == 1)
                {
                    visit[pair.first - 1][pair.second] = true;
                    que.push({ pair.first - 1, pair.second });
                }
                if (pair.second + 1 < N && visit[pair.first][pair.second + 1] == false && arr[pair.first][pair.second + 1] == 1)
                {
                    visit[pair.first][pair.second + 1] = true;
                    que.push({ pair.first, pair.second + 1});
                }
                if (pair.second - 1 >= 0 && visit[pair.first][pair.second - 1] == false && arr[pair.first][pair.second - 1] == 1)
                {
                    visit[pair.first][pair.second - 1] = true;
                    que.push({ pair.first, pair.second - 1});
                }
            }
        }
        cout << cnt << '\n';
    }
}
