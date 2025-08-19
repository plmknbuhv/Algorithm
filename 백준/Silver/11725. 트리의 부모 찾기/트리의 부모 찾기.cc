#include <iostream>
#include <utility>
#include <unordered_map>
#include <set>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> vec[100001];
int arr[100001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 1; i <= N-1; i++)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        vec[temp1].push_back(temp2);
        vec[temp2].push_back(temp1);
    }

    queue<pair<int, int>> que;
    que.push({1, 0});

    while (que.empty() == false)
    {
        pair<int, int> temp = que.front(); que.pop();

        for (auto t : vec[temp.first])
        {
            if (temp.second != t)
            {
                que.push({ t, temp.first });
                arr[t] = temp.first;
            }
        }
    }

    for (int i = 2; i <= N; i++)
    {
        cout << arr[i] << '\n';
    }
}
