#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    string str;

    cin >> num1 >> num2;

    while (num1 != 0)
    {
        if (num1 % num2 > 9)
        {
            str += num1 % num2 + 55;
        }
        else
        {
            str += to_string(num1 % num2);
        }
        num1 /= num2;

    }

    for (int i = str.length() - 1; i >= 0; --i)
    {
        cout << str[i];
    }

    return 0;
}