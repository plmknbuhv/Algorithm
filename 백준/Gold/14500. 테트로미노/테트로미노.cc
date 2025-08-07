#include <iostream>
#include <utility>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <queue>
using namespace std;

int N, M;
int arr[501][501];

struct Pos
{
    Pos(int x, int y):y(y), x(x) {};
    int x;
    int y;
};

Pos tetrominos[7][4] =
{
    { Pos(0, 0), Pos(0, 1), Pos(1, 0), Pos(1, 1)},
    { Pos(0, 0), Pos(1, 0), Pos(2, 0), Pos(3, 0)},
    { Pos(0, 0), Pos(1, 0), Pos(1, 1), Pos(2, 0)},
    { Pos(0, 0), Pos(1, 0), Pos(2, 0), Pos(2, 1)},
    { Pos(0, 0), Pos(1, 0), Pos(2, 0), Pos(0, 1)},
    { Pos(0, 0), Pos(1, 0), Pos(1, 1), Pos(2, 1)},
    { Pos(0, 0), Pos(-1, 0), Pos(-1, 1), Pos(-2, 1)}
};

int Check(int x, int y)
{
    int result = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int temp = 0, t;
            for (int k = 0; k < 4; k++)
            {
                if (y + tetrominos[i][k].y >= 0 && y + tetrominos[i][k].y < N &&
                    x + tetrominos[i][k].x >= 0 && x + tetrominos[i][k].x < M)
                {
                    temp += arr[y + tetrominos[i][k].y][x + tetrominos[i][k].x];
                }

                t = tetrominos[i][k].x;
                tetrominos[i][k].x = -tetrominos[i][k].y;
                tetrominos[i][k].y = t;
            }

            if (result < temp)
                result = temp;
        }
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int result = 0;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> arr[i][j];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int temp = Check(j, i);
            if (result < temp)
                result = temp;
        }
    }

    cout << result;
}
