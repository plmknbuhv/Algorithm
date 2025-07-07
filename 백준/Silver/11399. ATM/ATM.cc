#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

struct tempStc
{
public:
    tempStc() {};
    tempStc(int idx, int num) : idx(idx), num(num) {};
    int idx;
    int num;
};

bool cmp(tempStc temp1, tempStc temp2)
{
    return temp1.num < temp2.num;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int cnt;
    int sum = 0;
    int result = 0;
    cin >> cnt;
    tempStc* arr = new tempStc[cnt];

    for (int i = 0; i < cnt; i++)
    {
        int input;
        cin >> input;
        arr[i] = tempStc(i, input);
    }

    sort(arr, arr + cnt, cmp);

    for (int i = 0; i < cnt; i++)
    {
        sum += arr[i].num;
        result += sum;
    }

    cout << result;
}
