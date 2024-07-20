#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string str, token;
    int a = 0;
    getline(cin, str);
    stringstream ss(str);
    while (ss >> token) {
        a++;
    }

    cout << a << endl;
}