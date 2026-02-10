#include <iostream>

int main() {
    double num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    if (num1 > num2) {
        std::cout << "Greater: " << num1 << std::endl;
    } else if (num2 > num1) {
        std::cout << "Greater: " << num2 << std::endl;
    } else {
        std::cout << "Equal" << std::endl;
    }
    return 0;
}