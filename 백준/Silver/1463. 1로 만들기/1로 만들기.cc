#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
long long result = 100000000000;

void Check(long long num, int cnt)
{
    if (cnt >= result)
        return;
    if (num == 1)
    {
        if (result > cnt)
            result = cnt;
        return;
    }

    if (num % 3 == 0)
        Check(num / 3, cnt + 1);
    if (num % 2 == 0)
        Check(num / 2, cnt + 1);
    
    Check(num-1, cnt + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long num;
    cin >> num;

    Check(num, 0);

    cout << result;
}
