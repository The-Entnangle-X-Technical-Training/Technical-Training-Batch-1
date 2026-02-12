#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int last_digit = num % 10;

    std::cout << "Last digit: " << last_digit << std::endl;
    return 0;
}