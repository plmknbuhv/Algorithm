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

    long long N, M, result;
    cin >> N >> M;

    long long* arr = new long long[N];
    long long left = 0, right = 0, mid = 0;

    for (long long i = 0; i < N; i++)
    {
        cin >> arr[i];
        right = max(right, arr[i]);
    }

    right *= M;
    result = right;

    while (left <= right)
    {
        mid = (left + right) / 2;
        long long temp = 0;

        for (long long i = 0; i < N; i++)
        {
            temp += mid / arr[i];
            if (temp > M)
                break;
        }

        if (temp >= M)
        {
            result = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }

    cout << result;
}
