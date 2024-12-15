#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int input1;
    int input2;
    int result1 = 1;
    int result2 = 1;
    cin >> input1 >> input2;

    for (int i = 0; i < input2; ++i)
    {
        result1 *= input1 - i;
        result2 *= i + 1;
    }

    cout << result1 / result2;
}