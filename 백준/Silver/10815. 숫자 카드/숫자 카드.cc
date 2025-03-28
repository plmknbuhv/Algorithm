#include <iostream>
#include <malloc.h>
#include <algorithm>

using namespace std;
int cnt;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> cnt;
    int* arr = new int[cnt];
    for (int  i = 0; i < cnt; i++)
        cin >> arr[i];

    int cnt2;
    cin >> cnt2;

    sort(arr, arr + cnt);

    for (int i = 0; i < cnt2; i++)
    {
        int input;
        cin >> input;
        if (binary_search(arr, arr + cnt, input))
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }

    return 0;
}
