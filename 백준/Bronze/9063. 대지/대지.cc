#include <iostream>

using namespace std;

int main()
{
    long long count;

    cin >> count;
    int minX, minY;
    int maxX, maxY;

    int putX, putY;
    cin >> putX >> putY;

    minX = putX;
    minY = putY;
    maxX = putX;
    maxY = putY;

    for (int i = 0; i < count - 1; ++i)
    {
        cin >> putX >> putY;

        if (putX > maxX)
            maxX = putX;
        else if (putX < minX)
            minX = putX;
        if (putY > maxY)
            maxY = putY;
        else if (putY < minY)
            minY = putY;
    }

    cout << (maxX - minX) * (maxY - minY);

    return 0;
}