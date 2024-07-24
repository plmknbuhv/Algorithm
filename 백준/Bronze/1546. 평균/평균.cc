#include <iostream>
using namespace std;

int main() {
    double num, max = 0, result;
    cin >> num;

    const int constNum = num;

    int array[constNum];

    for (int i = 0; i < constNum; ++i)
    {
        cin >> array[i];
    }

    for (int i = 0; i < constNum; ++i)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }

    for (int i = 0; i < num; ++i)
    {
        result += (array[i] / max) * 100;
    }

    cout << result / num << endl;

    return 0;
}