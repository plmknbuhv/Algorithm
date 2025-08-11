#include <iostream>
#include <utility>
#include <unordered_map>
#include <set>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

int arr[100000];
int N, M;

void Check(int num, int cnt)
{
    arr[cnt] = num;
    if (cnt == M-1)
    {
        for (int i = 0; i < cnt+1; i++)
            cout << arr[i] << " ";
        cout << '\n';
        return;
    }

    for (int i = 1; i <= N; i++)
    {
        if (i >= num)    
            Check(i, cnt+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        Check(i, 0);
    }
}
