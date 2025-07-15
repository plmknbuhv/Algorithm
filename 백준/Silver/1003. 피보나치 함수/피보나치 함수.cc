#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int arr[10000];

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        if (arr[n] == 0)
            arr[n] = fibonacci(n - 1) + fibonacci(n - 2);
        return arr[n];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, cnt;
    cin >> cnt;

    for (int i = 0; i < 10000; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < cnt; i++)
    {
        cin >> num;
        if (num == 0)
            cout << 1 << " " << 0 << '\n';
        else
            cout << fibonacci(num-1) << " " << fibonacci(num) << "\n";
    }
}
