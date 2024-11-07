#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int array[5] = {};

    for (int i = 0; i < 5; ++i)
    {
        cin >> array[i];
    }

    sort(array, array + 5);

    int abs = 0;
    for (int i = 0; i < 5; ++i) {
        abs += array[i];
    }
    abs /= 5;

    cout << abs << "\n" << array[2];
}