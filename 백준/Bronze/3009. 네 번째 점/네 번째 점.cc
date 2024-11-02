#include <iostream>

using namespace std;

int main()
{
    int x1, y1;
    int x2, y2;
    int x3, y3;
    int resultX, resultY;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    if (x1 == x2)
        resultX = x3;
    else if (x1 == x3)
        resultX = x2;
    else
        resultX = x1;

    if (y1 == y2)
        resultY = y3;
    else if (y1 == y3)
        resultY = y2;
    else
        resultY = y1;

    cout << resultX << " " << resultY;

    return 0;
}