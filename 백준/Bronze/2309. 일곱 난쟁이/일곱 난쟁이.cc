#include <iostream>
#include <vector>
#include <algorithm>

int owner [9] = {};

void 난쟁쓰();

using namespace std;

int main()
{
    int arr[9] = {};

    for (int i = 0; i < 9; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            if (j != i)
            {
                int sum = 0;
                int 난쟁Array[7] = {};
                int c = 0;
                for (int k = 0; k < 9; ++k)
                {
                    if (k != i && k != j)
                    {
                        sum += arr[k];
                        난쟁Array[c++] = arr[k];
                    }
                }

                if (sum == 100)
                {
                    sort(난쟁Array, 난쟁Array + 7);
                    for (int k = 0; k < 7; ++k)
                    {
                        cout << 난쟁Array[k] << endl;
                    }
                    return 0;
                }
            }
        }
    }

    return 0;
}