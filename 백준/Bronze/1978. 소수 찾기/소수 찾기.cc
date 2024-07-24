#include <iostream>
using namespace std;

int main() {
    int num, result = 0;

    cin >> num;

    const int constNum = num;

    int array[constNum];

    for (int i = 0; i < constNum; ++i)
    {
        cin >> array[i];
    }

    for (int i = 0; i < num; ++i)
    {
        int a = 0;

        if (array[i] == 1)
        {
            continue;
        }

        for (int j = 2; j < array[i]; ++j)
        {
            if (array[i] % j == 0)
            {
                a++;
            }
        }

        if (a == 0)
        {
            result++;
        }
    }

    cout << result << endl;

    return 0;
}