#include <iostream>

int main() {
    int N, M;
    std::cout << "Enter N: ";
    std::cin >> N;
    std::cout << "Enter M: ";
    std::cin >> M;

    int count = 0;
    for (int i = 1; i <= N; ++i) {
        if (i % M == 0) count++;
    }

    std::cout << "Count: " << count << std::endl;
    return 0;
}