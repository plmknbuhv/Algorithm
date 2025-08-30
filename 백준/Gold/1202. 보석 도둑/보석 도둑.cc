#include <iostream>
#include <utility>
#include <unordered_map>
#include <set>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long N, K, result = 0;
    cin >> N >> K;

    pair<int, int> *gem = new pair<int, int>[N];
    int* bag = new int[K];

    for (int i = 0; i < N; i++)
        cin >> gem[i].first >> gem[i].second;
    for (int i = 0; i < K; i++)
        cin >> bag[i];

    sort(gem, gem + N);
    sort(bag, bag + K);

    priority_queue<int> pQue;
    int idx = 0;
    for (int i = 0; i < K; i++)
    {
        while (idx < N && gem[idx].first <= bag[i])
        {
            pQue.push(gem[idx].second);
            idx++;
        }

        if (pQue.empty() == false)
        {
            result += pQue.top();
            pQue.pop();
        }
    }

    cout << result;
}
