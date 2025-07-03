#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int* arr = new int[1000001];
    int M, N;
    cin >> M >> N;

    for (int i = 1; i < 1000001; i++)
    {
        arr[i] = i;
    }

    for (int i = 2; i < N+1; i++)
    {
        if (arr[i] == 0) continue;

        for (int j = i*2; j < N + 1; j += i)
        {
            arr[j] = 0;
        }
    }

    for (int i = M; i < N+1; i++)
    {
        if (arr[i] != 0 && arr[i] != 1)
            cout << arr[i] << endl;
    }
}