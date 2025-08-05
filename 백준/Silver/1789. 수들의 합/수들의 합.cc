#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long input;
    long long cnt = 1;
    cin >> input;

    while (true)
    {
        input -= cnt;
        cnt++;
        if (input < 0)
            break;
    }

    cout << cnt - 2;
}
