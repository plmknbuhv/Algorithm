#include <iostream>
#include <utility>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unordered_map<string, string> map;

    int cnt1, cnt2;
    cin >> cnt1 >> cnt2;

    for (int i = 0; i < cnt1; i++)
    {
        string temp1, temp2;
        cin >> temp1 >> temp2;

        map[temp1] = temp2;
    }

    for (int i = 0; i < cnt2; i++)
    {
        string temp;
        cin >> temp;
        cout << map[temp] << "\n";
    }
}
