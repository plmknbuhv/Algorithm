#include <iostream>
#include <utility>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, cnt;
    string input1, input2;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        unordered_map<string, int> M;
        int  result = 1;
        cin >> cnt;
        for (int i = 0; i < cnt; i++)
        {
            cin >> input1 >> input2;
            M[input2]++;
        }

        for (auto m : M)
        {
            result *= (m.second + 1);
        }

        cout << result - 1 << endl;
    }
}
