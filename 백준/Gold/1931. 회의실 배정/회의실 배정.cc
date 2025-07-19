#include <iostream>
#include <utility>
#include <queue>
#include <algorithm>
#include <unordered_map>
using namespace std;

struct Meeting
{
    int start;
    int end;
};

bool cmp(Meeting meeting1, Meeting meeting2)
{
    if (meeting1.end == meeting2.end)
        return meeting1.start < meeting2.start;
    else
        return meeting1.end < meeting2.end;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int cnt;
    cin >> cnt;
    Meeting *arr = new Meeting[cnt];

    for (int i = 0; i < cnt; i++)
        cin >> arr[i].start >> arr[i].end;

    sort(arr, arr + cnt, cmp);

    int temp = -1, result = 0;
    for (int i = 0; i < cnt; i++)
    {
        if (temp <= arr[i].start)
        {
            result++;
            temp = arr[i].end;
        }
    }

    cout << result;
}
