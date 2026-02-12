#include <iostream>

int main() {
    int numberOne, numberTwo;
    std::cout << "Enter two numbers: ";
    std::cin >> numberOne >> numberTwo;

    while (numberTwo != 0) {
        int temp = b;
        numberTwo = numberOne % b;
        numberOne = temp;
    }

    std::cout << "GCD: " << numberOne << std::endl;
    return 0;
}