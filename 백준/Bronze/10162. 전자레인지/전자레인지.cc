#include <iostream>

using namespace std;

int main()
{
    long long input;
    long long num1 = 0, num2 = 0, num3 = 0;

    cin >> input;

    if (input % 10 != 0)
    {
        cout << -1;
        return 0;
    }

    while(input != 0)
    {
        if (input >= 300)
        {
            input-=300;
            num1++;
        }
        else if (input >= 60)
        {
            input-=60;
            num2++;
        }
        else
        {
            num3 += input / 10;
            input = 0;
        }
    }

    cout << num1 << " " << num2 << " " << num3;
}