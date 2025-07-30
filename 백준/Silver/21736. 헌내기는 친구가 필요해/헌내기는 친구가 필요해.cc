#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>
using namespace std;
int x, y, result = 0;
char arr[1001][1001];

struct Tomato
{
    Tomato(int y, int x) : x(x), y(y) {};
    int x;
    int y;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<Tomato> que;

    cin >> y >> x;
    for (int i = 0; i < y; i++)
        for (int j = 0; j < x; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'I')
            {
                arr[i][j] = 'X';
                que.push({ i,j });
            }
        }

    while (que.empty() == false)
    {
        Tomato toma = que.front();
        que.pop();

        if (toma.y - 1 >= 0 && (arr[toma.y - 1][toma.x] == 'O' || arr[toma.y - 1][toma.x] == 'P')) // y-1
        {
            if (arr[toma.y - 1][toma.x] == 'P')
                result++;
            arr[toma.y - 1][toma.x] = 'X';
            que.push({ toma.y - 1,toma.x});
        }
        if (toma.y + 1 < y && (arr[toma.y + 1][toma.x] == 'O' || arr[toma.y + 1][toma.x] == 'P')) // y+1
        {
            if (arr[toma.y + 1][toma.x] == 'P')
                result++;
            arr[toma.y + 1][toma.x] = 'X';
            que.push({ toma.y + 1,toma.x});
        }
        if (toma.x - 1 >= 0 && (arr[toma.y][toma.x - 1] == 'O' || arr[toma.y][toma.x - 1] == 'P')) // x-1
        {
            if (arr[toma.y][toma.x - 1] == 'P')
                result++;
            arr[toma.y][toma.x - 1] = 'X';
            que.push({ toma.y,toma.x - 1});
        }
        if (toma.x + 1 < x && (arr[toma.y][toma.x + 1] == 'O' || arr[toma.y][toma.x + 1] == 'P')) // x+1
        {
            if (arr[toma.y][toma.x + 1] == 'P')
                result++;
            arr[toma.y][toma.x + 1] = 'X';
            que.push({ toma.y,toma.x + 1});
        }
    }

    if (result == 0)
        cout << "TT";
    else
        cout << result;
}
