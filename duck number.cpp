#include <iostream>

int main() {
    int num;
    std::cout << "Enter a 4-digit number: ";
    std::cin >> num;

    int d1 = num / 1000;
    int d2 = (num / 100) % 10;
    int d3 = (num / 10) % 10;
    int d4 = num % 10;

    bool has_zero = (d2 == 0 || d3 == 0 || d4 == 0);
    if (has_zero && d1 != 0) {
        std::cout << "Duck Number" << std::endl;
    } else {
        std::cout << "Not Duck Number" << std::endl;
    }
    return 0;
}