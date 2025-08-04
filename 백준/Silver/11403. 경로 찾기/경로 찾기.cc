#include <iostream>
#include <utility>
#include <vector>
#include <queue>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int> vec[101];
int arr2[101][101];
int cnt, input;

void Check(int num)
{
    bool visit[101] = {};
    queue<int> que;
    que.push(num);

    while (que.empty() == false)
    {
        int temp = que.front();
        que.pop();

        for (auto v : vec[temp])
        {
            if (visit[v] == false)
            {
                que.push(v);
                visit[v] = true;
            }

            for (int i = 0; i < cnt; i++)
            {
                arr2[num][i] = arr2[v][i] | arr2[num][i];
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        for (int j = 0; j < cnt; j++)
        {
            cin >> input;
            if (input == 1)
                vec[i].push_back(j);
            arr2[i][j] = input;
        }
    }

    for (int i = 0; i < cnt; i++)
    {
        Check(i);
    }

    for (int i = 0; i < cnt; i++)
    {
        for (int j = 0; j < cnt; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << '\n';
    }
}
