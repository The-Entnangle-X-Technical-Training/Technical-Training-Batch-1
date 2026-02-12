#include <iostream>

int main() {
    int num;
    std::cout << "Enter a 2-digit number: ";
    std::cin >> num;

    int tens = num / 10;
    int units = num % 10;
    if (tens == units) {
        std::cout << "Palindrome" << std::endl;
    } else {
        std::cout << "Not Palindrome" << std::endl;
    }
    return 0;
}