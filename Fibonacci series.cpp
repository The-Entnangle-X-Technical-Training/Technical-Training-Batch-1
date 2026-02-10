#include <iostream>

int main() {
    int N;
    std::cout << "Enter N: ";
    std::cin >> N;

    if (N >= 1) std::cout << 0 << " ";
    if (N >= 2) std::cout << 1 << " ";

    int a = 0, b = 1;
    for (int i = 3; i <= N; ++i) {
        int next = a + b;
        std::cout << next << " ";
        a = b;
        b = next;
    }
    std::cout << std::endl;
    return 0;
}