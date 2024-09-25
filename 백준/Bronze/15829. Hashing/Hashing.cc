#include <iostream>
#include <vector>
#include <algorithm>
#include <valarray>

using namespace std;

int main()
{
    string input;
    int count;
    unsigned long long result = 0;
    unsigned long long R = 1;

    cin >> count;
    cin >> input;

    for (int i = 0; i < count; ++i)
    {
        result += (input[i] - 96) * R;
        R = (R * 31) % 1234567891;
    }

    cout << result% 1234567891;

    return 0;
}