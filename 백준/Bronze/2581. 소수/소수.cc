#include <iostream>

using namespace std;

int main()
{
    int input1;
    int input2;

    cin >> input1 >> input2;

    int min = 10000000;
    int total = 0;

    for (int i = input1; i <= input2; ++i)
    {
        int count = 0;
        for (int j = 2; j < i; ++j)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 0 && i != 1)
        {
            total += i;
            if (min > i)
                min = i;
        }
    }

    if (total == 0)
        cout << -1;
    else
        cout << total << "\n" << min;

    return 0;
}