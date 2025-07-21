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

    int cnt, cnt2, input1, input2;
    cin >> cnt >> cnt2;
    int* arr = new int[cnt];
    int* sumArr = new int[cnt];

    sumArr[0] = 0;

    for (int i = 0; i < cnt; i++)
    {
        cin >> input1;

        arr[i] = input1;
        sumArr[i+1] = sumArr[i] + input1;
    }

    for (int i = 0; i < cnt2; i++)
    {
        cin >> input1 >> input2;
        cout << sumArr[input2] - sumArr[input1-1] << '\n';
    }
}
