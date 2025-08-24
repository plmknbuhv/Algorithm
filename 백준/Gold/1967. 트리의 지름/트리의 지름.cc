#include <iostream>
#include <utility>
#include <unordered_map>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

vector<pair<int, int>> edges[100000];
bool leaf[100000] = {};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, result = 0;
    cin >> N;

    for (int i = 1; i <= N; i++)
        leaf[i] = true;

    for (int i = 1; i <= N-1; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        leaf[a] = false;
        edges[a].push_back({b, c});
        edges[b].push_back({a, c});
    }

    stack<tuple<int, int, int>> stk;

    for (int i = 1; i <= N; i++)
        if (leaf[i] = true)
            stk.push({0, i, 0});

    while (stk.empty() == false)
    {
        tuple<int, int, int> temp = stk.top(); stk.pop(); // 과거노드, 현재노드, 거리

        if (get<2>(temp) > result) // 지름 비교
            result = get<2>(temp);

        for (auto e : edges[get<1>(temp)]) // 현재 노드랑 연결된 노드 찾기
        {
            if (get<0>(temp) != e.first) // 대신 이전 노드랑 달라야함
                stk.push({ get<1>(temp), e.first, get<2>(temp) + e.second});
        }
    }

    cout << result;
}