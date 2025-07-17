#include <iostream>
#include <utility>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int arr[10000][10000];
long long N, r, c, result;

void Check(int y, int x, int size)
{
    int half = size / 2;
    if (size == 1)
        return;


    if (r < y + half && c < x + half)
    {
        Check(y, x, half);
    }
    else if (r < y + half && c >= x + half)
    {
        result += half * half;
        Check(y, x + half, half);
    }
    else if (r >= y + half && c < x + half)
    {
        result += half * half * 2;
        Check(y + half, x, half);
    }
    else if (r >= y + half && c >= x + half)
    {
        result += half * half * 3;
        Check(y + half, x + half, half);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> r >> c;
    Check(0, 0, 1 << N);
    cout << result;
}
