#include <iostream>
std::string arr[3] = {"U", "O", "S"};

int main() {
    int input;
    std::cin >> input;
    std::cout << arr[(input - 1) % 3] << std::endl;
    return 0;
}
