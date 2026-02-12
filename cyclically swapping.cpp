#include <iostream>

int main() {
    double a, b, c;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter c: ";
    std::cin >> c;

    std::cout << "Before: a = " << a << ", b = " << b << ", c = " << c << std::endl;

    double temp = a;
    a = b;
    b = c;
    c = temp;

    std::cout << "After: a = " << a << ", b = " << b << ", c = " << c << std::endl;
    return 0;
}