#include <iostream>

using namespace std;

int main()
{
    int input1;
    int input2;

    while(true)
    {
        cin >> input1 >> input2;

        if (input1 == 0 && input2 == 0)
            break;
        cout << input1 + input2 << endl;
    }
}