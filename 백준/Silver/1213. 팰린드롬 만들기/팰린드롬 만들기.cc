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

    string input;
    int odd = 0;
    char oddChar = ' ';
    cin >> input;
    map<char, int> M;
    string result;


    for (int i = 0; i < input.length(); i++)
        M[input[i]]++;

    for (auto& m : M) // 이거 가능 한지 안한지 체크
    {
        if (m.second % 2 != 0)
        {
            odd++;
            oddChar = m.first;
            m.second--;
            if (odd >= 2)
            {
                cout << "I'm Sorry Hansoo";
                return 0;
            }
        }
        m.second /= 2;
    }

    for (auto i = M.begin(); i != M.end(); ++i)
        for (int j = 0; j < i->second; j++)
            cout << i->first;

    if (oddChar != ' ')
        cout << oddChar;

    for (auto i = M.rbegin(); i != M.rend(); ++i)
        for (int j = 0; j < i->second; j++)
            cout << i->first;
}
