#include <iostream>
#include <utility>
#include <unordered_map>
#include <set>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

int N, D;
int S[20], E[20], L[20];
int R[10001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> D;
    
    for (int i = 0; i < N; i++)
        cin >> S[i] >> E[i] >> L[i];

    R[0] = 0;

    for (int i = 1; i <= D; i++)
    {
        int t = R[i-1] + 1;
        for (int j = 0; j < N; j++)
        {
            if (E[j] == i)
            {
                if (R[S[j]] + L[j] < t)
                    t = R[S[j]] + L[j];
            }
        }

        R[i] = t;
    }

    cout << R[D];
}
