#include <iostream>
#include <utility>
#include <unordered_map>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

int arr[101000][3];
int minArr[3];
int maxArr[3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    for (int i = 0; i < 3; i++)
    {
        minArr[i] = arr[0][i];
        maxArr[i] = arr[0][i];
    }

    for (int i = 1; i < N; i++)
    {
        int t1, t2, t3;
        
        t1 = max(maxArr[0], maxArr[1]) + arr[i][0];
        t2 = max(maxArr[0], max(maxArr[1], maxArr[2])) + arr[i][1];
        t3 = max(maxArr[1], maxArr[2]) + arr[i][2];
        maxArr[0] = t1;
        maxArr[1] = t2;
        maxArr[2] = t3;

        t1 = min(minArr[0], minArr[1]) + arr[i][0];
        t2 = min(minArr[0], min(minArr[1], minArr[2])) + arr[i][1];
        t3 = min(minArr[1], minArr[2]) + arr[i][2];
        minArr[0] = t1;
        minArr[1] = t2;
        minArr[2] = t3;
    }

    cout << max(maxArr[0], max(maxArr[1], maxArr[2])) << " ";
     cout << min(minArr[0], min(minArr[1], minArr[2]));
}