#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int count = 0;
    string str, token;
    cin >> count;

    for (int i = 0; i < count; ++i)
    {
        cin >> str;
        int result = 0;
        int continuous = 0;

        for (int j = 0; j < str.length(); ++j)
        {
            if (str[j] == 'O')
            {
                continuous++;
                result += continuous;
            }
            else
            {
                continuous = 0;
            }
        }
        cout << result << endl;
    }
}