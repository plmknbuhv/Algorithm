#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string input;
    float result;

    cin >> input;

    if (input[0] == 'A')
        result = 4.0;
    else if (input[0] == 'B')
        result = 3.0;
    else if (input[0] == 'C')
        result = 2.0;
    else if (input[0] == 'D')
        result = 1.0;
    else
    {
        printf("%.1f",0.0);
        return 0;
    }

    if (input[1] == '+')
        result += 0.3;
    else if (input[1] == '-')
        result -= 0.3;

    printf("%.1f",result);

    return 0;
}