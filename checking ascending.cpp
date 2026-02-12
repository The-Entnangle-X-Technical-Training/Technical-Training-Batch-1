#include <iostream>

int main() {
    int num;
    std::cout << "Enter a 3-digit number: ";
    std::cin >> num;

    int d1 = num / 100;
    int d2 = (num / 10) % 10;
    int d3 = num % 10;

    if (d1 < d2 && d2 < d3) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}