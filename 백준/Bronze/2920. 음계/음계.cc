#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int ascendingArray[8] = {1,2,3,4,5,6,7,8};
    int descendingArray[8] = {8,7,6,5,4,3,2,1};

    string str, token;
    getline(cin, str);
    stringstream ss(str);

    int i = 0;
    int a = 0;
    int b = 0;

    while (ss >> token)
    {
        if (ascendingArray[i] == int(token[0]) - '0')
        {
            a++;
        }
        else if (descendingArray[i] == int(token[0]) - '0')
        {
            b++;
        }

        i++;
    }

    if (a == 8)
    {
        cout << "ascending" << endl;
    }
    else if (b == 8)
    {
        cout << "descending" << endl;
    }
    else
    {
        cout << "mixed" << endl;
    }
}