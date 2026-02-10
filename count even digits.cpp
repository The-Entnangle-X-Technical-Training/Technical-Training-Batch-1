#include <iostream>

int main() {
    int num;
    std::cout << "Enter a 4-digit number: ";
    std::cin >> num;

    int count = 0;
    int temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 == 0) count++;
        temp /= 10;
    }

    std::cout << "Even digits count: " << count << std::endl;
    return 0;
}