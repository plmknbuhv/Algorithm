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
    bool visit[100010] = {};
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> Pque;
    cin >> N >> K;
    Pque.push({0, N});

    while (Pque.empty() == false)
    {
        pair<int, int> temp = Pque.top();
        Pque.pop();
        visit[temp.second] = true;

        if (temp.second == K)
        {
            cout << temp.first;
            break;
        }

        if (temp.second + 1 < 100001 && visit[temp.second + 1] == false)
        {
            Pque.push({ temp.first + 1, temp.second + 1 });
        }
        if (temp.second - 1 >= 0 && visit[temp.second - 1] == false)
        {
            Pque.push({ temp.first + 1, temp.second - 1 });
        }
        if (temp.second * 2 < 100001 && visit[temp.second * 2] == false)
        {
            Pque.push({ temp.first, temp.second * 2 });
        }
    }
}
