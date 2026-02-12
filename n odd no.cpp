#include <iostream>

int main() {
    int N;
    std::cout << "Enter N: ";
    std::cin >> N;

    for (int i = 1; i <= N; ++i) {
        std::cout << 2 * i - 1 << " ";
    }
    std::cout << std::endl;
    return 0;
}