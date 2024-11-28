#include <iostream>
#include <valarray>

using namespace std;
int cnt;

bool CheckArray (const int *arr, int num)
{
    bool isCan = true;
    for (int i = 0; i < cnt; ++i)
    {
        if (num % arr[i] != 0 || arr[i] == num)
            isCan = false;
    }

    if (isCan)
    {
        int measureCnt = 0;
        for (int i = 2; i < num; ++i)
        {
            if (num % i == 0)
                measureCnt++;
        }

        if (cnt != measureCnt)
            return false;
    }

    return isCan;
}

int main() {
    int *arr = new int[100];

    cin >> cnt;

    for (int i = 0; i < cnt; ++i)
    {
        cin >> arr[i];
    }

    int temp = 2;
    while(true)
    {
        if (CheckArray(arr, temp))
            break;
        temp++;
    }

    cout << temp;

    return 0;
}
