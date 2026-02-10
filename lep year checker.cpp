#include <iostream>

int main() {
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;

    if ((year % 4 == 0) && (year % 100 != 0 || year % 400 == 0)) {
        std::cout << "Leap Year" << std::endl;
    } else {
        std::cout << "Not Leap Year" << std::endl;
    }
    return 0;
}