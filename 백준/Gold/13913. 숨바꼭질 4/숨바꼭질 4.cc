#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>
#include <math.h>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    int visit[100010] = {};
    for (int i = 0; i < 100010; i++)
    {
        visit[i] = -1;
    }
    queue<pair<int, int>> que;
    cin >> N >> K;
    que.push({0, N});

    stack<int> stk;

    while (que.empty() == false)
    {
        pair<int, int> temp = que.front();
        que.pop();

        if (temp.second == K)
        {
            int t = temp.second;
            while (t != N)
            {
                stk.push(t);
                t = visit[t];
            }
            stk.push(t);
            cout << temp.first << '\n';
            
            break;
        }

        if (temp.second + 1 < 100001 && visit[temp.second + 1] == -1)
        {
            que.push({ temp.first + 1, temp.second + 1 });
            visit[temp.second + 1] = temp.second;
        }
        if (temp.second - 1 >= 0 && visit[temp.second - 1] == -1)
        {
            que.push({ temp.first + 1, temp.second - 1 });
            visit[temp.second - 1] = temp.second;
        }
        if (temp.second * 2 < 100001 && visit[temp.second * 2] == -1)
        {
            que.push({ temp.first + 1, temp.second * 2 });
            visit[temp.second * 2] = temp.second;
        }
    }

    while (stk.empty() == false)
    {
        cout << stk.top() << " ";
        stk.pop();
    }
}
