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

    long long T;
    cin >> T;

    for (long long i = 0; i < T; i++)
    {
        long long N, Money = 0;
        cin >> N;
        long long* arr = new long long[N];

        for (long long j = N-1; j >= 0; j--)
            cin >> arr[j];

        int max = 0;
        for (long long j = 0; j < N; j++) // 이미 역순
        {
            if (arr[j] > max) // 최대치 갱신
            {
                max = arr[j];
            }
            else
            {
                Money += max;
                Money -= arr[j];
            }
        }  

        cout << Money << '\n';
    }
}
