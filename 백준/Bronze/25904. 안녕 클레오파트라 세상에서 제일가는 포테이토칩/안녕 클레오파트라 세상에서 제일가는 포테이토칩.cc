#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int count;
    int startNum;
    int num = 0;
    int arr[1000] = {};

    cin >> count;
    cin >> startNum;

    for (int i = 0; i < count; ++i)
    {
        cin >> arr[i];
    }

    while(arr[num] >= startNum)
    {
        startNum++;
        num++;

        if (num > count - 1)
        {
            num = 0;
        }
    }

    cout << num + 1;

    return 0;
}