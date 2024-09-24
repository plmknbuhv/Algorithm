#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string input;
    int count = 1;

    cin >> input;

    for (int i = 0; i < input.length() / 2; ++i)
    {
        if (input[i] != input[input.length() - i - 1])
        {
            count--;
            break;
        }
    }

    cout << count;

    return 0;
}