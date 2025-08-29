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

    int N;
    cin >> N;
    int* arr = new int[N];
    int* result = new int[N]();

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    for (int i = 0; i < N; i++)
    {
        int j = 0;
        for (int cnt = 0; cnt <= arr[i]; j++)
        {
            if (result[j] == 0)
            {
                cnt++;
            }
        }
        result[j-1] = i+1;
    }

    for (int i = 0; i < N; i++)
    {
        cout << result[i] << " ";
    }
}
