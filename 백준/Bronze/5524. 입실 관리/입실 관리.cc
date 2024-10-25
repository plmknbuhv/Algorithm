#include <iostream>

using namespace std;

int main()
{
    int count;
    cin >> count;
    string input;

    for (int i = 0; i < count; ++i)
    {
        cin >> input;

        for (int j = 0; j < input.size(); ++j)
        {
            input[j] = tolower(input[j]);
        }

        cout << input << endl;
    }

    return 0;
}