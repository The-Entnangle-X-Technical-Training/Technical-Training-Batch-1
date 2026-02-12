#include <iostream>

int main() {
    int num;
    std::cout << "Enter a 3-digit number: ";
    std::cin >> num;

    int first = num / 100;
    int middle = (num / 10) % 10;
    int last = num % 10;
    int product = first * middle * last;

    std::cout << "Product of digits: " << product << std::endl;
    return 0;
}