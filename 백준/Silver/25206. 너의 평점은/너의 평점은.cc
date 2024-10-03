#include <iostream>
#include <map>

using namespace std;

map<string, float> dic ={{"A+", 4.5}, {"A0", 4}, {"B+", 3.5}, {"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5},
                       {"D0", 1.0}, {"F", 0}};

int main()
{
    float result = 0;
    string input;
    float total = 0;
    float num;

    for (int i = 0; i < 20; ++i)
    {
        cin >> input;
        cin >> num;
        cin >> input;

        if (input == "P")
        {
            continue;
        }
        total += num;

        result += dic[input] * num;
    }

    cout << result / total;

    return 0;
}