#include <iostream>
#include <utility>
#include <algorithm>
#include <cctype>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    int number = 0, result = 0;
    bool isMinus = false;
    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        if (isdigit(input[i]) != 0)
        {
            number *= 10;
            number += input[i] - '0';
        }
        else
        {
            if (isMinus)
                result -= number;
            else
                result += number;
            number = 0;

            if (input[i] == '-')
                isMinus = true;
        }
    }

    if (isMinus)
        result -= number;
    else
        result += number;


    cout << result;
}
