#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int count = 0;
    if (num == 0) count = 1;  // Handle 0
    while (num > 0) {
        count++;
        num /= 10;
    }

    std::cout << "Digit count: " << count << std::endl;
    return 0;
}