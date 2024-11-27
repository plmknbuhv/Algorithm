#include <iostream>
#include <valarray>

using namespace std;

long long myPow(long long num1, long long num2)
{
    long long result = 1;

    for (int i = 0; i < num2; ++i)
    {
        result *= num1;
    }

    return result;
}

int main() {
    int num;

    cin >> num;

    for (int i = 0; i < num; ++i)
    {
        long long input1, input2;
        cin >> input1 >> input2;

        if (myPow(input1, (input2 - 1) % 4 + 1) % 10 == 0)
            cout << 10 << endl;
        else
            cout << myPow(input1, (input2 - 1) % 4 + 1) % 10 << endl;
    }

    return 0;
}
