#include <iostream>
#include <utility>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <queue>
using namespace std;

struct Node {
    int prev;
    char symbol;
};

int D(int x) { return (x * 2) % 10000; }
int S(int x) { return x == 0 ? 9999 : x - 1; }
int L(int x) { return (x % 1000) * 10 + x / 1000; }
int R(int x) { return (x / 10) + (x % 10) * 1000; }

string Check(int A, int B)
{
    vector<bool> visit(10000, false);
    vector<Node> trace(10000, { -1, 0 });

    queue<int> que;
    que.push(A);
    visit[A] = true;

    while (true)
    {
        int temp = que.front(); que.pop();

        if (temp == B)
            break;

        int nextStates[4] = { D(temp), S(temp), L(temp), R(temp) };
        char symbols[4] = { 'D', 'S', 'L', 'R' };

        for (int i = 0; i < 4; i++) {
            int nxt = nextStates[i];
            if (!visit[nxt]) {
                visit[nxt] = true;
                trace[nxt] = { temp, symbols[i] };
                que.push(nxt);
            }
        }
    }

    string result;
    for (int cur = B; cur != A; cur = trace[cur].prev)
        result.push_back(trace[cur].symbol);
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long cnt, A, B;
    cin >> cnt;
    for (int i = 0; i < cnt; i++)
    {
        cin >> A >> B;

        cout << Check(A, B) << '\n';
    }
}
