#include <iostream>

using namespace std;

int main()
{
    int input1, input2, input3;
    cin >> input1 >> input2 >> input3;

    int sum = input3 + input2 + input1;

    if (input1 == 60 && input2 == 60 && input3 == 60)
        cout << "Equilateral";
    else if (sum == 180)
    {
        if (input1 == input2)
            cout << "Isosceles";
        else if (input1 == input3)
            cout << "Isosceles";
        else if (input2 == input3)
            cout << "Isosceles";
        else
            cout << "Scalene";
    }
    else
    {
        cout << "Error";
    }

    return 0;
}