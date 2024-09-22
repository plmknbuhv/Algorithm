#include <iostream>
#include <algorithm>
using namespace std;
string strArr[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

int main()
{
    string input;
    int count = 0;

    cin >> input;

    for (int i = 0; i < 8; ++i)
    {
        if (input.find(strArr[i]) != string::npos)
        {
            int index = input.find(strArr[i]);

            input.erase(index, strArr[i].length());

            for (int j = 0; j < strArr[i].length(); ++j)
            {
                input.insert(index, " ");
            }
            count++;
            i--;
        }
    }

    input.erase(remove(input.begin(), input.end(), ' '), input.end());

    cout << count + input.length();

    return 0;
}