#include <iostream>
#include <vector>
#include <algorithm>
#include <valarray>

using namespace std;

int main()
{
    int count;

    cin >> count;

    for (int i = 0; i < count; ++i)
    {
        int money;
        int Quarter = 0;
        int Dime = 0;
        int Nickel = 0;
        int Penny = 0;

        cin >> money;
        while (money != 0)
        {
            if (money >= 25)
            {
                Quarter++; money -= 25;
            }
            else if (money >= 10)
            {
                Dime++; money -= 10;
            }
            else if (money >= 5)
            {
                Nickel++; money -= 5;
            }
            else if (money >= 1)
            {
                Penny++; money -= 1;
            }
        }
        cout << Quarter << " " << Dime << " " << Nickel << " " << Penny << endl;
    }

    return 0;
}