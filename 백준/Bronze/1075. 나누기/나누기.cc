#include <iostream>
#include <valarray>

using namespace std;

int myPow(int num1, int num2)
{
    int temp = 1;
    for (int i = 0; i < num2; ++i)
    {
        temp *= num1;
    }
    return temp;
}

int main() {
    string input1;
    int number = 0;
    int input2;

    cin >> input1;
    cin >> input2;

    for (int i = 0; i < input1.length(); ++i)
    {
        if (i > 1)
            number += myPow(10,i) * (input1[input1.length() - i - 1] - '0');
    }
    int temp2 = 0;

    while(true)
    {
        if(number % input2 == 0)
            break;

        temp2++;
        number++;
    }

    printf("%02d", temp2);

    return 0;
}
