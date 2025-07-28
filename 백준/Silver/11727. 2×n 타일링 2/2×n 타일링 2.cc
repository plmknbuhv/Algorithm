#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>
#include <math.h>
using namespace std;

int arr[10000];

int Check(int num)
{
    if (num <= 1)
        return 1;

    if (arr[num] == 0)
        arr[num] = (Check(num - 1) + (Check(num - 2) * 2)) % 10007;

    return arr[num];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int input;
    cin >> input;

    for (int i = 0; i < 10000; i++)
    {
        arr[i] = 0;
    }

    cout << Check(input);
}
