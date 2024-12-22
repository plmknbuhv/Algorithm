#include <iostream>

using namespace std;

int main()
{
    int input1;
    int input2;

    cin >> input1;
    cin >> input2;

    if (input1 == 2)
    {
        if (input2 == 18)
            cout << "Special";
        else if (input2 > 18)
            cout << "After";
        else
            cout << "Before";
    }
    else if (input1 > 2)
        cout << "After";
    else
        cout << "Before";
}