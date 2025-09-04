#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <queue>
#include <map>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    cin >> input;

    int idx = 0;
    int number = 1;
    while (idx != input.length())
    {
        string temp = to_string(number);

        for (int i = 0; i < temp.length(); i++)
        {
            if (temp[i] == input[idx])
                idx++;
        }
        number++;
    }

    cout << number-1 << endl;
}
