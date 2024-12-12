#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long count1;
    long long count2;
    long long count3;
    long long cnt = 0;
    long long arr[100000] = {};

    cin >> count1;
    cin >> count2;
    cin >> count3;

    for (int i = 1; i <= count1; ++i) {
        for (int j = 1; j <= count2; ++j) {
            for (int k = 1; k <= count3; ++k) {
                arr[i + j + k]++;
                cnt++;
            }
        }
    }

    long long result = 0;
    long long real_result;
    for (int i = 100000 - 1; i >= 0; --i)
    {
        if (result <= arr[i])
        {
            result = arr[i];
            real_result = i;
        }
    }

    cout << real_result;
}