#include <iostream>

using namespace std;

int main()
{
    int array[3] = {};

    cin >> array[0] >> array[1] >> array[2];

    for (int i = 1; i < 3; ++i)
    {
        if (array[i] > array[0])
        {
            int temp = array[0];
            array[0] = array[i];
            array[i] = temp;
        }
    }

    while (array[0] >= array[1] + array[2])
    {
        array[0]--;
    }

    cout << array[0] + array[1] + array[2];

    return 0;
}