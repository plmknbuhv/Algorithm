#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char arr[8][8] = {};

    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            cin >> arr[i][j];
        }
    }

    int count = 0;

    for (int i = 0; i < 8; ++i)
    {
        for (int j = i % 2; j < 8; j += 2)
        {
            if (arr[i][j] == 'F')
            {
                count++;
            }
        }
    }

    cout << count;
}
