#include <iostream>

using namespace std;
string str = "aeiouAEIOU";

int main()
{
    string input;

    while(true)
    {
        int count = 0;
        getline(cin, input);

        if (input == "#")
            break;

        for (int i = 0; i < input.length(); ++i)
        {
            if (str.find(input[i]) != string::npos)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}