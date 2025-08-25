#include <iostream>
#include <utility>
#include <unordered_map>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

vector<pair<int, int>> edges[100001];
bool leaf[100001] = {};
int N;

int Check(int start, bool isGetIndex)
{
    int result = 0;
    int index = 0;
    stack<tuple<int, int, int>> stk;

    stk.push({ 0, start, 0 });

    while (stk.empty() == false)
    {
        tuple<int, int, int> temp = stk.top(); stk.pop(); // 과거노드, 현재노드, 거리

        if (get<2>(temp) > result) // 지름 비교
        {
            result = get<2>(temp);
            index = get<1>(temp);
        }

        for (auto e : edges[get<1>(temp)]) // 현재 노드랑 연결된 노드 찾기
        {
            if (get<0>(temp) != e.first) // 대신 이전 노드랑 달라야함
                stk.push({ get<1>(temp), e.first, get<2>(temp) + e.second });
        }
    }

    if (isGetIndex)
        return index;
    else
        return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int a, b, c, cnt = 0;
        cin >> a;
        while (true)
        {
            cin >> b;
            if (b != -1)
            {
                cin >> c;
                cnt++;
                edges[a].push_back({ b, c });
            }
            else
                break;
        }

        if (cnt == 1)
        {
            leaf[a] = true;
        }
    }

    cout << Check(Check(1, true), false);


}