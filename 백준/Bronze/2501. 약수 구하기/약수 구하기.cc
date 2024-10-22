#include <iostream>

using namespace std;

int main()
{
    int input1, input2;
    int arr[10000] = {};
    int count = 0;

    cin >> input1 >> input2;

    for (int i = 1; i < input1 + 1; ++i)
    {
        if (input1 % i == 0)
        {
            count++;
            arr[count] = i;
        }
    }

    cout << arr[input2];

    return 0;
}