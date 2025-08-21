#include <iostream>
#include <utility>
#include <unordered_map>
#include <set>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N;
    cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        int temp, result = 0;
        cin >> N;
        pair<int, int> *arr = new pair<int, int>[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i].first >> arr[i].second;

        sort(arr, arr + N);

        temp = arr[0].second;

        for (int i = 0; i < N; i++)
        {
            if (arr[i].second < temp)
            {
                temp = arr[i].second;
                result++;
            }
        }

        cout << result+1 << '\n'; 
    }
}
