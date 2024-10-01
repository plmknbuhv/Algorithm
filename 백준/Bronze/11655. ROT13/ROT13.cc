#include <iostream>

using namespace std;

int main()
{
    string input;

    getline(cin, input);

    for (int i = 0; i < input.length(); ++i)
    {
        if (65 <= input[i] && input[i] <= 90)
        {
            if (input[i] + 13 > 90)
            {
                input[i] = 64 + (13 + input[i]) - 90;
            }
            else
            {
                input[i] += 13;
            }
        }
        else if (97 <= input[i] && input[i] <= 122)
        {
            if (input[i] + 13 > 122)
            {
                input[i] = 96 + (13 + input[i]) - 122;
            }
            else
            {
                input[i] += 13;
            }
        }
    }

    cout << input;

    return 0;
}