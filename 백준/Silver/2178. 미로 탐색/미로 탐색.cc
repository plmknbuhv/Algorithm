#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int N, M;

bool visit[1000][1000];
int result = 0;
int arr[1000][1000];

struct Node
{
    Node(int x, int y, int cnt) : x(x), y(y), cnt(cnt){}
    int x;
    int y;
    int cnt;
};  

bool Check(int x, int y)
{
    return (arr[y][x] == 1 && visit[y][x] == false);
}

void BFS(int x, int y)
{
    visit[y][x] = true;
    queue<Node> que;

    Node node(0,0,1);
    que.push(node);

    while (que.empty() == false)
    {
        Node temp = que.front();
        que.pop();

        if (temp.x == M-1 && temp.y == N-1)
        {
            cout << temp.cnt;
            return;
        }

        if (temp.x + 1 <= M && Check(temp.x + 1, temp.y))
        {
            que.push(Node(temp.x+1, temp.y, temp.cnt+1));
            visit[temp.y][temp.x + 1] = true;
        }
        if (temp.x - 1 >= 0 && Check(temp.x - 1, temp.y))
        {
            que.push(Node(temp.x-1, temp.y, temp.cnt + 1));
            visit[temp.y][temp.x - 1] = true;
        }
        if (temp.y + 1 <= N && Check(temp.x, temp.y + 1))
        {
            que.push(Node(temp.x, temp.y + 1, temp.cnt + 1));
            visit[temp.y+1][temp.x] = true;
        }
        if (temp.y - 1 >= 0 && Check(temp.x, temp.y - 1))
        {
            que.push(Node(temp.x, temp.y - 1, temp.cnt + 1));
            visit[temp.y - 1][temp.x] = true;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    string input;
   
    for (int i = 0; i < N; i++)
    {
        cin >> input;
        for (int j = 0; j < M; j++)
        {
            arr[i][j] = input[j] - '0';
        }
    }
    
    BFS(0, 0);
}
