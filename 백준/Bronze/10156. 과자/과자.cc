#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    int result = (a * b) - c <= 0 ? 0 : (a * b) - c;

    cout << result << endl
    ;
}

