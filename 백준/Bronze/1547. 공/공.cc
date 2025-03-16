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

    int cnt;
    int arr[3] = {};
    int input1, input2;
    arr[0] = 1;
    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        cin >> input1 >> input2;
        
        int temp = arr[input1 - 1];
        arr[input1 - 1] = arr[input2 - 1];
        arr[input2 - 1] = temp;
    }

    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == 1)
        {
            cout << i + 1;
            break;
        }
    }

    return 0;
}
