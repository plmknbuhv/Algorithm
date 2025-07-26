#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<pair<int, int>> que;
    int N, M;
    bool visit[1004] = {};
    vector<int> vec[1004];
    cin >> N >> M;
    int result = N;

    for (int i = 1; i <= N; i++)
        que.push({ i, 0 });
    for (int i = 0; i < M; i++)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        vec[temp1].push_back(temp2);
        vec[temp2].push_back(temp1);
    }

    while (que.empty() == false)
    {
        pair<int, int> temp = que.top();
        que.pop();
        if (temp.second == 0 && visit[temp.first] == true)
        {
           //  cout << temp.first << endl;
            result--;
        }

        for (auto v : vec[temp.first])
        {
            if (visit[v] == false)
            {
                que.push({v, temp.second+1});
                visit[v] = true;
            }
        }
    }
    

    cout << result;
}
