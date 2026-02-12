#include <iostream>

int main() {
    int num;
    std::cout << "Enter a 3-digit number: ";
    std::cin >> num;

    int first_digit = num / 100;

    std::cout << "First digit: " << first_digit << std::endl;
    return 0;
}