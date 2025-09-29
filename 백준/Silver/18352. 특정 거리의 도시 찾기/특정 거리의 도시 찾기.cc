#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> vec[1000000];
int main()
{
    int N, M, K, X;
    cin >> N >> M >> K >> X;

    int* visit = new int[N + 1] {};

    for (int i = 0; i < N+1; i++)
        visit[i] = -1;

    for (int i = 0; i < M; i++)
    {
        int x, y;
        cin >> x >> y;
        vec[x].push_back(y);
    }

    queue<int> q;
    q.push(X);
    vector<int> vecvec;
    visit[X] = 0;

    while (q.empty() == false)
    {
        int t = q.front(); q.pop(); 
        if (visit[t] == K)
        {
            vecvec.push_back(t);
            continue;
        }

        for (auto a : vec[t])
        {
            if (visit[a] == -1)
            {
                visit[a] = visit[t] + 1;
                q.push(a);
            }
        }
    }

    sort(vecvec.begin(), vecvec.end());
    if (vecvec.empty())
        cout << -1;
    else
    {
        for (auto a : vecvec)
        {
            cout << a << '\n';
        }
    }
}
