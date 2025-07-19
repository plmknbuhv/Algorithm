#include <iostream>
#include <utility>
#include <queue>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unordered_map<string, int> u_map;

    int cnt, result = 0;
    cin >> cnt;
    string temp;

    for (int i = 0; i < cnt; i++)
    {
        cin >> temp;
        if (temp.compare("ENTER") == 0)
        {
            result += u_map.size();
            u_map.clear();
        }
        else
        {
            u_map[temp] = 0;
        }
    }

    result += u_map.size();
    cout << result;
}
