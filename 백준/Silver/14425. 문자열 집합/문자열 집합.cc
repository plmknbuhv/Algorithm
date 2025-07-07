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

    int cnt, cnt2, result = 0;
    string input;
    set<string> set;
    cin >> cnt >> cnt2;

    for (int i = 0; i < cnt; i++)
    {
        cin >> input;
        set.insert(input);
    }

    for (int i = 0; i < cnt2; i++)
    {
        cin >> input;
        if (set.find(input) != set.end())
            result++;
    }

    cout << result;
}
