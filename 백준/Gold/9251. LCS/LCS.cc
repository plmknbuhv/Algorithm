#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
using namespace std;

int arr[1005][1005] = {};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int result = 0;
    string B;
    string A;
    cin >> A;
    cin >> B;

    for (int i = 1; i <= A.length(); i++)
    {
        for (int j = 1; j <= B.length(); j++)
        {
            if (B[j-1] == A[i-1])
            {
                arr[i][j] = arr[i - 1][j - 1] + 1;
                if (result < arr[i][j])
                    result = arr[i][j];
            }
            else
            {
                arr[i][j] = max(arr[i][j - 1], arr[i - 1][j]);
            }
        }
    }

    cout << result;
}
