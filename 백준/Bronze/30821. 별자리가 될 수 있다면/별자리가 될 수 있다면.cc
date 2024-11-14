#include <iostream>

using namespace std;

int main()
{
    long long input;
    long long result = 1;

    cin >> input;

    for (int i = input - 4; i <= input; ++i)
    {
        result *= i;
    }

    for (int i = 2; i < 6; ++i)
    {
        result /= i;
    }

    cout << result;
}