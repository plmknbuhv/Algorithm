#include <iostream>
#include <utility>
#include <unordered_map>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, L, reuslt = 0;
    bool pipe[2000] = {};
    cin >> N >> L;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        pipe[temp] = true;
    }

    for (int i = 0; i < 1001; i++)
    {
        if (pipe[i] == true)
        {
            reuslt++;
            for (int j = 0; j < L; j++)
            {
                pipe[i + j] = false;
            }
        }
    }

    cout << reuslt;
}