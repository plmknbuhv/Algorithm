#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int input;
    long long result = 1;
    int cnt = 0;

    cin >> input;

    for (int i = 1; i <= input; ++i)
    {
        int temp = i;
        while(temp % 5 == 0)
        {
            temp /= 5;
            cnt++;
        }
    }

    cout << cnt;
}