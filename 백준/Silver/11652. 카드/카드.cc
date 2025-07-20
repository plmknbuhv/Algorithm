#include <iostream>
#include <utility>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<long long, long long> M;
    long long int cnt, input;
    long long int result = 0, idx = 0;

    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        cin >> input;
        M[input]++;
    }

    for (auto m : M)
    {
        if (result < m.second)
        {
            result = m.second;
            idx = m.first;
        }
    }

    cout << idx;
}
