#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>
#include <math.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    bool visit[100001] = {};
    queue<int> que;
    queue<int> que2;
    cin >> N >> K;
    que.push(N);
    que2.push(0);

    while (que.empty() == false)
    {
        int temp = que.front();
        int temp2 = que2.front();
        que.pop();
        que2.pop();
        if (temp == K)
        {
            cout << temp2;
            break;
        }

        if (temp + 1 < 100001 && visit[temp + 1] == false)
        {
            que.push(temp + 1); que2.push(temp2+1);
            visit[temp + 1] = true;
        }
        if (temp - 1 >= 0 && visit[temp - 1] == false)
        {
            que.push(temp - 1); que2.push(temp2+1);
            visit[temp - 1] = true;
        }
        if (temp * 2 < 100001 && visit[temp*2] == false)
        {
            que.push(temp * 2); que2.push(temp2+1);
            visit[temp*2] = true;
        }
    }
}
