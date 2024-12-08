#include <iostream>
#include <valarray>
using namespace std;

int main() {
    long long arr[5] = {};

    for (int i = 0; i < 5; ++i)
    {
        cin >> arr[i];
        if (arr[i] < 40)
            arr[i] = 40;
    }

    cout << (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5;

    return 0;
}
