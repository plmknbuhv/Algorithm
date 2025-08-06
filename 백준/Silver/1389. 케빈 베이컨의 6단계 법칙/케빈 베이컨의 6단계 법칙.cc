#include <iostream>
#include <utility>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> vec[101];
long long N, M, result = 1000000000000000, result2 = 0;

int Check(int num)
{
    bool visit[101] = {};
    int sum = 0;
    queue<int> que1;
    queue<int> que2;
    unordered_set<int> S;

    que1.push(num);
    que2.push(0);

    while (que1.empty() == false)
    {
        int temp = que1.front();
        int temp2 = que2.front();
        que1.pop(); que2.pop();
        sum += temp2;

        for (auto v : vec[temp])
        {
            if (visit[v] == false)
            {
                que1.push(v);
                que2.push(temp2+1);
                visit[v] = true;
            }
        }
    }

    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        int input1, input2;
        cin >> input1 >> input2;
        vec[input1].push_back(input2);
        vec[input2].push_back(input1);
    }

    for (int i = 0; i < N; i++)
    {
        int temp = Check(i+1);
        if (result > temp)
        {
            result2 = i + 1;
            result = temp;
        }
    }

    cout << result2;
}
