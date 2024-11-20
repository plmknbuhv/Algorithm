#include <iostream>
#include <string>
using namespace std;

int main() {
    int input;

    cin >> input;

    if (input >= 620 && input <= 780) {
        cout << "Red";
    } else if (input >= 590 && input < 620) {
        cout << "Orange";
    } else if (input >= 570 && input < 590) {
        cout << "Yellow";
    } else if (input >= 495 && input < 570) {
        cout << "Green";
    } else if (input >= 450 && input < 495) {
        cout << "Blue";
    } else if (input >= 425 && input < 450) {
        cout << "Indigo";
    } else{
        cout << "Violet";
    }

    return 0;
}
