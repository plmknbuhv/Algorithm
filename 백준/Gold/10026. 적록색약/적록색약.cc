#include <iostream>
#include <utility>
#include <vector>
#include <queue>
#include <algorithm>
#include <math.h>
#include <unordered_map>
using namespace std;

int N, B = 0, E = 0;
char arr[101][101];
bool visit[101][101] = {};

void Check(int y, int x, char RGB, bool isPro = false)
{
    queue<int> que1;
    queue<int> que2;
    que1.push(y); que2.push(x);

    while (que1.empty() == false)
    {
        int yy = que1.front(), xx = que2.front();
        que1.pop(); que2.pop();

        if (yy - 1 >= 0 && visit[yy - 1][xx] == false 
            && (arr[yy - 1][xx] == RGB || (isPro && (arr[yy - 1][xx] == 'R' || arr[yy - 1][xx] == 'G'))))
        {
            que1.push(yy-1);
            que2.push(xx);
            visit[yy - 1][xx] = true;
        }
        if (yy + 1 < N && visit[yy + 1][xx] == false 
            && (arr[yy + 1][xx] == RGB || (isPro && (arr[yy + 1][xx] == 'R' || arr[yy + 1][xx] == 'G'))))
        {
            que1.push(yy + 1);
            que2.push(xx);
            visit[yy + 1][xx] = true;
        }
        if (xx - 1 >= 0 && visit[yy][xx - 1] == false 
            && (arr[yy][xx - 1] == RGB || (isPro && (arr[yy][xx - 1] == 'R' || arr[yy][xx - 1] == 'G'))))
        {
            que1.push(yy);
            que2.push(xx - 1);
            visit[yy][xx - 1] = true;
        }
        if (xx + 1 < N && visit[yy][xx + 1] == false
            && (arr[yy][xx + 1] == RGB || (isPro && (arr[yy][xx + 1] == 'R' || arr[yy][xx + 1] == 'G'))))
        {
            que1.push(yy);
            que2.push(xx + 1);
            visit[yy][xx + 1] = true;
        }
    }
}

int main() 
{
    cin >> N;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> arr[i][j];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            if (visit[i][j] == false)
            {
                E++;
                visit[i][j] = true;
                Check(i, j, arr[i][j]);
            }
        }
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            visit[i][j] = false;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            if (visit[i][j] == false)
            {
                B++;
                visit[i][j] = true;

                Check(i, j, arr[i][j], ((arr[i][j] == 'R' || arr[i][j] == 'G')));
            }
        }

    cout << E << " " << B;
    return 0;
}