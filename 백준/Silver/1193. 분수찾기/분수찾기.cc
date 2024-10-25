#include <iostream>

using namespace std;

int main()
{
    int input;
    int den = 1;
    int num = 1;
    int count = 1;

    cin >> input;

    for (int i = 0; i < input - 1; ++i)
    {
        if (count % 2 == 1)
        {
            den++;
            if (num == 1)
                count++;
            else
                num--;
        }
        else
        {
            num++;
            if (den == 1)
                count++;
            else
                den--;
        }
    }

    cout << num << "/" << den << endl;

    return 0;
}