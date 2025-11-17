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

    string N;
    vector<int> vec;
    int sum = 0;
    bool isCan = false;
    cin >> N;

    for (int i = 0; i < N.length(); i++)
    {
        if (N[i] == '0')
            isCan = true;
        sum += N[i] - '0';
        vec.push_back(N[i] - '0');
    }

    sort(vec.rbegin(), vec.rend());

    if (sum % 3 == 0 && isCan)
    {
        for (auto v : vec)
        {
            cout << v;
        }
    }
    else
        cout << -1;
}
