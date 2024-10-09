#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int arr[1000][2]= {};
    int arr2[100][100]= {};
    int result = 0;

    for (int i = 0; i < num; ++i)
    {
        cin >> arr[i][0];
        cin >> arr[i][1];
    }

    for (int i = 0; i < num; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            for (int k = 0; k < 10; ++k)
            {
                if (arr2[arr[i][0] + j][arr[i][1] + k] == 0)
                {
                    result++;
                    arr2[arr[i][0] + j][arr[i][1] + k] = 1;
                }
            }
        }
    }

    cout << result;

    return 0;
}