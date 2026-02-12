#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    int original_a = a, original_b = b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd = a;
    long long lcm = (static_cast<long long>(original_a) * original_b) / gcd;

    std::cout << "LCM: " << lcm << std::endl;
    return 0;
}