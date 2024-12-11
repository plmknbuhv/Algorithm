#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long count;

    cin >> count;

    for (int i = 1; i < count + 1; ++i)
    {
        int temp1;
        int temp2;

        cin >> temp1;
        cin >> temp2;

        printf("Case %d: %d\n",i,temp1+temp2);
    }
}