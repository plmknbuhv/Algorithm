#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt, offset = 0;
    string result = "";
    cin >> cnt;

    stack<int> stk;
    int *arr = new int[cnt];

    for (int i = 0; i < cnt; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }

    for (int i = 1; i <= cnt; i++)
    {
        stk.push(i);
        result += '+';
        while (offset < cnt && stk.empty() == false && stk.top() == arr[offset])
        {
            stk.pop();
            result += '-';
            offset++;
        }
    }

    if (stk.empty())
    {
        for (int i = 0; i < result.length(); i++)
        {
            cout << result[i] << "\n";
        }
    }
    else
    {
        cout << "NO";
    }
}
