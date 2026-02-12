#include <iostream>
#include <cctype>

int main() {
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;

    if (std::isalpha(ch)) {
        std::cout << "Alphabet" << std::endl;
    } else if (std::isdigit(ch)) {
        std::cout << "Digit" << std::endl;
    } else {
        std::cout << "Special Character" << std::endl;
    }
    return 0;
}