#include <iostream>

using namespace std;

int main()
{
    int input1;

    cin >> input1;

    if (input1 % 2024 == 0 && input1 <= 100000)
        cout << "Yes";
    else
        cout << "No";
}