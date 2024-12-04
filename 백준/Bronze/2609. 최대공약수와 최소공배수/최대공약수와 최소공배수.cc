#include <iostream>
#include <valarray>
using namespace std;

int main() {
    long long input1;
    long long input2;

    cin >> input1 >> input2;

    long long temp = 0;

    if (input1 > input2)
        temp = input1;
    else if (input2 > input1)
        temp = input2;
    else
    {
        cout << input1 << "\n" << input2;
        return 0;
    }

    while(true)
    {
        if (input1 % temp == 0 && input2 % temp == 0)
        {
            cout << temp << endl;
            break;
        }
        temp--;
    }

    temp = 2;
    while(true)
    {
        if(temp % input1 == 0 && temp % input2 == 0)
        {
            cout << temp;
            break;
        }
        temp++;
    }

    return 0;
}
