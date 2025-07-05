#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    cin >> input;

    int* arr = new int[input.length()];
    for (int i = 0; i < input.length(); i++)
    {
        arr[i] = input[i] - '0';
    }

    sort(arr, arr + input.length());
    for (int i = input.length()-1; i >= 0; i--)
    {
        cout << arr[i];
    }
}
