#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>
#include <math.h>
using namespace std;

long long arr[10000];

long long Check(long long num)
{
    if (num <= 3)
        return 1;
    if (num <= 5)
        return 2;

    if (arr[num] == 0)
        arr[num] = Check(num - 1) + (Check(num - 5));

    return arr[num];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long cnt, input;

    for (int i = 0; i < 10000; i++)
    {
        arr[i] = 0;
    }
    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        cin >> input;
        cout << Check(input) << "\n";
    }

    
}
