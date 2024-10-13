#include <iostream>
#include <valarray>

using namespace std;

int main()
{
    int num1 = 1, num2 = 1;

    while (true)
    {
        cin >> num1 >> num2;
        if (num1 == 0 && num2 == 0)
        {
            break;
        }

        if (num1 == 0 || num2 == 0)
        {
            cout << "neither" << endl;
            continue;
        }

        if (num2 % num1 == 0)
        {
            cout << "factor" << endl;
            continue;
        }
        else if (num1 % num2 == 0)
        {
            cout << "multiple" << endl;
            continue;
        }

        cout << "neither" << endl;
    }

    return 0;
}