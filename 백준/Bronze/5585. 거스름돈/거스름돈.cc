#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int price;
    cin >> price;

    int change = 1000 - price;
    int coins[] = { 500, 100, 50, 10, 5, 1 };
    int count = 0;

    for (int i = 0; i < 6; i++) {
        count += change / coins[i];
        change %= coins[i];
    }

    cout << count << '\n';
}
