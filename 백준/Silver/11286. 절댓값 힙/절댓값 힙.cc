#include <iostream>
#include <utility>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <queue>
using namespace std;

struct Num
{
    long long num;

    bool operator<(Num b) const {
        if (num * num == b.num * b.num)
            return num < b.num;
        else
            return (num * num) < (b.num * b.num);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long cnt;
    long long input;
    cin >> cnt;
    multiset<Num> ms;

    for (int j = 0; j < cnt; j++)
    {
        cin >> input;
        if (input == 0)
        {
            if (ms.empty())
                cout << 0 << '\n';
            else
            {
                cout << (*ms.begin()).num << '\n';
                ms.erase(ms.begin());
            }
        } 
        else
        {
            Num n;
            n.num = input;
            ms.insert(n);
        }
    }
}
