#include <iostream>
using namespace std;

string Dials[8] = { "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV",  "WXYZ"};

int main()
{
    string input;
    int result = 0;

    cin >> input;

    for (int i = 0; i < input.length(); ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            if (Dials[j].find(input[i]) != string::npos)
            {
                result += j + 3;
            }
        }
    }

    cout << result;

    return 0;
}