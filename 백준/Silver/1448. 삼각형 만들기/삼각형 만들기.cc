#include <iostream>
#include <utility>
#include <unordered_map>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int* arr = new int[N];
    for (int  i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr+N, greater<>());

    for (int i = 1; i < N; i++)
    {
        if (arr[i-1] < arr[i] + arr[i+1])
        {
            cout << arr[i - 1] + arr[i] + arr[i + 1];
            return 0;
        }
    }
    cout << -1;
}