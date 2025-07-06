#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unordered_set<int> set;
    int cnt;
    string input;
    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        cin >> input;
        if (input.compare("add") == 0)
        {
            int temp;
            cin >> temp;
            set.insert(temp);
        }
        else if (input.compare("remove") == 0)
        {
            int temp;
            cin >> temp;
            set.erase(temp);
        }
        else if (input.compare("check") == 0)
        {
            int temp;
            cin >> temp;
            cout << (set.find(temp) == set.end() ? 0 : 1) << '\n';
        }
        else if (input.compare("toggle") == 0)
        {
            int temp;
            cin >> temp;
            if (set.find(temp) == set.end())
                set.insert(temp);
            else
                set.erase(temp);
        }
        else if (input.compare("all") == 0)
        {
            for (int i = 1; i < 21; i++)
            {
                set.insert(i);
            }
        }
        else if (input.compare("empty") == 0)
        {
            for (int i = 1; i < 21; i++)
            {
                set.erase(i);
            }
        }
    }
}
