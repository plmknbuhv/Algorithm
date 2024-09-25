#include <iostream>
#include <vector>
#include <algorithm>
#include <valarray>

using namespace std;

int main()
{
    string input;
    int arr[9][9];
    int row = 0, col = 0;
    int max = 0;

    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            int temp;
            cin >> temp;
            if (temp > max)
            {
                max = temp;
                row = i;
                col = j;
            }
        }
    }

    cout << max << endl;
    cout << row + 1 << " " << col + 1;

    return 0;
}