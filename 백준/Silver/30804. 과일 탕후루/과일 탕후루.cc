#include <iostream>
#include <utility>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <queue>
using namespace std;

int* arr;
int N, result = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    arr = new int[N];

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int cnt = 0, A = arr[0], B = 0;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] != A)
        {
            B = arr[i];
            break;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] == A || arr[i] == B)
        {
            cnt++;
            if (result < cnt)
                result = cnt;
        }
        else
        {
            A = arr[i-1];
            B = arr[i];
            cnt = 1;
            for (int j = i-1; j >= 0; j--)
            {
                if (arr[j] != A)
                    break;
                cnt++;
            }
        }
    }

    cout << result;
}
