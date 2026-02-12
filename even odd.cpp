#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int even = 0, odd = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) even++;
        else odd++;
        num /= 10;
    }

    std::cout << "Even digits: " << even << std::endl;
    std::cout << "Odd digits: " << odd << std::endl;
    return 0;
}