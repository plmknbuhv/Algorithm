#include <iostream>
#include <valarray>

using namespace std;

int main()
{
    int num1, num2, num3;
    int day = 1;

    cin >> num1 >> num2 >> num3;

    day += (num3 - num1) / (num1 - num2);

    if ((num3 - num1) % (num1 - num2) != 0)
    {
        day++;
    }

    cout << day;

    return 0;
}