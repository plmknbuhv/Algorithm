#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[3] = {};
    int totalArray[100] = {};
    int array[3][2] = {};
    int result = 0;

    cin >> arr[0] >> arr[1] >> arr[2];

    for (int i = 0; i < 3; ++i)
    {
        cin >> array[i][0] >> array[i][1];
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = array[i][0]; j < array[i][1]; ++j)
        {
            totalArray[j]++;
        }
    }

    for (int i = 0; i < 100; ++i)
    {
        switch (totalArray[i]) 
        {
            case 1:
                result += arr[0];
                break;
            case 2:
                result += arr[1] * 2;
                break;
            case 3:
                result += arr[2] * 3;
                break;
            default:
                break;
        }
    }

    cout << result;

    return 0;
}