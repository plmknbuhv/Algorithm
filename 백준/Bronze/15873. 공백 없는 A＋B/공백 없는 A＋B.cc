#include <iostream>

using namespace std;

int main()
{
    string input;

    cin >> input;

    if (input[1] == '0')
    {
        cout << 10 + stoi(input.substr(2, 2));
    }
    else
    {
        cout << (input[0] - '0') + stoi(input.substr(1, 2));
    }
}