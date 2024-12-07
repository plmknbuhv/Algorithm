#include <iostream>
#include <valarray>
using namespace std;

int main() {
    long long arr[3] = {};

    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr, arr + 3);

    for (int i = 0; i < 3; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
