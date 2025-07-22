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

    unordered_map<string, int> M;
    string input;
    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        for (int j = 1; j <= input.length() - i; j++)
        {
            M[input.substr(i, j)] = 0;
        }
    }

    cout << M.size();
}
