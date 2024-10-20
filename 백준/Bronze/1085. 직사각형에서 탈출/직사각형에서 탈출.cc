#include <iostream>

using namespace std;

int main()
{
    long long x, y, w, h;
    long long min_distance;

    cin >> x >> y >> w >> h;

    min_distance = x;

    if (min_distance > y)
        min_distance = y;

    if (min_distance > w - x)
        min_distance = w - x;

    if (min_distance > h - y)
        min_distance = h - y;

    cout << min_distance;


    return 0;
}