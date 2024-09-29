#include <iostream>
#include <vector>
#include <algorithm>
#include <valarray>

using namespace std;

int main()
{
    int count;
    int arr[1000] = {};

    cin >> count;

    for (int i = 0; i < count; ++i)
    {
        cin >> arr[i];
    }

    sort(arr, arr + count);
    for (int i = 0; i < count; ++i)
    {
        cout << arr[i] << endl;
    }

    return 0;
}