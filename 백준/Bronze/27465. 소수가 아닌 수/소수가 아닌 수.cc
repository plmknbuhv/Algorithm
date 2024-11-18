#include <iostream>

using namespace std;

int main()
{
    long long input;
    cin >> input;

    while(true)
    {
        bool is소수 = true;
        for (int i = 2; i < input; ++i)
        {
            if (input % i == 0)
                is소수 = false;
        }
        if (!is소수)
        {
            cout << input;
            break;
        }
        input++;
    }
}