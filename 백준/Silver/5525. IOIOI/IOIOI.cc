#include <iostream>
#include <utility>
#include <unordered_map>
#include <unordered_set>
#include <string>
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

    for (int i = 0; i < N; i++)
        word += "OI";

    for (int i = 0; i < M - (N * 2); i++)
    {
        if (S.substr(i, (N * 2) + 1).compare(word) == 0)
        {
            result++;
            i++;
        }
    }

    cout << result;
}
