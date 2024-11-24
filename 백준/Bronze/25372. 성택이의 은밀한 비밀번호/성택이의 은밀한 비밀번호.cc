#include <iostream>
#include <valarray>

using namespace std;

int main() {
    int num;

    cin >> num;

    for (int i = 0; i < num; ++i)
    {
        string temp;
        cin >> temp;

        if (temp.length() >= 6 && temp.length() <= 9)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}
