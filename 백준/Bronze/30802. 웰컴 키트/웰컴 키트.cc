#include <iostream>
using namespace std;

int main() {
    int player, x, y;
    int array[6] = {};
    int result = 0;

    cin >> player;
    cin >> array[0] >> array[1] >> array[2] >> array[3] >> array[4] >> array[5];
    cin >> x >> y;

    for (int i = 0; i < 6; i++)
    {
        result += (array[i] / x + (array[i] % x > 0));
    }

    cout << result << '\n' << player / y << " " << player % y << '\n';

    return 0;

}