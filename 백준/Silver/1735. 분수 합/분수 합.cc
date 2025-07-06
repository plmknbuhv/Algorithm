#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int GetGCD(long long num1, long long num2)
{
    if (num1 == 0)
    {
        return num2;
    }

    return GetGCD(num2 % num1, num1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long input1, input2;
    long long input3, input4;

    cin >> input1 >> input2;
    cin >> input3 >> input4;


    long long gcd = GetGCD(input2, input4);
    long long LCM = (input4 * input2) / gcd;
    long long M = ((LCM / input2) * input1 + (LCM / input4) * input3);
    long long J = LCM;

    gcd = GetGCD(J, M);

    cout << M / gcd << " ";
    cout << J / gcd << endl;
}
