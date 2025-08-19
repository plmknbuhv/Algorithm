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

    int N, result = 0, I;
    cin >> N;
    priority_queue<int, vector<int>, greater<int>> Pque;

    for (int i = 0; i < N; i++)
    {
        cin >> I;
        Pque.push(I);
    }

    while (Pque.size() != 1)
    {
        int t1 = Pque.top(); Pque.pop();
        int t2 = Pque.top(); Pque.pop();
        Pque.push(t1 + t2);
        result += t1 + t2;
    }

    cout << result;
}
