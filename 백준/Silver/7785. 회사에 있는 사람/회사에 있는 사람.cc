#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt;
    string input;
    set<string> set;
    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        string temp;
        cin >> input >> temp;

        if (set.find(input) == set.end())
            set.insert(input);
        else
            set.erase(input);
    }

    for (auto i = set.rbegin(); i != set.rend(); i++)
    {
        cout << *i << '\n';
    }
}
