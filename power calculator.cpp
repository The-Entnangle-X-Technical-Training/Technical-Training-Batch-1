#include <iostream>

int main() {
    int base, exp;
    std::cout << "Enter base: ";
    std::cin >> base;
    std::cout << "Enter exponent: ";
    std::cin >> exp;

    long long result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }

    std::cout << "Result: " << result << std::endl;
    return 0;
}