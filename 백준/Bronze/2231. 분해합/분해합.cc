#include <iostream>
using namespace std;

int main()
{

    int input;
    cin >> input;

    for (int i = 1; i < input; ++i)
    {
        int temp = i;
        int sum = i;

        while (temp != 0)
        {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum == input)
        {
            cout << i;
            return 0;
        }
    }

    cout << 0;
    return 0;
}