#include <iostream>
#include <utility>
#include <math.h>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, input;
    map<int, bool> M;

    cin >> A >> B;

    for (int i = 0; i < A + B; i++)
    {
        cin >> input;
        M[input] = !M[input];
    }

    int cnt = 0;
    for (auto b : M)
    {
        if (b.second)
            cnt++;
    }

    cout << cnt;
}
