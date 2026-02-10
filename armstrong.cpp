#include <iostream>

int main() {
    int num, original;
    std::cout << "Enter a number: ";
    std::cin >> num;
    original = num;

    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    if (sum == original) {
        std::cout << "Armstrong Number" << std::endl;
    } else {
        std::cout << "Not Armstrong Number" << std::endl;
    }
    return 0;
}