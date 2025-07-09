#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int T, N, M;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> N >> M;
        for (int i = 0; i < M; i++)
        {
            int temp1, temp2;
            cin >> temp1 >> temp2;
        }

        cout << N - 1 << endl;
    }
}
