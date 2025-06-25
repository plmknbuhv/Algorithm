#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int result;

void Choi(long long num1, long long num2)
{
    if (num1 == 0)
    {
        result = num2;
        return;
    }

    Choi(num2%num1, num1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long input1, input2;

    cin >> input1 >> input2;
    Choi(input1, input2);
    cout << ((input1 * input2) / result) << endl;
}
