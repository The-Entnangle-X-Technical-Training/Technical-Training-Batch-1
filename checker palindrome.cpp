#include <iostream>

int main() {
    int num;
    std::cout << "Enter a 3-digit number: ";
    std::cin >> num;

    int first = num / 100;
    int last = num % 10;
    if (first == last) {
        std::cout << "Palindrome" << std::endl;
    } else {
        std::cout << "Not Palindrome" << std::endl;
    }
    return 0;
}