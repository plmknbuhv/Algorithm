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

    int N, M;
    cin >> N >> M;
    vector<int> arr(N + 1, 1e9);
    vector<pair<int, int>> graph[1001];

    for (int i = 0; i < M; i++)
    {
        int x, y, c;
        cin >> x >> y >> c;

        graph[x].push_back({y, c});
    }

    int S, E;
    cin >> S >> E;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> que;
    arr[S] = 0;
    que.push({ 0, S });

    while (que.empty() == false)
    {
        auto cur = que.top(); que.pop();
        int curDist = cur.first;
        int u = cur.second;

        if (curDist > arr[u]) continue;

        for (auto next : graph[u]) {
            int v = next.first;
            int w = next.second;
            if (arr[v] > curDist + w) {
                arr[v] = curDist + w;
                que.push({ arr[v], v });
            }
        }
    }
    
    cout << arr[E] << endl;
}
