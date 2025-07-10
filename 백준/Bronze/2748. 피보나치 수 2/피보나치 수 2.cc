#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned long long num1 = 0, num2 = 1, num3 = 0;

    unsigned long long input;
    cin >> input;

    for (long long i = 0; i < input-1; i++)
    {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }

    cout << num2 << endl;
}
