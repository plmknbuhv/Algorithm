#include <iostream>

using namespace std;

int main()
{
    string input;

    while (true)
    {
        cin >> input;

        if (input == "0")
            break;

        int count = 0;
        for (int i = 0; i < input.length() / 2; ++i)
        {
            if (input[i] != input[input.length() - i - 1])
                count++;
        }

        if (count != 0)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }

    return 0;
}