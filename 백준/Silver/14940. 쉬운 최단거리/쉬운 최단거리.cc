#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>
#include <math.h>
using namespace std;

struct Node
{
    Node(int y, int x, int cnt) : y(y), x(x), cnt(cnt){}
    int x;
    int y;
    int cnt;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    queue<Node> que;
    cin >> N >> M;
    bool** visit = new bool*[N];
    int** arr = new int*[N];
    for (int i = 0; i < N; i++) {
        visit[i] = new bool[M]();
        arr[i] = new int[M];
    }
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 2)
            {
                arr[i][j] = 0;
                visit[i][j] = true;
                que.push({i,j,0});
            }
        }

    while (que.empty() == false)
    {
        Node temp = que.front();
        que.pop();

        if (temp.y + 1 < N && visit[temp.y + 1][temp.x] == false && arr[temp.y + 1][temp.x] == 1)
        {
            visit[temp.y + 1][temp.x] = true;
            arr[temp.y + 1][temp.x] = temp.cnt+1;
            que.push({temp.y+1, temp.x, temp.cnt+1});
        }
        if (temp.y - 1 >= 0 && visit[temp.y - 1][temp.x] == false && arr[temp.y - 1][temp.x] == 1)
        {
            visit[temp.y - 1][temp.x] = true;
            arr[temp.y - 1][temp.x] = temp.cnt+1;
            que.push({ temp.y - 1, temp.x, temp.cnt + 1 });
        }
        if (temp.x + 1 < M && visit[temp.y][temp.x + 1] == false && arr[temp.y][temp.x+1] == 1)
        {
            visit[temp.y][temp.x + 1] = true;
            arr[temp.y][temp.x + 1] = temp.cnt+1;
            que.push({ temp.y, temp.x+1, temp.cnt + 1 });
        }
        if (temp.x - 1 >= 0 && visit[temp.y][temp.x - 1] == false && arr[temp.y][temp.x - 1] == 1)
        {
            visit[temp.y][temp.x - 1] = true;
            arr[temp.y][temp.x - 1] = temp.cnt+1;
            que.push({ temp.y, temp.x-1, temp.cnt + 1 });
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] != 0 && visit[i][j] == false)
                cout << -1 << " ";
            else
                cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
}
