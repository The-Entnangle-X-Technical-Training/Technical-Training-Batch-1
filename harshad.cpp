#include <iostream>

int main() {
    int num;
    std::cout << "Enter a 3-digit number: ";
    std::cin >> num;

    int original = num;
    int sum = 0;
    sum += num % 10; num /= 10;
    sum += num % 10; num /= 10;
    sum += num % 10;

    if (original % sum == 0) {
        std::cout << "Harshad Number" << std::endl;
    } else {
        std::cout << "Not Harshad Number" << std::endl;
    }
    return 0;
}