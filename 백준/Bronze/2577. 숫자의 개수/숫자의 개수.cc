#include <iostream>
#include <string>
using namespace std;

int main() {
    int num1, num2, num3;
    int array[10] = {};
    string token, result;

    cin >> num1;
    cin >> num2;
    cin >> num3;

    token = to_string(num1 * num2 * num3);

    for (int i = 0; i < token.length(); ++i)
    {
        array[(int)token[i] - '0']++;
    }

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
    {
        cout << array[i] << endl;
    }
}