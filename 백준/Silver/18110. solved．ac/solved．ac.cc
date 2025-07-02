#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt;
    float offset, result = 0;
    cin >> cnt;
    if (cnt == 0)
    {
        cout << 0;
        return 0;
    }
    offset = (int)(((cnt * 1.5f) / 10.0f) + 0.5f);

    float* arr = new float[cnt];

    for (int i = 0; i < cnt; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + cnt);

    for (int i = offset; i < cnt - offset; i++)
    {
        result += arr[i];
    }

    cout << (int)(result / (cnt - (offset * 2)) + 0.5f);
}
