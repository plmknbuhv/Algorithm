#include <iostream>

using namespace std;

int main()
{
    int count;
    int result = 0;
    string input;
    cin >> count;

    for (int i = 0; i < count; ++i)
    {
        cin >> input;
        string arr = "";
        int numCount = 0;

        for (int j = 0; j < input.length(); ++j)
        {
            if (arr.find(input[j]) == string::npos)
            {
                arr += input[j];
            }
            else
            {
                if(input[j - 1] != input[j])
                {
                    numCount++;
                }
            }
        }

        if (numCount == 0)
        {
            result++;
        }
    }


    cout << result;

    return 0;
}