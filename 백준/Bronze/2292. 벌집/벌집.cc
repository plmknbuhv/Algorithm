#include <iostream>
using namespace std;

int main()
{
    int input;
    int count = 0;
    int limit = 1;

    cin >> input;

    while(limit < input)
    {
        count++;
        limit += count * 6;
    }

    cout << count + 1;

    return 0;
}