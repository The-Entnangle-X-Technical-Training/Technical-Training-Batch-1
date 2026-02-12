#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int sum = 0;
    for (int i = 1; i < num; ++i) {
        if (num % i == 0) sum += i;
    }

    if (sum == num) {
        std::cout << "Perfect Number" << std::endl;
    } else {
        std::cout << "Not Perfect Number" << std::endl;
    }
    return 0;
}
