#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int max_digit = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit > max_digit) max_digit = digit;
        num /= 10;
    }

    std::cout << "Largest digit: " << max_digit << std::endl;
    return 0;
}