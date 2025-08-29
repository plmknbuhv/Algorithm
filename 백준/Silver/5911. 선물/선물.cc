#include <iostream>
#include <utility>
#include <unordered_map>
#include <set>
#include <stack>
#include <algorithm>
#include <queue>
using namespace std;

struct Present
{
    int P;
    int S;
};

bool cmp(Present* present1, Present*present2)
{
    return present1->P + present1->S < present2->P + present2->S;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, B, result = 0;
    cin >> N >> B;
    
    Present present[1001];
    Present *present2[1001];

    for (int i = 0; i < N; i++)
    {
        cin >> present[i].P >> present[i].S;
        present2[i] = &present[i];
    }

    for (int i = 0; i < N; i++)
    {
        int originalP = present2[i]->P;
        present2[i]->P = originalP / 2;

        Present* ptr[1001];
        for (int k = 0; k < N; ++k) ptr[k] = &present[k];
        sort(ptr, ptr + N, cmp); 

        long long budget = B;
        int cnt = 0;
        for (int j = 0; j < N; ++j) {
            long long cost = ptr[j]->P + ptr[j]->S;
            if (budget >= cost) {
                budget -= cost;
                ++cnt;
            }
            else break;
        }
        result = max(result, cnt);

        present2[i]->P = originalP;
    }

    cout << result;
}
