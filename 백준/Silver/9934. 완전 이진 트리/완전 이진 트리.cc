#include <iostream>
#include <utility>
#include <unordered_map>
#include <set>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

int* arr;
int N;
vector<int> vec[20];

void Check(int idx, int level, int cnt)
{
    if (cnt == N)
        return;

    int sub = (1 << level) / 4;
    vec[cnt].push_back(arr[idx]);

    if (idx - sub >= 0)
        Check(idx - sub, level-1, cnt+1);
    if (idx + sub <= (1 << N) + 1)
        Check(idx + sub, level-1, cnt+1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    arr = new int[(1 << N)+1];

    for (int i = 1; i <= (1 << N) - 1; i++)
        cin >> arr[i];

   Check((1 << N) / 2, N, 0);

    for (int i = 0; i < N; i++)
    {
        for (auto v : vec[i])
            cout << v << " ";
        cout << '\n';
    }
}
