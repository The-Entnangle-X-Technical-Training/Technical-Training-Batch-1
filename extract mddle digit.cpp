#include <iostream>

int main() {
    int num;
    std::cout << "Enter a 3-digit number: ";
    std::cin >> num;

    int middle_digit = (num / 10) % 10;

    std::cout << "Middle digit: " << middle_digit << std::endl;
    return 0;
}