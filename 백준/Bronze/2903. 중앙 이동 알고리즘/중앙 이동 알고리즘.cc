#include <iostream>
#include <valarray>

using namespace std;

int main()
{
    int input;
    long long n = 2;

    cin >> input;

    for (int i = 0; i < input; ++i)
    {
        n = n * 2 - 1;
    }

    cout << n * n;

    return 0;
}