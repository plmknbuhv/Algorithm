#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int input;
    int max = 1;

    cin >> input;

    for (int i = 2; i < input + 1; ++i)
    {
        max *= i;
    }

    cout << max;

    return 0;
}