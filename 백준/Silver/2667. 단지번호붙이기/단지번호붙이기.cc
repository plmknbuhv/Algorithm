#include <iostream>
#include <utility>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

int arr[50][50];
bool visit[50][50];
int cnt;

int Check(int y, int x)
{
    if (visit[y][x] == true)
        return 0;
    visit[y][x] = true;

    if (arr[y][x] == '0')
        return 0 ;

    int result = 0;
    if (arr[y][x] == '1')
        result++;

    if (y-1 >= 0)   
        result += Check(y-1, x);
    if (x-1 >= 0)   
        result += Check(y, x-1);
    if (y+1 < cnt)
        result += Check(y+1, x);
    if (x+1 < cnt)
        result += Check(y, x+1);

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int all = 0;;
    vector<int> vec;
    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        string temp;
        cin >> temp;
        for (int j = 0; j < cnt; j++)
        {
            arr[i][j] = temp[j];
        }
    }

    for (int i = 0; i < cnt; i++)
    {
        for (int j = 0; j < cnt; j++)
        {
            if (arr[i][j] == '1' && visit[i][j] == false)
            {
                all++;
                vec.push_back(Check(i, j));
            }
            visit[i][j] = true;
        }
    }

    sort(vec.begin(), vec.end());

    cout << all << '\n';
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << '\n';
}
