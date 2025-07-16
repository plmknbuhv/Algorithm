#include <iostream>
#include <utility>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

int arr[55][55];
bool visit[55][55];
int yMax, xMax, K;

int Check(int y, int x)
{
    if (visit[y][x] == true)
        return 0;
    visit[y][x] = true;

    if (arr[y][x] == 0)
        return 0 ;

    int result = 0;
    if (arr[y][x] == 1)
        result++;

    if (y-1 >= 0)   
        result += Check(y-1, x);
    if (x-1 >= 0)   
        result += Check(y, x-1);
    if (y+1 < yMax)
        result += Check(y+1, x);
    if (x+1 < xMax)
        result += Check(y, x+1);

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt;
    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        int all = 0;;

        for (int i = 0; i < 55; i++)
            for (int j = 0; j < 55; j++)
            {
                visit[i][j] = false;
                arr[i][j] = 0;
            }

        cin >> yMax >> xMax >> K;

        for (int i = 0; i < K; i++)
        {
            int temp1, temp2;
            cin >> temp1 >> temp2;

            arr[temp1][temp2] = 1;
        }

        for (int i = 0; i < yMax; i++)
        {
            for (int j = 0; j < xMax; j++)
            {
                if (arr[i][j] == 1 && visit[i][j] == false)
                {
                    Check(i, j);
                    all++;
                }
                visit[i][j] = true;
            }
        }

        cout << all << '\n';
    }
}
