#include <iostream>
#include <utility>
#include <unordered_map>
#include <set>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

long long input;
long long result = -1;

void Check(int num, int cnt)
{
    if (num > input || result != -1)
        return;
    else if (num == input)
    {
        result = cnt;
        return;
    }

    Check(num + 5, cnt + 1);
    Check(num + 2, cnt + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> input;

    Check(0, 0);

    cout << result;
}
