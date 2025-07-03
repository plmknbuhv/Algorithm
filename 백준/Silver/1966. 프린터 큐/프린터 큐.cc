#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

struct doc
{
public:
    doc(int n, int j) : n(n), j(j) {};
    int n;
    int j;
};

bool CheckIsMax(queue<doc> que)
{
    int max = que.front().j;
    que.pop();
    while (que.empty() == false)
    {
        if (que.front().j > max)
            return false;
        que.pop();
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt;
    int N, M, temp;

    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        queue<doc> que;
        int counter = 0;
        cin >> N >> M;
        for (int j = 0; j < N; j++)
        {
            cin >> temp;
            que.push(doc(j, temp));
        }

        while (true)
        {
            if (CheckIsMax(que))
            {
                counter++;
                if (que.front().n == M)
                {
                    cout << counter << endl;
                    break;
                }
                que.pop();
            }
            else
            {
                doc t = que.front();
                que.pop();
                que.push(t);
            }
        }
    }
}
