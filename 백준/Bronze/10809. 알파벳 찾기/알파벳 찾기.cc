#include <iostream>
#include <string>
using namespace std;

int main() {
    int array[26] = {};
    string token;

    cin >> token;

    for (int i = 0; i < sizeof(array) / sizeof(int); ++i)
    {
        array[i] = -1;
    }
    
    for (int i = 0; i < token.length(); ++i)
    {
        if (array[token[i] - 97] == -1)
        {
            array[token[i] - 97] = i;
        }
    }

    for (int i = 0; i < sizeof(array) / sizeof(int); ++i)
    {
        cout << array[i] << endl;
    }
}