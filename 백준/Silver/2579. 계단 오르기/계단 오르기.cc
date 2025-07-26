#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>
#include <math.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt;
    cin >> cnt;
    int* arr = new int[cnt];
    int arr2[1000][3];

    cin >> arr[0];
    arr2[0][0] = 0;
    arr2[0][1] = arr[0];
    arr2[0][2] = arr[0];

    for (int i = 1; i < cnt; i++)
    {
        cin >> arr[i];
        arr2[i][0] = max(arr2[i-1][1], arr2[i - 1][2]);
        arr2[i][1] = arr2[i - 1][0] + arr[i];
        arr2[i][2] = arr2[i - 1][1] + arr[i];
    }

    cout << max(arr2[cnt-1][1], arr2[cnt - 1][2]);
}
