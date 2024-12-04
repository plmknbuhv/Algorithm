#include <iostream>
#include <valarray>
using namespace std;

string arr[10] = {"black","brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};

int main() {
    string input1;
    string input2;
    string input3;
    string result = "";

    cin >> input1;
    cin >> input2;
    cin >> input3;

    string temp1;
    string temp2;
    long long temp3;
    for (int i = 0; i < 10; ++i)
    {
        if(arr[i] == input1)
        {
            temp1 = to_string(i);
        }
        if(arr[i] == input2)
        {
            temp2 = to_string(i);
        }
        if(arr[i] == input3)
        {
            temp3 = pow(10, i);
        }
    }

    result = temp1 + temp2;
    cout << stoi(result) * temp3;

    return 0;
}
