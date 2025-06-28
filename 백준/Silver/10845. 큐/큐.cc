#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt;
    string input;
    queue<int> que;

    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        cin >> input;
        if (input.compare("push") == 0)
        {
            int temp;
            cin >> temp;
            que.push(temp);
        }
        else if (input.compare("pop") == 0)
        {
            if (que.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << que.front() << "\n";
                que.pop();
            }
        }
        else if (input.compare("size") == 0)
        {
            cout << que.size() << "\n";
        }
        else if (input.compare("empty") == 0)
        {
            cout << (que.empty() ? 1 : 0) << "\n";
        }
        else if (input.compare("front") == 0)
        {
            cout << (que.empty() ? -1 : que.front()) << "\n";
        }
        else if (input.compare("back") == 0)
        {
            cout << (que.empty() ? -1 : que.back()) << "\n";
        }
    }
}
