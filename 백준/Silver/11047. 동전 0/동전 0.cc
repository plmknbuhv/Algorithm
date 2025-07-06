#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int cnt, num, result = 0;
    cin >> cnt >> num;
    int* arr = new int[cnt];

    for (int i = cnt-1; i >= 0; i--)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < cnt; i++)
    {
        if (num >= arr[i]) // 뺄 수 있으면
        {
            result += num / arr[i];
            num %= arr[i];
        }
    }

    cout << result << endl;
}
