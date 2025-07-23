#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>
#include <deque>
using namespace std;
unsigned long long arr[10000000];

unsigned long long tile(unsigned long long num)
{
    if (num < 0)
        return 0;
    if (num <= 3)
        return num;

    if (arr[num] == 0)
    {
        arr[num] = tile(num - 1) + tile(num - 2);
    }

    return arr[num] % 10007;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned long long input;
    for (int i = 0; i < 10000000; i++)
        arr[i] = 0;
   
    cin >> input;

    cout << tile(input) % 10007;
}
