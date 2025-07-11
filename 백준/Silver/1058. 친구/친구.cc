#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> vec[100000];
bool visit[100000];
int Max = 0;
unsigned long long cnt;
string* arr;

void CheckIsMax(int idx)
{
    int result = 0;
    queue<pair<int, int>> que;
    que.push({idx, 0});
    visit[idx] = true;

    while (que.empty() == false)
    {
        pair<int, int> temp = que.front();
        que.pop();
        result++;

        if (temp.second <= 1)
        {
            for (auto v : vec[temp.first])
            {
                if (visit[v] == false)
                {
                    visit[v] = true;
                    que.push({ v, temp.second+1});
                }
            }
        }
    }

    if (Max <= result)
        Max = result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned long long num1 = 0, num2 = 1, num3 = 0;

    cin >> cnt;
    arr = new string[cnt];

    for (long long i = 0; i < cnt; i++)
    {
        string temp;
        cin >> temp;
        for (int j = 0; j < cnt; j++)
        {
            if (j != i && temp[j] == 'Y')
                vec[i].push_back(j);
        }
    }

    for (int i = 0; i < cnt; i++)
    {
        CheckIsMax(i);
        for (int j = 0; j < 100000; j++)
            visit[j] = false;
    }

    cout << Max-1 << endl;
}
