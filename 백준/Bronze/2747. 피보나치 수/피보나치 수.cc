#include <iostream>

using namespace std;

int main()
{
    long long input;
    long long result = 1;

    cin >> input;

    long long a = 1, b = 0;

    if (input == 0)
    {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < input - 2; ++i)
    {
        b = a;
        a = result;
        result += b;
    }

    cout << result;
}