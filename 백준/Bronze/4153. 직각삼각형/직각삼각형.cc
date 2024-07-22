#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    while(true)
    {
        int x, y, z;
        int temp = 0;
        cin >> x >> y >> z;
        if (x == 0 && y == 0 && z == 0)
            return 0;

        if (x > y) {
            temp = y;
            y = x;
            x = temp;
        }
        if (y > z) {
            temp = z;
            z = y;
            y = temp;
        }

        if (pow(x, 2) + pow(y, 2) == pow(z, 2))
        {
            cout << "right" << endl;
        }
        else
        {
            cout << "wrong" << endl;
        }
    }
}