#include <iostream>

using namespace std;

int main() {

    string str;
    getline(cin, str);

    int count = 0;

    for (int i = 0, j = str.length() - 1; i < str.length() / 2; ++i, --j)
    {
        if (str[i] != str[j])
        {
            count++;
        }
    }

    if (count == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}