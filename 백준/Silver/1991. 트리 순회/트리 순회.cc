#include <iostream>
#include <utility>
#include <unordered_map>
#include <set>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

int arr[100][2];
vector<int> resultVec[3];
#define FAIL 9999

void Check(int num)
{
    resultVec[0].push_back(num);

    
    if (arr[num][0] != FAIL)
        Check(arr[num][0]);

    resultVec[1].push_back(num);

    if (arr[num][1] != FAIL)
        Check(arr[num][1]);

    resultVec[2].push_back(num);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        char I1, I2, I3;
        cin >> I1 >> I2 >> I3;

        arr[I1 - 'A'][0] = (I2 != '.' ? I2 - 'A' : FAIL);
        arr[I1 - 'A'][1] = (I3 != '.' ? I3 - 'A' : FAIL);
    }

    Check(0);

    for (int i = 0; i < 3; i++)
    {
        for (auto v : resultVec[i])
            cout << (char)(v + 'A');

        cout << '\n';
    }
}
