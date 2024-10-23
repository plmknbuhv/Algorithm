#include <iostream>

using namespace std;

int main()
{
    string strArr[3] = {};

    cin >> strArr[2] >> strArr[1] >> strArr[0];
    int result = 0;

    for (int i = 2; i >= 0; --i)
    {
        if (atoi(strArr[i].c_str()) != 0)
        {
            result = stoi(strArr[i]) + i + 1;
        }
    }

    if (result % 15 == 0)
        cout << "FizzBuzz";
    else if (result % 3 == 0)
        cout << "Fizz";
    else if (result % 5 == 0)
        cout << "Buzz";
    else
        cout << result;

    return 0;
}