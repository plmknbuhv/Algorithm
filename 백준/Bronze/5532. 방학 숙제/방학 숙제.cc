#include <iostream>
#include <valarray>

using namespace std;

int main() {
    long long day;
    long long math;
    long long korean;
    long long one_day_math;
    long long one_day_korean;

    cin >> day;
    cin >> korean;
    cin >> math;
    cin >> one_day_korean;
    cin >> one_day_math;

    while (math > 0 || korean > 0)
    {
        day--;
        if (math > 0)
        {
            math -= one_day_math;
        }
        if (korean > 0)
        {
            korean -= one_day_korean;
        }
    }

    cout << day;

    return 0;
}
