#include <iostream>

int main() {
    int num, original;
    std::cout << "Enter a number: ";
    std::cin >> num;
    original = num;

    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    if (rev == original) {
        std::cout << "Palindrome" << std::endl;
    } else {
        std::cout << "Not Palindrome" << std::endl;
    }
    return 0;
}