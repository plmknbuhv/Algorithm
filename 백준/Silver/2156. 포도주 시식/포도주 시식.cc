#include <iostream>
#include <utility>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
    int arr[10001][3];
    int N;
    cin >> N;
    int *juice = new int[N+1]();

    for (int i = 1; i <= N; i++)
        cin >> juice[i];

    arr[0][0] = 0;
    arr[0][1] = 0;
    arr[0][2] = 0;

    for (int i = 1; i <= N; i++)
    {
        arr[i][0] = max(arr[i-1][0], max(arr[i-1][1], arr[i-1][2]));
        arr[i][1] = arr[i - 1][0] + juice[i];
        arr[i][2] = arr[i - 1][1] + juice[i];
    }

    cout << max(arr[N][0], max(arr[N][1], arr[N][2]));
}
