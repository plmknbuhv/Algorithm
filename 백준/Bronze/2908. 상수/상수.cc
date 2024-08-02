#include <iostream>

using namespace std;

void Change(string numb1, string numb2)
{
    string array1, array2;

    for (int j = 0, k = 2; j < 3; ++j, --k) // 값 스위치
    {
        array1[j] = numb1[k];
    }

    for (int j = 0, k = 2; j < 3; ++j, --k) // 값 스위치
    {
        array2[j] = numb2[k];
    }

    int result = (stoi(array1) > stoi(array2)) ? stoi(array1) : stoi(array2);
    cout << result << endl;
}

int main() {
    string num1, num2;

    cin >> num1 >> num2;

    Change(num1, num2);

    return 0;
}

