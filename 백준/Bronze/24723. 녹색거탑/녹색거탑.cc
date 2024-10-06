#include <iostream>
#include <cmath>

using namespace std;
int result = 0;

void 재귀재귀(int num)
{
    if (num == 0)
    {
        result++;
        return;
    }

    재귀재귀(num - 1);
    재귀재귀(num - 1);
}

int main()
{
    int a;
    cin >> a;

    재귀재귀(a);

    cout << result;

    return 0;
}