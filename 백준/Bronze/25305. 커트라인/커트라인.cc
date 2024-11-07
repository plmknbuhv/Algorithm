#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int count;
    int num;

    cin >> count >> num;

    int *array = new int[count];

    for (int i = 0; i < count; ++i)
    {
        cin >> array[i];
    }

    sort(array, array + count, greater<>());

    cout << array[num - 1];
}