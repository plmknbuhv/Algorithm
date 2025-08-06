#include <iostream>
#include <utility>
#include <unordered_map>
#include <algorithm>
#include <queue>
using namespace std;

bool visit[101] = {};
unordered_map<int, int> Map;

int Check()
{
    queue<int> que1;
    queue<int> que2;

    que1.push(1);
    que2.push(0);

    while (que1.empty() == false)
    {
        int x = que1.front(); int y = que2.front();
        que1.pop(); que2.pop();

        
        if (Map.find(x) != Map.end())
        {
            x = Map[x];
            visit[x] = true;
        }

        if (x == 100)
            return y;

        if (x + 1 <= 100 && visit[x + 1] == false)
        {
            que1.push(x + 1); que2.push(y + 1);
            visit[x + 1] = true;
        }
        if (x + 2 <= 100 && visit[x + 2] == false)
        {
            que1.push(x + 2); que2.push(y + 1);
            visit[x + 2] = true;
        }
        if (x + 3 <= 100 && visit[x + 3] == false)
        {
            que1.push(x + 3); que2.push(y + 1);
            visit[x + 3] = true;
        }
        if (x + 4 <= 100 && visit[x + 4] == false)
        {
            que1.push(x + 4); que2.push(y + 1);
            visit[x + 4] = true;
        }
        if (x + 5 <= 100 && visit[x + 5] == false)
        {
            que1.push(x + 5); que2.push(y + 1);
            visit[x + 5] = true;
        }
        if (x + 6 <= 100 && visit[x + 6] == false)
        {
            que1.push(x + 6); que2.push(y + 1);
            visit[x + 6] = true;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt1, cnt2, input1, input2;
    cin >> cnt1 >> cnt2;

    for (int i = 0; i < cnt1 + cnt2; i++)
    {
        cin >> input1 >> input2;
        Map[input1] = input2;
    }

    cout << Check();
}
