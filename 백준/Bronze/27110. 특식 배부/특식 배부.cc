#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int input1;
    int input2;
    int input3;
    int input4;
    int result = 0;

    cin >> input1;
    cin >> input2 >> input3 >> input4;

    result += input2 > input1 ? input1 : input2;
    result += input3 > input1 ? input1 : input3;
    result += input4 > input1 ? input1 : input4;

    cout << result;
}