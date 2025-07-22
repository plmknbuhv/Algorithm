#include <iostream>
#include <utility>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool cmp(pair<int, int> P1, pair<int, int> P2)
{
    return P1.first < P2.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt, input;
    cin >> cnt;
    pair<int, int>* arr = new pair<int, int>[cnt];
    int* arr2 = new int[cnt];

    for (int i = 0; i < cnt; i++)
    {
        cin >> input;
        arr[i].first = input;
        arr[i].second = i;
    }
    sort(arr, arr + cnt, cmp);

    long long num = -1, max = -9999999999999;
    for (int i = 0; i < cnt; i++)
    {
        if (max < arr[i].first)
        {
            max = arr[i].first;
            ++num;
        }
        arr2[arr[i].second] = num;
    }

    for (int i = 0; i < cnt; i++)
    {
        cout << arr2[i] << ' ';
    }
}
