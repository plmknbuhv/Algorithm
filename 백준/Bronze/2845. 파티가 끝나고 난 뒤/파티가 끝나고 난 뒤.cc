#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int L = 0, P = 0, input;
    cin >> L >> P;

    for (int i = 0; i < 5; i++)
    {
        cin >> input;
        cout << input - L * P << " ";
    }
}
