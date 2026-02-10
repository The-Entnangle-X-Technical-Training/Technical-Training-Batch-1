#include <iostream>

int main() {
    int N;
    std::cout << "Enter N: ";
    std::cin >> N;

    long long fact = 1;  // Use long long for larger N
    for (int i = 1; i <= N; ++i) {
        fact *= i;
    }

    std::cout << "Factorial: " << fact << std::endl;
    return 0;
}