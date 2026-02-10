#include <iostream>

int main() {
    int N;
    std::cout << "Enter N: ";
    std::cin >> N;

    for (int i = N; i >= 1; --i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}