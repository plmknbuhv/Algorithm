#include <iostream>
#include <valarray>
using namespace std;

int main() {
    long long a, b, c, d, e;
    long long temp1 = 2000;
    long long temp2 = 2000;

    cin >> a >> b >> c >> d >> e;

    if (temp1 > a)
        temp1 = a;
    if (temp1 > b)
        temp1 = b;
    if (temp1 > c)
        temp1 = c;

    if (temp2 > d)
        temp2 = d;
    if (temp2 > e)
        temp2 = e;

    cout << temp1 + temp2 - 50;

    return 0;
}
