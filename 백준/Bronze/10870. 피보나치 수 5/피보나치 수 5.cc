#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int pibo(int num)
{
    if (num <= 0)
        return 0;
    if (num < 3)
        return 1;
   return pibo(num - 1) + pibo(num - 2);
}

int main()
{
    int input;
    cin >> input;

    cout << pibo(input);

    return 0;
}
