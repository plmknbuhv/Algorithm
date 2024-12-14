#include <iostream>
#include <algorithm>

using namespace std;

int getXY(int x, int y)
{
    if (x == 0)
    {
        return y;
    }
    else if (y == 1)
    {
        return 1;
    }
    return getXY(x - 1, y) + getXY(x, y - 1);
}

int main()
{
    int cnt;
    int input1;
    int input2;
    cin >> cnt;

    for (int i = 0; i < cnt; ++i)
    {
        cin >> input1;
        cin >> input2;

        cout << getXY(input1, input2) << endl;
    }

}