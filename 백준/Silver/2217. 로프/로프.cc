#include <iostream>
#include <utility>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, result = 0;
    cin >> N;
    int* arr = new int[N];
    
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr + N, greater<int>());

    for (int i = 0; i < N; i++)
    {
        int sum = 0;
        for (int j = 0; j < i+1; j++)
            sum += arr[i];
        if (sum > result)
            result = sum;
    }

    cout << result;
}
