#include <iostream>

using namespace std;

int main()
{
    int input;
    int temp;

    cin >> input;
    temp = input;

    for (int i = 2; i <= input; ++i)
    {
        if (temp == 0)
            break;
        
        if (temp % i == 0)
        {
            cout << i << endl;
            temp /= i;
            i--;
        }
    }

    return 0;
}