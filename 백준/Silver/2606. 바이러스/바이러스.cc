#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int N, M;

bool visit[1002];
int result = 0;
vector<int> vec[10002];

void DFS(int idx)
{
    visit[idx] = true;
    result++;

    for (int i = 0; i < vec[idx].size(); i++)
    {
        if (visit[vec[idx][i]] == false)
            DFS(vec[idx][i]);
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    cin >> M;
   
    for (int i = 0; i < M; i++)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        vec[temp1].push_back(temp2);
        vec[temp2].push_back(temp1);
    }

    for (int i = 0; i < 10002; i++)
        sort(vec[i].begin(), vec[i].end());
    
    DFS(1);
    cout << result - 1;
}
