#include <iostream>
using namespace std;
int arr[26] = {};
string str1 = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};


int main()
{
    int max = -1;
    int maxIdx = 0;
    char result;

    string str;

    cin >> str;

    for (int i = 0; i < str.length(); ++i)
    {
        str[i] = toupper(str[i]);

        for (int j = 0; j < str1.length(); ++j) {
            if (str[i] == str1[j])
            {
                arr[str[i] - 65]++;
            }
        }
    }

    for (int i = 0; i < 26 ;++i)
    {
        if (max < arr[i])
        {
            max = arr[i];
            maxIdx = i;
        }
    }

    result = maxIdx + 65;

    for (int i = 0; i < 26 ;++i)
    {
        if (max == arr[i])
        {
            if (i != maxIdx)
            {
                result = '?';
            }
        }
    }

    cout << result;

    return 0;
}