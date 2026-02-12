#include <iostream>

int main() {
    int num;
    std::cout << "Enter a 4-digit number: ";
    std::cin >> num;

    int d1 = num / 1000;
    int d2 = (num / 100) % 10;
    int d3 = (num / 10) % 10;
    int d4 = num % 10;

    int max = d1;
    if (d2 > max) max = d2;
    if (d3 > max) max = d3;
    if (d4 > max) max = d4;

    std::cout << "Largest digit: " << max << std::endl;
    return 0;
}