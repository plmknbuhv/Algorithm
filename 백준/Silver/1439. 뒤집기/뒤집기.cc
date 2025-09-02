#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    cin >> input;

    char p = ' ';
    int cnt0 = 0;
    int cnt1 = 0;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] != p)
        {
            if (input[i] == '0')
                cnt0++;
            else
                cnt1++;
            p = input[i];
        }
    }

    cout << min(cnt0, cnt1);
}
