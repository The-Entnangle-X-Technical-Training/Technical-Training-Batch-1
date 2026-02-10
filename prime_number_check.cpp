#include <iostream>
#include <cmath>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    bool is_prime = true;
    if (num <= 1) is_prime = false;
    for (int i = 2; i <= std::sqrt(num); ++i) {
        if (num % i == 0) {
            is_prime = false;
            break;
        }
    }

    if (is_prime) {
        std::cout << "Prime" << std::endl;
    } else {
        std::cout << "Not Prime" << std::endl;
    }
    return 0;
}