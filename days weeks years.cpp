#include <iostream>

int main() {
    int total_days;
    std::cout << "Enter total days: ";
    std::cin >> total_days;

    int years = total_days / 365;
    int remaining_after_years = total_days % 365;
    int weeks = remaining_after_years / 7;
    int days = remaining_after_years % 7;

    std::cout << "Years: " << years << std::endl;
    std::cout << "Weeks: " << weeks << std::endl;
    std::cout << "Days: " << days << std::endl;
    return 0;
}