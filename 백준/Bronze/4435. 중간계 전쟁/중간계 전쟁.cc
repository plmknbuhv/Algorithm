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

    int count = 0;
    int input[7] = {};

    cin >> count;

    for (int  i = 0; i < count; i++)
    {
        int evil = 0, good = 0;
        for (int j = 0; j < 6; j++)
        {
            cin >> input[j];
        }
        evil += input[0];
        evil += input[1] * 2;
        evil += input[2] * 3;
        evil += input[3] * 3;
        evil += input[4] * 4;
        evil += input[5] * 10;

        for (int j = 0; j < 7; j++)
        {
            cin >> input[j];
        }

        good += input[0];
        good += input[1] * 2;
        good += input[2] * 2;
        good += input[3] * 2;
        good += input[4] * 3;
        good += input[5] * 5;
        good += input[6] * 10;

        if (good < evil)
            cout << "Battle " << i+1 << ": Good triumphs over Evil" << endl;
        else if (good > evil)
            cout << "Battle " << i+1 << ": Evil eradicates all trace of Good" << endl;
        else
            cout << "Battle " << i+1 << ": No victor on this battle field" << endl;
    }
}
