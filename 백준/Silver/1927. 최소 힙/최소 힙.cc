#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int cnt, temp;

    cin >> cnt;
    priority_queue<int, vector<int>, greater<int>> que;

    for (int i = 0; i < cnt; i++)
    {
        cin >> temp;
        if (temp == 0)
        {
            if (que.empty())
                cout << 0 << '\n';
            else
            {
                cout << que.top() << '\n';
                que.pop();
            }
            
        }
        else
        {
            que.push(temp);
        }
    }
}
