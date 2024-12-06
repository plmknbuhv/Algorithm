#include <iostream>
#include <valarray>
using namespace std;

int main() {
    long long a, b, c, d, e, f;
    long long x, y;

    cin >> a >> b >> c >> d >> e >> f;

    y = (c * d - a * f) / (b * d - a * e);
    x = (c * e - b * f) / (a * e - b * d);

    cout << x << " " << y;

    return 0;
}
