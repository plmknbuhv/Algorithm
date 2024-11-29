#include <iostream>
#include <valarray>

using namespace std;

int main() {
    long long count;
    long long tempResult = 0;
    long long result = 0;

    cin >> count;

    for (int i = 0; i < count; ++i)
    {
        long long temp;
        cin >> temp;

        if (temp == 1)
            tempResult++;
        if (temp == 0)
            tempResult--;

        result += tempResult;
    }

    cout << result;

    return 0;
}
