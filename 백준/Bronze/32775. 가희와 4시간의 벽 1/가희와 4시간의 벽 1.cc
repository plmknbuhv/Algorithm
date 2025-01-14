#include <iostream>
std::string arr[3] = {"U", "O", "S"};

int main() {
    int input1, input2;
    std::cin >> input1;
    std::cin >> input2;

    if (input1 > input2)
        std::cout << "flight";
    else
        std::cout << "high speed rail";
}
