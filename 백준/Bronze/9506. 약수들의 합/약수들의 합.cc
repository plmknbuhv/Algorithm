#include <iostream>

using namespace std;

int main()
{
    int input;

    while (true)
    {
        cin >> input;

        if (input == -1)
            break;
        if (input == 0)
        {
            cout << 0 << " is NOT perfect." << endl;
            break;
        }

        int temp = 0;
        for (int i = 1; i < input; ++i)
        {
            if (input % i == 0)
            {
                temp += i;
            }
        }

        if (temp != input)
        {
            cout << input << " is NOT perfect." << endl;
        }
        else
        {
            cout << input << " = 1";
            for (int i = 2; i < input; ++i)
            {
                if (input % i == 0)
                {
                    cout << " + " << i;
                }
            }
            cout << endl;
        }
    }

    return 0;
}