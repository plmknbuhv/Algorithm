#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int N, M, V;

bool visit[1002];
vector<int> vec[10002];

void DFS(int idx)
{
    visit[idx] = true;
    cout << idx << " ";

    for (int i = 0; i < vec[idx].size(); i++)
    {
        if (visit[vec[idx][i]] == false)
            DFS(vec[idx][i]);
    }
}

void BFS(int idx)
{
    queue<int> que;
    que.push(idx);
    visit[idx] = true;

    while (que.empty() == false)
    {
        int temp = que.front();
        que.pop();
        for (auto v : vec[temp])
        {
            if (false == visit[v])
               que.push(v);
            visit[v] = true;
        }
        cout << temp << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> V;
   
    for (int i = 0; i < M; i++)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        vec[temp1].push_back(temp2);
        vec[temp2].push_back(temp1);
    }

    for (int i = 0; i < 10002; i++)
        sort(vec[i].begin(), vec[i].end());
    
    DFS(V);
    cout << "\n";
    for (int i = 0; i < 1002; i++)
        visit[i] = false;
    BFS(V);
}
