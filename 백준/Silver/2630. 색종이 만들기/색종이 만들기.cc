#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>
#include <deque>
using namespace std;
int arr[1000][1000];
bool visit[1000][1000];
int blue = 0;
int white = 0;

bool Check(bool isBlue, int num, int y, int x)
{
    for (int i = y; i < num+y; i++)
    {
        for (int j = x; j < num+x; j++)
        {
            if (visit[i][j] == true
                || (isBlue && arr[i][j] == 0)
                || (!isBlue && arr[i][j] == 1))
            {
                return false;
            }
            // cout << i << " " << j << endl;
        }
    }
    if (isBlue)
        blue++;
    else
        white++;
    return true;
}

void Paper(int y, int x, int num)
{
    if (num == 0)
        return;
    int half = num / 2;

    if (Check(true, num, y, x) || Check(false, num, y, x))
    {
        for (int i = y; i < num + y; i++)
            for (int j = x; j < num + x; j++)
            {
                visit[i][j] = true;
            }
    }

    Paper(y, x, half);
    Paper(y, x + half, half);
    Paper(y + half, x, half);
    Paper(y + half, x + half, half);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int input;
    cin >> input;

    for (int i = 0; i < input; i++)
        for (int j = 0; j < input; j++)
        {
            cin >> arr[i][j];
            visit[i][j] = false;
        }

    Paper(0, 0, input);

    cout << white << "\n" << blue;
}
