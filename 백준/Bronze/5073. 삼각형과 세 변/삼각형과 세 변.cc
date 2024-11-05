#include <iostream>

using namespace std;

int main()
{
    int input1, input2, input3;

    while (true)
    {
        cin >> input1 >> input2 >> input3;

        if (input1 == 0)
            break;

        if (((input1 + input2) <= input3))
            cout << "Invalid" << endl;
        else if (((input2 + input3) <= input1))
            cout << "Invalid" << endl;
        else if (((input1 + input3) <= input2))
            cout << "Invalid" << endl;
        else if (input1 == input2 && input2 == input3)
            cout << "Equilateral" << endl;
        else if (input1 == input2 || input2 == input3 || input1 == input3)
            cout << "Isosceles" << endl;
        else
            cout << "Scalene" << endl;
    }

    return 0;
}