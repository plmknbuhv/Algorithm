#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    int sum = 0;
    int time = 0;

    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        if (isdigit(input[i]) != 0)
            sum += (i % 2 == 0 ? input[i] - '0' : (input[i] - '0') * 3);
        else
            time = ((i % 2) * 2) + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        if ((sum + i * time) % 10 == 0)
            cout << i;
    }
}
