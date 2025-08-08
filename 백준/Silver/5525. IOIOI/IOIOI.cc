#include <iostream>
#include <utility>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word = "I";
    int N, M, result = 0;
    string S;

    cin >> N;
    cin >> M;
    cin >> S;

    int cnt = 0;
    for (int i = 1; i < M - 1; i++)
    {
        
        if (S[i - 1] == 'I' && S[i] == 'O' && S[i + 1] == 'I')
        {
            cnt++;
            i++;
            if (cnt >= N)
                result++;
        }
        else
            cnt = 0;
    }

    cout << result;
}
