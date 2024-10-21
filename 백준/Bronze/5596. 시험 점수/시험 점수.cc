#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4;
    int num11, num22, num33, num44;
    int bigNum = 0;

    cin >> num1 >> num2 >> num3 >> num4;
    cin >> num11 >> num22 >> num33 >> num44;

    int max1 = num1 + num2 + num3 + num4;
    int max2 = num11 + num22 + num33 + num44;

    bigNum = max1 > max2 ? max1 : max2;

    cout << bigNum;

    return 0;
}