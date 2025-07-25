#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>
using namespace std;
int z, y, x, result;
int arr[101][101][101];

struct Tomato
{
    Tomato(int z, int y, int x, int cnt) : x(x), y(y), z(z), count(cnt) {};
    int x;
    int y;
    int z;
    int count;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<Tomato> que;

    cin >> x >> y >> z;
    for (int i = 0; i < z; i++)
        for (int j = 0; j < y; j++)
            for (int k = 0; k < x; k++)
            {
                cin >> arr[i][j][k];
                if (arr[i][j][k] == 1)
                    que.push({ i,j,k,0 });
            }

    while (que.empty() == false)
    {
        Tomato toma = que.front();
        que.pop();

        if (toma.count > result)
            result = toma.count;
        
        if (toma.y - 1 >= 0 && arr[toma.z][toma.y - 1][toma.x] == 0) // y-1
        {
            arr[toma.z][toma.y-1][toma.x] = 1;
            que.push({toma.z, toma.y-1,toma.x,toma.count+1});
        }
        if (toma.y + 1 < y && arr[toma.z][toma.y + 1][toma.x] == 0) // y+1
        {
            arr[toma.z][toma.y+1][toma.x] = 1;
            que.push({toma.z,toma.y+1,toma.x,toma.count+1});
        }
        if (toma.x - 1 >= 0 && arr[toma.z][toma.y][toma.x - 1] == 0) // x-1
        {
            arr[toma.z][toma.y][toma.x-1] = 1;
            que.push({toma.z, toma.y,toma.x-1,toma.count+1});
        }
        if (toma.x + 1 < x && arr[toma.z][toma.y][toma.x + 1] == 0) // x+1
        {
            arr[toma.z][toma.y][toma.x+1] = 1;
            que.push({toma.z, toma.y,toma.x+1,toma.count + 1 });
        }
        if (toma.z - 1 >= 0 && arr[toma.z-1][toma.y][toma.x] == 0) // z-1
        {
            arr[toma.z-1][toma.y][toma.x] = 1;
            que.push({ toma.z-1, toma.y,toma.x,toma.count + 1 });
        }
        if (toma.z + 1 < z && arr[toma.z+1][toma.y][toma.x] == 0) // z+1
        {
            arr[toma.z+1][toma.y][toma.x] = 1;
            que.push({ toma.z+1, toma.y,toma.x,toma.count + 1 });
        }
    }

    for (int i = 0; i < z; i++)
        for (int j = 0; j < y; j++)
            for (int k = 0; k < x; k++)
            {
                if (arr[i][j][k] == 0)
                {
                    cout << -1;
                    return 0;
                }
            }

    cout << result;
}
