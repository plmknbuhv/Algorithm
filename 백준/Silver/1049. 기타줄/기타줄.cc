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

    int N, M, result = 0;
    int A = 99999999, B = 99999999;
    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;

        A = min(A, t1);
        B = min(B, t2);
    }

    while (N > 0)
    {
        int temp;
        if (N >= 6 || A < B * N)
        {
            result += min(A, B*6);
            N -= 6;
        }
        else
        {
            result += B * N;
            N = 0;
        }
    }

    cout << result;
}
