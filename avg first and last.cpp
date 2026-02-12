#include <iostream>

int main() {
    int num;
    std::cout << "Enter a 4-digit number: ";
    std::cin >> num;

    int first = num / 1000;
    int last = num % 10;
    double average = (first + last) / 2.0;

    std::cout << "Average of first and last digit: " << average << std::endl;
    return 0;
}