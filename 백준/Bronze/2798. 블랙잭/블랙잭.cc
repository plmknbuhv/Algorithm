#include <iostream>
#include <algorithm>

using namespace std;
long long N = 0;
long long M = 0;
int arr[10000] = {};
int owner[10000] = {};
int maxNum = 0;

void 블랙잭(int num1, int num2)
{
    if (num1 > 3)
    {
        if (maxNum < num2 && M >= num2)
        {
            maxNum = num2;
        }
        return;
    }

    for (int i = 0; i < N; ++i)
    {
        if (owner[i] == 0)
        {
            owner[i] = num1;
            블랙잭(num1 + 1, num2 + arr[i]);
            owner[i] = 0;
        }
    }
}

int main()
{
    cin >> N >> M;

    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }

    블랙잭(1, 0);

    cout << maxNum;

    return 0;
}