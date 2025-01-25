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
    int a = 0;
    int b = 0;
    int input;

    cin >> count;

    for (int i = 0; i < count; ++i)
    {
        cin >> input;
        a += (input / 30 + 1) * 10;
        b += (input / 60 + 1) * 15;
    }

    if (a < b)
        cout << "Y " << a;
    else if (a > b)
        cout << "M " << b;
    else
        cout << "Y M " << a;
}
