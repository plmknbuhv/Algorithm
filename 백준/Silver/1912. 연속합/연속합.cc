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

    int cnt, input, result = 0, temp = -9999999;
    cin >> cnt;
    int* arr = new int[cnt+1]();


    for (int i = 1; i <= cnt; i++)
    {
        cin >> input;

        if (input + arr[i - 1] > 0)
            arr[i] = input + arr[i - 1];
        else
            arr[i] = 0;

        if (arr[i] > result)
            result = arr[i];

        if (input > temp)
            temp = input;
    }

    if (result == 0)
        cout << temp;
    else
        cout << result;
}
