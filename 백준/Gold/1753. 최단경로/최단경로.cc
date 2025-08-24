#include <iostream>
#include <utility>
#include <unordered_map>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

#define INF 99999999
int* arr;
vector<pair<int, int>> edges[20001];
int V, E, K;

void dijkstra(int start)
{
    arr[start] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});

    while (pq.empty() == false)
    {
        int current =  pq.top().second;
        int distance = pq.top().first;
        pq.pop();

        if (arr[current] < distance) continue;

        for (auto& edge : edges[current])
        {
            int next = edge.first;
            int nextDis = distance + edge.second;

            if (nextDis < arr[next])
            {
                arr[next] = nextDis;
                pq.push({ nextDis, next });
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> V >> E >> K;
    arr = new int[V+1];

    for (int i = 1; i <= V; i++)
    {
        arr[i] = INF;
    }
    arr[K] = 0; // 시작점은 거리 0

    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        cin >> u >> v >> w; 
        edges[u].push_back({v, w});
    }

    dijkstra(K);

    for (int i = 1; i <= V; i++)
    {
        if (99999999 == arr[i])
            cout << "INF" << '\n';
        else
            cout << arr[i] << '\n';
    }
}