#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    float num1;
    float num2;

    cin >> num1;
    cin >> num2;

    float result = ((float)num1 * 2) + (3.141592f * 2) * (float)num2;

    printf("%f", result);

}