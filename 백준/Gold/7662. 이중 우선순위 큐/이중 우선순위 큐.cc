#include <iostream>
#include <utility>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <queue>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt, cnt2;
    char input;
    cin >> cnt;
    for (int i = 0; i < cnt; i++)
    {
        multiset<int> ms;
        cin >> cnt2;
        for (int j = 0; j < cnt2; j++)
        {
            int temp;
            cin >> input >> temp;
            if (input == 'I')
                ms.insert(temp);
            else if (input == 'D')
            {
                if (ms.empty()) continue;
                if (temp > 0)
                    ms.erase(prev(ms.end()));
                if (temp < 0)
                    ms.erase(ms.begin());
            }
        }

        if (ms.empty())
            cout << "EMPTY" << '\n';
        else
            cout << *prev(ms.end()) << " " << *ms.begin() << '\n';
    }
}
