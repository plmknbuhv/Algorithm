#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
long long result;
long long input;

void Check(long long num)
{
    if (num > input)
        return;
    if (num == input)
    {
        result++;
        return;
    }

    Check(num+1);
    Check(num+2);
    Check(num+3);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt;
    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        result = 0;
        cin >> input;
        Check(0);
        cout << result << endl;
    }
}
