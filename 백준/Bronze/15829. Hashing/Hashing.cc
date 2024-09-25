#include <iostream>
#include <vector>
#include <algorithm>
#include <valarray>

using namespace std;

int main()
{
    string input;
    int count;
    int result = 0;

    cin >> count;
    cin >> input;

    for (int i = 0; i < count; ++i)
    {
        result += (input[i] - 96) * pow(31, i);
    }

    result %= 1234567891;

    cout << result;

    return 0;
}