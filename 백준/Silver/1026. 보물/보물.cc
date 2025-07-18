#include <iostream>
#include <utility>
#include <queue>
#include <algorithm>
#include <map>
using namespace std;

int* arr1;
int* arr2;
long long cnt, result = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> cnt;

    arr1 = new int[cnt];
    arr2 = new int[cnt];

    for (int i = 0; i < cnt; i++)
        cin >> arr1[i];
    for (int i = 0; i < cnt; i++)
        cin >> arr2[i];

    sort(arr1, arr1 + cnt);
    sort(arr2, arr2 + cnt);

    for (int i = 0; i < cnt; i++)
    {
        result += (arr1[i] * arr2[cnt - i - 1]);
    }

    cout << result;
}
