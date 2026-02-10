#include <iostream>
#include <cmath>

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    std::cout << "Enter N: ";
    std::cin >> N;

    for (int i = 2; i <= N; ++i) {
        if (is_prime(i)) std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
