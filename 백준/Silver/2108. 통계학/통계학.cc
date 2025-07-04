#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long cnt;
    cin >> cnt;
    long long* arr = new long long[cnt];
    long long* arr2 = new long long[10000] {};

    for (int i = 0; i < cnt; i++)
    {
        cin >> arr[i];
    }
   
    sort(arr, arr + cnt);

    // 1
    double sum = 0;
    for (int i = 0; i < cnt; i++)
    {
        sum += arr[i];
    }
    long long temp = round(sum / cnt);
    if (temp == -0)
        temp = 0;

    cout << temp << '\n';

    // 2
    cout << arr[cnt / 2] << '\n';

    // 3
    long long max = 0;
    vector<long long> vec;
    for (int i = 0; i < cnt; i++)
    {
        if (max < ++arr2[arr[i] + 4000])
            max = arr2[arr[i] + 4000];
    }

    for (int i = 0; i < 8001; i++)
    {
        if (arr2[i] == max)
            vec.push_back(i - 4000);
    }

    sort(vec.begin(), vec.end());
    cout << ((vec.size() > 1) ? vec[1] : vec[0]) << '\n';

    // 4
    cout << arr[cnt-1] - arr[0] << '\n';
}
