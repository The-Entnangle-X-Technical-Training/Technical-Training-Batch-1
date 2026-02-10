#include <iostream>

int main() {
    double side;
    std::cout << "Enter side of square: ";
    std::cin >> side;

    double area = side * side;
    double perimeter = 4 * side;

    std::cout << "Area: " << area << std::endl;
    std::cout << "Perimeter: " << perimeter << std::endl;
    return 0;
}