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

    long long N;
    cin >> N;
    long long* road = new long long[N];
    long long* city = new long long[N];

    for (long long i = 0; i < N-1; i++)
        cin >> road[i];
    for (long long i = 0; i < N; i++)
        cin >> city[i];

    long long temp = city[0], result = 0;

    for (long long i = 0; i < N-1; i++)
    {
        if (temp > city[i])
            temp = city[i];

        result += road[i] * temp;
    }

    cout << result;
}
