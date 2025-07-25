#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>
using namespace std;
int x, y, result;
int arr[1001][1001];

struct Tomato
{
    Tomato(int y, int x, int cnt) : x(x), y(y), count(cnt) {};
    int x;
    int y;
    int count;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<Tomato> que;

    cin >> x >> y;
    for (int i = 0; i < y; i++)
        for (int j = 0; j < x; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
                que.push({i,j,0});
        }

    while (que.empty() == false)
    {
        Tomato toma = que.front();
        que.pop();

        if (toma.count > result)
            result = toma.count;
        
        if (toma.y - 1 >= 0 && arr[toma.y - 1][toma.x] == 0) // y-1
        {
            arr[toma.y-1][toma.x] = 1;
            que.push({toma.y-1,toma.x,toma.count+1});
        }
        if (toma.y + 1 < y && arr[toma.y + 1][toma.x] == 0) // y+1
        {
            arr[toma.y+1][toma.x] = 1;
            que.push({toma.y+1,toma.x,toma.count+1});
        }
        if (toma.x - 1 >= 0 && arr[toma.y][toma.x - 1] == 0) // x-1
        {
            arr[toma.y][toma.x-1] = 1;
            que.push({toma.y,toma.x-1,toma.count+1});
        }
        if (toma.x + 1 < x && arr[toma.y][toma.x + 1] == 0) // x+1
        {
            arr[toma.y][toma.x+1] = 1;
            que.push({toma.y,toma.x+1,toma.count + 1 });
        }
    }

    for (int i = 0; i < y; i++)
        for (int j = 0; j < x; j++)
        {
            if (arr[i][j] == 0)
            {
                cout << -1;
                return 0;
            }
        }

    cout << result;
}
