#include <iostream>
#include <utility>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    multiset<pair<int, int>> problems;
    unordered_map<int, int> id_to_level;

    cin >> N;

    for (int i = 0; i < N; ++i) {
        int P, L;
        cin >> P >> L;
        problems.insert({ L, P });
        id_to_level[P] = L;
    }

    cin >> M;
    string input;

    for (int i = 0; i < M; i++)
    {
        cin >> input;
        if (input.compare("add") == 0)
        {
            int t1, t2;
            cin >> t1 >> t2;

            problems.insert({ t2, t1 });
            id_to_level[t1] = t2;
        }
        else if (input.compare("solved") == 0)
        {
            int t1;
            cin >> t1;

            problems.erase(problems.find({id_to_level[t1], t1}));
            id_to_level.erase(id_to_level.find(t1));
        }
        else if (input.compare("recommend") == 0)
        {
            int t1;
            cin >> t1;

            cout << (t1 < 0 ? *problems.begin() : *problems.rbegin()).second << '\n';
        }
    }
}