#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int result;

void Choi(int num1, int num2)
{
    if (num1 == 0)
    {
        result = num2;
        return;
    }

    Choi(num2%num1, num1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int count;
    int input1, input2;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> input1 >> input2;
        Choi(input1, input2);
        cout << ((input1 * input2) / result) << endl;
    }
}
