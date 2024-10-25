#include <iostream>

using namespace std;

int main()
{
    int count;
    cin >> count;
    string input;
    cin.ignore();

    for (int i = 1; i <= count; ++i)
    {
        getline(cin, input);
        cout << i << ". " << input << endl;
    }

    return 0;
}