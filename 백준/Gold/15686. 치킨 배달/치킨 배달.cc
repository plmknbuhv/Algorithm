#include <iostream>
#include <utility>
#include <unordered_map>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

int N, M, result = 9999999;
vector<pair<int, int>> chickenVec;
vector<pair<int, int>> houseVec;
bool visit[20] = {};
int arr[3000][20];
int arr2[20];

void Check(int cnt)
{
    if (cnt == M)
    {
        int sum = 0;
        int i = 0;
        for (auto h : houseVec) // 집마다 확인
        {
            int temp = 9999999;
            
            for (int j = 0; j < M; j++)
            {
                if (temp > arr[i][arr2[j]])
                    temp = arr[i][arr2[j]];
            }
            i++;

            sum += temp;
        }

        if (result > sum)
            result = sum;
    }

    int i = 0;
    for (auto c : chickenVec)
    {
        
        if (visit[i] == false && i > arr2[cnt - 1])
        {
            arr2[cnt] = i;
            visit[i] = true;
            Check(cnt + 1);
            visit[i] = false;
        }

        i++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    int input;
    
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
        {
            cin >> input;
            if (input == 2)
                chickenVec.push_back({ i, j });
            if (input == 1)
                houseVec.push_back({ i, j });
        }

    int i = 0;
    for (auto h : houseVec)
    {
        int j = 0;
        for (auto c : chickenVec)
        {
            arr[i][j] = abs(h.first - c.first) + abs(h.second - c.second);

            j++;
        }
        i++;
    }

    
    i = 0;
    for (auto c : chickenVec)
    {
        if (visit[i] == false)
        {
            arr2[0] = i;
            visit[i] = true;
            Check(1);
            visit[i] = false;
        }

        i++;
    }
    
    cout << result;
}
