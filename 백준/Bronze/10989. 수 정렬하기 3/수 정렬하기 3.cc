#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long count;

    cin >> count;

    int arr[10002] = {0};

    for (int i = 0; i < count; ++i)
    {
        int temp;
        cin >> temp;
        arr[temp]++;
    }

    for (int i = 1; i < 10001; ++i)
    {
        if (arr[i] > 0)
        {
            for (int j = 0; j < arr[i]; ++j)
            {
                cout << i << "\n";
            }
        }
    }
}