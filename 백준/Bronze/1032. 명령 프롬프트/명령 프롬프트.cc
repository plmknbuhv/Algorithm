#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int count;
    string arr[100] = {};
    string result = "";
    cin >> count;

    for (int i = 0; i < count; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < arr[0].length(); ++i)
    {
        bool isAllEqual = true;
        for (int j = 0; j < count - 1; ++j)
        {
            if (arr[j][i] != arr[j+1][i])
                isAllEqual = false;
        }

        if (isAllEqual)
            result += arr[0][i];
        else
            result += "?";
    }

    cout << result;
}
