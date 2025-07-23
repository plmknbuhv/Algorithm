#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>
#include <deque>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    deque<pair<int, int>> deq;
    int input, cnt;
    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        cin >> input;
        deq.push_back({ input,i+1 });
    }

    for (int i = 0; i < cnt; i++)
    {
        cout << deq.front().second << " ";
        int temp = deq.front().first;
        deq.pop_front();
        if (deq.empty())
            return 0;
        if (temp > 0)
        {
            for (int i = 0; i < temp-1; i++)
            {
                auto t = deq.front();
                deq.pop_front();
                deq.push_back(t);
            }
        }
        else if (temp < 0)
        {
            for (int i = 0; i > temp; i--)
            {
                auto t = deq.back();
                deq.pop_back();
                deq.push_front(t);
            }
        }
    }
}
