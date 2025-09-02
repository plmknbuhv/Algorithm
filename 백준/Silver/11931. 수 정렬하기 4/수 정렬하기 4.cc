#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long N;
    cin >> N;

    long long* arr = new long long[N];

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr+N, greater<>());

    for (int i = 0; i < N; i++)
        cout << arr[i] << '\n';
}
