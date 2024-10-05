#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string num;
    int formation;
    int result = 0;

    cin >> num;
    cin >> formation;

    for (int i = num.length() - 1, j = 0; i >= 0; --i, j++)
    {
        int temp = 0;
        if (!isdigit(num[i]))
        {
            temp = num[i] - 'A' + 10;
        }
        else
        {
            temp = num[i] - '0';
        }

        result += temp * (pow(formation, j));
    }

    cout << result;

    return 0;
}